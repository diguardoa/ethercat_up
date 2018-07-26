#define S_FUNCTION_NAME  LimitaSamplingFreq2
#define S_FUNCTION_LEVEL 2
#include "simstruc.h"
#include <Windows.h>
#include <stdlib.h>
#include <math.h>

#define TEMPO_CAMPIONAMENTO            ssGetSFcnParam(S,0)


/////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>

double	TempoProcessoreFreqPerLimitazioneSampling;
double	TempoProcessorePerLimitazioneSampling;
double	TempoProcessoreIniPerLimitazioneSampling;
BOOL	TempoProcessoreFreqIsDefPerLimitazioneSampling = FALSE;
double GetFrequenzaProcessorePerLimitazioneSampling()
{	
	LARGE_INTEGER f;	
	QueryPerformanceFrequency (&f);
	return TempoProcessoreFreqPerLimitazioneSampling = (double)f.QuadPart;
};
double GetTempoProcessorePerLimitazioneSampling()
{	
	LARGE_INTEGER f;
	QueryPerformanceCounter (&f);
	return (((double)f.QuadPart) / TempoProcessoreFreqPerLimitazioneSampling);
};


/*  Function: mdlInitializeSizes ===============================================
 *  Abstract:
 *  Setup sizes of the various vectors.
 */

static void mdlInitializeSizes(SimStruct *S)
{
  ssSetNumSFcnParams(S, 1);
   if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S))
   {
      return; /* Parameter mismatch will be reported by Simulink */
   }

   if (!ssSetNumInputPorts(S,0)) return;

   if (!ssSetNumOutputPorts(S,2)) return;
   ssSetOutputPortWidth(S,0,1);
   ssSetOutputPortWidth(S,1,1);

   ssSetNumSampleTimes(S, 1);

   /* Take care when specifying exception free code - see sfuntmpl.doc */
//   ssSetOptions(S, SS_OPTION_EXCEPTION_FREE_CODE);
}

/*  Function: mdlInitializeSampleTimes =========================================
 *  Abstract:
 *  Specifiy that we inherit our sample time from the driving block.
 */

static void mdlInitializeSampleTimes(SimStruct *S)
{
   ssSetSampleTime(S, 0, INHERITED_SAMPLE_TIME);
   ssSetOffsetTime(S, 0, 0.0);
}

#define MDL_START
static void mdlStart(SimStruct *S)
{
    GetFrequenzaProcessorePerLimitazioneSampling();
    TempoProcessorePerLimitazioneSampling = GetTempoProcessorePerLimitazioneSampling();
    TempoProcessoreIniPerLimitazioneSampling = TempoProcessorePerLimitazioneSampling;
}

/* Function: mdlOutputs =======================================================
 * Abstract:
 *    In this function, you compute the outputs of your S-function
 *    block. Generally outputs are placed in the output vector, ssGetY(S).
 */
static void mdlOutputs(SimStruct *S, int_T tid)
{
    double DeltaT = 0.0;
    real_T TempoCamp = (real_T) mxGetPr(TEMPO_CAMPIONAMENTO)[0];
    real_T *Tempo         = ssGetOutputPortRealSignal(S,0);
    real_T *Tempo2        = ssGetOutputPortRealSignal(S,1);
    int C = 0;
    while (DeltaT<TempoCamp) 
    {
        DeltaT = GetTempoProcessorePerLimitazioneSampling()-TempoProcessorePerLimitazioneSampling;
        C++;
    }
    
    TempoProcessorePerLimitazioneSampling = TempoProcessorePerLimitazioneSampling+TempoCamp;
    Tempo[0] = TempoProcessorePerLimitazioneSampling-TempoProcessoreIniPerLimitazioneSampling;
    Tempo2[0] = GetTempoProcessorePerLimitazioneSampling();
    
}

#define MDL_UPDATE
static void mdlUpdate(SimStruct *S, int_T tid) 
{
}











/*  Function: mdlTerminate =====================================================
 *  Abstract:
 *  No termination needed, but we are required to have this routine.
 */

static void mdlTerminate(SimStruct *S){}


#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif

