/*
 *   xpcethetcatpdorx.c - xPC Target Ethernet Receive
 *
 *   Copyright 2008-2014 The MathWorks, Inc.
*/


#define S_FUNCTION_LEVEL   2
#undef  S_FUNCTION_NAME
#define S_FUNCTION_NAME    xpcethercatpdorx

#define VERBOSE 1

#include <stddef.h>
#include <stdlib.h>
#include "simstruc.h"

#ifndef MATLAB_MEX_FILE
#include <windows.h>
#include "xpctarget.h"
#endif

#ifdef MATLAB_MEX_FILE
#include "mex.h"

#else
#include "xpcethercatutils.h"
#endif

#define BITS_PER_INT8     8
#define BITS_PER_UINT8    8
#define BITS_PER_INT16    16
#define BITS_PER_UINT16   16
#define BITS_PER_INT32    32
#define BITS_PER_UINT32   32
#define BITS_PER_REAL32   32
#define BITS_PER_REALT    64


// PARAMETERS

typedef enum {
   S_PDO_NAME = 0,
   S_PDO_OFFSET,
   S_SIGNAL_TYPE,
   S_PDO_TYPE_BITSIZE,
   S_SIGNAL_DIM,
   S_DEVICE_ID,
   S_SAMPLE_TIME,
   NUM_S_PARAMS
} s_params;

                   
#define ETH_PDO_NAME             ssGetSFcnParam(S,S_PDO_NAME)      // String
#define ETH_PDO_OFFSET           ssGetSFcnParam(S,S_PDO_OFFSET)    // REAL_T
#define ETH_PDO_TYPE_BITSIZE     ssGetSFcnParam(S,S_PDO_TYPE_BITSIZE) // REAL_T, Actual size in bits for the data type in the Process Image
#define ETH_PDO_SIGNAL_TYPE      ssGetSFcnParam(S,S_SIGNAL_TYPE)   // REAL_T
#define ETH_PDO_SIGNAL_DIM       ssGetSFcnParam(S,S_SIGNAL_DIM)    // REAL_T
#define ETH_DEVICE_ID            ssGetSFcnParam(S,S_DEVICE_ID)     // REAL_T
#define ETH_PDO_SAMPLE_TIME      ssGetSFcnParam(S,S_SAMPLE_TIME)   // REAL_T

typedef enum {
   I_DEVICE_ID = 0,
   I_PDO_SIZE,
   I_PDO_TYPE,
   I_PDO_OFFSET,
   I_PDO_TYPE_BIT_SIZE,
   I_SIG_TYPE_SIZE,
   I_SIG_WIDTH,
   NUM_I_WORKS
}  i_works;

#if 0 // DEBUG
typedef struct _EC_T_PROCESS_VAR_INFO
{
    uint8_T                   szName[72];   /**< [out] Name of the found process variable */
    uint16_T                  wDataType;                          /**< [out] Data type of the found process variable */
    uint32_T                  nBitSize;                           /**< [out] Size in bit of the found process variable */
    uint32_T                  nBitOffs;                           /**< [out] Bit offset in the process data image */
    uint16_T                  wFixedAddr;                         /**< [out] Fixed station address of the slave that is owner of this variable */
    uint8_T                   bIsInputData;                       /**< [out] Determines whether the found process variable is an input variable or an output variable */
    uint32_T  dummy[4];  // Extra to pad stack overwrite???
}  EC_T_PROCESS_VAR_INFO, *EC_PT_PROCESS_VAR_INFO;

// end DEBUG
#endif

/*** Simulation Code
#ifdef MATLAB_MEX_FILE

#endif
*******************/


static int_T getDataTypeSize(SimStruct *S,DTypeId dtype) 
{
    switch (dtype) {
        case SS_DOUBLE:
            return sizeof(real_T);
        case SS_BOOLEAN:
            return sizeof(boolean_T);
        case SS_SINGLE:
            return sizeof(real32_T);
        case SS_INT8:
            return sizeof (int8_T);
        case SS_UINT8:
            return sizeof (uint8_T);
        case SS_INT16:
            return sizeof (int16_T);
        case SS_UINT16:
            return sizeof (uint16_T);
        case SS_INT32:
            return sizeof (int32_T);
        case SS_UINT32:
            return sizeof(uint32_T);
        default:
           ssSetErrorStatus(S, "Unsupported data type specified for xpcethercat_rx_var");    
           break;
    }
   return 0;
}


