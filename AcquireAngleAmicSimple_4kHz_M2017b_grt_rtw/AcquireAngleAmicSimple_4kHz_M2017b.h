/*
 * AcquireAngleAmicSimple_4kHz_M2017b.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "AcquireAngleAmicSimple_4kHz_M2017b".
 *
 * Model version              : 1.1049
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Mon Jul  9 16:31:07 2018
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AcquireAngleAmicSimple_4kHz_M2017b_h_
#define RTW_HEADER_AcquireAngleAmicSimple_4kHz_M2017b_h_
#include <stddef.h>
#include <string.h>
#include <float.h>
#ifndef AcquireAngleAmicSimple_4kHz_M2017b_COMMON_INCLUDES_
# define AcquireAngleAmicSimple_4kHz_M2017b_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "stddef.h"
#include "stdlib.h"
#include "xpcethercatutils.h"
#include "xpcimports.h"
#endif                                 /* AcquireAngleAmicSimple_4kHz_M2017b_COMMON_INCLUDES_ */

#include "AcquireAngleAmicSimple_4kHz_M2017b_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

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
  real_T Clock;                        /* '<Root>/Clock' */
  real_T xPCTargetTime;                /* '<S4>/xPC Target  Time ' */
  real_T Count2rad;                    /* '<Root>/Count2rad' */
  real_T xPCTargetTime_p;              /* '<S7>/xPC Target  Time ' */
  real32_T Tickdivision;               /* '<S4>/Tick division' */
  real32_T C2[6];                      /* '<Root>/C2' */
  real32_T C3;                         /* '<Root>/C3' */
  real32_T EtherCATPDOReceive12;       /* '<S7>/EtherCAT PDO Receive12' */
  real32_T EtherCATPDOReceive13;       /* '<S7>/EtherCAT PDO Receive13' */
  real32_T EtherCATPDOReceive15;       /* '<S7>/EtherCAT PDO Receive15' */
  real32_T EtherCATPDOReceive16;       /* '<S7>/EtherCAT PDO Receive16' */
  real32_T EtherCATPDOReceive17;       /* '<S7>/EtherCAT PDO Receive17' */
  real32_T EtherCATPDOReceive18;       /* '<S7>/EtherCAT PDO Receive18' */
  real32_T EtherCATPDOReceive5;        /* '<S7>/EtherCAT PDO Receive5' */
  real32_T EtherCATPDOReceive7;        /* '<S7>/EtherCAT PDO Receive7' */
  real32_T EtherCATPDOReceive9;        /* '<S7>/EtherCAT PDO Receive9' */
  real32_T EtherCATPDOReceive11;       /* '<S7>/EtherCAT PDO Receive11' */
  real32_T EtherCATPDOReceive2;        /* '<S7>/EtherCAT PDO Receive2' */
  real32_T EtherCATPDOReceive4;        /* '<S7>/EtherCAT PDO Receive4' */
  real32_T Tickdivision_m;             /* '<S7>/Tick division' */
  real32_T enable;                     /* '<S8>/EtherCAT SetState Error' */
  int32_T EtherCATInit1[6];            /* '<Root>/EtherCAT Init 1' */
  int32_T C1[6];                       /* '<S4>/C1' */
  int32_T NetworkState;                /* '<S4>/EtherCAT Get State  ' */
  int32_T init1;                       /* '<S4>/init1' */
  int32_T C1_k;                        /* '<Root>/C1' */
  int32_T EtherCATPDOReceive19;        /* '<S7>/EtherCAT PDO Receive19' */
  int32_T EtherCATPDOReceive6;         /* '<S7>/EtherCAT PDO Receive6' */
  int32_T EtherCATPDOReceive8;         /* '<S7>/EtherCAT PDO Receive8' */
  int32_T EtherCATPDOReceive10;        /* '<S7>/EtherCAT PDO Receive10' */
  int32_T EtherCATPDOReceive20;        /* '<S7>/EtherCAT PDO Receive20' */
  int32_T EtherCATPDOReceive21;        /* '<S7>/EtherCAT PDO Receive21' */
  int32_T EtherCATPDOReceive1;         /* '<S7>/EtherCAT PDO Receive1' */
  int32_T State;                       /* '<S4>/EtherCAT Network State Machine' */
  int32_T EtherCATSetState1_o1;        /* '<S8>/EtherCAT Set State 1' */
  int32_T EtherCATSetState1_o2;        /* '<S8>/EtherCAT Set State 1' */
  uint32_T Output;                     /* '<S1>/Output' */
  uint32_T FixPtSum1;                  /* '<S5>/FixPt Sum1' */
  uint32_T FixPtSwitch;                /* '<S6>/FixPt Switch' */
  uint16_T EtherCATPDOReceive14;       /* '<S7>/EtherCAT PDO Receive14' */
  uint16_T EtherCATPDOReceive3;        /* '<S7>/EtherCAT PDO Receive3' */
  uint8_T Memory1;                     /* '<S4>/Memory1' */
  uint8_T ESMSwitch;                   /* '<Root>/ESM Switch' */
  uint8_T Enable;                      /* '<S4>/EtherCAT Network State Machine1' */
  uint8_T StateChanged;                /* '<S4>/EtherCAT Network State Machine' */
  uint8_T esm_out;                     /* '<Root>/ESM Wait' */
} B_AcquireAngleAmicSimple_4kHz_M2017b_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T current_time;                 /* '<Root>/ESM Wait' */
  struct {
    real_T EXECRATIO;
  } EtherCATInit1_RWORK;               /* '<Root>/EtherCAT Init 1' */

  uint32_T Output_DSTATE;              /* '<S1>/Output' */
  real32_T err;                        /* '<S8>/EtherCAT SetState Error' */
  uint32_T FixPtSum1_DWORK1;           /* '<S5>/FixPt Sum1' */
  int_T EtherCATGetState_IWORK;        /* '<S4>/EtherCAT Get State  ' */
  int_T EtherCATPDOReceive19_IWORK[7]; /* '<S7>/EtherCAT PDO Receive19' */
  int_T EtherCATPDOReceive14_IWORK[7]; /* '<S7>/EtherCAT PDO Receive14' */
  int_T EtherCATPDOReceive12_IWORK[7]; /* '<S7>/EtherCAT PDO Receive12' */
  int_T EtherCATPDOReceive13_IWORK[7]; /* '<S7>/EtherCAT PDO Receive13' */
  int_T EtherCATPDOReceive15_IWORK[7]; /* '<S7>/EtherCAT PDO Receive15' */
  int_T EtherCATPDOReceive16_IWORK[7]; /* '<S7>/EtherCAT PDO Receive16' */
  int_T EtherCATPDOReceive17_IWORK[7]; /* '<S7>/EtherCAT PDO Receive17' */
  int_T EtherCATPDOReceive18_IWORK[7]; /* '<S7>/EtherCAT PDO Receive18' */
  int_T EtherCATPDOReceive5_IWORK[7];  /* '<S7>/EtherCAT PDO Receive5' */
  int_T EtherCATPDOReceive6_IWORK[7];  /* '<S7>/EtherCAT PDO Receive6' */
  int_T EtherCATPDOReceive7_IWORK[7];  /* '<S7>/EtherCAT PDO Receive7' */
  int_T EtherCATPDOReceive8_IWORK[7];  /* '<S7>/EtherCAT PDO Receive8' */
  int_T EtherCATPDOReceive9_IWORK[7];  /* '<S7>/EtherCAT PDO Receive9' */
  int_T EtherCATPDOReceive10_IWORK[7]; /* '<S7>/EtherCAT PDO Receive10' */
  int_T EtherCATPDOReceive11_IWORK[7]; /* '<S7>/EtherCAT PDO Receive11' */
  int_T EtherCATPDOReceive20_IWORK[7]; /* '<S7>/EtherCAT PDO Receive20' */
  int_T EtherCATPDOReceive21_IWORK[7]; /* '<S7>/EtherCAT PDO Receive21' */
  int_T EtherCATPDOReceive1_IWORK[7];  /* '<S7>/EtherCAT PDO Receive1' */
  int_T EtherCATPDOReceive2_IWORK[7];  /* '<S7>/EtherCAT PDO Receive2' */
  int_T EtherCATPDOReceive3_IWORK[7];  /* '<S7>/EtherCAT PDO Receive3' */
  int_T EtherCATPDOReceive4_IWORK[7];  /* '<S7>/EtherCAT PDO Receive4' */
  int_T EtherCATPDOTransmit10_IWORK[7];/* '<S7>/EtherCAT PDO Transmit 10' */
  int_T EtherCATPDOTransmit1_IWORK[7]; /* '<S7>/EtherCAT PDO Transmit 1' */
  int_T EtherCATPDOTransmit2_IWORK[7]; /* '<S7>/EtherCAT PDO Transmit 2' */
  int_T EtherCATPDOTransmit3_IWORK[7]; /* '<S7>/EtherCAT PDO Transmit 3' */
  int_T EtherCATPDOTransmit4_IWORK[7]; /* '<S7>/EtherCAT PDO Transmit 4' */
  int_T EtherCATPDOTransmit5_IWORK[7]; /* '<S7>/EtherCAT PDO Transmit 5' */
  int_T EtherCATPDOTransmit6_IWORK[7]; /* '<S7>/EtherCAT PDO Transmit 6' */
  int_T EtherCATPDOTransmit7_IWORK[7]; /* '<S7>/EtherCAT PDO Transmit 7' */
  int_T EtherCATPDOTransmit8_IWORK[7]; /* '<S7>/EtherCAT PDO Transmit 8' */
  int_T EtherCATPDOTransmit9_IWORK[7]; /* '<S7>/EtherCAT PDO Transmit 9' */
  int_T EtherCATPDOTransmit11_IWORK[7];/* '<S7>/EtherCAT PDO Transmit 11' */
  int_T EtherCATPDOTransmit12_IWORK[7];/* '<S7>/EtherCAT PDO Transmit 12' */
  int_T EtherCATPDOTransmit13_IWORK[7];/* '<S7>/EtherCAT PDO Transmit 13' */
  int_T EtherCATPDOTransmit14_IWORK[7];/* '<S7>/EtherCAT PDO Transmit 14' */
  int_T EtherCATSetState1_IWORK[2];    /* '<S8>/EtherCAT Set State 1' */
  uint8_T Memory1_PreviousInput;       /* '<S4>/Memory1' */
  uint8_T is_active_c22_AcquireAngleAmicS;/* '<S4>/EtherCAT Network State Machine1' */
  uint8_T is_c22_AcquireAngleAmicSimple_4;/* '<S4>/EtherCAT Network State Machine1' */
  uint8_T esm;                         /* '<S4>/EtherCAT Network State Machine1' */
  uint8_T is_active_c21_AcquireAngleAmicS;/* '<S4>/EtherCAT Network State Machine' */
  uint8_T is_c21_AcquireAngleAmicSimple_4;/* '<S4>/EtherCAT Network State Machine' */
  uint8_T is_active_c18_AcquireAngleAmicS;/* '<S8>/EtherCAT SetState Error' */
  uint8_T is_c18_AcquireAngleAmicSimple_4;/* '<S8>/EtherCAT SetState Error' */
  uint8_T is_active_c12_AcquireAngleAmicS;/* '<Root>/ESM Wait' */
  uint8_T is_c12_AcquireAngleAmicSimple_4;/* '<Root>/ESM Wait' */
} DW_AcquireAngleAmicSimple_4kHz_M2017b_T;

