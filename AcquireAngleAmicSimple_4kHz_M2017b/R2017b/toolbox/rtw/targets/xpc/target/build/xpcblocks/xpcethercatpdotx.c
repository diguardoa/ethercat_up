/*
 *   xpcethercatpdotx.c - xPC Target Ethernet Receive
 *
 *   Copyright 2008-2014 The MathWorks, Inc.
*/


#define S_FUNCTION_LEVEL   2
#undef  S_FUNCTION_NAME
#define S_FUNCTION_NAME    xpcethercatpdotx

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

#define BITS_PER_INT8      8
#define BITS_PER_UINT8     8
#define BITS_PER_INT16     16
#define BITS_PER_UINT16    16
#define BITS_PER_INT32     32
#define BITS_PER_UINT32    32
#define BITS_PER_REAL32    32
#define BITS_PER_REALT     64


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

#if 0
// DEBUG, or used if we use the info lookup on the target
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

#define ETH_PDO_NAME             ssGetSFcnParam(S,S_PDO_NAME)
#define ETH_PDO_OFFSET           ssGetSFcnParam(S,S_PDO_OFFSET)
#define ETH_PDO_TYPE_BITSIZE     ssGetSFcnParam(S,S_PDO_TYPE_BITSIZE)
#define ETH_PDO_SIGNAL_TYPE      ssGetSFcnParam(S,S_SIGNAL_TYPE)
#define ETH_PDO_SIGNAL_DIM       ssGetSFcnParam(S,S_SIGNAL_DIM)
#define ETH_DEVICE_ID            ssGetSFcnParam(S,S_DEVICE_ID)
#define ETH_PDO_SAMPLE_TIME      ssGetSFcnParam(S,S_SAMPLE_TIME)

typedef enum {
   I_DEVICE_ID = 0,
   I_PDO_SIZE,
   I_PDO_TYPE,
   I_PDO_OFFSET,
   I_PDO_TYPE_BIT_SIZE,
   I_SIG_TYPE_BIT_SIZE,
   I_SIG_WIDTH,
   NUM_I_WORKS
}  i_works;

static char_T      msg[256];

/*** Simulation Code
#ifdef MATLAB_MEX_FILE

#endif
*******************/


static int_T getDataTypeSize(SimStruct *S,DTypeId dtype)
{
    switch (dtype) {
        case SS_DOUBLE:
            return sizeof(real_T);
        case SS_SINGLE:
            return sizeof(real32_T);
        case SS_BOOLEAN:
            return sizeof(boolean_T);
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
            ssSetErrorStatus(S, "Unsupported data type specified for xpcethercat_tx_var");
            return 0;
    }
   return 0;
}

/***************************************************************************************
 * Function Name: bitCopy
 * Purpose: This function copies the specified integer value into the bit array "bitPtr".
 *
 ****************************************************************************************/

static void bitCopy(unsigned char *bitPtr, int bitoff, int numBits, unsigned int val)
{
    int   sByte;
        int   sbit;
        int   ebit;
        int   i;
        unsigned char   bitVal;
        int             srcBitNum;
        int             tgtBitNum;
        unsigned char   *cValPtr;
        int   tgtByte;

        sbit   =  bitoff%8;
        sByte  =  bitoff/8;
        ebit   =  sbit + numBits - 1;


        cValPtr = (unsigned char *) &val;
        for (i=0;i<numBits;i++) {
        // Get the bit value of the next bit to be copied.
                srcBitNum = i%8;
            bitVal = cValPtr[i/8];
                bitVal = bitVal << (7-srcBitNum);
                bitVal = bitVal>>7;
        // Set the value of the bit in the target bit location in the bit array.
                tgtBitNum = (sbit + i)%8;
                tgtByte = sByte+(sbit+i)/8;
        bitPtr[tgtByte] &= ~(1<<(tgtBitNum));    /* Clear the bit in the target */
                bitPtr[tgtByte] |= (bitVal)<<tgtBitNum;  /* Set the bit in the target   */
        }

}

