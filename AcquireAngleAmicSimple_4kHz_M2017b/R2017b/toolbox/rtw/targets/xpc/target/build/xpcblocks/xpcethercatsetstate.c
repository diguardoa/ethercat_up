/*
 *   xpcethetcatcoeread.c - xPC Target Ethernet Receive
 *
 *   Copyright 2009-2014 The MathWorks, Inc.
*/


#define S_FUNCTION_LEVEL   2
#undef  S_FUNCTION_NAME
#define S_FUNCTION_NAME    xpcethercatsetstate

#define VERBOSE 1

#include <stddef.h>
#include <stdlib.h>
#include "simstruc.h"

#ifndef MATLAB_MEX_FILE
#include <windows.h>
//#include "xpctarget.h"
#endif

#ifdef MATLAB_MEX_FILE
#include "mex.h"

#else
#include "xpcethercatutils.h"
#endif


// PARAMETERS

typedef enum {
   S_DEVICE_ID, 
   S_TIMEOUT,
   S_SAMPLE_TIME,
   NUM_S_PARAMS
} s_params;

                   

#define ETH_DEVICE_ID            ssGetSFcnParam(S,S_DEVICE_ID)        // REAL_T
#define ETH_TIMEOUT              ssGetSFcnParam(S,S_TIMEOUT)          // REAL_T
#define ETH_SAMPLE_TIME          ssGetSFcnParam(S,S_SAMPLE_TIME)      // REAL_T


typedef enum {
   I_DEVICE_ID = 0,
   I_TIMEOUT,
   NUM_I_WORKS
}  i_works;

/*** Simulation Code
#ifdef MATLAB_MEX_FILE

#endif
*******************/





static void mdlInitializeSizes(SimStruct *S)
{
   int_T                num_params;
   int_T                portIndex=0;
   char_T               msg[512];
   int_T                j;
   
   ssSetNumSFcnParams(S, NUM_S_PARAMS);
   if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
      sprintf(msg, "%d input args expected, %d passed", NUM_S_PARAMS, ssGetSFcnParamsCount(S));
      ssSetErrorStatus(S, msg);
      return;
   }

   ssSetNumContStates(S, 0);
   ssSetNumDiscStates(S, 0);

   if ( !ssSetNumInputPorts(S, 1) ) return;
   ssSetInputPortRequiredContiguous(S,0,1);
        
   num_params = (int32_T)ssGetSFcnParamsCount(S);
      
    ssSetInputPortDirectFeedThrough(S,portIndex,1);
	ssSetInputPortDataType(S, portIndex, SS_INT32);
	ssSetInputPortWidth(S, portIndex,1); 
     
    if ( !ssSetNumOutputPorts(S, 2) )  return;            
    ssSetOutputPortDataType(S, 0, SS_INT32);
    ssSetOutputPortWidth(S, 0, 1);
 
    ssSetOutputPortDataType(S, 1, SS_INT32);
    ssSetOutputPortWidth(S, 1, 1);
    
    // Ensure that the signal can be accessed via an address.
    ssSetOutputPortOptimOpts(S, portIndex, SS_NOT_REUSABLE_AND_GLOBAL);
        
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

   ssSetOptions(S, SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE |
                   SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME );
}

static void mdlInitializeSampleTimes(SimStruct *S)
{
   real_T sampleTime;
   
   sampleTime = mxGetPr(ETH_SAMPLE_TIME)[0];

      
   if ( sampleTime == -1.0 ) {
      ssSetSampleTime(S, 0, INHERITED_SAMPLE_TIME);
      ssSetOffsetTime(S, 0, FIXED_IN_MINOR_STEP_OFFSET);
   } else {
      ssSetSampleTime(S, 0, sampleTime);
      ssSetOffsetTime(S, 0, 0.0);
   }
}

#define MDL_START
static void mdlStart(SimStruct *S)
{
   int_T                  deviceIndex;
   void                   *sigOutputPtr;
   int_T                  timeout;
    
   
   deviceIndex  = (int_T)mxGetPr(ETH_DEVICE_ID)[0];
   sigOutputPtr = (void *)ssGetOutputPortSignal(S, 0);
   timeout      = (int_T)mxGetPr(ETH_TIMEOUT)[0];
     
   ssSetIWorkValue (S, I_DEVICE_ID, (uint32_T)deviceIndex);
   ssSetIWorkValue (S, I_TIMEOUT, timeout);
}

static void mdlOutputs(SimStruct *S, int_T tid)
{
#ifndef MATLAB_MEX_FILE    
    int_T     *sigOutputPtr;
    int_T     *sigInputPtr;
    int32_T   *sigStatusPtr;
    int_T     deviceIndex;     
    int_T     res;
    int_T     oldState;
    int_T     timeout;
  
    deviceIndex  = ssGetIWorkValue (S, I_DEVICE_ID);
    timeout      = ssGetIWorkValue (S, I_TIMEOUT);
    sigOutputPtr = (int_T *)ssGetOutputPortSignal(S,0);
    sigStatusPtr = (int_T *)ssGetOutputPortSignal(S,1);
    sigInputPtr  = (int_T *)ssGetInputPortSignal(S,0);   
    

    res = xpcEtherCATsetSlaveState(deviceIndex, timeout, sigInputPtr[0], &oldState);

    if (res == 0) {
       sigOutputPtr[0] = sigInputPtr[0]; 
    }
    else {
       sigOutputPtr[0] = oldState;
    }
    sigStatusPtr[0] = res;      
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