static void copyBitsUnsigned(int8_T *bitPtr, int bitoff, int numBits, int8_T *msgPtr, int unitSize)
{
       
    int   sbit;
	int   sByte;
	int   ebit;
	int   eByte;
	int   numBytes;
	int   i;
	unsigned int udword=0;
	unsigned char *cDataPtr;
    
	sbit   =  bitoff%BITS_PER_INT8;
	sByte  =  bitoff/BITS_PER_INT8;
	ebit   =  sbit + numBits - 1;	
	eByte  =  sByte + ebit/BITS_PER_INT8;

    numBytes = eByte - sByte + 1;
    
	cDataPtr = (unsigned char *)&udword;
	for (i=0; i<numBytes; i++) {
        cDataPtr[i] = bitPtr[sByte+i];
	}
	udword = (udword<<(BITS_PER_INT32-ebit-1))>>((BITS_PER_INT32-ebit-1)+sbit);

	switch (unitSize) {
		case sizeof(char):
			((unsigned char *)msgPtr)[0] = (unsigned char)udword;
		break;
		case sizeof(short):
			((unsigned short *)msgPtr)[0]  = (unsigned short) udword;
		break;
		case 3:
		case sizeof(int):
			((unsigned int *)msgPtr)[0] = (unsigned int) udword;
		break;
	}	

}

static void copyBitsSigned(int8_T *bitPtr, int bitoff, int numBits,  int8_T *msgPtr, int unitSize)
{
    int   sbit;
    int   ebit;
	int   sByte;
	int   eByte;
	int   numBytes;
	int   i;
	int   dword=0;
	char  *cDataPtr;
	
	sbit   =  bitoff%BITS_PER_INT8;
	sByte  =  bitoff/BITS_PER_INT8;
	ebit   =  sbit + numBits - 1;	
	eByte  =  sByte + ebit/BITS_PER_INT8;

    numBytes = eByte - sByte + 1;
    
	cDataPtr = (char *)&dword;
	for (i=0; i<numBytes; i++) {
        cDataPtr[i] = bitPtr[sByte+i];
	}
  
	dword = (dword<<(BITS_PER_INT32-ebit-1))>>((BITS_PER_INT32-ebit-1)+sbit);
   
	switch (unitSize) {
		case sizeof(char):
			((char *)msgPtr)[0] = (unsigned char)dword;
		break;
		case sizeof(short):
			((short *)msgPtr)[0]  = (unsigned short) dword;
		break;
		case 3:
		case sizeof(int):
			((int *)msgPtr)[0] = (unsigned int) dword;
		break;
	}
			
}

static char_T      msg[256];

static void mdlInitializeSizes(SimStruct *S)
{
   int_T                num_params;
   int_T                portIndex=0;
   int_T                signalWidth;
   DTypeId              signalType;
   int_T                j;
   
   ssSetNumSFcnParams(S, NUM_S_PARAMS);
   if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
      sprintf(msg, "%d input args expected, %d passed", NUM_S_PARAMS, ssGetSFcnParamsCount(S));
      ssSetErrorStatus(S, msg);
      return;
   }

   ssSetNumContStates(S, 0);
   ssSetNumDiscStates(S, 0);

   if ( !ssSetNumInputPorts(S, 0) ) return;
    
   signalWidth = (int_T)mxGetPr(ETH_PDO_SIGNAL_DIM)[0];
   
   // The PDO parameter S_NUM_SIGNALS specifies the number of outputs.
    
   num_params = (int32_T)ssGetSFcnParamsCount(S);
   
   // Get the signal type.
    
   signalType = (DTypeId)((int_T)(mxGetPr(ETH_PDO_SIGNAL_TYPE)[0])-1);
   
#ifdef MATLAB_MEX_FILE
   
    if ( !ssSetNumOutputPorts(S, 1) )  return;            
    ssSetOutputPortDataType(S, portIndex, signalType);
    ssSetOutputPortWidth(S, portIndex, signalWidth);
    // Ensure that the signal can be accessed via an address.
    ssSetOutputPortOptimOpts(S, portIndex, SS_NOT_REUSABLE_AND_GLOBAL);
