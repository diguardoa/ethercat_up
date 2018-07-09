/*
 * AcquireAngleAmicSimple_4kHz_M2017b.c
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

#include "AcquireAngleAmicSimple_4kHz_M2017b.h"
#include "AcquireAngleAmicSimple_4kHz_M2017b_private.h"

/* Named constants for Chart: '<Root>/ESM Wait' */
#define AcquireAngleAmicSimple__IN_ESM0 ((uint8_T)1U)
#define AcquireAngleAmicSimple__IN_ESM1 ((uint8_T)2U)
#define AcquireAngleAmicSimple__IN_WAIT ((uint8_T)3U)
#define AcquireAngle_IN_NO_ACTIVE_CHILD ((uint8_T)0U)

/* Named constants for Chart: '<S8>/EtherCAT SetState Error' */
#define AcquireAngleAmicSimple_4_IN_ERR ((uint8_T)1U)
#define AcquireAngleAmicSimple__IN_INIT ((uint8_T)2U)

/* Named constants for Chart: '<S4>/EtherCAT Network State Machine' */
#define AcquireAngleAmicSimp_IN_PRE_OP2 ((uint8_T)4U)
#define AcquireAngleAmicSimpl_IN_PRE_OP ((uint8_T)3U)
#define AcquireAngleAmicSimple_4_IN_OP2 ((uint8_T)2U)
#define AcquireAngleAmicSimple_4k_IN_OP ((uint8_T)1U)

/* Named constants for Chart: '<S4>/EtherCAT Network State Machine1' */
#define AcquireAngleAmicSimp_IN_DISABLE ((uint8_T)1U)
#define AcquireAngleAmicSimpl_IN_ENABLE ((uint8_T)2U)

/* Block signals (auto storage) */
B_AcquireAngleAmicSimple_4kHz_M2017b_T AcquireAngleAmicSimple_4kHz_M2017b_B;

/* Block states (auto storage) */
DW_AcquireAngleAmicSimple_4kHz_M2017b_T AcquireAngleAmicSimple_4kHz_M2017b_DW;

/* Real-time model */
RT_MODEL_AcquireAngleAmicSimple_4kHz_M2017b_T
  AcquireAngleAmicSimple_4kHz_M2017b_M_;
RT_MODEL_AcquireAngleAmicSimple_4kHz_M2017b_T *const
  AcquireAngleAmicSimple_4kHz_M2017b_M = &AcquireAngleAmicSimple_4kHz_M2017b_M_;
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
  (AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.TaskCounters.TID[2])++;
  if ((AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.TaskCounters.TID[2]) > 1) {/* Sample time: [0.0005s, 0.0s] */
    AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.TaskCounters.TID[2] = 0;
  }

  AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.sampleHits[2] =
    (AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.TaskCounters.TID[2] == 0);
}