/* Constant parameters (auto storage) */
typedef struct {
  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S4>/EtherCAT Get State  '
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 1'
   *   '<S7>/EtherCAT PDO Transmit 10'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   *   '<S8>/EtherCAT Set State 1'
   */
  real_T pooled1[2];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S4>/EtherCAT Get State  '
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 1'
   *   '<S7>/EtherCAT PDO Transmit 10'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   *   '<S8>/EtherCAT Set State 1'
   */
  real_T pooled2;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S4>/EtherCAT Get State  '
   *   '<S4>/xPC Target  Time '
   *   '<S8>/EtherCAT Set State 1'
   */
  real_T pooled3[2];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S4>/EtherCAT Get State  '
   *   '<S4>/xPC Target  Time '
   *   '<S8>/EtherCAT Set State 1'
   */
  real_T pooled4;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S4>/xPC Target  Time '
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   *   '<S7>/xPC Target  Time '
   */
  real_T pooled5[2];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S4>/xPC Target  Time '
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   *   '<S7>/xPC Target  Time '
   */
  real_T pooled6;

  /* Computed Parameter: EtherCATPDOReceive19_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive19'
   */
  real_T EtherCATPDOReceive19_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive19_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive19'
   */
  real_T EtherCATPDOReceive19_P1[41];

  /* Computed Parameter: EtherCATPDOReceive19_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive19'
   */
  real_T EtherCATPDOReceive19_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive19'
   */
  real_T EtherCATPDOReceive19_P2;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Transmit 1'
   */
  real_T pooled8[2];

  /* Pooled Parameter (Expression: sig_type)
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Transmit 1'
   */
  real_T pooled9;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 1'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   */
  real_T pooled10[2];

  /* Pooled Parameter (Expression: type_size)
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 1'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   */
  real_T pooled11;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 1'
   *   '<S7>/EtherCAT PDO Transmit 10'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   */
  real_T pooled12[2];

  /* Pooled Parameter (Expression: sig_dim)
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 1'
   *   '<S7>/EtherCAT PDO Transmit 10'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   */
  real_T pooled13;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 1'
   *   '<S7>/EtherCAT PDO Transmit 10'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   */
  real_T pooled14[2];

  /* Pooled Parameter (Expression: sample_time)
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 1'
   *   '<S7>/EtherCAT PDO Transmit 10'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   */
  real_T pooled15;

  /* Computed Parameter: EtherCATPDOReceive14_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive14'
   */
  real_T EtherCATPDOReceive14_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive14_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive14'
   */
  real_T EtherCATPDOReceive14_P1[32];

  /* Computed Parameter: EtherCATPDOReceive14_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive14'
   */
  real_T EtherCATPDOReceive14_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive14'
   */
  real_T EtherCATPDOReceive14_P2;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Transmit 10'
   */
  real_T pooled16[2];

  /* Pooled Parameter (Expression: sig_type)
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Transmit 10'
   */
  real_T pooled17;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Transmit 10'
   */
  real_T pooled18[2];

  /* Pooled Parameter (Expression: type_size)
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Transmit 10'
   */
  real_T pooled19;

  /* Computed Parameter: EtherCATPDOReceive12_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive12'
   */
  real_T EtherCATPDOReceive12_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive12_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive12'
   */
  real_T EtherCATPDOReceive12_P1[33];

  /* Computed Parameter: EtherCATPDOReceive12_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive12'
   */
  real_T EtherCATPDOReceive12_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive12'
   */
  real_T EtherCATPDOReceive12_P2;

  /* Computed Parameter: EtherCATPDOReceive13_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive13'
   */
  real_T EtherCATPDOReceive13_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive13_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive13'
   */
  real_T EtherCATPDOReceive13_P1[33];

  /* Computed Parameter: EtherCATPDOReceive13_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive13'
   */
  real_T EtherCATPDOReceive13_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive13'
   */
  real_T EtherCATPDOReceive13_P2;

  /* Computed Parameter: EtherCATPDOReceive15_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive15'
   */
  real_T EtherCATPDOReceive15_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive15_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive15'
   */
  real_T EtherCATPDOReceive15_P1[33];

  /* Computed Parameter: EtherCATPDOReceive15_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive15'
   */
  real_T EtherCATPDOReceive15_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive15'
   */
  real_T EtherCATPDOReceive15_P2;

  /* Computed Parameter: EtherCATPDOReceive16_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive16'
   */
  real_T EtherCATPDOReceive16_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive16_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive16'
   */
  real_T EtherCATPDOReceive16_P1[33];

  /* Computed Parameter: EtherCATPDOReceive16_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive16'
   */
  real_T EtherCATPDOReceive16_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive16'
   */
  real_T EtherCATPDOReceive16_P2;

  /* Computed Parameter: EtherCATPDOReceive17_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive17'
   */
  real_T EtherCATPDOReceive17_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive17_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive17'
   */
  real_T EtherCATPDOReceive17_P1[33];

  /* Computed Parameter: EtherCATPDOReceive17_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive17'
   */
  real_T EtherCATPDOReceive17_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive17'
   */
  real_T EtherCATPDOReceive17_P2;

  /* Computed Parameter: EtherCATPDOReceive18_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive18'
   */
  real_T EtherCATPDOReceive18_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive18_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive18'
   */
  real_T EtherCATPDOReceive18_P1[33];

  /* Computed Parameter: EtherCATPDOReceive18_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive18'
   */
  real_T EtherCATPDOReceive18_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive18'
   */
  real_T EtherCATPDOReceive18_P2;

  /* Computed Parameter: EtherCATPDOReceive5_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive5'
   */
  real_T EtherCATPDOReceive5_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive5_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive5'
   */
  real_T EtherCATPDOReceive5_P1[38];

  /* Computed Parameter: EtherCATPDOReceive5_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive5'
   */
  real_T EtherCATPDOReceive5_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive5'
   */
  real_T EtherCATPDOReceive5_P2;

  /* Computed Parameter: EtherCATPDOReceive6_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive6'
   */
  real_T EtherCATPDOReceive6_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive6_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive6'
   */
  real_T EtherCATPDOReceive6_P1[41];

  /* Computed Parameter: EtherCATPDOReceive6_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive6'
   */
  real_T EtherCATPDOReceive6_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive6'
   */
  real_T EtherCATPDOReceive6_P2;

  /* Computed Parameter: EtherCATPDOReceive7_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive7'
   */
  real_T EtherCATPDOReceive7_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive7_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive7'
   */
  real_T EtherCATPDOReceive7_P1[40];

  /* Computed Parameter: EtherCATPDOReceive7_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive7'
   */
  real_T EtherCATPDOReceive7_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive7'
   */
  real_T EtherCATPDOReceive7_P2;

  /* Computed Parameter: EtherCATPDOReceive8_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive8'
   */
  real_T EtherCATPDOReceive8_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive8_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive8'
   */
  real_T EtherCATPDOReceive8_P1[49];

  /* Computed Parameter: EtherCATPDOReceive8_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive8'
   */
  real_T EtherCATPDOReceive8_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive8'
   */
  real_T EtherCATPDOReceive8_P2;

  /* Computed Parameter: EtherCATPDOReceive9_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive9'
   */
  real_T EtherCATPDOReceive9_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive9_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive9'
   */
  real_T EtherCATPDOReceive9_P1[37];

  /* Computed Parameter: EtherCATPDOReceive9_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive9'
   */
  real_T EtherCATPDOReceive9_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive9'
   */
  real_T EtherCATPDOReceive9_P2;

  /* Computed Parameter: EtherCATPDOReceive10_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive10'
   */
  real_T EtherCATPDOReceive10_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive10_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive10'
   */
  real_T EtherCATPDOReceive10_P1[56];

  /* Computed Parameter: EtherCATPDOReceive10_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive10'
   */
  real_T EtherCATPDOReceive10_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive10'
   */
  real_T EtherCATPDOReceive10_P2;

  /* Computed Parameter: EtherCATPDOReceive11_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive11'
   */
  real_T EtherCATPDOReceive11_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive11_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive11'
   */
  real_T EtherCATPDOReceive11_P1[44];

  /* Computed Parameter: EtherCATPDOReceive11_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive11'
   */
  real_T EtherCATPDOReceive11_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive11'
   */
  real_T EtherCATPDOReceive11_P2;

  /* Computed Parameter: EtherCATPDOReceive20_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive20'
   */
  real_T EtherCATPDOReceive20_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive20_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive20'
   */
  real_T EtherCATPDOReceive20_P1[49];

  /* Computed Parameter: EtherCATPDOReceive20_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive20'
   */
  real_T EtherCATPDOReceive20_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive20'
   */
  real_T EtherCATPDOReceive20_P2;

  /* Computed Parameter: EtherCATPDOReceive21_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive21'
   */
  real_T EtherCATPDOReceive21_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive21_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive21'
   */
  real_T EtherCATPDOReceive21_P1[56];

  /* Computed Parameter: EtherCATPDOReceive21_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive21'
   */
  real_T EtherCATPDOReceive21_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive21'
   */
  real_T EtherCATPDOReceive21_P2;

  /* Computed Parameter: EtherCATPDOReceive1_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive1'
   */
  real_T EtherCATPDOReceive1_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive1_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive1'
   */
  real_T EtherCATPDOReceive1_P1[29];

  /* Computed Parameter: EtherCATPDOReceive1_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive1'
   */
  real_T EtherCATPDOReceive1_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive1'
   */
  real_T EtherCATPDOReceive1_P2;

  /* Computed Parameter: EtherCATPDOReceive2_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive2'
   */
  real_T EtherCATPDOReceive2_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive2_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive2'
   */
  real_T EtherCATPDOReceive2_P1[28];

  /* Computed Parameter: EtherCATPDOReceive2_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive2'
   */
  real_T EtherCATPDOReceive2_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive2'
   */
  real_T EtherCATPDOReceive2_P2;

  /* Computed Parameter: EtherCATPDOReceive3_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive3'
   */
  real_T EtherCATPDOReceive3_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive3_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive3'
   */
  real_T EtherCATPDOReceive3_P1[32];

  /* Computed Parameter: EtherCATPDOReceive3_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive3'
   */
  real_T EtherCATPDOReceive3_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive3'
   */
  real_T EtherCATPDOReceive3_P2;

  /* Computed Parameter: EtherCATPDOReceive4_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive4'
   */
  real_T EtherCATPDOReceive4_P1_Size[2];

  /* Computed Parameter: EtherCATPDOReceive4_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive4'
   */
  real_T EtherCATPDOReceive4_P1[30];

  /* Computed Parameter: EtherCATPDOReceive4_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive4'
   */
  real_T EtherCATPDOReceive4_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive4'
   */
  real_T EtherCATPDOReceive4_P2;

  /* Computed Parameter: EtherCATPDOTransmit10_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 10'
   */
  real_T EtherCATPDOTransmit10_P1_Size[2];

  /* Computed Parameter: EtherCATPDOTransmit10_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 10'
   */
  real_T EtherCATPDOTransmit10_P1[27];

  /* Computed Parameter: EtherCATPDOTransmit10_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 10'
   */
  real_T EtherCATPDOTransmit10_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 10'
   */
  real_T EtherCATPDOTransmit10_P2;

  /* Computed Parameter: EtherCATPDOTransmit1_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 1'
   */
  real_T EtherCATPDOTransmit1_P1_Size[2];

  /* Computed Parameter: EtherCATPDOTransmit1_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 1'
   */
  real_T EtherCATPDOTransmit1_P1[31];

  /* Computed Parameter: EtherCATPDOTransmit1_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 1'
   */
  real_T EtherCATPDOTransmit1_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 1'
   */
  real_T EtherCATPDOTransmit1_P2;

  /* Computed Parameter: EtherCATPDOTransmit2_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 2'
   */
  real_T EtherCATPDOTransmit2_P1_Size[2];

  /* Computed Parameter: EtherCATPDOTransmit2_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 2'
   */
  real_T EtherCATPDOTransmit2_P1[30];

  /* Computed Parameter: EtherCATPDOTransmit2_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 2'
   */
  real_T EtherCATPDOTransmit2_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 2'
   */
  real_T EtherCATPDOTransmit2_P2;

  /* Computed Parameter: EtherCATPDOTransmit3_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 3'
   */
  real_T EtherCATPDOTransmit3_P1_Size[2];

  /* Computed Parameter: EtherCATPDOTransmit3_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 3'
   */
  real_T EtherCATPDOTransmit3_P1[38];

  /* Computed Parameter: EtherCATPDOTransmit3_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 3'
   */
  real_T EtherCATPDOTransmit3_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 3'
   */
  real_T EtherCATPDOTransmit3_P2;

  /* Computed Parameter: EtherCATPDOTransmit4_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 4'
   */
  real_T EtherCATPDOTransmit4_P1_Size[2];

  /* Computed Parameter: EtherCATPDOTransmit4_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 4'
   */
  real_T EtherCATPDOTransmit4_P1[42];

  /* Computed Parameter: EtherCATPDOTransmit4_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 4'
   */
  real_T EtherCATPDOTransmit4_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 4'
   */
  real_T EtherCATPDOTransmit4_P2;

  /* Computed Parameter: EtherCATPDOTransmit5_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 5'
   */
  real_T EtherCATPDOTransmit5_P1_Size[2];

  /* Computed Parameter: EtherCATPDOTransmit5_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 5'
   */
  real_T EtherCATPDOTransmit5_P1[40];

  /* Computed Parameter: EtherCATPDOTransmit5_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 5'
   */
  real_T EtherCATPDOTransmit5_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 5'
   */
  real_T EtherCATPDOTransmit5_P2;

  /* Computed Parameter: EtherCATPDOTransmit6_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 6'
   */
  real_T EtherCATPDOTransmit6_P1_Size[2];

  /* Computed Parameter: EtherCATPDOTransmit6_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 6'
   */
  real_T EtherCATPDOTransmit6_P1[42];

  /* Computed Parameter: EtherCATPDOTransmit6_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 6'
   */
  real_T EtherCATPDOTransmit6_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 6'
   */
  real_T EtherCATPDOTransmit6_P2;

  /* Computed Parameter: EtherCATPDOTransmit7_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
   */
  real_T EtherCATPDOTransmit7_P1_Size[2];

  /* Computed Parameter: EtherCATPDOTransmit7_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
   */
  real_T EtherCATPDOTransmit7_P1[40];

  /* Computed Parameter: EtherCATPDOTransmit7_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
   */
  real_T EtherCATPDOTransmit7_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
   */
  real_T EtherCATPDOTransmit7_P2;

  /* Computed Parameter: EtherCATPDOTransmit8_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 8'
   */
  real_T EtherCATPDOTransmit8_P1_Size[2];

  /* Computed Parameter: EtherCATPDOTransmit8_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 8'
   */
  real_T EtherCATPDOTransmit8_P1[36];

  /* Computed Parameter: EtherCATPDOTransmit8_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 8'
   */
  real_T EtherCATPDOTransmit8_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 8'
   */
  real_T EtherCATPDOTransmit8_P2;

  /* Computed Parameter: EtherCATPDOTransmit9_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 9'
   */
  real_T EtherCATPDOTransmit9_P1_Size[2];

  /* Computed Parameter: EtherCATPDOTransmit9_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 9'
   */
  real_T EtherCATPDOTransmit9_P1[31];

  /* Computed Parameter: EtherCATPDOTransmit9_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 9'
   */
  real_T EtherCATPDOTransmit9_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 9'
   */
  real_T EtherCATPDOTransmit9_P2;

  /* Computed Parameter: EtherCATPDOTransmit11_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 11'
   */
  real_T EtherCATPDOTransmit11_P1_Size[2];

  /* Computed Parameter: EtherCATPDOTransmit11_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 11'
   */
  real_T EtherCATPDOTransmit11_P1[31];

  /* Computed Parameter: EtherCATPDOTransmit11_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 11'
   */
  real_T EtherCATPDOTransmit11_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 11'
   */
  real_T EtherCATPDOTransmit11_P2;

  /* Computed Parameter: EtherCATPDOTransmit12_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 12'
   */
  real_T EtherCATPDOTransmit12_P1_Size[2];

  /* Computed Parameter: EtherCATPDOTransmit12_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 12'
   */
  real_T EtherCATPDOTransmit12_P1[37];

  /* Computed Parameter: EtherCATPDOTransmit12_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 12'
   */
  real_T EtherCATPDOTransmit12_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 12'
   */
  real_T EtherCATPDOTransmit12_P2;

  /* Computed Parameter: EtherCATPDOTransmit13_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 13'
   */
  real_T EtherCATPDOTransmit13_P1_Size[2];

  /* Computed Parameter: EtherCATPDOTransmit13_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 13'
   */
  real_T EtherCATPDOTransmit13_P1[31];

  /* Computed Parameter: EtherCATPDOTransmit13_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 13'
   */
  real_T EtherCATPDOTransmit13_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 13'
   */
  real_T EtherCATPDOTransmit13_P2;

  /* Computed Parameter: EtherCATPDOTransmit14_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 14'
   */
  real_T EtherCATPDOTransmit14_P1_Size[2];

  /* Computed Parameter: EtherCATPDOTransmit14_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 14'
   */
  real_T EtherCATPDOTransmit14_P1[29];

  /* Computed Parameter: EtherCATPDOTransmit14_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 14'
   */
  real_T EtherCATPDOTransmit14_P2_Size[2];

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 14'
   */
  real_T EtherCATPDOTransmit14_P2;

  /* Computed Parameter: xPCTargetTime_P2_Size
   * Referenced by: '<S7>/xPC Target  Time '
   */
  real_T xPCTargetTime_P2_Size[2];

  /* Expression: ts
   * Referenced by: '<S7>/xPC Target  Time '
   */
  real_T xPCTargetTime_P2;

  /* Computed Parameter: ADCLPFilter3_Value
   * Referenced by: '<S3>/ADC LP Filter 3'
   */
  real32_T ADCLPFilter3_Value;

  /* Pooled Parameter (Expression: 2*pi*40)
   * Referenced by:
   *   '<S3>/Acceleration LP Filter 3'
   *   '<S3>/Acceleration LP Filter 5'
   */
  real32_T pooled20;

  /* Computed Parameter: DistributedControlJ3_Value
   * Referenced by: '<S3>/Distributed Control J3'
   */
  real32_T DistributedControlJ3_Value;

  /* Pooled Parameter (Expression: 2*pi*100)
   * Referenced by:
   *   '<S3>/Speed LP Filter 3'
   *   '<S3>/Speed LP Filter 5'
   */
  real32_T pooled21;

  /* Computed Parameter: ADCLPFilter1_Value
   * Referenced by: '<S3>/ADC LP Filter 1'
   */
  uint16_T ADCLPFilter1_Value;
} ConstP_AcquireAngleAmicSimple_4kHz_M2017b_T;

