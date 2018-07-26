/*
 * Chart.c
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

#include "Chart.h"
#include "Chart_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define Chart_IN_CLUTCH_PRESSED        ((uint8_T)1U)
#define Chart_IN_WAIT                  ((uint8_T)2U)

/* Block states (auto storage) */
DW_Chart_T Chart_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_Chart_T Chart_PrevZCX;

/* External inputs (root inport signals with auto storage) */
ExtU_Chart_T Chart_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Chart_T Chart_Y;

/* Real-time model */
RT_MODEL_Chart_T Chart_M_;
RT_MODEL_Chart_T *const Chart_M = &Chart_M_;

/* Model step function */
void Chart_step(void)
{
  ZCEventType zcEvent;

  /* Chart: '<Root>/Chart' incorporates:
   *  TriggerPort: '<S1>/tick_in'
   */
  /* Inport: '<Root>/tick_in' */
  /* Inport: '<Root>/clutch_pedal' */
  zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,&Chart_PrevZCX.Chart_Trig_ZCE,
                     (Chart_U.tick_in));
  if (zcEvent != NO_ZCEVENT) {
    if (Chart_DW.is_c3_Chart == Chart_IN_CLUTCH_PRESSED) {
      /* Inport: '<Root>/clutch_pedal' */
      if (Chart_U.clutch_pedal < 10) {
        Chart_DW.smooth_knobEventCounter++;
        Chart_DW.is_c3_Chart = Chart_IN_WAIT;
      }
    } else {
      if (Chart_U.clutch_pedal > 10) {
        Chart_DW.smooth_clutchEventCounter++;
        Chart_DW.is_c3_Chart = Chart_IN_CLUTCH_PRESSED;
      }
    }

    if (Chart_DW.smooth_knobEventCounter > 0U) {
      /* Outport: '<Root>/smooth_knob' */
      Chart_Y.smooth_knob = !Chart_Y.smooth_knob;
      Chart_DW.smooth_knobEventCounter--;
    }

    if (Chart_DW.hard_knobEventCounter > 0U) {
      /* Outport: '<Root>/hard_knob' */
      Chart_Y.hard_knob = !Chart_Y.hard_knob;
      Chart_DW.hard_knobEventCounter--;
    }

    if (Chart_DW.smooth_clutchEventCounter > 0U) {
      /* Outport: '<Root>/smooth_clutch' */
      Chart_Y.smooth_clutch = !Chart_Y.smooth_clutch;
      Chart_DW.smooth_clutchEventCounter--;
    }

    if (Chart_DW.hard_clutchEventCounter > 0U) {
      /* Outport: '<Root>/hard_clutch' */
      Chart_Y.hard_clutch = !Chart_Y.hard_clutch;
      Chart_DW.hard_clutchEventCounter--;
    }

    if (Chart_DW.smooth_acceleratorEventCounter > 0U) {
      /* Outport: '<Root>/smooth_accelerator' */
      Chart_Y.smooth_accelerator = !Chart_Y.smooth_accelerator;
      Chart_DW.smooth_acceleratorEventCounter--;
    }

    if (Chart_DW.hard_acceleratorEventCounter > 0U) {
      /* Outport: '<Root>/hard_accelerator' */
      Chart_Y.hard_accelerator = !Chart_Y.hard_accelerator;
      Chart_DW.hard_acceleratorEventCounter--;
    }
  }

  /* Matfile logging */
  rt_UpdateTXYLogVars(Chart_M->rtwLogInfo, (&Chart_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [1.0s, 0.0s] */
    if ((rtmGetTFinal(Chart_M)!=-1) &&
        !((rtmGetTFinal(Chart_M)-Chart_M->Timing.taskTime0) >
          Chart_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(Chart_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Chart_M->Timing.clockTick0)) {
    ++Chart_M->Timing.clockTickH0;
  }

  Chart_M->Timing.taskTime0 = Chart_M->Timing.clockTick0 *
    Chart_M->Timing.stepSize0 + Chart_M->Timing.clockTickH0 *
    Chart_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void Chart_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Chart_M, 0,
                sizeof(RT_MODEL_Chart_T));
  rtmSetTFinal(Chart_M, -1);
  Chart_M->Timing.stepSize0 = 1.0;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    Chart_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Chart_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Chart_M->rtwLogInfo, (NULL));
    rtliSetLogT(Chart_M->rtwLogInfo, "tout");
    rtliSetLogX(Chart_M->rtwLogInfo, "");
    rtliSetLogXFinal(Chart_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Chart_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Chart_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(Chart_M->rtwLogInfo, 0);
    rtliSetLogDecimation(Chart_M->rtwLogInfo, 1);
    rtliSetLogY(Chart_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Chart_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Chart_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&Chart_DW, 0,
                sizeof(DW_Chart_T));

  /* external inputs */
  (void)memset((void *)&Chart_U, 0, sizeof(ExtU_Chart_T));

  /* external outputs */
  (void) memset((void *)&Chart_Y, 0,
                sizeof(ExtY_Chart_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(Chart_M->rtwLogInfo, 0.0, rtmGetTFinal
    (Chart_M), Chart_M->Timing.stepSize0, (&rtmGetErrorStatus(Chart_M)));
  Chart_PrevZCX.Chart_Trig_ZCE = UNINITIALIZED_ZCSIG;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Chart_DW.smooth_knobEventCounter = 0U;

  /* SystemInitialize for Outport: '<Root>/smooth_knob' incorporates:
   *  Chart: '<Root>/Chart'
   */
  Chart_Y.smooth_knob = false;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Chart_DW.hard_knobEventCounter = 0U;

  /* SystemInitialize for Outport: '<Root>/hard_knob' incorporates:
   *  Chart: '<Root>/Chart'
   */
  Chart_Y.hard_knob = false;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Chart_DW.smooth_clutchEventCounter = 0U;

  /* SystemInitialize for Outport: '<Root>/smooth_clutch' incorporates:
   *  Chart: '<Root>/Chart'
   */
  Chart_Y.smooth_clutch = false;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Chart_DW.hard_clutchEventCounter = 0U;

  /* SystemInitialize for Outport: '<Root>/hard_clutch' incorporates:
   *  Chart: '<Root>/Chart'
   */
  Chart_Y.hard_clutch = false;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Chart_DW.smooth_acceleratorEventCounter = 0U;

  /* SystemInitialize for Outport: '<Root>/smooth_accelerator' incorporates:
   *  Chart: '<Root>/Chart'
   */
  Chart_Y.smooth_accelerator = false;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Chart_DW.hard_acceleratorEventCounter = 0U;

  /* SystemInitialize for Outport: '<Root>/hard_accelerator' incorporates:
   *  Chart: '<Root>/Chart'
   */
  Chart_Y.hard_accelerator = false;

  /* Chart: '<Root>/Chart' */
  Chart_DW.is_c3_Chart = Chart_IN_WAIT;
}

/* Model terminate function */
void Chart_terminate(void)
{
  /* (no terminate code required) */
}