#endif
        
   ssSetNumSampleTimes(S, 1);
   ssSetModelReferenceSampleTimeInheritanceRule(S, USE_DEFAULT_FOR_DISCRETE_INHERITANCE );
   ssSetNumIWork(S, NUM_I_WORKS);
   ssSetNumRWork(S, 0);
   ssSetNumPWork(S, 0);
   ssSetNumModes(S, 0);
   ssSetNumNonsampledZCs(S, 0);

   ssSetSimStateCompliance(S, HAS_NO_SIM_STATE);

   for ( j = 0 ; j < NUM_S_PARAMS ; j++ ) {
      ssSetSFcnParamTunable(S, j, SS_PRM_NOT_TUNABLE);
   }

   ssSetOptions(S, SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE|
                   SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME);
}

static void mdlInitializeSampleTimes(SimStruct *S)
{
   real_T sampleTime;
   
   sampleTime = mxGetPr(ETH_PDO_SAMPLE_TIME)[0];

   // Since the sampletime comes from the config file, we should never inherit!
   if ( sampleTime == -1.0 ) {
        // We should never see this error message!
        sprintf( msg, "%s\n", "No sampletime is set for the EtherCAT PDO read block");
        ssSetErrorStatus(S, msg);
        return;
   } else {
      ssSetSampleTime(S, 0, sampleTime);
      ssSetOffsetTime(S, 0, 0.0);
   }
}

#define MDL_START
static void mdlStart(SimStruct *S)
{
   int_T                  deviceIndex;
   DTypeId                signalType;
   int_T                  pdoTypeBitSize;
   int_T                  signalWidth;
   int_T                  pdoOffset;
   int_T                  sigTypeSize;

   
   deviceIndex  = (int_T)mxGetPr(ETH_DEVICE_ID)[0];
   deviceIndex = deviceIndex;
#if 0
   { // DEBUG
        char *name = malloc(72); // arbitrary
        int_T length = mxGetN(ETH_PDO_NAME);
        int_T rtn = mxGetString(ETH_PDO_NAME, name, 255 );
        EC_T_PROCESS_VAR_INFO InfoEntry;
        int   ret;
   
        printf("rtn %d, lth %d\n", rtn, length );
        printf("name: %s\n", name );
        
        ret = emFindInpVarByName( deviceIndex, name, &InfoEntry );
        if( ret == 0 )
        {
        printf("fname: %s\n", InfoEntry.szName );
        printf("From lookup:\n");
        printf("type %d, bitsize %d, bitoffs %d\n",
                InfoEntry.wDataType,
                InfoEntry.nBitSize,
                InfoEntry.nBitOffs );
        printf("fixedaddr %d, isinput %d\n",
                InfoEntry.wFixedAddr,
                InfoEntry.bIsInputData );
        }
        else
            printf("ret = %d\n", ret );
   }
#endif

   signalType = (DTypeId)((int_T)(mxGetPr(ETH_PDO_SIGNAL_TYPE)[0])-1);
   pdoOffset = (int_T)mxGetPr(ETH_PDO_OFFSET)[0];
   pdoTypeBitSize = (int_T)mxGetPr(ETH_PDO_TYPE_BITSIZE )[0];
   sigTypeSize = getDataTypeSize(S,signalType);
   signalWidth = (int_T)mxGetPr(ETH_PDO_SIGNAL_DIM)[0];
   
   ssSetIWorkValue (S, I_DEVICE_ID, (uint32_T)deviceIndex);
   ssSetIWorkValue (S, I_PDO_TYPE, (uint32_T)signalType);
   ssSetIWorkValue (S, I_PDO_OFFSET, (uint32_T)pdoOffset); 
   ssSetIWorkValue (S, I_PDO_TYPE_BIT_SIZE, (uint32_T)pdoTypeBitSize);
   ssSetIWorkValue (S, I_SIG_TYPE_SIZE, (uint32_T)sigTypeSize);
   ssSetIWorkValue (S, I_SIG_WIDTH, signalWidth);
}