/* Real-time Model Data Structure */
struct tag_RTM_AcquireAngleAmicSimple_4kHz_M2017b_T {
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
    time_T *taskTimePtrs[3];
    SimStruct childSFunctions[39];
    SimStruct *childSFunctionPtrs[39];
    struct _ssBlkInfo2 blkInfo2[39];
    struct _ssSFcnModelMethods2 methods2[39];
    struct _ssSFcnModelMethods3 methods3[39];
    struct _ssSFcnModelMethods4 methods4[39];
    struct _ssStatesInfo2 statesInfo2[39];
    ssPeriodicStatesInfo periodicStatesInfo[39];
    struct _ssPortInfo2 inputOutputPortInfo2[39];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn15;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn16;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn18;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn19;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn20;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn21;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn22;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn23;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn24;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn25;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn26;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn27;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn28;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn29;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn30;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn31;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn32;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn33;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn34;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn35;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn36;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn37;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn38;
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
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    struct {
      uint8_T TID[3];
    } TaskCounters;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[3];
    time_T offsetTimesArray[3];
    int_T sampleTimeTaskIDArray[3];
    int_T sampleHitArray[3];
    int_T perTaskSampleHitsArray[9];
    time_T tArray[3];
  } Timing;
};

/* Block signals (auto storage) */
extern B_AcquireAngleAmicSimple_4kHz_M2017b_T
  AcquireAngleAmicSimple_4kHz_M2017b_B;

