/*
 * state_machine.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "state_machine".
 *
 * Model version              : 1.111
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Thu Jul 26 17:24:26 2018
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_state_machine_h_
#define RTW_HEADER_state_machine_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include <float.h>
#ifndef state_machine_COMMON_INCLUDES_
# define state_machine_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "DAHostLib_Network.h"
#endif                                 /* state_machine_COMMON_INCLUDES_ */

#include "state_machine_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_zcfcn.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T SFunction2_o1;                /* '<S7>/S-Function2' */
  real_T SFunction2_o2;                /* '<S7>/S-Function2' */
  real32_T ByteUnpack;                 /* '<S4>/Byte Unpack' */
  int16_T DataTypeConversion1;         /* '<S5>/Data Type Conversion1' */
  int16_T DataTypeConversion2;         /* '<S5>/Data Type Conversion2' */
  int16_T DataTypeConversion1_f;       /* '<S4>/Data Type Conversion1' */
  int16_T UDPReceive_o1;               /* '<S3>/UDP Receive' */
  int16_T DataTypeConversion1_k;       /* '<S3>/Data Type Conversion1' */
  int16_T ManualSwitch;                /* '<Root>/Manual Switch' */
  uint16_T UDPReceive_o2;              /* '<S5>/UDP Receive' */
  uint16_T UDPReceive_o2_i;            /* '<S4>/UDP Receive' */
  uint16_T UDPReceive_o2_l;            /* '<S3>/UDP Receive' */
  uint8_T UDPReceive_o1_p[15];         /* '<S5>/UDP Receive' */
  uint8_T UDPReceive_o1_i[4];          /* '<S4>/UDP Receive' */
  uint8_T RateTransition[2];           /* '<S6>/Rate Transition' */
  uint8_T RateTransition_m;            /* '<S4>/Rate Transition' */
  boolean_T smooth_knob;               /* '<Root>/Chart' */
  boolean_T hard_knob;                 /* '<Root>/Chart' */
  boolean_T smooth_clutch;             /* '<Root>/Chart' */
  boolean_T hard_clutch;               /* '<Root>/Chart' */
  boolean_T smooth_accelerator;        /* '<Root>/Chart' */
  boolean_T hard_accelerator;          /* '<Root>/Chart' */
} B_state_machine_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S2>/Unit Delay' */
  real_T UDPReceive_NetworkLib[137];   /* '<S5>/UDP Receive' */
  real_T UDPReceive_NetworkLib_i[137]; /* '<S4>/UDP Receive' */
  real_T UDPReceive_NetworkLib_b[137]; /* '<S3>/UDP Receive' */
  real_T UDPSend2_NetworkLib[137];     /* '<S6>/UDP Send2' */
  real_T UDPSend1_NetworkLib[137];     /* '<S4>/UDP Send1' */
  uint32_T smooth_knobEventCounter;    /* '<Root>/Chart' */
  uint32_T hard_knobEventCounter;      /* '<Root>/Chart' */
  uint32_T smooth_clutchEventCounter;  /* '<Root>/Chart' */
  uint32_T hard_clutchEventCounter;    /* '<Root>/Chart' */
  uint32_T smooth_acceleratorEventCounter;/* '<Root>/Chart' */
  uint32_T hard_acceleratorEventCounter;/* '<Root>/Chart' */
  uint8_T is_CLUTCH_and_KNOB;          /* '<Root>/Chart' */
  uint8_T is_Gear_changing_process;    /* '<Root>/Chart' */
  uint8_T is_Wait_for_gear_change;     /* '<Root>/Chart' */
  uint8_T is_Wait_and_assist;          /* '<Root>/Chart' */
  uint8_T is_Wait_knob;                /* '<Root>/Chart' */
  uint8_T is_ACCELERATOR;              /* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
  boolean_T completed;                 /* '<Root>/Chart' */
} DW_state_machine_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Chart_Trig_ZCE;           /* '<Root>/Chart' */
} PrevZCX_state_machine_T;