/* Model step function */
void AcquireAngleAmicSimple_4kHz_M2017b_step(void)
{
  int32_T i;

  {
    /* user code (Output function Header) */
    {
      /*------------ S-Function Block: <Root>/EtherCAT Init 1 Process Received Frames ------------*/
      int32_T data[6]= { 0 };

      int32_T msdata[4] = { 0 };

      xpcEtherCATReadProcessData(0,NULL);
      mwErrorGet((int_T)0,
                 &data[0], &data[1], &data[2], &data[3],&data[4],&data[5]);
      memcpy(&AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATInit1[0], data,6*
             sizeof(int32_T));
      mwErrorClear( (int_T)0 );

      // Clear all momentary triggered values
    }

    if (AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.TaskCounters.TID[2] == 0) {
      /* DataTypeConversion: '<S4>/C1' */
      for (i = 0; i < 6; i++) {
        AcquireAngleAmicSimple_4kHz_M2017b_B.C1[i] =
          AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATInit1[i];
      }

      /* End of DataTypeConversion: '<S4>/C1' */
    }

    /* Memory: '<S4>/Memory1' */
    AcquireAngleAmicSimple_4kHz_M2017b_B.Memory1 =
      AcquireAngleAmicSimple_4kHz_M2017b_DW.Memory1_PreviousInput;

    /* Clock: '<Root>/Clock' */
    AcquireAngleAmicSimple_4kHz_M2017b_B.Clock =
      AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.t[0];

    /* ManualSwitch: '<Root>/ESM Switch' incorporates:
     *  Constant: '<Root>/OP'
     *  Constant: '<Root>/PREOP'
     */
    if (((uint8_T)0U) == 1) {
      AcquireAngleAmicSimple_4kHz_M2017b_B.ESMSwitch = ((uint8_T)1U);
    } else {
      AcquireAngleAmicSimple_4kHz_M2017b_B.ESMSwitch = ((uint8_T)0U);
    }

    /* End of ManualSwitch: '<Root>/ESM Switch' */

    /* Chart: '<Root>/ESM Wait' */
    if (AcquireAngleAmicSimple_4kHz_M2017b_DW.is_active_c12_AcquireAngleAmicS ==
        0U) {
      AcquireAngleAmicSimple_4kHz_M2017b_DW.is_active_c12_AcquireAngleAmicS = 1U;
      if (AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c12_AcquireAngleAmicSimple_4
          != AcquireAngleAmicSimple__IN_ESM0) {
        AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c12_AcquireAngleAmicSimple_4 =
          AcquireAngleAmicSimple__IN_ESM0;
        AcquireAngleAmicSimple_4kHz_M2017b_B.esm_out = 0U;
      }
    } else {
      switch
        (AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c12_AcquireAngleAmicSimple_4)
      {
       case AcquireAngleAmicSimple__IN_ESM0:
        if (AcquireAngleAmicSimple_4kHz_M2017b_B.ESMSwitch == 1) {
          AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c12_AcquireAngleAmicSimple_4 =
            AcquireAngleAmicSimple__IN_WAIT;
          AcquireAngleAmicSimple_4kHz_M2017b_DW.current_time =
            AcquireAngleAmicSimple_4kHz_M2017b_B.Clock;
          AcquireAngleAmicSimple_4kHz_M2017b_B.esm_out = 0U;
        }
        break;

       case AcquireAngleAmicSimple__IN_ESM1:
        if (AcquireAngleAmicSimple_4kHz_M2017b_B.ESMSwitch == 0) {
          if (AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c12_AcquireAngleAmicSimple_4
              == AcquireAngleAmicSimple__IN_ESM1) {
            AcquireAngleAmicSimple_4kHz_M2017b_B.esm_out = 0U;
            AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c12_AcquireAngleAmicSimple_4
              = AcquireAngle_IN_NO_ACTIVE_CHILD;
          }

          if (AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c12_AcquireAngleAmicSimple_4
              != AcquireAngleAmicSimple__IN_ESM0) {
            AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c12_AcquireAngleAmicSimple_4
              = AcquireAngleAmicSimple__IN_ESM0;
            AcquireAngleAmicSimple_4kHz_M2017b_B.esm_out = 0U;
          }
        }
        break;

       case AcquireAngleAmicSimple__IN_WAIT:
        if (AcquireAngleAmicSimple_4kHz_M2017b_B.Clock -
            AcquireAngleAmicSimple_4kHz_M2017b_DW.current_time > 0.3) {
          if (AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c12_AcquireAngleAmicSimple_4
              == AcquireAngleAmicSimple__IN_WAIT) {
            AcquireAngleAmicSimple_4kHz_M2017b_B.esm_out = 1U;
            AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c12_AcquireAngleAmicSimple_4
              = AcquireAngle_IN_NO_ACTIVE_CHILD;
          }

          if (AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c12_AcquireAngleAmicSimple_4
              != AcquireAngleAmicSimple__IN_ESM1) {
            AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c12_AcquireAngleAmicSimple_4
              = AcquireAngleAmicSimple__IN_ESM1;
            AcquireAngleAmicSimple_4kHz_M2017b_B.esm_out = 1U;
          }
        }
        break;

       default:
        /* Unreachable state, for coverage only */
        AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c12_AcquireAngleAmicSimple_4 =
          AcquireAngle_IN_NO_ACTIVE_CHILD;
        break;
      }
    }

    /* End of Chart: '<Root>/ESM Wait' */

    /* Chart: '<S4>/EtherCAT Network State Machine' */
    if (AcquireAngleAmicSimple_4kHz_M2017b_DW.is_active_c21_AcquireAngleAmicS ==
        0U) {
      AcquireAngleAmicSimple_4kHz_M2017b_DW.is_active_c21_AcquireAngleAmicS = 1U;
      AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c21_AcquireAngleAmicSimple_4 =
        AcquireAngleAmicSimpl_IN_PRE_OP;
      AcquireAngleAmicSimple_4kHz_M2017b_B.State = 2;
      AcquireAngleAmicSimple_4kHz_M2017b_B.StateChanged = 0U;
    } else {
      switch
        (AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c21_AcquireAngleAmicSimple_4)
      {
       case AcquireAngleAmicSimple_4k_IN_OP:
        AcquireAngleAmicSimple_4kHz_M2017b_B.State = 8;
        AcquireAngleAmicSimple_4kHz_M2017b_B.StateChanged = 1U;
        if (AcquireAngleAmicSimple_4kHz_M2017b_B.esm_out == 0) {
          AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c21_AcquireAngleAmicSimple_4 =
            AcquireAngleAmicSimple_4_IN_OP2;
          AcquireAngleAmicSimple_4kHz_M2017b_B.State = 8;
          AcquireAngleAmicSimple_4kHz_M2017b_B.StateChanged = 0U;
        }
        break;

       case AcquireAngleAmicSimple_4_IN_OP2:
        AcquireAngleAmicSimple_4kHz_M2017b_B.State = 8;
        AcquireAngleAmicSimple_4kHz_M2017b_B.StateChanged = 0U;
        if (AcquireAngleAmicSimple_4kHz_M2017b_B.esm_out == 1) {
          AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c21_AcquireAngleAmicSimple_4 =
            AcquireAngleAmicSimp_IN_PRE_OP2;
          AcquireAngleAmicSimple_4kHz_M2017b_B.State = 2;
          AcquireAngleAmicSimple_4kHz_M2017b_B.StateChanged = 1U;
        }
        break;

       case AcquireAngleAmicSimpl_IN_PRE_OP:
        AcquireAngleAmicSimple_4kHz_M2017b_B.State = 2;
        AcquireAngleAmicSimple_4kHz_M2017b_B.StateChanged = 0U;
        if (AcquireAngleAmicSimple_4kHz_M2017b_B.esm_out == 0) {
          AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c21_AcquireAngleAmicSimple_4 =
            AcquireAngleAmicSimple_4k_IN_OP;
          AcquireAngleAmicSimple_4kHz_M2017b_B.State = 8;
          AcquireAngleAmicSimple_4kHz_M2017b_B.StateChanged = 1U;
        }
        break;

       default:
        AcquireAngleAmicSimple_4kHz_M2017b_B.State = 2;
        AcquireAngleAmicSimple_4kHz_M2017b_B.StateChanged = 1U;
        if (AcquireAngleAmicSimple_4kHz_M2017b_B.esm_out == 1) {
          AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c21_AcquireAngleAmicSimple_4 =
            AcquireAngleAmicSimpl_IN_PRE_OP;
          AcquireAngleAmicSimple_4kHz_M2017b_B.State = 2;
          AcquireAngleAmicSimple_4kHz_M2017b_B.StateChanged = 0U;
        }
        break;
      }
    }

    /* End of Chart: '<S4>/EtherCAT Network State Machine' */

    /* Chart: '<S4>/EtherCAT Network State Machine1' */
    if (AcquireAngleAmicSimple_4kHz_M2017b_DW.is_active_c22_AcquireAngleAmicS ==
        0U) {
      AcquireAngleAmicSimple_4kHz_M2017b_DW.is_active_c22_AcquireAngleAmicS = 1U;
      AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c22_AcquireAngleAmicSimple_4 =
        AcquireAngleAmicSimp_IN_DISABLE;
      AcquireAngleAmicSimple_4kHz_M2017b_DW.esm =
        AcquireAngleAmicSimple_4kHz_M2017b_B.esm_out;
      AcquireAngleAmicSimple_4kHz_M2017b_B.Enable = 0U;
    } else if
        (AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c22_AcquireAngleAmicSimple_4 ==
         AcquireAngleAmicSimp_IN_DISABLE) {
      AcquireAngleAmicSimple_4kHz_M2017b_B.Enable = 0U;
      if (AcquireAngleAmicSimple_4kHz_M2017b_B.esm_out !=
          AcquireAngleAmicSimple_4kHz_M2017b_DW.esm) {
        AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c22_AcquireAngleAmicSimple_4 =
          AcquireAngleAmicSimpl_IN_ENABLE;
        AcquireAngleAmicSimple_4kHz_M2017b_B.Enable = 1U;
        AcquireAngleAmicSimple_4kHz_M2017b_DW.esm =
          AcquireAngleAmicSimple_4kHz_M2017b_B.esm_out;
      }
    } else {
      AcquireAngleAmicSimple_4kHz_M2017b_B.Enable = 1U;
      if (AcquireAngleAmicSimple_4kHz_M2017b_B.Memory1 == 1) {
        AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c22_AcquireAngleAmicSimple_4 =
          AcquireAngleAmicSimp_IN_DISABLE;
        AcquireAngleAmicSimple_4kHz_M2017b_DW.esm =
          AcquireAngleAmicSimple_4kHz_M2017b_B.esm_out;
        AcquireAngleAmicSimple_4kHz_M2017b_B.Enable = 0U;
      }
    }

    /* End of Chart: '<S4>/EtherCAT Network State Machine1' */

    /* Outputs for Enabled SubSystem: '<S4>/Enabled Set State' incorporates:
     *  EnablePort: '<S8>/Enable'
     */
    if (AcquireAngleAmicSimple_4kHz_M2017b_B.Enable > 0) {
      /* S-Function (xpcethercatsetstate): '<S8>/EtherCAT Set State 1' */

      /* Level2 S-Function Block: '<S8>/EtherCAT Set State 1' (xpcethercatsetstate) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[0];
        sfcnOutputs(rts,1);
      }

      /* Chart: '<S8>/EtherCAT SetState Error' */
      if (AcquireAngleAmicSimple_4kHz_M2017b_DW.is_active_c18_AcquireAngleAmicS ==
          0U) {
        AcquireAngleAmicSimple_4kHz_M2017b_DW.is_active_c18_AcquireAngleAmicS =
          1U;
        AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c18_AcquireAngleAmicSimple_4 =
          AcquireAngleAmicSimple__IN_INIT;
      } else {
        switch
          (AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c18_AcquireAngleAmicSimple_4)
        {
         case AcquireAngleAmicSimple_4_IN_ERR:
          break;

         default:
          if (AcquireAngleAmicSimple_4kHz_M2017b_DW.err > 0.0F) {
            AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c18_AcquireAngleAmicSimple_4
              = AcquireAngleAmicSimple_4_IN_ERR;
            AcquireAngleAmicSimple_4kHz_M2017b_B.enable = 0.0F;
          } else {
            AcquireAngleAmicSimple_4kHz_M2017b_DW.err = (real32_T)
              AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATSetState1_o2;
            AcquireAngleAmicSimple_4kHz_M2017b_B.enable = 1.0F;
          }
          break;
        }
      }

      /* End of Chart: '<S8>/EtherCAT SetState Error' */
    }

    /* End of Outputs for SubSystem: '<S4>/Enabled Set State' */

    /* S-Function (xpcethercatgetstate): '<S4>/EtherCAT Get State  ' */

    /* Level2 S-Function Block: '<S4>/EtherCAT Get State  ' (xpcethercatgetstate) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[1];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpctimeinfo): '<S4>/xPC Target  Time ' */

    /* Level2 S-Function Block: '<S4>/xPC Target  Time ' (xpctimeinfo) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[2];
      sfcnOutputs(rts,1);
    }

    /* Gain: '<S4>/Tick division' */
    AcquireAngleAmicSimple_4kHz_M2017b_B.Tickdivision = (real32_T)
      (8.3822296730930431E-7 *
       AcquireAngleAmicSimple_4kHz_M2017b_B.xPCTargetTime);

    /* Constant: '<S4>/init1' */
    AcquireAngleAmicSimple_4kHz_M2017b_B.init1 = 0;

    /* DataTypeConversion: '<Root>/C2' */
    AcquireAngleAmicSimple_4kHz_M2017b_B.C2[0] = (real32_T)
      AcquireAngleAmicSimple_4kHz_M2017b_B.C1[0];
    AcquireAngleAmicSimple_4kHz_M2017b_B.C2[1] = (real32_T)
      AcquireAngleAmicSimple_4kHz_M2017b_B.C1[1];
    AcquireAngleAmicSimple_4kHz_M2017b_B.C2[2] = (real32_T)
      AcquireAngleAmicSimple_4kHz_M2017b_B.C1[4];
    AcquireAngleAmicSimple_4kHz_M2017b_B.C2[3] = (real32_T)
      AcquireAngleAmicSimple_4kHz_M2017b_B.NetworkState;
    AcquireAngleAmicSimple_4kHz_M2017b_B.C2[4] = (real32_T)
      AcquireAngleAmicSimple_4kHz_M2017b_B.State;
    AcquireAngleAmicSimple_4kHz_M2017b_B.C2[5] = (real32_T)
      AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATSetState1_o2;

    /* DataTypeConversion: '<Root>/C3' */
    AcquireAngleAmicSimple_4kHz_M2017b_B.C3 = (real32_T)
      AcquireAngleAmicSimple_4kHz_M2017b_B.Clock;

    /* UnitDelay: '<S1>/Output' */
    AcquireAngleAmicSimple_4kHz_M2017b_B.Output =
      AcquireAngleAmicSimple_4kHz_M2017b_DW.Output_DSTATE;

    /* DataTypeConversion: '<Root>/C1' */
    AcquireAngleAmicSimple_4kHz_M2017b_B.C1_k = (int32_T)
      AcquireAngleAmicSimple_4kHz_M2017b_B.Output;

    /* Sum: '<S5>/FixPt Sum1' incorporates:
     *  Constant: '<S5>/FixPt Constant'
     */
    AcquireAngleAmicSimple_4kHz_M2017b_B.FixPtSum1 =
      (AcquireAngleAmicSimple_4kHz_M2017b_B.Output + 1U) & 2147483647U;

    /* Switch: '<S6>/FixPt Switch' incorporates:
     *  Constant: '<S6>/Constant'
     */
    if (AcquireAngleAmicSimple_4kHz_M2017b_B.FixPtSum1 > 2147483647U) {
      AcquireAngleAmicSimple_4kHz_M2017b_B.FixPtSwitch = 0U;
    } else {
      AcquireAngleAmicSimple_4kHz_M2017b_B.FixPtSwitch =
        AcquireAngleAmicSimple_4kHz_M2017b_B.FixPtSum1;
    }

    /* End of Switch: '<S6>/FixPt Switch' */
    if (AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.TaskCounters.TID[2] == 0) {
      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive19' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive19' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[3];
        sfcnOutputs(rts,2);
      }

      /* Gain: '<Root>/Count2rad' */
      AcquireAngleAmicSimple_4kHz_M2017b_B.Count2rad = (real_T)(-1546188227) *
        5.8207660913467407E-11 * (real_T)
        AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive19;

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive14' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[4];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive12' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive12' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[5];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive13' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive13' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[6];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive15' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[7];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive16' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[8];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive17' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive17' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[9];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive18' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive18' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [10];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive5' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive5' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [11];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive6' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive6' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [12];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive7' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive7' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [13];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive8' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive8' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [14];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive9' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [15];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive10' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive10' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [16];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive11' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive11' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [17];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive20' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive20' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [18];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive21' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive21' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [19];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive1' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive1' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [20];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive2' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive2' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [21];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive3' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive3' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [22];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive4' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive4' (xpcethercatpdorx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [23];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 10' incorporates:
       *  Constant: '<S3>/ADC LP Filter 1'
       */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 10' (xpcethercatpdotx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [24];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 1' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 1' (xpcethercatpdotx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [25];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 2' */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [26];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 3' incorporates:
       *  Constant: '<S3>/ADC LP Filter 3'
       */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 3' (xpcethercatpdotx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [27];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 4' incorporates:
       *  Constant: '<S3>/Speed LP Filter 3'
       */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 4' (xpcethercatpdotx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [28];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 5' incorporates:
       *  Constant: '<S3>/Acceleration LP Filter 3'
       */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 5' (xpcethercatpdotx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [29];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 6' incorporates:
       *  Constant: '<S3>/Speed LP Filter 5'
       */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 6' (xpcethercatpdotx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [30];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 7' incorporates:
       *  Constant: '<S3>/Acceleration LP Filter 5'
       */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 7' (xpcethercatpdotx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [31];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 8' incorporates:
       *  Constant: '<S3>/Distributed Control J3'
       */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 8' (xpcethercatpdotx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [32];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 9' incorporates:
       *  Constant: '<S3>/Distributed Control J3'
       */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 9' (xpcethercatpdotx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [33];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 11' incorporates:
       *  Constant: '<S3>/Distributed Control J3'
       */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 11' (xpcethercatpdotx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [34];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 12' incorporates:
       *  Constant: '<S3>/Distributed Control J3'
       */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 12' (xpcethercatpdotx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [35];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 13' incorporates:
       *  Constant: '<S3>/Distributed Control J3'
       */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 13' (xpcethercatpdotx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [36];
        sfcnOutputs(rts,2);
      }

      /* S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 14' incorporates:
       *  Constant: '<S3>/Distributed Control J3'
       */

      /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 14' (xpcethercatpdotx) */
      {
        SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions
          [37];
        sfcnOutputs(rts,2);
      }
    }

    /* S-Function (xpctimeinfo): '<S7>/xPC Target  Time ' */

    /* Level2 S-Function Block: '<S7>/xPC Target  Time ' (xpctimeinfo) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[38];
      sfcnOutputs(rts,1);
    }

    /* Gain: '<S7>/Tick division' */
    AcquireAngleAmicSimple_4kHz_M2017b_B.Tickdivision_m = (real32_T)
      (8.3822296730930431E-7 *
       AcquireAngleAmicSimple_4kHz_M2017b_B.xPCTargetTime_p);

    /* user code (Output function Trailer) */
    {
      /*------------ S-Function Block: <Root>/EtherCAT Init 1 Write Process Data ,Run Admin Tasks and then Write Acyclic Data------------*/
      static char_T *errMsg;
      xpcEtherCATWriteProcessData(0,NULL);
      xpcEtherCATExecAdminJobs(0);
      xpcEtherCATWriteAcyclicData(0);
    }
  }

  /* Matfile logging */
  rt_UpdateTXYLogVars(AcquireAngleAmicSimple_4kHz_M2017b_M->rtwLogInfo,
                      (AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.t));

  /* Update for Memory: '<S4>/Memory1' */
  AcquireAngleAmicSimple_4kHz_M2017b_DW.Memory1_PreviousInput =
    AcquireAngleAmicSimple_4kHz_M2017b_B.StateChanged;

  /* Update for UnitDelay: '<S1>/Output' */
  AcquireAngleAmicSimple_4kHz_M2017b_DW.Output_DSTATE =
    AcquireAngleAmicSimple_4kHz_M2017b_B.FixPtSwitch;

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(AcquireAngleAmicSimple_4kHz_M2017b_M)!=-1) &&
        !((rtmGetTFinal(AcquireAngleAmicSimple_4kHz_M2017b_M)-
           AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.t[0]) >
          AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(AcquireAngleAmicSimple_4kHz_M2017b_M,
                        "Simulation finished");
    }

    if (rtmGetStopRequested(AcquireAngleAmicSimple_4kHz_M2017b_M)) {
      rtmSetErrorStatus(AcquireAngleAmicSimple_4kHz_M2017b_M,
                        "Simulation finished");
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
  if (!(++AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.clockTick0)) {
    ++AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.clockTickH0;
  }

  AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.t[0] =
    AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.clockTick0 *
    AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.stepSize0 +
    AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.clockTickH0 *
    AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.00025s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.clockTick1)) {
      ++AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.clockTickH1;
    }

    AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.t[1] =
      AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.clockTick1 *
      AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.stepSize1 +
      AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.clockTickH1 *
      AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.stepSize1 * 4294967296.0;
  }

  if (AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.TaskCounters.TID[2] == 0) {
    /* Update absolute timer for sample time: [0.0005s, 0.0s] */
    /* The "clockTick2" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick2"
     * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick2 and the high bits
     * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.clockTick2)) {
      ++AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.clockTickH2;
    }

    AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.t[2] =
      AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.clockTick2 *
      AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.stepSize2 +
      AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.clockTickH2 *
      AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.stepSize2 * 4294967296.0;
  }

  rate_scheduler();
}

/* Model initialize function */
void AcquireAngleAmicSimple_4kHz_M2017b_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)AcquireAngleAmicSimple_4kHz_M2017b_M, 0,
                sizeof(RT_MODEL_AcquireAngleAmicSimple_4kHz_M2017b_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&AcquireAngleAmicSimple_4kHz_M2017b_M->solverInfo,
                          &AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.simTimeStep);
    rtsiSetTPtr(&AcquireAngleAmicSimple_4kHz_M2017b_M->solverInfo, &rtmGetTPtr
                (AcquireAngleAmicSimple_4kHz_M2017b_M));
    rtsiSetStepSizePtr(&AcquireAngleAmicSimple_4kHz_M2017b_M->solverInfo,
                       &AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&AcquireAngleAmicSimple_4kHz_M2017b_M->solverInfo,
                          (&rtmGetErrorStatus
      (AcquireAngleAmicSimple_4kHz_M2017b_M)));
    rtsiSetRTModelPtr(&AcquireAngleAmicSimple_4kHz_M2017b_M->solverInfo,
                      AcquireAngleAmicSimple_4kHz_M2017b_M);
  }

  rtsiSetSimTimeStep(&AcquireAngleAmicSimple_4kHz_M2017b_M->solverInfo,
                     MAJOR_TIME_STEP);
  rtsiSetSolverName(&AcquireAngleAmicSimple_4kHz_M2017b_M->solverInfo,
                    "FixedStepDiscrete");
  AcquireAngleAmicSimple_4kHz_M2017b_M->solverInfoPtr =
    (&AcquireAngleAmicSimple_4kHz_M2017b_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.sampleTimeTaskIDPtr =
      (&mdlTsMap[0]);
    AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.sampleTimes =
      (&AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.sampleTimesArray[0]);
    AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.offsetTimes =
      (&AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.offsetTimesArray[0]);

    /* task periods */
    AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.sampleTimes[0] = (0.0);
    AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.sampleTimes[1] = (0.00025);
    AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.sampleTimes[2] = (0.0005);

    /* task offsets */
    AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.offsetTimes[0] = (0.0);
    AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.offsetTimes[1] = (0.0);
    AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.offsetTimes[2] = (0.0);
  }

  rtmSetTPtr(AcquireAngleAmicSimple_4kHz_M2017b_M,
             &AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    mdlSampleHits[2] = 1;
    AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(AcquireAngleAmicSimple_4kHz_M2017b_M, -1);
  AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.stepSize0 = 0.00025;
  AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.stepSize1 = 0.00025;
  AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.stepSize2 = 0.0005;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    AcquireAngleAmicSimple_4kHz_M2017b_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(AcquireAngleAmicSimple_4kHz_M2017b_M->rtwLogInfo,
                          (NULL));
    rtliSetLogXSignalPtrs(AcquireAngleAmicSimple_4kHz_M2017b_M->rtwLogInfo,
                          (NULL));
    rtliSetLogT(AcquireAngleAmicSimple_4kHz_M2017b_M->rtwLogInfo, "tout");
    rtliSetLogX(AcquireAngleAmicSimple_4kHz_M2017b_M->rtwLogInfo, "");
    rtliSetLogXFinal(AcquireAngleAmicSimple_4kHz_M2017b_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(AcquireAngleAmicSimple_4kHz_M2017b_M->rtwLogInfo,
      "rt_");
    rtliSetLogFormat(AcquireAngleAmicSimple_4kHz_M2017b_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(AcquireAngleAmicSimple_4kHz_M2017b_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(AcquireAngleAmicSimple_4kHz_M2017b_M->rtwLogInfo, 1);
    rtliSetLogY(AcquireAngleAmicSimple_4kHz_M2017b_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(AcquireAngleAmicSimple_4kHz_M2017b_M->rtwLogInfo,
                          (NULL));
    rtliSetLogYSignalPtrs(AcquireAngleAmicSimple_4kHz_M2017b_M->rtwLogInfo,
                          (NULL));
  }

  AcquireAngleAmicSimple_4kHz_M2017b_M->solverInfoPtr =
    (&AcquireAngleAmicSimple_4kHz_M2017b_M->solverInfo);
  AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.stepSize = (0.00025);
  rtsiSetFixedStepSize(&AcquireAngleAmicSimple_4kHz_M2017b_M->solverInfo,
                       0.00025);
  rtsiSetSolverMode(&AcquireAngleAmicSimple_4kHz_M2017b_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) memset(((void *) &AcquireAngleAmicSimple_4kHz_M2017b_B), 0,
                sizeof(B_AcquireAngleAmicSimple_4kHz_M2017b_T));

  /* states (dwork) */
  (void) memset((void *)&AcquireAngleAmicSimple_4kHz_M2017b_DW, 0,
                sizeof(DW_AcquireAngleAmicSimple_4kHz_M2017b_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.sfcnInfo;
    AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (AcquireAngleAmicSimple_4kHz_M2017b_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &AcquireAngleAmicSimple_4kHz_M2017b_M->Sizes.numSampTimes);
    AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(AcquireAngleAmicSimple_4kHz_M2017b_M)[0]);
    AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.taskTimePtrs[1] =
      &(rtmGetTPtr(AcquireAngleAmicSimple_4kHz_M2017b_M)[1]);
    AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.taskTimePtrs[2] =
      &(rtmGetTPtr(AcquireAngleAmicSimple_4kHz_M2017b_M)[2]);
    rtssSetTPtrPtr(sfcnInfo,
                   AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart
                     (AcquireAngleAmicSimple_4kHz_M2017b_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal
                     (AcquireAngleAmicSimple_4kHz_M2017b_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (AcquireAngleAmicSimple_4kHz_M2017b_M));
    rtssSetStepSizePtr(sfcnInfo,
                       &AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (AcquireAngleAmicSimple_4kHz_M2017b_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &AcquireAngleAmicSimple_4kHz_M2017b_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &AcquireAngleAmicSimple_4kHz_M2017b_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &AcquireAngleAmicSimple_4kHz_M2017b_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &AcquireAngleAmicSimple_4kHz_M2017b_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->solverInfoPtr);
  }

  AcquireAngleAmicSimple_4kHz_M2017b_M->Sizes.numSFcns = (39);

  /* register each child */
  {
    (void) memset((void *)
                  &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  39*sizeof(SimStruct));
    AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions =
      (&AcquireAngleAmicSimple_4kHz_M2017b_M->
       NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 39; i++) {
        AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[i] =
          (&AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.childSFunctions
           [i]);
      }
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S8>/EtherCAT Set State 1 (xpcethercatsetstate) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn0.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn0.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &AcquireAngleAmicSimple_4kHz_M2017b_B.State);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn0.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATSetState1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((int32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATSetState1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT Set State 1");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Master EtherCAT1/Enabled Set State/EtherCAT Set State 1");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled3);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATSetState1_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATSetState1_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatsetstate(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S4>/EtherCAT Get State   (xpcethercatgetstate) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn1.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.NetworkState));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT Get State  ");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Master EtherCAT1/EtherCAT Get State  ");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled3);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATGetState_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATGetState_IWORK);
      }

      /* registration */
      xpcethercatgetstate(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S4>/xPC Target  Time  (xpctimeinfo) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn2.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn2.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.xPCTargetTime));
        }
      }

      /* path info */
      ssSetModelName(rts, "xPC Target\n Time ");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Master EtherCAT1/xPC Target  Time ");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled3);
      }

      /* registration */
      xpctimeinfo(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive19 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn3.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn3.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive19));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive19");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive19");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive19_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive19_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled8);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive19_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive19_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn4.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn4.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive14));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive14");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive14");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive14_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive14_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled16);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled18);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive14_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive14_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive12 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [5]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [5]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn5.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn5.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive12));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive12");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive12");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive12_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive12_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive12_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive12_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive13 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [6]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [6]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn6.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn6.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive13));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive13");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive13");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive13_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive13_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive13_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive13_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [7]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [7]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn7.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn7.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive15));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive15");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive15");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive15_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive15_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive15_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive15_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive16 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [8]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [8]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn8.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn8.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive16));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive16");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive16");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive16_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive16_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive16_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive16_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive17 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [9]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [9]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [9]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [9]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn9.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn9.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive17));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive17");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive17");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive17_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive17_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive17_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive17_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive18 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [10]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [10]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [10]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [10]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn10.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn10.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive18));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive18");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive18");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive18_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive18_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive18_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn10.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn10.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive18_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive5 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [11]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [11]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [11]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [11]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn11.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn11.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive5));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive5");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive5");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive5_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive5_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive5_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn11.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn11.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive5_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive6 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [12]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [12]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [12]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [12]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn12.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn12.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive6));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive6");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive6");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive6_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive6_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled8);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive6_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn12.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn12.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive6_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive7 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [13]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [13]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [13]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [13]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn13.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn13.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive7));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive7");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive7");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive7_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive7_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive7_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn13.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn13.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive7_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive8 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [14]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [14]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [14]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [14]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn14.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn14.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive8));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive8");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive8");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive8_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive8_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled8);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive8_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn14.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn14.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive8_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [15]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [15]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [15]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [15]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn15.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn15.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive9));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive9");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive9");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive9_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive9_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive9_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn15.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn15.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive9_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive10 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [16]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [16]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [16]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [16]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn16.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn16.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive10));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive10");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive10");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive10_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive10_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled8);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive10_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn16.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn16.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive10_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive11 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [17]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [17]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [17]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [17]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn17.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn17.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive11));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive11");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive11");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive11_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive11_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive11_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn17.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn17.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive11_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive20 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [18]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [18]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [18]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [18]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn18.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn18.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive20));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive20");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive20");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive20_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive20_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled8);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive20_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn18.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn18.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive20_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive21 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [19]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [19]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [19]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [19]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [19]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn19.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn19.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive21));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive21");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive21");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive21_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive21_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled8);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive21_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn19.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn19.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive21_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive1 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [20]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [20]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [20]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [20]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [20]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn20.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn20.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive1));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive1");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive1");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled8);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive1_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn20.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn20.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive1_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive2 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[21];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [21]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [21]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [21]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [21]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [21]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn21.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn21.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive2));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive2");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive2");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive2_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn21.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn21.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive2_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive3 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[22];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [22]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [22]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [22]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [22]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [22]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn22.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn22.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive3));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive3");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive3");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled16);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled18);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive3_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn22.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn22.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive3_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Receive4 (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[23];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn23.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn23.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn23.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [23]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [23]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [23]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [23]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [23]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [23]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [23]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn23.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn23.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.EtherCATPDOReceive4));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive4");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Receive4");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn23.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOReceive4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive4_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn23.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn23.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOReceive4_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Transmit 10 (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[24];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn24.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn24.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn24.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [24]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [24]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [24]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [24]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [24]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [24]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [24]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn24.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn24.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &AcquireAngleAmicSimple_4kHz_M2017b_ConstP.ADCLPFilter1_Value);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 10");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Transmit 10");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn24.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit10_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit10_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled16);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled18);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit10_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn24.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn24.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit10_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Transmit 1 (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[25];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn25.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn25.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn25.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [25]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [25]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [25]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [25]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [25]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [25]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [25]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn25.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn25.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &AcquireAngleAmicSimple_4kHz_M2017b_B.C1_k);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 1");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Transmit 1");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn25.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled8);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit1_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn25.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn25.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit1_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Transmit 2 (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[26];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn26.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn26.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn26.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [26]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [26]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [26]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [26]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [26]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [26]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [26]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn26.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn26.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &AcquireAngleAmicSimple_4kHz_M2017b_B.C3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 2");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Transmit 2");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn26.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit2_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn26.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn26.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit2_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Transmit 3 (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[27];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn27.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn27.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn27.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [27]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [27]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [27]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [27]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [27]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [27]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [27]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn27.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn27.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &AcquireAngleAmicSimple_4kHz_M2017b_ConstP.ADCLPFilter3_Value);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 3");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Transmit 3");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn27.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit3_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn27.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn27.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit3_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Transmit 4 (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[28];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn28.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn28.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn28.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [28]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [28]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [28]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [28]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [28]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [28]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [28]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn28.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn28.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled21);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 4");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Transmit 4");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn28.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit4_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn28.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn28.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit4_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Transmit 5 (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[29];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn29.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn29.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn29.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [29]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [29]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [29]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [29]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [29]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [29]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [29]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn29.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn29.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled20);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 5");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Transmit 5");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn29.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit5_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit5_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit5_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn29.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn29.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit5_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Transmit 6 (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[30];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn30.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn30.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn30.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [30]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [30]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [30]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [30]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [30]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [30]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [30]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn30.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn30.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled21);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 6");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Transmit 6");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn30.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit6_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit6_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit6_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn30.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn30.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit6_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Transmit 7 (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[31];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn31.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn31.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn31.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [31]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [31]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [31]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [31]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [31]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [31]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [31]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn31.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn31.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled20);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 7");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Transmit 7");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn31.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit7_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit7_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit7_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn31.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn31.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit7_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Transmit 8 (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[32];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn32.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn32.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn32.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [32]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [32]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [32]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [32]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [32]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [32]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [32]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn32.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn32.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &AcquireAngleAmicSimple_4kHz_M2017b_ConstP.DistributedControlJ3_Value);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 8");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Transmit 8");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn32.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit8_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit8_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit8_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn32.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn32.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit8_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Transmit 9 (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[33];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn33.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn33.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn33.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [33]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [33]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [33]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [33]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [33]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [33]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [33]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn33.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn33.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &AcquireAngleAmicSimple_4kHz_M2017b_ConstP.DistributedControlJ3_Value);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 9");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Transmit 9");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn33.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit9_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit9_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit9_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn33.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn33.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit9_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Transmit 11 (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[34];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn34.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn34.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn34.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [34]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [34]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [34]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [34]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [34]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [34]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [34]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn34.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn34.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &AcquireAngleAmicSimple_4kHz_M2017b_ConstP.DistributedControlJ3_Value);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 11");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Transmit 11");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn34.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit11_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit11_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit11_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn34.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn34.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit11_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Transmit 12 (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[35];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn35.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn35.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn35.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [35]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [35]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [35]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [35]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [35]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [35]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [35]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn35.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn35.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &AcquireAngleAmicSimple_4kHz_M2017b_ConstP.DistributedControlJ3_Value);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 12");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Transmit 12");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn35.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit12_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit12_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit12_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn35.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn35.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit12_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Transmit 13 (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[36];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn36.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn36.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn36.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [36]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [36]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [36]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [36]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [36]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [36]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [36]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn36.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn36.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &AcquireAngleAmicSimple_4kHz_M2017b_ConstP.DistributedControlJ3_Value);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 13");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Transmit 13");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn36.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit13_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit13_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit13_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn36.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn36.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit13_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/EtherCAT PDO Transmit 14 (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[37];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn37.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn37.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn37.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [37]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [37]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [37]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [37]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [37]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [37]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [37]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn37.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn37.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &AcquireAngleAmicSimple_4kHz_M2017b_ConstP.DistributedControlJ3_Value);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 14");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/EtherCAT PDO Transmit 14");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn37.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit14_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.EtherCATPDOTransmit14_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled10);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled12);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled1);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled14);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit14_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn37.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn37.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATPDOTransmit14_IWORK
                   [0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AcquireAngleAmicSimple_4kHz_M2017b/<S7>/xPC Target  Time  (xpctimeinfo) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[38];

      /* timing info */
      time_T *sfcnPeriod =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn38.sfcnPeriod;
      time_T *sfcnOffset =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn38.sfcnOffset;
      int_T *sfcnTsMap =
        AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn38.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.blkInfo2
                         [38]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.inputOutputPortInfo2
        [38]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AcquireAngleAmicSimple_4kHz_M2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods2
                           [38]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods3
                           [38]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.methods4
                           [38]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.statesInfo2
                         [38]);
        ssSetPeriodicStatesInfo(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.periodicStatesInfo
          [38]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn38.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn38.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &AcquireAngleAmicSimple_4kHz_M2017b_B.xPCTargetTime_p));
        }
      }

      /* path info */
      ssSetModelName(rts, "xPC Target\n Time ");
      ssSetPath(rts,
                "AcquireAngleAmicSimple_4kHz_M2017b/Encoder from AMIC/EtherCAT Communication J3/xPC Target  Time ");
      ssSetRTModel(rts,AcquireAngleAmicSimple_4kHz_M2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AcquireAngleAmicSimple_4kHz_M2017b_M->NonInlinedSFcns.Sfcn38.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.pooled5);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AcquireAngleAmicSimple_4kHz_M2017b_ConstP.xPCTargetTime_P2_Size);
      }

      /* registration */
      xpctimeinfo(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime
    (AcquireAngleAmicSimple_4kHz_M2017b_M->rtwLogInfo, 0.0, rtmGetTFinal
     (AcquireAngleAmicSimple_4kHz_M2017b_M),
     AcquireAngleAmicSimple_4kHz_M2017b_M->Timing.stepSize0, (&rtmGetErrorStatus
      (AcquireAngleAmicSimple_4kHz_M2017b_M)));

  {
    /* user code (Start function Header) */
    {
      int_T status = 1;
      static char_T *errMsg;
      xpcPCIDevice pciInfo;
      int_T j;
      uint8_T *DeviceType;

      /* From LinkOsLayer.h   Intel PRO-100 specific definitions */
      struct EtherCATDevices {
        uint16_T VendorID;
        uint16_T DeviceID;
        uint8_T *DeviceType;
      } EtherCATDeviceTable[] = {
        /* I8254x types */
        { 0x8086, 0xABB1, "I8254x" },  //

        { 0x8086, 0xABB2, "I8254x" },  //

        { 0x8086, 0x100E, "I8254x" },  //  PCI_DEVICE_I82540EM_DESKTOP

        { 0x8086, 0x1010, "I8254x" },  //  PCI_DEVICE_I82546EB_COPPER_DUAL

        { 0x8086, 0x1013, "I8254x" },  //  PCI_DEVICE_I82541EI_COPPER

        { 0x8086, 0x1019, "I8254x" },  //  PCI_DEVICE_I82547GI_COPPER

        { 0x8086, 0x1026, "I8254x" },  //  PCI_DEVICE_I82545GM_COPPER

        { 0x8086, 0x104A, "I8254x" },  //  PCI_DEVICE_I82566DM

        { 0x8086, 0x104D, "I8254x" },  //  PCI_DEVICE_I82566MC

        { 0x8086, 0x105E, "I8254x" },  //  PCI_DEVICE_N1E5132_SERVER

        { 0x8086, 0x1075, "I8254x" },  //  PCI_DEVICE_I82547EI

        { 0x8086, 0x1076, "I8254x" },  //  PCI_DEVICE_I82541GI_COPPER

        { 0x8086, 0x1078, "I8254x" },  //  PCI_DEVICE_I82541ER

        { 0x8086, 0x1079, "I8254x" },  //  PCI_DEVICE_I82546GB_COPPER_DUAL

        { 0x8086, 0x107C, "I8254x" },  //  PCI_DEVICE_I82541PI_DESKTOP

        { 0x8086, 0x107D, "I8254x" },  //  PCI_DEVICE_I82572EI

        { 0x8086, 0x108B, "I8254x" },  //  PCI_DEVICE_I82573E

        { 0x8086, 0x108C, "I8254x" },  //  PCI_DEVICE_I82573

        { 0x8086, 0x109A, "I8254x" },  //  PCI_DEVICE_I82573L

        { 0x8086, 0x10A4, "I8254x" },  //  PCI_DEVICE_I82571GB_QUAD

        { 0x8086, 0x10A7, "I8254x" },  //  PCI_DEVICE_I82575_ZOAR

        { 0x8086, 0x10B9, "I8254x" },  //  PCI_DEVICE_I82572GI

        { 0x8086, 0x10BC, "I8254x" },  //  PCI_DEVICE_I82571GB_QUAD_2

        { 0x8086, 0x10BD, "I8254x" },  //  PCI_DEVICE_I82566L

        { 0x8086, 0x10C9, "I8254x" },  //  PCI_DEVICE_I82576

        { 0x8086, 0x10CE, "I8254x" },  //  PCI_DEVICE_I82567V

        { 0x8086, 0x10D3, "I8254x" },  //  PCI_DEVICE_I82574L

        { 0x8086, 0x10DE, "I8254x" },  //  PCI_DEVICE_I82567LM3

        { 0x8086, 0x10EA, "I8254x" },  //  PCI_DEVICE_I82577LM

        { 0x8086, 0x10EB, "I8254x" },  //  PCI_DEVICE_I82577LC

        { 0x8086, 0x10EF, "I8254x" },  //  PCI_DEVICE_I82578DM

        { 0x8086, 0x10F0, "I8254x" },  //  PCI_DEVICE_I82578DC

        { 0x8086, 0x10F5, "I8254x" },  //  PCI_DEVICE_I82567LM

        { 0x8086, 0x1501, "I8254x" },  //  PCI_DEVICE_I82567V3

        { 0x8086, 0x1502, "I8254x" },  //  PCI_DEVICE_I82579LM

        { 0x8086, 0x1503, "I8254x" },  //  PCI_DEVICE_I82579V

        { 0x8086, 0x150C, "I8254x" },  //  PCI_DEVICE_I82583V

        { 0x8086, 0x150E, "I8254x" },  //  PCI_DEVICE_I82580_QUAD

        { 0x8086, 0x1521, "I8254x" },  //  PCI_DEVICE_I350

        { 0x8086, 0x1526, "I8254x" },  //  PCI_DEVICE_I82576_ET2

        { 0x8086, 0x1527, "I8254x" },  //  PCI_DEVICE_I82580_QUAD_FIBRE

        { 0x8086, 0x1533, "I8254x" },  //  PCI_DEVICE_I210_COPPER

        { 0x8086, 0x1539, "I8254x" },  //  PCI_DEVICE_I211AT

        { 0x8086, 0x157B, "I8254x" },  //  PCI_DEVICE_I210_COPPER_FLASHLESS

        { 0x8086, 0x153A, "I8254x" },  //  PCI_DEVICE_I217LM

        { 0x8086, 0x153B, "I8254x" },  //  PCI_DEVICE_I217V

        { 0x8086, 0x155A, "I8254x" },  //  PCI_DEVICE_I218LM

        { 0x8086, 0x1559, "I8254x" },  //  PCI_DEVICE_I218V

        /* I8255x types */
        { 0x8086, 0x103a, "I8255x" },  //  PCI device ID, Intel 82801DB(M) (ICH4) LAN Controller

        { 0x8086, 0x1229, "I8255x" },  //  82557 device ID

        { 0x8086, 0x1209, "I8255x" },  //  82557 ER device ID

        { 0x8086, 0x1050, "I8255x" },  //  PRO/100 VE device ID

        { 0x8086, 0x1039, "I8255x" },  //  82562 VE/VM device ID

        { 0x8086, 0x2449, "I8255x" },  //  82559 ER device ID

        { 0x8086, 0x27DC, "I8255x" },  //  PRO/100 VE device ID

        { 0x8086, 0x1059, "I8255x" },  //  Mobile version of 1229

        { 0x8086, 0x1092, "I8255x" }   //  PRO/100 VE3 device ID
      };

      if (!xpcIsModelInit()) {
        static char_T msg[256];
        int32_T NICerror;
        if (NICerror = registerNIC( 1, 0, 0, 3 ) ) {
          sprintf( msg, "EtherCAT Init: Ethernet port at [1,0,0] in use by" );

          // Cross block checking should catch RTIP, raw Ethernet or EtherCAT collisions, but I've included
          // them here for additional safety since I'm calling registerNIC
          // to catch host-target collisions.
          switch ( NICerror )
          {
           case 1:
            sprintf( msg, "%s host-target communication.", msg );
            break;

           case 2:
            sprintf( msg, "%s Real-Time IP.", msg );
            break;

           case 3:
            sprintf( msg, "%s raw Ethernet.", msg );
            break;

           case 4:
            sprintf( msg, "%s EtherCAT.", msg );
            break;
          }

          rtmSetErrorStatus(AcquireAngleAmicSimple_4kHz_M2017b_M, msg);
          return;
        }

        // Get the exec ratio at model start time.  Needed by the MS controller.
        AcquireAngleAmicSimple_4kHz_M2017b_DW.EtherCATInit1_RWORK.EXECRATIO =
          0.0005 / slrteGetCurrentStepSize();
        status = slrtGetPciConfigAtFunction( 1, 0, 0, &pciInfo);
        if (status == -1) {
          rtmSetErrorStatus(AcquireAngleAmicSimple_4kHz_M2017b_M,
                            "You must specify a bus/slot/function, not auto search.");
          return;
        }

        if (status == -2 ) {
          rtmSetErrorStatus(AcquireAngleAmicSimple_4kHz_M2017b_M,
                            "There is no Ethernet adapter at bus 1, slot 0, function 0.");
          return;
        }

        status = -1;                   // Preset to a failed search.
        DeviceType = "";
        for (j = 0 ; j < sizeof(EtherCATDeviceTable)/sizeof(struct
              EtherCATDevices) ; j++ ) {
          // Search through the device table for the matching vendor/device ID.
          if (( pciInfo.DeviceId == EtherCATDeviceTable[j].DeviceID )
              && ( pciInfo.VendorId == EtherCATDeviceTable[j].VendorID ) ) {
            status = 0;
            DeviceType = EtherCATDeviceTable[j].DeviceType;
            break;
          }
        }

        if (status ) {
          rtmSetErrorStatus(AcquireAngleAmicSimple_4kHz_M2017b_M,
                            "No valid Ethernet board found at bus 1 slot 0 function 0");
        } else {
          char *logfile = "c:\\dbglog.txt";
          mwStateClear( 0 );
          status = xpcEtherCATinitialize(0, DeviceType, 1, 0, 0, 1,
            xmlecatArr_0, xmlecatArr_0_count,0,
            0, logfile, 0.0005, 0 );
          if (status != XPC_ECAT_OK) {
            errMsg = xpcPrintEtherCATError(0, 0);
            rtmSetErrorStatus(AcquireAngleAmicSimple_4kHz_M2017b_M, errMsg);
            return;
          }

          //printf("init status = %08x\n", status );
        }
      }
    }

    /* Start for Enabled SubSystem: '<S4>/Enabled Set State' */

    /* Start for S-Function (xpcethercatsetstate): '<S8>/EtherCAT Set State 1' */
    /* Level2 S-Function Block: '<S8>/EtherCAT Set State 1' (xpcethercatsetstate) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* End of Start for SubSystem: '<S4>/Enabled Set State' */

    /* Start for S-Function (xpcethercatgetstate): '<S4>/EtherCAT Get State  ' */
    /* Level2 S-Function Block: '<S4>/EtherCAT Get State  ' (xpcethercatgetstate) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive19' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive19' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[3];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[4];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive12' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive12' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[5];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive13' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive13' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[6];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[7];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive16' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[8];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive17' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive17' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[9];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive18' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive18' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[10];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive5' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive5' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[11];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive6' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive6' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[12];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive7' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive7' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[13];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive8' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive8' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[14];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[15];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive10' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive10' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[16];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive11' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive11' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[17];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive20' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive20' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[18];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive21' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive21' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[19];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive1' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive1' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[20];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive2' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive2' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[21];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive3' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive3' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[22];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive4' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive4' (xpcethercatpdorx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[23];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 10' incorporates:
     *  Constant: '<S3>/ADC LP Filter 1'
     */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 10' (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[24];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 1' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 1' (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[25];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 2' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[26];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 3' incorporates:
     *  Constant: '<S3>/ADC LP Filter 3'
     */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 3' (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[27];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 4' incorporates:
     *  Constant: '<S3>/Speed LP Filter 3'
     */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 4' (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[28];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 5' incorporates:
     *  Constant: '<S3>/Acceleration LP Filter 3'
     */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 5' (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[29];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 6' incorporates:
     *  Constant: '<S3>/Speed LP Filter 5'
     */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 6' (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[30];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 7' incorporates:
     *  Constant: '<S3>/Acceleration LP Filter 5'
     */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 7' (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[31];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 8' incorporates:
     *  Constant: '<S3>/Distributed Control J3'
     */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 8' (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[32];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 9' incorporates:
     *  Constant: '<S3>/Distributed Control J3'
     */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 9' (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[33];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 11' incorporates:
     *  Constant: '<S3>/Distributed Control J3'
     */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 11' (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[34];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 12' incorporates:
     *  Constant: '<S3>/Distributed Control J3'
     */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 12' (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[35];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 13' incorporates:
     *  Constant: '<S3>/Distributed Control J3'
     */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 13' (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[36];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 14' incorporates:
     *  Constant: '<S3>/Distributed Control J3'
     */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 14' (xpcethercatpdotx) */
    {
      SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[37];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  /* InitializeConditions for Memory: '<S4>/Memory1' */
  AcquireAngleAmicSimple_4kHz_M2017b_DW.Memory1_PreviousInput = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S1>/Output' */
  AcquireAngleAmicSimple_4kHz_M2017b_DW.Output_DSTATE = 0U;

  /* SystemInitialize for Chart: '<Root>/ESM Wait' */
  AcquireAngleAmicSimple_4kHz_M2017b_DW.is_active_c12_AcquireAngleAmicS = 0U;
  AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c12_AcquireAngleAmicSimple_4 =
    AcquireAngle_IN_NO_ACTIVE_CHILD;
  AcquireAngleAmicSimple_4kHz_M2017b_DW.current_time = 0.0;
  AcquireAngleAmicSimple_4kHz_M2017b_B.esm_out = 0U;

  /* SystemInitialize for Chart: '<S4>/EtherCAT Network State Machine' */
  AcquireAngleAmicSimple_4kHz_M2017b_DW.is_active_c21_AcquireAngleAmicS = 0U;
  AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c21_AcquireAngleAmicSimple_4 =
    AcquireAngle_IN_NO_ACTIVE_CHILD;
  AcquireAngleAmicSimple_4kHz_M2017b_B.State = 0;
  AcquireAngleAmicSimple_4kHz_M2017b_B.StateChanged = 0U;

  /* SystemInitialize for Chart: '<S4>/EtherCAT Network State Machine1' */
  AcquireAngleAmicSimple_4kHz_M2017b_DW.is_active_c22_AcquireAngleAmicS = 0U;
  AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c22_AcquireAngleAmicSimple_4 =
    AcquireAngle_IN_NO_ACTIVE_CHILD;
  AcquireAngleAmicSimple_4kHz_M2017b_DW.esm = 0U;
  AcquireAngleAmicSimple_4kHz_M2017b_B.Enable = 0U;

  /* SystemInitialize for Enabled SubSystem: '<S4>/Enabled Set State' */
  /* SystemInitialize for Chart: '<S8>/EtherCAT SetState Error' */
  AcquireAngleAmicSimple_4kHz_M2017b_DW.is_active_c18_AcquireAngleAmicS = 0U;
  AcquireAngleAmicSimple_4kHz_M2017b_DW.is_c18_AcquireAngleAmicSimple_4 =
    AcquireAngle_IN_NO_ACTIVE_CHILD;
  AcquireAngleAmicSimple_4kHz_M2017b_DW.err = 0.0F;
  AcquireAngleAmicSimple_4kHz_M2017b_B.enable = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S4>/Enabled Set State' */
}

/* Model terminate function */
void AcquireAngleAmicSimple_4kHz_M2017b_terminate(void)
{
  /* Terminate for Enabled SubSystem: '<S4>/Enabled Set State' */

  /* Terminate for S-Function (xpcethercatsetstate): '<S8>/EtherCAT Set State 1' */
  /* Level2 S-Function Block: '<S8>/EtherCAT Set State 1' (xpcethercatsetstate) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S4>/Enabled Set State' */

  /* Terminate for S-Function (xpcethercatgetstate): '<S4>/EtherCAT Get State  ' */
  /* Level2 S-Function Block: '<S4>/EtherCAT Get State  ' (xpcethercatgetstate) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpctimeinfo): '<S4>/xPC Target  Time ' */
  /* Level2 S-Function Block: '<S4>/xPC Target  Time ' (xpctimeinfo) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive19' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive19' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive12' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive12' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive13' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive13' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive16' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive17' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive17' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive18' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive18' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive5' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive5' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive6' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive6' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive7' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive7' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive8' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive8' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive10' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive10' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive11' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive11' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive20' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive20' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive21' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive21' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive1' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive1' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive2' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive2' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive3' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive3' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S7>/EtherCAT PDO Receive4' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Receive4' (xpcethercatpdorx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 10' incorporates:
   *  Constant: '<S3>/ADC LP Filter 1'
   */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 10' (xpcethercatpdotx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 1' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 1' (xpcethercatpdotx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 2' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[26];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 3' incorporates:
   *  Constant: '<S3>/ADC LP Filter 3'
   */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 3' (xpcethercatpdotx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[27];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 4' incorporates:
   *  Constant: '<S3>/Speed LP Filter 3'
   */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 4' (xpcethercatpdotx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[28];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 5' incorporates:
   *  Constant: '<S3>/Acceleration LP Filter 3'
   */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 5' (xpcethercatpdotx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[29];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 6' incorporates:
   *  Constant: '<S3>/Speed LP Filter 5'
   */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 6' (xpcethercatpdotx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[30];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 7' incorporates:
   *  Constant: '<S3>/Acceleration LP Filter 5'
   */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 7' (xpcethercatpdotx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[31];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 8' incorporates:
   *  Constant: '<S3>/Distributed Control J3'
   */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 8' (xpcethercatpdotx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[32];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 9' incorporates:
   *  Constant: '<S3>/Distributed Control J3'
   */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 9' (xpcethercatpdotx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[33];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 11' incorporates:
   *  Constant: '<S3>/Distributed Control J3'
   */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 11' (xpcethercatpdotx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[34];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 12' incorporates:
   *  Constant: '<S3>/Distributed Control J3'
   */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 12' (xpcethercatpdotx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[35];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 13' incorporates:
   *  Constant: '<S3>/Distributed Control J3'
   */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 13' (xpcethercatpdotx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[36];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 14' incorporates:
   *  Constant: '<S3>/Distributed Control J3'
   */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 14' (xpcethercatpdotx) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[37];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpctimeinfo): '<S7>/xPC Target  Time ' */
  /* Level2 S-Function Block: '<S7>/xPC Target  Time ' (xpctimeinfo) */
  {
    SimStruct *rts = AcquireAngleAmicSimple_4kHz_M2017b_M->childSfunctions[38];
    sfcnTerminate(rts);
  }

  /* user code (Terminate function Trailer) */

  /*------------ S-Function Block: <Root>/EtherCAT Init 1 Process Shutdown Network ------------*/
  {
    int_T status;
    if (!xpcIsModelInit()) {
      releaseNIC( 1, 0, 0 );
      status = xpcEtherCATstop(0, 1000 /* 1 second timeout */
        );
    }
  }
}
