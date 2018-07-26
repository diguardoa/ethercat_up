/*
 * state_machine.c
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

#include "state_machine.h"
#include "state_machine_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define state__IN_Gear_changing_process ((uint8_T)1U)
#define state_m_IN_Wait_for_gear_change ((uint8_T)3U)
#define state_mac_IN_CLUTCH_UNNECESSARY ((uint8_T)1U)
#define state_machi_IN_Error_accelerato ((uint8_T)1U)
#define state_machi_IN_KNOB_UNNECESSARY ((uint8_T)1U)
#define state_machin_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define state_machin_IN_Wait_and_assist ((uint8_T)2U)
#define state_machine_CLUTCH_THRESHOLD ((int16_T)50)
#define state_machine_IN_KNOB_1        ((uint8_T)1U)
#define state_machine_IN_KNOB_2        ((uint8_T)1U)
#define state_machine_IN_KNOB_3        ((uint8_T)2U)
#define state_machine_IN_No_clutch     ((uint8_T)2U)
#define state_machine_IN_START         ((uint8_T)2U)
#define state_machine_IN_WAIT          ((uint8_T)2U)
#define state_machine_IN_WAIT_FOR_KNOB ((uint8_T)2U)
#define state_machine_IN_Wait_knob     ((uint8_T)3U)
#define state_machine_KNOB_PRESSURE_TH (50.0)
#define state_machine_TIME_THRESHOLD   (10.0)

/* Block signals (auto storage) */
B_state_machine_T state_machine_B;

/* Block states (auto storage) */
DW_state_machine_T state_machine_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_state_machine_T state_machine_PrevZCX;

/* Real-time model */
RT_MODEL_state_machine_T state_machine_M_;
RT_MODEL_state_machine_T *const state_machine_M = &state_machine_M_;

/* Forward declaration for local functions */
static void exit_internal_Gear_changing_pro(void);
static void state_machine_broadcast_tick_in(void);
static void rate_scheduler(void);

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (state_machine_M->Timing.TaskCounters.TID[1])++;
  if ((state_machine_M->Timing.TaskCounters.TID[1]) > 49) {/* Sample time: [0.0025s, 0.0s] */
    state_machine_M->Timing.TaskCounters.TID[1] = 0;
  }

  state_machine_M->Timing.sampleHits[1] =
    (state_machine_M->Timing.TaskCounters.TID[1] == 0);
  (state_machine_M->Timing.TaskCounters.TID[2])++;
  if ((state_machine_M->Timing.TaskCounters.TID[2]) > 199) {/* Sample time: [0.01s, 0.0s] */
    state_machine_M->Timing.TaskCounters.TID[2] = 0;
  }

  state_machine_M->Timing.sampleHits[2] =
    (state_machine_M->Timing.TaskCounters.TID[2] == 0);
  (state_machine_M->Timing.TaskCounters.TID[3])++;
  if ((state_machine_M->Timing.TaskCounters.TID[3]) > 399) {/* Sample time: [0.02s, 0.0s] */
    state_machine_M->Timing.TaskCounters.TID[3] = 0;
  }

  state_machine_M->Timing.sampleHits[3] =
    (state_machine_M->Timing.TaskCounters.TID[3] == 0);
}