/* Block states (auto storage) */
extern DW_AcquireAngleAmicSimple_4kHz_M2017b_T
  AcquireAngleAmicSimple_4kHz_M2017b_DW;

/* Constant parameters (auto storage) */
extern const ConstP_AcquireAngleAmicSimple_4kHz_M2017b_T
  AcquireAngleAmicSimple_4kHz_M2017b_ConstP;

/* Model entry point functions */
extern void AcquireAngleAmicSimple_4kHz_M2017b_initialize(void);
extern void AcquireAngleAmicSimple_4kHz_M2017b_step(void);
extern void AcquireAngleAmicSimple_4kHz_M2017b_terminate(void);

/* Real-time Model object */
extern RT_MODEL_AcquireAngleAmicSimple_4kHz_M2017b_T *const
  AcquireAngleAmicSimple_4kHz_M2017b_M;

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
 * '<Root>' : 'AcquireAngleAmicSimple_4kHz_M2017b'
 * '<S1>'   : 'AcquireAngleAmicSimple_4kHz_M2017b/Counter Pack Number'
 * '<S2>'   : 'AcquireAngleAmicSimple_4kHz_M2017b/ESM Wait'
 * '<S3>'   : 'AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC'
 * '<S4>'   : 'AcquireAngleAmicSimple_4kHz_M2017b/Master EtherCAT1'
 * '<S5>'   : 'AcquireAngleAmicSimple_4kHz_M2017b/Counter Pack Number/Increment Real World'
 * '<S6>'   : 'AcquireAngleAmicSimple_4kHz_M2017b/Counter Pack Number/Wrap To Zero'
 * '<S7>'   : 'AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3'
 * '<S8>'   : 'AcquireAngleAmicSimple_4kHz_M2017b/Master EtherCAT1/Enabled Set State'
 * '<S9>'   : 'AcquireAngleAmicSimple_4kHz_M2017b/Master EtherCAT1/EtherCAT Network State Machine'
 * '<S10>'  : 'AcquireAngleAmicSimple_4kHz_M2017b/Master EtherCAT1/EtherCAT Network State Machine1'
 * '<S11>'  : 'AcquireAngleAmicSimple_4kHz_M2017b/Master EtherCAT1/Enabled Set State/EtherCAT SetState Error'
 */
#endif                                 /* RTW_HEADER_AcquireAngleAmicSimple_4kHz_M2017b_h_ */
