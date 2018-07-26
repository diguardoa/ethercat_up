/*
 * Chart.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Chart".
 *
 * Model version              : 1.34
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Wed Jul 25 10:59:40 2018
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Chart_h_
#define RTW_HEADER_Chart_h_
#include <string.h>
#include <float.h>
#include <stddef.h>
#ifndef Chart_COMMON_INCLUDES_
# define Chart_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* Chart_COMMON_INCLUDES_ */

#include "Chart_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_zcfcn.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
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
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  uint32_T smooth_knobEventCounter;    /* '<Root>/Chart' */
  uint32_T hard_knobEventCounter;      /* '<Root>/Chart' */
  uint32_T smooth_clutchEventCounter;  /* '<Root>/Chart' */
  uint32_T hard_clutchEventCounter;    /* '<Root>/Chart' */
  uint32_T smooth_acceleratorEventCounter;/* '<Root>/Chart' */
  uint32_T hard_acceleratorEventCounter;/* '<Root>/Chart' */
  uint8_T is_c3_Chart;                 /* '<Root>/Chart' */
} DW_Chart_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Chart_Trig_ZCE;           /* '<Root>/Chart' */
} PrevZCX_Chart_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  int16_T clutch_pedal;                /* '<Root>/clutch_pedal' */
  int16_T accelerator_pedal;           /* '<Root>/accelerator_pedal' */
  int16_T gear;                        /* '<Root>/gear' */
  int16_T clutch_pressure;             /* '<Root>/clutch_pressure' */
  int16_T accelerator_pressure;        /* '<Root>/accelerator_pressure' */
  int16_T knob_pressure;               /* '<Root>/knob_pressure' */
  real_T tick_in;                      /* '<Root>/tick_in' */
} ExtU_Chart_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  boolean_T smooth_knob;               /* '<Root>/smooth_knob' */
  boolean_T hard_knob;                 /* '<Root>/hard_knob' */
  boolean_T smooth_clutch;             /* '<Root>/smooth_clutch' */
  boolean_T hard_clutch;               /* '<Root>/hard_clutch' */
  boolean_T smooth_accelerator;        /* '<Root>/smooth_accelerator' */
  boolean_T hard_accelerator;          /* '<Root>/hard_accelerator' */
} ExtY_Chart_T;

/* Real-time Model Data Structure */
struct tag_RTM_Chart_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block states (auto storage) */
extern DW_Chart_T Chart_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_Chart_T Chart_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Chart_T Chart_Y;

/* Model entry point functions */
extern void Chart_initialize(void);
extern void Chart_step(void);
extern void Chart_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Chart_T *const Chart_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('state_machine/Chart')    - opens subsystem state_machine/Chart
 * hilite_system('state_machine/Chart/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'state_machine'
 * '<S1>'   : 'state_machine/Chart'
 */
#endif                                 /* RTW_HEADER_Chart_h_ */