static void mdlInitializeSizes(SimStruct *S)
{
   int_T                num_params;
   int_T                portIndex;
   int_T                sigWidth;
   DTypeId              sigType;
   int_T                j;


   ssSetNumSFcnParams(S, NUM_S_PARAMS);
   if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
      sprintf(msg, "%d input args expected, %d passed", NUM_S_PARAMS, ssGetSFcnParamsCount(S));
      ssSetErrorStatus(S, msg);
      return;
   }

   ssSetNumContStates(S, 0);
   ssSetNumDiscStates(S, 0);
   if ( !ssSetNumOutputPorts(S,0) ) return;
   if ( !ssSetNumInputPorts(S, 1) ) return;
   ssSetInputPortRequiredContiguous(S,0,1);
   portIndex = 0;

   sigWidth = (int_T)mxGetPr(ETH_PDO_SIGNAL_DIM)[0];

    // The PDO parameter S_NUM_SIGNALS specifies the number of outputs.

    num_params = (int32_T)ssGetSFcnParamsCount(S);

    // Get signal data type

    sigType = (DTypeId)((int_T)(mxGetPr(ETH_PDO_SIGNAL_TYPE)[0])-1);

    // Get the number of cells in DataTypeArray


#ifdef MATLAB_MEX_FILE

    ssSetInputPortDirectFeedThrough(S,portIndex,1);
        ssSetInputPortDataType(S, portIndex, sigType);
        ssSetInputPortWidth(S, portIndex,sigWidth);

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
   DTypeId                sigType;
   int_T                  pdoTypeBitSize;
   int_T                  sigWidth;
   int_T                  pdoOffset;
   int_T                  sigTypeSize;

   deviceIndex  = (int_T)mxGetPr(ETH_DEVICE_ID)[0];
   deviceIndex=deviceIndex;

#if 0
   { // DEBUG
        char *name = malloc(72); // arbitrary
        int_T length = mxGetN(ETH_PDO_NAME);
        int_T rtn = mxGetString(ETH_PDO_NAME, name, 255 );
        EC_T_PROCESS_VAR_INFO InfoEntry;
        int   ret;
   
        printf("rtn %d, lth %d\n", rtn, length );
        printf("name: %s\n", name );
        
        ret = emFindOutpVarByName( deviceIndex, name, &InfoEntry );
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

   sigType = (DTypeId)((int_T)(mxGetPr(ETH_PDO_SIGNAL_TYPE)[0])-1);
   pdoOffset = (int_T)mxGetPr(ETH_PDO_OFFSET)[0];
   pdoTypeBitSize = (int_T)mxGetPr(ETH_PDO_TYPE_BITSIZE )[0];
   sigTypeSize = getDataTypeSize(S,sigType);
   sigWidth = (int_T)mxGetPr(ETH_PDO_SIGNAL_DIM)[0];

   ssSetIWorkValue (S, I_DEVICE_ID, (uint32_T)deviceIndex);
   ssSetIWorkValue (S, I_PDO_TYPE, (uint32_T)sigType);
   ssSetIWorkValue (S, I_PDO_OFFSET, (uint32_T)pdoOffset);
   ssSetIWorkValue (S, I_PDO_TYPE_BIT_SIZE, (uint32_T)pdoTypeBitSize);
   ssSetIWorkValue (S, I_SIG_TYPE_BIT_SIZE, (uint32_T)sigTypeSize);
   ssSetIWorkValue (S, I_SIG_WIDTH, sigWidth);
}