/* Parameters (auto storage) */
struct P_state_machine_T_ {
  int32_T UDPReceive_localPort;        /* Mask Parameter: UDPReceive_localPort
                                        * Referenced by: '<S5>/UDP Receive'
                                        */
  int32_T UDPReceive_localPort_f;      /* Mask Parameter: UDPReceive_localPort_f
                                        * Referenced by: '<S4>/UDP Receive'
                                        */
  int32_T UDPReceive_localPort_o;      /* Mask Parameter: UDPReceive_localPort_o
                                        * Referenced by: '<S3>/UDP Receive'
                                        */
  int32_T UDPSend2_remotePort;         /* Mask Parameter: UDPSend2_remotePort
                                        * Referenced by: '<S6>/UDP Send2'
                                        */
  int32_T UDPSend1_remotePort;         /* Mask Parameter: UDPSend1_remotePort
                                        * Referenced by: '<S4>/UDP Send1'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 0
                                        * Referenced by: '<S3>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -5
                                        * Referenced by: '<S3>/Saturation'
                                        */
  real_T Constant_Value;               /* Expression: 5
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T Gain_Gain;                    /* Expression: 20
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T Constant_Value_j;             /* Expression: 1
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay'
                                        */
  real_T SFunction2_P1_Size[2];        /* Computed Parameter: SFunction2_P1_Size
                                        * Referenced by: '<S7>/S-Function2'
                                        */
  real_T SFunction2_P1;                /* Expression: str2num(get_param(bdroot,'FixedStep'))
                                        * Referenced by: '<S7>/S-Function2'
                                        */
  int16_T Constant1_Value;             /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<Root>/Constant1'
                                        */
  int16_T Constant_Value_o;            /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<Root>/Constant'
                                        */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch'
                                        */
  uint8_T length1_Value;               /* Computed Parameter: length1_Value
                                        * Referenced by: '<S4>/length1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_state_machine_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[4];
    SimStruct childSFunctions[1];
    SimStruct *childSFunctionPtrs[1];
    struct _ssBlkInfo2 blkInfo2[1];
    struct _ssSFcnModelMethods2 methods2[1];
    struct _ssSFcnModelMethods3 methods3[1];
    struct _ssSFcnModelMethods4 methods4[1];
    struct _ssStatesInfo2 statesInfo2[1];
    ssPeriodicStatesInfo periodicStatesInfo[1];
    struct _ssPortInfo2 inputOutputPortInfo2[1];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn0;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    struct {
      uint16_T TID[4];
    } TaskCounters;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[4];
    time_T offsetTimesArray[4];
    int_T sampleTimeTaskIDArray[4];
    int_T sampleHitArray[4];
    int_T perTaskSampleHitsArray[16];
    time_T tArray[4];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_state_machine_T state_machine_P;

/* Block signals (auto storage) */
extern B_state_machine_T state_machine_B;

/* Block states (auto storage) */
extern DW_state_machine_T state_machine_DW;

/* Model entry point functions */
extern void state_machine_initialize(void);
extern void state_machine_step(void);
extern void state_machine_terminate(void);

/* Real-time Model object */
extern RT_MODEL_state_machine_T *const state_machine_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'state_machine'
 * '<S1>'   : 'state_machine/Chart'
 * '<S2>'   : 'state_machine/Clock1'
 * '<S3>'   : 'state_machine/Get Knob Pressure'
 * '<S4>'   : 'state_machine/Get gear'
 * '<S5>'   : 'state_machine/Get pedals'
 * '<S6>'   : 'state_machine/KNOB'
 * '<S7>'   : 'state_machine/Limit Sample Time'
 * '<S8>'   : 'state_machine/Get Knob Pressure/MATLAB Function'
 * '<S9>'   : 'state_machine/Get pedals/MATLAB Function'
 * '<S10>'  : 'state_machine/KNOB/Communication Protocol1'
 */
#endif                                 /* RTW_HEADER_state_machine_h_ */