/* Function for Chart: '<Root>/Chart' */
static void exit_internal_Gear_changing_pro(void)
{
  switch (state_machine_DW.is_Gear_changing_process) {
   case state_machine_IN_KNOB_2:
    state_machine_DW.smooth_clutchEventCounter++;
    state_machine_DW.is_Gear_changing_process = state_machin_IN_NO_ACTIVE_CHILD;
    break;

   case state_machine_IN_START:
    state_machine_DW.smooth_knobEventCounter++;
    state_machine_DW.is_Gear_changing_process = state_machin_IN_NO_ACTIVE_CHILD;
    break;

   case state_m_IN_Wait_for_gear_change:
    if (state_machine_DW.is_Wait_for_gear_change == state_machine_IN_KNOB_3) {
      state_machine_DW.smooth_knobEventCounter++;
      state_machine_DW.is_Wait_for_gear_change = state_machin_IN_NO_ACTIVE_CHILD;
    } else {
      state_machine_DW.is_Wait_for_gear_change = state_machin_IN_NO_ACTIVE_CHILD;
    }

    state_machine_DW.is_Gear_changing_process = state_machin_IN_NO_ACTIVE_CHILD;
    break;

   default:
    state_machine_DW.is_Gear_changing_process = state_machin_IN_NO_ACTIVE_CHILD;
    break;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void state_machine_broadcast_tick_in(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  if (state_machine_DW.is_CLUTCH_and_KNOB == state__IN_Gear_changing_process) {
    if (state_machine_B.DataTypeConversion1 < state_machine_CLUTCH_THRESHOLD) {
      exit_internal_Gear_changing_pro();
      state_machine_DW.is_CLUTCH_and_KNOB = state_machin_IN_Wait_and_assist;
      state_machine_DW.is_Wait_and_assist = state_machine_IN_WAIT;
      state_machine_DW.temporalCounter_i1 = 0U;
      state_machine_DW.completed = true;
    } else {
      switch (state_machine_DW.is_Gear_changing_process) {
       case state_machine_IN_KNOB_2:
        break;

       case state_machine_IN_START:
        if (state_machine_B.DataTypeConversion1_f == 8) {
          state_machine_DW.smooth_knobEventCounter++;
          state_machine_DW.is_Gear_changing_process =
            state_m_IN_Wait_for_gear_change;
          state_machine_DW.is_Wait_for_gear_change = state_machine_IN_KNOB_1;
          state_machine_DW.temporalCounter_i1 = 0U;
        }
        break;

       default:
        if (state_machine_B.DataTypeConversion1_f < 8) {
          if (state_machine_DW.is_Wait_for_gear_change ==
              state_machine_IN_KNOB_3) {
            state_machine_DW.smooth_knobEventCounter++;
            state_machine_DW.is_Wait_for_gear_change =
              state_machin_IN_NO_ACTIVE_CHILD;
          } else {
            state_machine_DW.is_Wait_for_gear_change =
              state_machin_IN_NO_ACTIVE_CHILD;
          }

          state_machine_DW.completed = true;
          state_machine_DW.is_Gear_changing_process = state_machine_IN_KNOB_2;
          state_machine_DW.smooth_clutchEventCounter++;
        } else {
          if ((state_machine_DW.is_Wait_for_gear_change ==
               state_machine_IN_KNOB_1) && (state_machine_DW.temporalCounter_i1 >=
               (int32_T)state_machine_TIME_THRESHOLD)) {
            state_machine_DW.is_Wait_for_gear_change = state_machine_IN_KNOB_3;
            state_machine_DW.smooth_knobEventCounter++;
          }
        }
        break;
      }
    }
  } else {
    guard1 = false;
    guard2 = false;
    switch (state_machine_DW.is_Wait_and_assist) {
     case state_machi_IN_KNOB_UNNECESSARY:
      if (state_machine_B.DataTypeConversion1 > state_machine_CLUTCH_THRESHOLD)
      {
        if (state_machine_B.ManualSwitch > 0) {
          state_machine_DW.hard_knobEventCounter++;
          state_machine_DW.is_Wait_and_assist = state_machin_IN_NO_ACTIVE_CHILD;
          state_machine_DW.completed = false;
          state_machine_DW.is_CLUTCH_and_KNOB = state__IN_Gear_changing_process;
          state_machine_DW.is_Gear_changing_process = state_machine_IN_START;
          state_machine_DW.smooth_knobEventCounter++;
        } else if (state_machine_B.ManualSwitch < 1) {
          state_machine_DW.hard_knobEventCounter++;
          state_machine_DW.is_CLUTCH_and_KNOB = state_machin_IN_Wait_and_assist;
          state_machine_DW.is_Wait_and_assist = state_machine_IN_WAIT;
          state_machine_DW.temporalCounter_i1 = 0U;
          state_machine_DW.completed = true;
        } else {
          guard2 = true;
        }
      } else {
        guard2 = true;
      }
      break;

     case state_machine_IN_WAIT:
      if (state_machine_B.DataTypeConversion1 > state_machine_CLUTCH_THRESHOLD)
      {
        state_machine_DW.completed = false;
        state_machine_DW.is_Wait_and_assist = state_machine_IN_Wait_knob;
        state_machine_DW.is_Wait_knob = state_machine_IN_WAIT_FOR_KNOB;
        state_machine_DW.temporalCounter_i1 = 0U;
      } else {
        if ((state_machine_B.DataTypeConversion1_k > (int32_T)
             state_machine_KNOB_PRESSURE_TH) &&
            (state_machine_DW.temporalCounter_i1 >= (int32_T)
             state_machine_TIME_THRESHOLD)) {
          state_machine_DW.is_Wait_and_assist = state_machi_IN_KNOB_UNNECESSARY;
          state_machine_DW.hard_knobEventCounter++;
        }
      }
      break;

     default:
      if (state_machine_B.DataTypeConversion1_k > (int32_T)
          state_machine_KNOB_PRESSURE_TH) {
        if (state_machine_B.ManualSwitch > 0) {
          if (state_machine_DW.is_Wait_knob == state_mac_IN_CLUTCH_UNNECESSARY)
          {
            state_machine_DW.hard_clutchEventCounter++;
            state_machine_DW.is_Wait_knob = state_machin_IN_NO_ACTIVE_CHILD;
          } else {
            state_machine_DW.is_Wait_knob = state_machin_IN_NO_ACTIVE_CHILD;
          }

          state_machine_DW.is_Wait_and_assist = state_machin_IN_NO_ACTIVE_CHILD;
          state_machine_DW.is_CLUTCH_and_KNOB = state__IN_Gear_changing_process;
          state_machine_DW.is_Gear_changing_process = state_machine_IN_START;
          state_machine_DW.smooth_knobEventCounter++;
        } else if (state_machine_B.ManualSwitch < 1) {
          if (state_machine_DW.is_Wait_knob == state_mac_IN_CLUTCH_UNNECESSARY)
          {
            state_machine_DW.hard_clutchEventCounter++;
            state_machine_DW.is_Wait_knob = state_machin_IN_NO_ACTIVE_CHILD;
          } else {
            state_machine_DW.is_Wait_knob = state_machin_IN_NO_ACTIVE_CHILD;
          }

          state_machine_DW.is_CLUTCH_and_KNOB = state_machin_IN_Wait_and_assist;
          state_machine_DW.is_Wait_and_assist = state_machine_IN_WAIT;
          state_machine_DW.temporalCounter_i1 = 0U;
          state_machine_DW.completed = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
      break;
    }

    if (guard2) {
      if (state_machine_B.DataTypeConversion1_k < (int32_T)
          state_machine_KNOB_PRESSURE_TH) {
        state_machine_DW.hard_knobEventCounter++;
        state_machine_DW.is_Wait_and_assist = state_machine_IN_WAIT;
        state_machine_DW.temporalCounter_i1 = 0U;
        state_machine_DW.completed = true;
      }
    }

    if (guard1) {
      if (state_machine_B.DataTypeConversion1 < state_machine_CLUTCH_THRESHOLD)
      {
        if (state_machine_DW.is_Wait_knob == state_mac_IN_CLUTCH_UNNECESSARY) {
          state_machine_DW.hard_clutchEventCounter++;
          state_machine_DW.is_Wait_knob = state_machin_IN_NO_ACTIVE_CHILD;
        } else {
          state_machine_DW.is_Wait_knob = state_machin_IN_NO_ACTIVE_CHILD;
        }

        state_machine_DW.is_Wait_and_assist = state_machine_IN_WAIT;
        state_machine_DW.temporalCounter_i1 = 0U;
        state_machine_DW.completed = true;
      } else {
        switch (state_machine_DW.is_Wait_knob) {
         case state_mac_IN_CLUTCH_UNNECESSARY:
          break;

         default:
          if ((state_machine_B.DataTypeConversion1_k < (int32_T)
               state_machine_KNOB_PRESSURE_TH) &&
              (state_machine_DW.temporalCounter_i1 >= (int32_T)
               state_machine_TIME_THRESHOLD)) {
            state_machine_DW.is_Wait_knob = state_mac_IN_CLUTCH_UNNECESSARY;
            state_machine_DW.hard_clutchEventCounter++;
          }
          break;
        }
      }
    }
  }

  if (state_machine_DW.is_ACCELERATOR == state_machi_IN_Error_accelerato) {
    state_machine_DW.hard_acceleratorEventCounter++;
    state_machine_DW.is_ACCELERATOR = state_machine_IN_No_clutch;
  }
}

/* Model step function */
void state_machine_step(void)
{
  char_T *sErr;
  uint8_T rtb_clutch_p;
  int32_T rtb_DataTypeConversion3;
  real_T rtb_Sum_j;
  ZCEventType zcEvent;
  uint8_T rtb_DataTypeConversion2[2];
  real32_T tmp;
  uint32_T qY;
  int32_T q0;
  uint32_T qY_0;
  real_T u0;
  if (state_machine_M->Timing.TaskCounters.TID[3] == 0) {
    /* S-Function (sdspFromNetwork): '<S5>/UDP Receive' */
    sErr = GetErrorBuffer(&state_machine_DW.UDPReceive_NetworkLib[0U]);
    rtb_DataTypeConversion3 = 15;
    LibOutputs_Network(&state_machine_DW.UDPReceive_NetworkLib[0U],
                       &state_machine_B.UDPReceive_o1_p[0U],
                       &rtb_DataTypeConversion3);
    if (*sErr != 0) {
      rtmSetErrorStatus(state_machine_M, sErr);
      rtmSetStopRequested(state_machine_M, 1);
    }

    state_machine_B.UDPReceive_o2 = (uint16_T)rtb_DataTypeConversion3;

    /* End of S-Function (sdspFromNetwork): '<S5>/UDP Receive' */

    /* MATLAB Function: '<S5>/MATLAB Function' */
    q0 = state_machine_B.UDPReceive_o1_p[1];
    qY_0 = q0 - 48U;
    if (qY_0 > (uint32_T)q0) {
      qY_0 = 0U;
    }

    rtb_DataTypeConversion3 = (int32_T)(qY_0 * 100U);
    if ((uint32_T)rtb_DataTypeConversion3 > 255U) {
      rtb_DataTypeConversion3 = 255;
    }

    q0 = state_machine_B.UDPReceive_o1_p[3];
    qY_0 = q0 - 48U;
    if (qY_0 > (uint32_T)q0) {
      qY_0 = 0U;
    }

    q0 = (int32_T)(qY_0 * 10U);
    if ((uint32_T)q0 > 255U) {
      q0 = 255;
    }

    rtb_DataTypeConversion3 = (int32_T)((uint32_T)rtb_DataTypeConversion3 + q0);
    if ((uint32_T)rtb_DataTypeConversion3 > 255U) {
      rtb_DataTypeConversion3 = 255;
    }

    q0 = state_machine_B.UDPReceive_o1_p[4];
    qY_0 = q0 - 48U;
    if (qY_0 > (uint32_T)q0) {
      qY_0 = 0U;
    }

    rtb_DataTypeConversion3 += qY_0;
    if ((uint32_T)rtb_DataTypeConversion3 > 255U) {
      rtb_DataTypeConversion3 = 255;
    }

    qY_0 = 100U - rtb_DataTypeConversion3;
    if (qY_0 > 100U) {
      qY_0 = 0U;
    }

    q0 = state_machine_B.UDPReceive_o1_p[11];
    qY = q0 - 48U;
    if (qY > (uint32_T)q0) {
      qY = 0U;
    }

    rtb_DataTypeConversion3 = (int32_T)(qY * 100U);
    if ((uint32_T)rtb_DataTypeConversion3 > 255U) {
      rtb_DataTypeConversion3 = 255;
    }

    q0 = state_machine_B.UDPReceive_o1_p[13];
    qY = q0 - 48U;
    if (qY > (uint32_T)q0) {
      qY = 0U;
    }

    q0 = (int32_T)(qY * 10U);
    if ((uint32_T)q0 > 255U) {
      q0 = 255;
    }

    rtb_DataTypeConversion3 = (int32_T)((uint32_T)rtb_DataTypeConversion3 + q0);
    if ((uint32_T)rtb_DataTypeConversion3 > 255U) {
      rtb_DataTypeConversion3 = 255;
    }

    q0 = state_machine_B.UDPReceive_o1_p[14];
    qY = q0 - 48U;
    if (qY > (uint32_T)q0) {
      qY = 0U;
    }

    rtb_DataTypeConversion3 += qY;
    if ((uint32_T)rtb_DataTypeConversion3 > 255U) {
      rtb_DataTypeConversion3 = 255;
    }

    qY = 100U - rtb_DataTypeConversion3;
    if (qY > 100U) {
      qY = 0U;
    }

    /* DataTypeConversion: '<S5>/Data Type Conversion1' incorporates:
     *  MATLAB Function: '<S5>/MATLAB Function'
     */
    state_machine_B.DataTypeConversion1 = (uint8_T)qY_0;

    /* DataTypeConversion: '<S5>/Data Type Conversion2' incorporates:
     *  MATLAB Function: '<S5>/MATLAB Function'
     */
    state_machine_B.DataTypeConversion2 = (uint8_T)qY;
  }

  /* S-Function (sdspFromNetwork): '<S4>/UDP Receive' */
  sErr = GetErrorBuffer(&state_machine_DW.UDPReceive_NetworkLib_i[0U]);
  rtb_DataTypeConversion3 = 4;
  LibOutputs_Network(&state_machine_DW.UDPReceive_NetworkLib_i[0U],
                     &state_machine_B.UDPReceive_o1_i[0U],
                     &rtb_DataTypeConversion3);
  if (*sErr != 0) {
    rtmSetErrorStatus(state_machine_M, sErr);
    rtmSetStopRequested(state_machine_M, 1);
  }

  state_machine_B.UDPReceive_o2_i = (uint16_T)rtb_DataTypeConversion3;

  /* End of S-Function (sdspFromNetwork): '<S4>/UDP Receive' */

  /* S-Function (byte2any): '<S4>/Byte Unpack' */

  /* Unpack: <S4>/Byte Unpack */
  (void) memcpy(&state_machine_B.ByteUnpack, &state_machine_B.UDPReceive_o1_i[0],
                4);

  /* DataTypeConversion: '<S4>/Data Type Conversion' */
  tmp = floorf(state_machine_B.ByteUnpack);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = fmodf(tmp, 256.0F);
  }

  rtb_clutch_p = (uint8_T)(tmp < 0.0F ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp
    : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S4>/Data Type Conversion' */

  /* DataTypeConversion: '<S4>/Data Type Conversion1' */
  state_machine_B.DataTypeConversion1_f = rtb_clutch_p;
  if (state_machine_M->Timing.TaskCounters.TID[2] == 0) {
    /* S-Function (sdspFromNetwork): '<S3>/UDP Receive' */
    sErr = GetErrorBuffer(&state_machine_DW.UDPReceive_NetworkLib_b[0U]);
    rtb_DataTypeConversion3 = 1;
    LibOutputs_Network(&state_machine_DW.UDPReceive_NetworkLib_b[0U],
                       &state_machine_B.UDPReceive_o1, &rtb_DataTypeConversion3);
    if (*sErr != 0) {
      rtmSetErrorStatus(state_machine_M, sErr);
      rtmSetStopRequested(state_machine_M, 1);
    }

    state_machine_B.UDPReceive_o2_l = (uint16_T)rtb_DataTypeConversion3;

    /* End of S-Function (sdspFromNetwork): '<S3>/UDP Receive' */

    /* DataTypeConversion: '<S3>/Data Type Conversion3' */
    rtb_DataTypeConversion3 = state_machine_B.UDPReceive_o1;

    /* Math: '<S3>/Log' incorporates:
     *  MATLAB Function: '<S3>/MATLAB Function'
     *
     * About '<S3>/Log':
     *  Operator: log10
     */
    u0 = log10(1.0 / ((4096.0 - (real_T)rtb_DataTypeConversion3) * 1000.0 /
                      (real_T)rtb_DataTypeConversion3));

    /* Saturate: '<S3>/Saturation' */
    if (u0 > state_machine_P.Saturation_UpperSat) {
      u0 = state_machine_P.Saturation_UpperSat;
    } else {
      if (u0 < state_machine_P.Saturation_LowerSat) {
        u0 = state_machine_P.Saturation_LowerSat;
      }
    }

    /* End of Saturate: '<S3>/Saturation' */

    /* DataTypeConversion: '<S3>/Data Type Conversion1' incorporates:
     *  Constant: '<S3>/Constant'
     *  Gain: '<S3>/Gain'
     *  Sum: '<S3>/Sum'
     */
    u0 = floor((u0 + state_machine_P.Constant_Value) * state_machine_P.Gain_Gain);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 65536.0);
    }

    state_machine_B.DataTypeConversion1_k = (int16_T)(u0 < 0.0 ? (int32_T)
      (int16_T)-(int16_T)(uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

    /* End of DataTypeConversion: '<S3>/Data Type Conversion1' */
  }

  if (state_machine_M->Timing.TaskCounters.TID[1] == 0) {
    /* ManualSwitch: '<Root>/Manual Switch' incorporates:
     *  Constant: '<Root>/Constant'
     *  Constant: '<Root>/Constant1'
     */
    if (state_machine_P.ManualSwitch_CurrentSetting == 1) {
      state_machine_B.ManualSwitch = state_machine_P.Constant_Value_o;
    } else {
      state_machine_B.ManualSwitch = state_machine_P.Constant1_Value;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch' */

    /* Sum: '<S2>/Sum' incorporates:
     *  Constant: '<S2>/Constant'
     *  UnitDelay: '<S2>/Unit Delay'
     */
    rtb_Sum_j = state_machine_P.Constant_Value_j -
      state_machine_DW.UnitDelay_DSTATE;

    /* Chart: '<Root>/Chart' incorporates:
     *  TriggerPort: '<S1>/tick_in'
     */
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,&state_machine_PrevZCX.Chart_Trig_ZCE,
                       (rtb_Sum_j));
    if (zcEvent != NO_ZCEVENT) {
      if (state_machine_DW.temporalCounter_i1 < 15U) {
        state_machine_DW.temporalCounter_i1++;
      }

      state_machine_broadcast_tick_in();
      if (state_machine_DW.smooth_knobEventCounter > 0U) {
        state_machine_B.smooth_knob = !state_machine_B.smooth_knob;
        state_machine_DW.smooth_knobEventCounter--;
      }

      if (state_machine_DW.hard_knobEventCounter > 0U) {
        state_machine_B.hard_knob = !state_machine_B.hard_knob;
        state_machine_DW.hard_knobEventCounter--;
      }

      if (state_machine_DW.smooth_clutchEventCounter > 0U) {
        state_machine_B.smooth_clutch = !state_machine_B.smooth_clutch;
        state_machine_DW.smooth_clutchEventCounter--;
      }

      if (state_machine_DW.hard_clutchEventCounter > 0U) {
        state_machine_B.hard_clutch = !state_machine_B.hard_clutch;
        state_machine_DW.hard_clutchEventCounter--;
      }

      if (state_machine_DW.smooth_acceleratorEventCounter > 0U) {
        state_machine_B.smooth_accelerator = !state_machine_B.smooth_accelerator;
        state_machine_DW.smooth_acceleratorEventCounter--;
      }

      if (state_machine_DW.hard_acceleratorEventCounter > 0U) {
        state_machine_B.hard_accelerator = !state_machine_B.hard_accelerator;
        state_machine_DW.hard_acceleratorEventCounter--;
      }
    }

    /* MATLAB Function: '<S6>/Communication Protocol1' */
    if (state_machine_B.smooth_knob) {
      rtb_DataTypeConversion3 = 1;
    } else if (state_machine_B.hard_knob) {
      rtb_DataTypeConversion3 = 2;
    } else {
      rtb_DataTypeConversion3 = 0;
    }

    /* End of MATLAB Function: '<S6>/Communication Protocol1' */

    /* DataTypeConversion: '<S6>/Data Type Conversion2' */
    rtb_DataTypeConversion2[0] = (uint8_T)(int32_T)fmod(rtb_DataTypeConversion3,
      256.0);

    /* RateTransition: '<S6>/Rate Transition' */
    if (state_machine_M->Timing.TaskCounters.TID[2] == 0) {
      state_machine_B.RateTransition[0] = rtb_DataTypeConversion2[0];
      state_machine_B.RateTransition[1] = 0U;
    }

    /* End of RateTransition: '<S6>/Rate Transition' */
  }

  /* Sum: '<S4>/Sum' incorporates:
   *  Constant: '<S4>/length1'
   */
  rtb_clutch_p = (uint8_T)((uint32_T)state_machine_P.length1_Value +
    rtb_clutch_p);

  /* RateTransition: '<S4>/Rate Transition' */
  if (state_machine_M->Timing.TaskCounters.TID[3] == 0) {
    state_machine_B.RateTransition_m = rtb_clutch_p;
  }

  /* End of RateTransition: '<S4>/Rate Transition' */

  /* S-Function (LimitaSamplingFreq2): '<S7>/S-Function2' */

  /* Level2 S-Function Block: '<S7>/S-Function2' (LimitaSamplingFreq2) */
  {
    SimStruct *rts = state_machine_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  if (state_machine_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for UnitDelay: '<S2>/Unit Delay' */
    state_machine_DW.UnitDelay_DSTATE = rtb_Sum_j;
  }

  if (state_machine_M->Timing.TaskCounters.TID[2] == 0) {
    /* Update for S-Function (sdspToNetwork): '<S6>/UDP Send2' */
    sErr = GetErrorBuffer(&state_machine_DW.UDPSend2_NetworkLib[0U]);
    LibUpdate_Network(&state_machine_DW.UDPSend2_NetworkLib[0U],
                      &state_machine_B.RateTransition[0U], 2);
    if (*sErr != 0) {
      rtmSetErrorStatus(state_machine_M, sErr);
      rtmSetStopRequested(state_machine_M, 1);
    }

    /* End of Update for S-Function (sdspToNetwork): '<S6>/UDP Send2' */
  }

  if (state_machine_M->Timing.TaskCounters.TID[3] == 0) {
    /* Update for S-Function (sdspToNetwork): '<S4>/UDP Send1' */
    sErr = GetErrorBuffer(&state_machine_DW.UDPSend1_NetworkLib[0U]);
    LibUpdate_Network(&state_machine_DW.UDPSend1_NetworkLib[0U],
                      &state_machine_B.RateTransition_m, 1);
    if (*sErr != 0) {
      rtmSetErrorStatus(state_machine_M, sErr);
      rtmSetStopRequested(state_machine_M, 1);
    }

    /* End of Update for S-Function (sdspToNetwork): '<S4>/UDP Send1' */
  }

  /* Update for S-Function (LimitaSamplingFreq2): '<S7>/S-Function2' */
  /* Level2 S-Function Block: '<S7>/S-Function2' (LimitaSamplingFreq2) */
  {
    SimStruct *rts = state_machine_M->childSfunctions[0];
    sfcnUpdate(rts,0);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Matfile logging */
  rt_UpdateTXYLogVars(state_machine_M->rtwLogInfo, (state_machine_M->Timing.t));

  /* signal main to stop simulation */
  {                                    /* Sample time: [5.0E-5s, 0.0s] */
    if ((rtmGetTFinal(state_machine_M)!=-1) &&
        !((rtmGetTFinal(state_machine_M)-state_machine_M->Timing.t[0]) >
          state_machine_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(state_machine_M, "Simulation finished");
    }

    if (rtmGetStopRequested(state_machine_M)) {
      rtmSetErrorStatus(state_machine_M, "Simulation finished");
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
  if (!(++state_machine_M->Timing.clockTick0)) {
    ++state_machine_M->Timing.clockTickH0;
  }

  state_machine_M->Timing.t[0] = state_machine_M->Timing.clockTick0 *
    state_machine_M->Timing.stepSize0 + state_machine_M->Timing.clockTickH0 *
    state_machine_M->Timing.stepSize0 * 4294967296.0;
  rate_scheduler();
}

/* Model initialize function */
void state_machine_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)state_machine_M, 0,
                sizeof(RT_MODEL_state_machine_T));
  rtsiSetSolverName(&state_machine_M->solverInfo,"FixedStepDiscrete");
  state_machine_M->solverInfoPtr = (&state_machine_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = state_machine_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    mdlTsMap[3] = 3;
    state_machine_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    state_machine_M->Timing.sampleTimes =
      (&state_machine_M->Timing.sampleTimesArray[0]);
    state_machine_M->Timing.offsetTimes =
      (&state_machine_M->Timing.offsetTimesArray[0]);

    /* task periods */
    state_machine_M->Timing.sampleTimes[0] = (5.0E-5);
    state_machine_M->Timing.sampleTimes[1] = (0.0025);
    state_machine_M->Timing.sampleTimes[2] = (0.01);
    state_machine_M->Timing.sampleTimes[3] = (0.02);

    /* task offsets */
    state_machine_M->Timing.offsetTimes[0] = (0.0);
    state_machine_M->Timing.offsetTimes[1] = (0.0);
    state_machine_M->Timing.offsetTimes[2] = (0.0);
    state_machine_M->Timing.offsetTimes[3] = (0.0);
  }

  rtmSetTPtr(state_machine_M, &state_machine_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = state_machine_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    mdlSampleHits[2] = 1;
    mdlSampleHits[3] = 1;
    state_machine_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(state_machine_M, -1);
  state_machine_M->Timing.stepSize0 = 5.0E-5;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    state_machine_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(state_machine_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(state_machine_M->rtwLogInfo, (NULL));
    rtliSetLogT(state_machine_M->rtwLogInfo, "tout");
    rtliSetLogX(state_machine_M->rtwLogInfo, "");
    rtliSetLogXFinal(state_machine_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(state_machine_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(state_machine_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(state_machine_M->rtwLogInfo, 0);
    rtliSetLogDecimation(state_machine_M->rtwLogInfo, 1);
    rtliSetLogY(state_machine_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(state_machine_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(state_machine_M->rtwLogInfo, (NULL));
  }

  state_machine_M->solverInfoPtr = (&state_machine_M->solverInfo);
  state_machine_M->Timing.stepSize = (5.0E-5);
  rtsiSetFixedStepSize(&state_machine_M->solverInfo, 5.0E-5);
  rtsiSetSolverMode(&state_machine_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) memset(((void *) &state_machine_B), 0,
                sizeof(B_state_machine_T));

  /* states (dwork) */
  (void) memset((void *)&state_machine_DW, 0,
                sizeof(DW_state_machine_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &state_machine_M->NonInlinedSFcns.sfcnInfo;
    state_machine_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(state_machine_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &state_machine_M->Sizes.numSampTimes);
    state_machine_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (state_machine_M)[0]);
    state_machine_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (state_machine_M)[1]);
    state_machine_M->NonInlinedSFcns.taskTimePtrs[2] = &(rtmGetTPtr
      (state_machine_M)[2]);
    state_machine_M->NonInlinedSFcns.taskTimePtrs[3] = &(rtmGetTPtr
      (state_machine_M)[3]);
    rtssSetTPtrPtr(sfcnInfo,state_machine_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(state_machine_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(state_machine_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(state_machine_M));
    rtssSetStepSizePtr(sfcnInfo, &state_machine_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(state_machine_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &state_machine_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &state_machine_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &state_machine_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &state_machine_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &state_machine_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &state_machine_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &state_machine_M->solverInfoPtr);
  }

  state_machine_M->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)&state_machine_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  1*sizeof(SimStruct));
    state_machine_M->childSfunctions =
      (&state_machine_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    state_machine_M->childSfunctions[0] =
      (&state_machine_M->NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: state_machine/<S7>/S-Function2 (LimitaSamplingFreq2) */
    {
      SimStruct *rts = state_machine_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = state_machine_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = state_machine_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = state_machine_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &state_machine_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &state_machine_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, state_machine_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &state_machine_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &state_machine_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &state_machine_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &state_machine_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &state_machine_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &state_machine_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &state_machine_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &state_machine_B.SFunction2_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &state_machine_B.SFunction2_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function2");
      ssSetPath(rts, "state_machine/Limit Sample Time/S-Function2");
      ssSetRTModel(rts,state_machine_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &state_machine_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)state_machine_P.SFunction2_P1_Size);
      }

      /* registration */
      LimitaSamplingFreq2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 5.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(state_machine_M->rtwLogInfo, 0.0,
    rtmGetTFinal(state_machine_M), state_machine_M->Timing.stepSize0,
    (&rtmGetErrorStatus(state_machine_M)));

  {
    char_T *sErr;

    /* Start for S-Function (sdspFromNetwork): '<S5>/UDP Receive' */
    sErr = GetErrorBuffer(&state_machine_DW.UDPReceive_NetworkLib[0U]);
    CreateUDPInterface(&state_machine_DW.UDPReceive_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&state_machine_DW.UDPReceive_NetworkLib[0U], 0,
                        "0.0.0.0", state_machine_P.UDPReceive_localPort,
                        "127.0.0.1", -1, 20, 1, 0);
    }

    if (*sErr == 0) {
      LibStart(&state_machine_DW.UDPReceive_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&state_machine_DW.UDPReceive_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(state_machine_M, sErr);
        rtmSetStopRequested(state_machine_M, 1);
      }
    }

    /* End of Start for S-Function (sdspFromNetwork): '<S5>/UDP Receive' */

    /* Start for S-Function (sdspFromNetwork): '<S4>/UDP Receive' */
    sErr = GetErrorBuffer(&state_machine_DW.UDPReceive_NetworkLib_i[0U]);
    CreateUDPInterface(&state_machine_DW.UDPReceive_NetworkLib_i[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&state_machine_DW.UDPReceive_NetworkLib_i[0U], 0,
                        "0.0.0.0", state_machine_P.UDPReceive_localPort_f,
                        "192.168.0.2", -1, 4, 1, 0);
    }

    if (*sErr == 0) {
      LibStart(&state_machine_DW.UDPReceive_NetworkLib_i[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&state_machine_DW.UDPReceive_NetworkLib_i[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(state_machine_M, sErr);
        rtmSetStopRequested(state_machine_M, 1);
      }
    }

    /* End of Start for S-Function (sdspFromNetwork): '<S4>/UDP Receive' */

    /* Start for S-Function (sdspFromNetwork): '<S3>/UDP Receive' */
    sErr = GetErrorBuffer(&state_machine_DW.UDPReceive_NetworkLib_b[0U]);
    CreateUDPInterface(&state_machine_DW.UDPReceive_NetworkLib_b[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&state_machine_DW.UDPReceive_NetworkLib_b[0U], 0,
                        "0.0.0.0", state_machine_P.UDPReceive_localPort_o,
                        "192.168.0.30", -1, 2, 2, 0);
    }

    if (*sErr == 0) {
      LibStart(&state_machine_DW.UDPReceive_NetworkLib_b[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&state_machine_DW.UDPReceive_NetworkLib_b[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(state_machine_M, sErr);
        rtmSetStopRequested(state_machine_M, 1);
      }
    }

    /* End of Start for S-Function (sdspFromNetwork): '<S3>/UDP Receive' */

    /* Start for S-Function (sdspToNetwork): '<S6>/UDP Send2' */
    sErr = GetErrorBuffer(&state_machine_DW.UDPSend2_NetworkLib[0U]);
    CreateUDPInterface(&state_machine_DW.UDPSend2_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&state_machine_DW.UDPSend2_NetworkLib[0U], 1, "0.0.0.0",
                        -1, "192.168.0.30", state_machine_P.UDPSend2_remotePort,
                        8192, 1, 0);
    }

    if (*sErr == 0) {
      LibStart(&state_machine_DW.UDPSend2_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&state_machine_DW.UDPSend2_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(state_machine_M, sErr);
        rtmSetStopRequested(state_machine_M, 1);
      }
    }

    /* End of Start for S-Function (sdspToNetwork): '<S6>/UDP Send2' */

    /* Start for S-Function (sdspToNetwork): '<S4>/UDP Send1' */
    sErr = GetErrorBuffer(&state_machine_DW.UDPSend1_NetworkLib[0U]);
    CreateUDPInterface(&state_machine_DW.UDPSend1_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&state_machine_DW.UDPSend1_NetworkLib[0U], 1, "0.0.0.0",
                        -1, "127.0.0.1", state_machine_P.UDPSend1_remotePort,
                        8192, 1, 0);
    }

    if (*sErr == 0) {
      LibStart(&state_machine_DW.UDPSend1_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&state_machine_DW.UDPSend1_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(state_machine_M, sErr);
        rtmSetStopRequested(state_machine_M, 1);
      }
    }

    /* End of Start for S-Function (sdspToNetwork): '<S4>/UDP Send1' */

    /* Start for S-Function (LimitaSamplingFreq2): '<S7>/S-Function2' */
    /* Level2 S-Function Block: '<S7>/S-Function2' (LimitaSamplingFreq2) */
    {
      SimStruct *rts = state_machine_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  state_machine_PrevZCX.Chart_Trig_ZCE = UNINITIALIZED_ZCSIG;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
  state_machine_DW.UnitDelay_DSTATE = state_machine_P.UnitDelay_InitialCondition;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  state_machine_DW.is_Gear_changing_process = state_machin_IN_NO_ACTIVE_CHILD;
  state_machine_DW.is_Wait_for_gear_change = state_machin_IN_NO_ACTIVE_CHILD;
  state_machine_DW.is_Wait_knob = state_machin_IN_NO_ACTIVE_CHILD;
  state_machine_DW.smooth_knobEventCounter = 0U;
  state_machine_B.smooth_knob = false;
  state_machine_DW.hard_knobEventCounter = 0U;
  state_machine_B.hard_knob = false;
  state_machine_DW.smooth_clutchEventCounter = 0U;
  state_machine_B.smooth_clutch = false;
  state_machine_DW.hard_clutchEventCounter = 0U;
  state_machine_B.hard_clutch = false;
  state_machine_DW.smooth_acceleratorEventCounter = 0U;
  state_machine_B.smooth_accelerator = false;
  state_machine_DW.hard_acceleratorEventCounter = 0U;
  state_machine_B.hard_accelerator = false;

  /* Chart: '<Root>/Chart' */
  state_machine_DW.is_CLUTCH_and_KNOB = state_machin_IN_Wait_and_assist;
  state_machine_DW.is_Wait_and_assist = state_machine_IN_WAIT;
  state_machine_DW.temporalCounter_i1 = 0U;
  state_machine_DW.completed = true;
  state_machine_DW.is_ACCELERATOR = state_machine_IN_No_clutch;
}

/* Model terminate function */
void state_machine_terminate(void)
{
  char_T *sErr;

  /* Terminate for S-Function (sdspFromNetwork): '<S5>/UDP Receive' */
  sErr = GetErrorBuffer(&state_machine_DW.UDPReceive_NetworkLib[0U]);
  LibTerminate(&state_machine_DW.UDPReceive_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(state_machine_M, sErr);
    rtmSetStopRequested(state_machine_M, 1);
  }

  LibDestroy(&state_machine_DW.UDPReceive_NetworkLib[0U], 0);
  DestroyUDPInterface(&state_machine_DW.UDPReceive_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspFromNetwork): '<S5>/UDP Receive' */

  /* Terminate for S-Function (sdspFromNetwork): '<S4>/UDP Receive' */
  sErr = GetErrorBuffer(&state_machine_DW.UDPReceive_NetworkLib_i[0U]);
  LibTerminate(&state_machine_DW.UDPReceive_NetworkLib_i[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(state_machine_M, sErr);
    rtmSetStopRequested(state_machine_M, 1);
  }

  LibDestroy(&state_machine_DW.UDPReceive_NetworkLib_i[0U], 0);
  DestroyUDPInterface(&state_machine_DW.UDPReceive_NetworkLib_i[0U]);

  /* End of Terminate for S-Function (sdspFromNetwork): '<S4>/UDP Receive' */

  /* Terminate for S-Function (sdspFromNetwork): '<S3>/UDP Receive' */
  sErr = GetErrorBuffer(&state_machine_DW.UDPReceive_NetworkLib_b[0U]);
  LibTerminate(&state_machine_DW.UDPReceive_NetworkLib_b[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(state_machine_M, sErr);
    rtmSetStopRequested(state_machine_M, 1);
  }

  LibDestroy(&state_machine_DW.UDPReceive_NetworkLib_b[0U], 0);
  DestroyUDPInterface(&state_machine_DW.UDPReceive_NetworkLib_b[0U]);

  /* End of Terminate for S-Function (sdspFromNetwork): '<S3>/UDP Receive' */

  /* Terminate for S-Function (sdspToNetwork): '<S6>/UDP Send2' */
  sErr = GetErrorBuffer(&state_machine_DW.UDPSend2_NetworkLib[0U]);
  LibTerminate(&state_machine_DW.UDPSend2_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(state_machine_M, sErr);
    rtmSetStopRequested(state_machine_M, 1);
  }

  LibDestroy(&state_machine_DW.UDPSend2_NetworkLib[0U], 1);
  DestroyUDPInterface(&state_machine_DW.UDPSend2_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspToNetwork): '<S6>/UDP Send2' */

  /* Terminate for S-Function (sdspToNetwork): '<S4>/UDP Send1' */
  sErr = GetErrorBuffer(&state_machine_DW.UDPSend1_NetworkLib[0U]);
  LibTerminate(&state_machine_DW.UDPSend1_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(state_machine_M, sErr);
    rtmSetStopRequested(state_machine_M, 1);
  }

  LibDestroy(&state_machine_DW.UDPSend1_NetworkLib[0U], 1);
  DestroyUDPInterface(&state_machine_DW.UDPSend1_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspToNetwork): '<S4>/UDP Send1' */

  /* Terminate for S-Function (LimitaSamplingFreq2): '<S7>/S-Function2' */
  /* Level2 S-Function Block: '<S7>/S-Function2' (LimitaSamplingFreq2) */
  {
    SimStruct *rts = state_machine_M->childSfunctions[0];
    sfcnTerminate(rts);
  }
}