static void mdlOutputs(SimStruct *S, int_T tid)
{

#ifndef MATLAB_MEX_FILE
    int8_T    *sigOutputPtr;
    int8_T    *ecatRxBufPtr;
    int_T     deviceIndex;
    static    int counter=0;
    int_T     sigTypeSize;
    int_T     pdoTypeBitSize;
    int_T     pdoOffset;
    int_T     sigIdx;
    DTypeId   sigType;
    int_T     bitOffset;
    int_T     sigWidth;
    
    pdoOffset = ssGetIWorkValue (S,I_PDO_OFFSET);
    pdoTypeBitSize =ssGetIWorkValue (S, I_PDO_TYPE_BIT_SIZE);
    deviceIndex = ssGetIWorkValue (S, I_DEVICE_ID);
    sigOutputPtr = (void *)ssGetOutputPortSignal(S,0);
    sigTypeSize = ssGetIWorkValue(S, I_SIG_TYPE_SIZE);
    sigType = ssGetIWorkValue(S, I_PDO_TYPE);
    sigWidth = ssGetIWorkValue (S, I_SIG_WIDTH);         
    
    ecatRxBufPtr = xpcEtherCATgetPDin(deviceIndex); 

    bitOffset = pdoOffset;
    for (sigIdx=0; sigIdx<sigWidth; sigIdx++) {
       switch (sigType) {
           case  SS_DOUBLE:
               ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+bitOffset/BITS_PER_UINT8));
           break;
           
           case  SS_SINGLE:
               ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+bitOffset/BITS_PER_UINT8));
           break;
           
           case SS_INT8:   
               if ((bitOffset%BITS_PER_INT8 == 0) && (pdoTypeBitSize == BITS_PER_INT8) && (sigTypeSize == sizeof(int8_T))) {
                  ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+bitOffset/BITS_PER_INT8));
               }
               else {
                  copyBitsSigned(ecatRxBufPtr,  bitOffset,  pdoTypeBitSize, sigOutputPtr+sigIdx*sigTypeSize, sigTypeSize);
               }
            break;
           
           case SS_UINT8:
               if ((bitOffset%BITS_PER_UINT8 == 0) && (pdoTypeBitSize == BITS_PER_UINT8) && (sigTypeSize == sizeof(uint8_T))) {
                  ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+bitOffset/BITS_PER_UINT8));
               }
               else {
                  copyBitsUnsigned(ecatRxBufPtr,  bitOffset,  pdoTypeBitSize, sigOutputPtr+sigIdx*sigTypeSize, sigTypeSize);
               }
              
           break;
           
           case SS_BOOLEAN:
            
               copyBitsUnsigned(ecatRxBufPtr,  bitOffset,  pdoTypeBitSize, sigOutputPtr+sigIdx*sigTypeSize, sigTypeSize);
              
           break;
                      
           case SS_INT16:
               if ((bitOffset%BITS_PER_INT16 == 0) && (pdoTypeBitSize == BITS_PER_INT16) && (sigTypeSize == sizeof(int16_T))) {
                  ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+bitOffset/BITS_PER_INT8));
               }
               else {
                   copyBitsSigned(ecatRxBufPtr,  bitOffset,  pdoTypeBitSize, sigOutputPtr+sigIdx*sigTypeSize, sigTypeSize);
               } 
           break;
           
           case SS_UINT16:
               if ((bitOffset%BITS_PER_UINT16 == 0) && (pdoTypeBitSize == BITS_PER_UINT16) && (sigTypeSize == sizeof(uint16_T))) {
                  ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr+bitOffset/BITS_PER_UINT8));
               }
               else {
                   copyBitsUnsigned(ecatRxBufPtr,  bitOffset,  pdoTypeBitSize, sigOutputPtr+sigIdx*sigTypeSize, sigTypeSize);
               } 
           break;
           
           
           case SS_INT32:
               if ((bitOffset%BITS_PER_INT32 == 0) && (pdoTypeBitSize == BITS_PER_INT32) && (sigTypeSize == sizeof(int32_T))) {
                  ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+bitOffset/BITS_PER_INT8));
               }
               else {
                   copyBitsSigned(ecatRxBufPtr,  bitOffset,  pdoTypeBitSize, sigOutputPtr+sigIdx*sigTypeSize, sigTypeSize);
               }   
           break;
           
           case SS_UINT32:
               if ((bitOffset%BITS_PER_UINT32 == 0) && (pdoTypeBitSize == BITS_PER_UINT32) && (sigTypeSize == sizeof(uint32_T))) {
                  ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr+bitOffset/BITS_PER_UINT8));
               }
               else {
                   copyBitsUnsigned(ecatRxBufPtr,  bitOffset,  pdoTypeBitSize, sigOutputPtr+sigIdx*sigTypeSize, sigTypeSize);
               } 
           break;
           
           default:
               /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
               
           break;
       } 
       bitOffset += pdoTypeBitSize;
      
    }
    
    /*
     * Copy the data from the EtherCAT Rx buffer to the output signal.
     * We can optimize this later.
     */
    
     
#endif

}

static void mdlTerminate(SimStruct *S)
{
}




#ifdef MATLAB_MEX_FILE
#include "simulink.c"
#else
#include "cg_sfun.h"
#endif