double txMaxTime=0.0;
static void mdlOutputs(SimStruct *S, int_T tid)
{

#ifndef MATLAB_MEX_FILE
    int8_T    *sigInputPtr;
    int8_T    *ecatTxBufPtr;
    int_T     deviceIndex;
    static    int counter=0;
    int_T     sigTypeSize;
    int_T     pdoTypeBitSize;
    int_T     pdoOffset;
    int_T     sigWidth;
    int_T     i;
    DTypeId   sigType;
    int_T     bitOffset;

    pdoOffset = ssGetIWorkValue (S,I_PDO_OFFSET);
    pdoTypeBitSize =ssGetIWorkValue (S, I_PDO_TYPE_BIT_SIZE);
    deviceIndex = ssGetIWorkValue (S, I_DEVICE_ID);
    sigInputPtr = (int8_T *)ssGetInputPortSignal(S,0);
    sigTypeSize = ssGetIWorkValue(S, I_SIG_TYPE_BIT_SIZE);
    sigType = ssGetIWorkValue(S, I_PDO_TYPE);

    ecatTxBufPtr = xpcEtherCATgetPDout(deviceIndex);
    
    sigWidth = ssGetIWorkValue (S, I_SIG_WIDTH);

    bitOffset = pdoOffset;
    for (i=0; i<sigWidth; i++) {
       switch (sigType){
           case  SS_DOUBLE:
              *((real_T *)(ecatTxBufPtr+bitOffset/BITS_PER_INT8)) = ((real_T *)sigInputPtr)[i];

           break;

           case  SS_SINGLE:
               *((real32_T *)(ecatTxBufPtr+bitOffset/BITS_PER_INT8)) = ((real32_T *)sigInputPtr)[i];
           break;

           case SS_INT8:

               if ((pdoTypeBitSize == BITS_PER_INT8) && (bitOffset%BITS_PER_INT8 == 0)) {
                  *((int8_T *)(ecatTxBufPtr+bitOffset/BITS_PER_INT8)) = ((int8_T *)sigInputPtr)[i];
               }
               else {

                   bitCopy((uint8_T *)ecatTxBufPtr, bitOffset, pdoTypeBitSize, (uint32_T)(*((int8_T *)sigInputPtr)));
               }

           break;

           case SS_UINT8:
               if ((pdoTypeBitSize == BITS_PER_UINT8) && (bitOffset%BITS_PER_UINT8 == 0)) {
                   *((uint8_T *)(ecatTxBufPtr+bitOffset/BITS_PER_INT8)) = ((uint8_T *)sigInputPtr)[i];
               }
               else {
                  bitCopy((uint8_T *)ecatTxBufPtr, bitOffset, pdoTypeBitSize, (uint32_T)(*((uint8_T *)sigInputPtr)));
               }

           break;

           case SS_BOOLEAN:
               if ((pdoTypeBitSize == BITS_PER_INT8) && (bitOffset%BITS_PER_INT8 == 0)) {
                  *((int8_T *)(ecatTxBufPtr+bitOffset/BITS_PER_INT8)) = ((int8_T *)sigInputPtr)[i];
               }
               else {
                  bitCopy((uint8_T *)ecatTxBufPtr, bitOffset, pdoTypeBitSize, (uint32_T)(*((int8_T *)sigInputPtr)));
               }


           break;

           case SS_INT16:

               if ((pdoTypeBitSize == BITS_PER_INT16) && (bitOffset%BITS_PER_INT16 == 0)) {
                  *((int16_T *)(ecatTxBufPtr+bitOffset/BITS_PER_INT8)) = ((int16_T *)sigInputPtr)[i];

               }
               else {
                   bitCopy((uint8_T *)ecatTxBufPtr, bitOffset, pdoTypeBitSize, (uint32_T)(*((int16_T *)sigInputPtr)));
               }


           break;

           case SS_UINT16:
               if ((pdoTypeBitSize == BITS_PER_UINT16) && (bitOffset%BITS_PER_UINT16 == 0)) {
                   *((uint16_T *)(ecatTxBufPtr+bitOffset/BITS_PER_INT8)) =((uint16_T *)sigInputPtr)[i];
               }
               else {
                    bitCopy((uint8_T *)ecatTxBufPtr, bitOffset, pdoTypeBitSize, (uint32_T)(*((uint16_T *)sigInputPtr)));
               }


           break;

           case SS_INT32:
               if ((pdoTypeBitSize == BITS_PER_INT32) && (bitOffset%BITS_PER_INT32 == 0)) {
                   *((int32_T *)(ecatTxBufPtr+bitOffset/BITS_PER_INT8)) = ((int32_T *)sigInputPtr)[i];
               }
               else {
                    bitCopy((uint8_T *)ecatTxBufPtr, bitOffset, pdoTypeBitSize, (uint32_T)(*((int32_T *)sigInputPtr)));
               }



           break;

           case SS_UINT32:
               if ((pdoTypeBitSize == BITS_PER_UINT32) && (bitOffset%BITS_PER_UINT32 == 0)) {
                   *((uint32_T *)(ecatTxBufPtr+bitOffset/BITS_PER_INT8)) = ((uint32_T *)sigInputPtr)[i];
               }
               else {
                    bitCopy((uint8_T *)ecatTxBufPtr, bitOffset, pdoTypeBitSize, (uint32_T)(*((uint32_T *)sigInputPtr)));
               }


           break;
           default:
               /* Fatal error. Should never happen as this is checked in mdlStart. */

           break;
         }

         bitOffset += pdoTypeBitSize;
     }
 #else
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
