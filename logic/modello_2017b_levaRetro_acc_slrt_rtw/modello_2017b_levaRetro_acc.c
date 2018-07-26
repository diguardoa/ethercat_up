/*
 * modello_2017b_levaRetro_acc.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "modello_2017b_levaRetro_acc".
 *
 * Model version              : 1.2140
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Thu Jul 26 13:47:06 2018
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "modello_2017b_levaRetro_acc_capi.h"
#include "modello_2017b_levaRetro_acc.h"
#include "modello_2017b_levaRetro_acc_private.h"

/* Named constants for Chart: '<S40>/DS402_state_machine' */
#define model_IN_not_ready_to_switch_on ((uint8_T)4U)
#define modell_IN_fault_reaction_active ((uint8_T)3U)
#define modello_2017_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define modello_2017b_le_IN_switched_on ((uint8_T)10U)
#define modello_2017b_lev_IN_dispatcher ((uint8_T)1U)
#define modello_2017b_levaRe_CALL_EVENT (-1)
#define modello_2017b_levaRetr_IN_fault ((uint8_T)2U)
#define modello_20_IN_DS402StateMachine ((uint8_T)1U)
#define modello_20_IN_operation_enabled ((uint8_T)5U)
#define modello_20_IN_quick_stop_active ((uint8_T)6U)
#define modello_20_IN_reset_fault_logic ((uint8_T)8U)
#define modello_2_IN_ready_to_switch_on ((uint8_T)7U)
#define modello_2_IN_switch_on_disabled ((uint8_T)9U)

/* Named constants for Chart: '<Root>/Chart' */
#define modello_2017_IN_ACTIVATE_DRIVES ((uint8_T)1U)
#define modello_2017b_IN_START_ETHERCAT ((uint8_T)6U)
#define modello_2017b_IN_SWITCH_OFF_ETH ((uint8_T)8U)
#define modello_2017b__IN_DRIVES_ACTIVE ((uint8_T)2U)
#define modello_2017b__IN_RESET_ENCODER ((uint8_T)5U)
#define modello_2017b_levaRetro_IN_IDLE ((uint8_T)4U)
#define modello_201_IN_ETHERCAT_STARTED ((uint8_T)3U)
#define modello_20_IN_NO_ACTIVE_CHILD_h ((uint8_T)0U)
#define modello_20_IN_SWITCH_OFF_DRIVES ((uint8_T)7U)

/* Named constants for Chart: '<S4>/Ethercat master State Machine' */
#define modello_2017b_l_IN_dispatcher_i ((uint8_T)5U)
#define modello_2017b_le_IN_OPERATIONAL ((uint8_T)2U)
#define modello_2017b_levaRe_IN_SAFE_OP ((uint8_T)4U)
#define modello_2017b_levaRet_IN_PRE_OP ((uint8_T)3U)
#define modello_2017b_levaRetro_IN_INIT ((uint8_T)1U)

/* Named constants for Chart: '<S26>/dynamic' */
#define modello_2017_IN_forza_crossgate ((uint8_T)4U)
#define modello_2017b__IN_curva_ritorno ((uint8_T)3U)
#define modello_2017b_l_IN_curva_andata ((uint8_T)2U)
#define modello_2017b_levaRet_IN_IDLE_e ((uint8_T)1U)
#define modello_2017b_levaRet_IN_muro_x ((uint8_T)7U)
#define modello_201_IN_marcia_innestata ((uint8_T)5U)
#define modello_201_IN_muro_selezione_x ((uint8_T)6U)
#define modello_201_IN_rigidezza_finale ((uint8_T)8U)

/* Named constants for Chart: '<S181>/Chart1' */
#define IN_TRANSITION_PT_BL_RR_PT_BL_RR ((uint8_T)13U)
#define IN_TRANSITION_PT_RL_BR2_PT_RL_B ((uint8_T)14U)
#define modello_2017b__IN_BEGIN_RIGHT_1 ((uint8_T)3U)
#define modello_2017b__IN_BEGIN_RIGHT_2 ((uint8_T)4U)
#define modello_2017b__IN_state_machine ((uint8_T)1U)
#define modello_2017b_l_IN_BEGIN_LEFT_1 ((uint8_T)1U)
#define modello_2017b_l_IN_BEGIN_LEFT_2 ((uint8_T)2U)
#define modello_2017b_l_IN_RETURN_RIGHT ((uint8_T)8U)
#define modello_2017b_l_IN_SWITCH_BL_RL ((uint8_T)9U)
#define modello_2017b_l_IN_SWITCH_BR_RR ((uint8_T)10U)
#define modello_2017b_l_IN_THRESHOLD_BL ((uint8_T)11U)
#define modello_2017b_l_IN_THRESHOLD_BR ((uint8_T)12U)
#define modello_2017b_le_IN_RETURN_LEFT ((uint8_T)7U)
#define modello_2017b_levaRet_IN_IDLE_c ((uint8_T)5U)
#define modello_2017b_levaRet_IN_INIT_l ((uint8_T)6U)
#define modello_2017b_levaRetro_acc_eps (0.0001)

/* Named constants for Chart: '<S183>/Chart1' */
#define modello_2017b_levaRetro_a_eps_b (0.001)

/* Named constants for Chart: '<S26>/static_Prova_griglia' */
#define modello_2017b_levaRetr_IN_logic ((uint8_T)2U)

/* Block signals (auto storage) */
B_modello_2017b_levaRetro_acc_T modello_2017b_levaRetro_acc_B;

/* Block states (auto storage) */
DW_modello_2017b_levaRetro_acc_T modello_2017b_levaRetro_acc_DW;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_modello_2017b_levaRetro_acc_T modello_2017b_levaRetro_acc_Y;

/* Real-time model */
RT_MODEL_modello_2017b_levaRetro_acc_T modello_2017b_levaRetro_acc_M_;
RT_MODEL_modello_2017b_levaRetro_acc_T *const modello_2017b_levaRetro_acc_M =
  &modello_2017b_levaRetro_acc_M_;

/* Forward declaration for local functions */
static void modello_2017b_DS402StateMachine(uint16_T rtu_statusword, real32_T
  rtu_enable_drive, real32_T rtu_reset_fault, real32_T rtu_quick_stop,
  B_DS402_state_machine_modello_T *localB, DW_DS402_state_machine_modell_T
  *localDW);

/* Forward declaration for local functions */
static void modello_2017b_levaRetro_ac_sort(real_T x[3]);

/* Forward declaration for local functions */
static real_T modello_2017b__gearshift_grid_r(real_T sel_gear, real_T field);
static real_T modello_20_gearshift_grid_r_dyn(real_T sel_gear, real_T field);
static void rate_scheduler(void);
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Interpolation 1-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

real32_T look1_iflf_binlxpw(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
{
  real32_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Interpolation 1-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

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
  (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[1])++;
  if ((modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[1]) > 5) {/* Sample time: [0.0015s, 0.0s] */
    modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[1] = 0;
  }

  modello_2017b_levaRetro_acc_M->Timing.sampleHits[1] =
    (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[1] == 0);
  (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[2])++;
  if ((modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[2]) > 7) {/* Sample time: [0.002s, 0.0s] */
    modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[2] = 0;
  }

  modello_2017b_levaRetro_acc_M->Timing.sampleHits[2] =
    (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[2] == 0);
  (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[3])++;
  if ((modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[3]) > 79) {/* Sample time: [0.02s, 0.0s] */
    modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[3] = 0;
  }

  modello_2017b_levaRetro_acc_M->Timing.sampleHits[3] =
    (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[3] == 0);
  (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[4])++;
  if ((modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[4]) > 239) {/* Sample time: [0.06s, 0.0s] */
    modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[4] = 0;
  }

  modello_2017b_levaRetro_acc_M->Timing.sampleHits[4] =
    (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[4] == 0);
}

/* Function for Chart: '<S40>/DS402_state_machine' */
static void modello_2017b_DS402StateMachine(uint16_T rtu_statusword, real32_T
  rtu_enable_drive, real32_T rtu_reset_fault, real32_T rtu_quick_stop,
  B_DS402_state_machine_modello_T *localB, DW_DS402_state_machine_modell_T
  *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'DS402StateMachine': '<S43>:91' */
  sf_internal_predicateOutput = (((rtu_statusword == 15) || (rtu_statusword ==
    47)) && (!(localDW->is_DS402StateMachine == modell_IN_fault_reaction_active)));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S43>:48' */
    /* Exit Internal 'DS402StateMachine': '<S43>:91' */
    localDW->is_DS402StateMachine = modell_IN_fault_reaction_active;

    /* Entry 'fault_reaction_active': '<S43>:70' */
    localB->controlword = 0.0;
    localB->drive_enabled = 0.0;
    localB->fault_detected = 1.0;
    localB->drive_ready = 0.0;
  } else {
    sf_internal_predicateOutput = (((rtu_statusword == 8) || (rtu_statusword ==
      40)) && (!(localDW->is_DS402StateMachine ==
                 modello_20_IN_reset_fault_logic)) &&
      (!(localDW->is_DS402StateMachine == modello_2017b_levaRetr_IN_fault)));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S43>:45' */
      /* Exit Internal 'DS402StateMachine': '<S43>:91' */
      localDW->is_DS402StateMachine = modello_2017b_levaRetr_IN_fault;

      /* Entry 'fault': '<S43>:55' */
      localB->controlword = 0.0;
      localB->drive_enabled = 0.0;
      localB->fault_detected = 1.0;
      localB->drive_ready = 0.0;
    } else {
      sf_internal_predicateOutput = (((rtu_statusword == 64) || (rtu_statusword ==
        96)) && (!(localDW->is_DS402StateMachine ==
                   modello_2_IN_switch_on_disabled)));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S43>:105' */
        /* Exit Internal 'DS402StateMachine': '<S43>:91' */
        localDW->is_DS402StateMachine = modello_2_IN_switch_on_disabled;

        /* Entry 'switch_on_disabled': '<S43>:69' */
        localB->drive_enabled = 0.0;
        localB->fault_detected = 0.0;
        localB->drive_ready = 1.0;
        localB->controlword = 0.0;
      } else {
        switch (localDW->is_DS402StateMachine) {
         case modello_2017b_lev_IN_dispatcher:
          /* During 'dispatcher': '<S43>:76' */
          sf_internal_predicateOutput = ((rtu_statusword == 0) ||
            (rtu_statusword == 32));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S43>:72' */
            localDW->is_DS402StateMachine = model_IN_not_ready_to_switch_on;

            /* Entry 'not_ready_to_switch_on': '<S43>:65' */
            localB->drive_enabled = 0.0;
            localB->fault_detected = 0.0;
            localB->drive_ready = 0.0;
          } else if (rtu_statusword == 7) {
            /* Transition: '<S43>:87' */
            localDW->is_DS402StateMachine = modello_20_IN_quick_stop_active;

            /* Entry 'quick_stop_active': '<S43>:84' */
            localB->drive_enabled = 0.0;
            localB->fault_detected = 0.0;
            localB->drive_ready = 1.0;
            localB->controlword = 2.0;
          } else if (rtu_statusword == 39) {
            /* Transition: '<S43>:47' */
            localDW->is_DS402StateMachine = modello_20_IN_operation_enabled;

            /* Entry 'operation_enabled': '<S43>:54' */
            localB->drive_enabled = 1.0;
            localB->fault_detected = 0.0;
            localB->drive_ready = 1.0;
            localB->controlword = 15.0;
          } else if (rtu_statusword == 35) {
            /* Transition: '<S43>:83' */
            localDW->is_DS402StateMachine = modello_2017b_le_IN_switched_on;

            /* Entry 'switched_on': '<S43>:82' */
            localB->drive_enabled = 0.0;
            localB->fault_detected = 0.0;
            localB->drive_ready = 1.0;
            localB->controlword = 7.0;
          } else {
            if (rtu_statusword == 33) {
              /* Transition: '<S43>:60' */
              localDW->is_DS402StateMachine = modello_2_IN_ready_to_switch_on;

              /* Entry 'ready_to_switch_on': '<S43>:49' */
              localB->drive_enabled = 0.0;
              localB->fault_detected = 0.0;
              localB->drive_ready = 1.0;
              localB->controlword = 6.0;
            }
          }
          break;

         case modello_2017b_levaRetr_IN_fault:
          /* During 'fault': '<S43>:55' */
          if (rtu_reset_fault == 1.0F) {
            /* Transition: '<S43>:63' */
            localDW->is_DS402StateMachine = modello_20_IN_reset_fault_logic;
          }
          break;

         case modell_IN_fault_reaction_active:
          /* During 'fault_reaction_active': '<S43>:70' */
          break;

         case model_IN_not_ready_to_switch_on:
          /* During 'not_ready_to_switch_on': '<S43>:65' */
          sf_internal_predicateOutput = ((rtu_statusword == 64) ||
            (rtu_statusword == 96));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S43>:78' */
            localDW->is_DS402StateMachine = modello_2_IN_switch_on_disabled;

            /* Entry 'switch_on_disabled': '<S43>:69' */
            localB->drive_enabled = 0.0;
            localB->fault_detected = 0.0;
            localB->drive_ready = 1.0;
            localB->controlword = 0.0;
          }
          break;

         case modello_20_IN_operation_enabled:
          /* During 'operation_enabled': '<S43>:54' */
          if (rtu_statusword == 7) {
            /* Transition: '<S43>:86' */
            localDW->is_DS402StateMachine = modello_20_IN_quick_stop_active;

            /* Entry 'quick_stop_active': '<S43>:84' */
            localB->drive_enabled = 0.0;
            localB->fault_detected = 0.0;
            localB->drive_ready = 1.0;
            localB->controlword = 2.0;
          } else if (rtu_statusword == 35) {
            /* Transition: '<S43>:81' */
            localDW->is_DS402StateMachine = modello_2017b_le_IN_switched_on;

            /* Entry 'switched_on': '<S43>:82' */
            localB->drive_enabled = 0.0;
            localB->fault_detected = 0.0;
            localB->drive_ready = 1.0;
            localB->controlword = 7.0;
          } else if (rtu_enable_drive == 0.0F) {
            /* Transition: '<S43>:99' */
            localB->controlword = 7.0;
          } else {
            if (rtu_quick_stop == 1.0F) {
              /* Transition: '<S43>:100' */
              localB->controlword = 2.0;
            }
          }
          break;

         case modello_20_IN_quick_stop_active:
          /* During 'quick_stop_active': '<S43>:84' */
          if (rtu_statusword == 39) {
            /* Transition: '<S43>:51' */
            localDW->is_DS402StateMachine = modello_20_IN_operation_enabled;

            /* Entry 'operation_enabled': '<S43>:54' */
            localB->drive_enabled = 1.0;
            localB->fault_detected = 0.0;
            localB->drive_ready = 1.0;
            localB->controlword = 15.0;
          } else {
            if (rtu_quick_stop == 0.0F) {
              /* Transition: '<S43>:101' */
              localB->controlword = 0.0;
            }
          }
          break;

         case modello_2_IN_ready_to_switch_on:
          /* During 'ready_to_switch_on': '<S43>:49' */
          if (rtu_statusword == 35) {
            /* Transition: '<S43>:80' */
            localDW->is_DS402StateMachine = modello_2017b_le_IN_switched_on;

            /* Entry 'switched_on': '<S43>:82' */
            localB->drive_enabled = 0.0;
            localB->fault_detected = 0.0;
            localB->drive_ready = 1.0;
            localB->controlword = 7.0;
          } else if (rtu_enable_drive == 0.0F) {
            /* Transition: '<S43>:94' */
            localB->controlword = 6.0;
          } else {
            if (rtu_enable_drive == 1.0F) {
              /* Transition: '<S43>:95' */
              localB->controlword = 7.0;
            }
          }
          break;

         case modello_20_IN_reset_fault_logic:
          /* During 'reset_fault_logic': '<S43>:67' */
          if (rtu_reset_fault == 0.0F) {
            /* Transition: '<S43>:68' */
            localB->controlword = 128.0;
          }
          break;

         case modello_2_IN_switch_on_disabled:
          /* During 'switch_on_disabled': '<S43>:69' */
          if (rtu_statusword == 33) {
            /* Transition: '<S43>:53' */
            localDW->is_DS402StateMachine = modello_2_IN_ready_to_switch_on;

            /* Entry 'ready_to_switch_on': '<S43>:49' */
            localB->drive_enabled = 0.0;
            localB->fault_detected = 0.0;
            localB->drive_ready = 1.0;
            localB->controlword = 6.0;
          } else if (rtu_enable_drive == 0.0F) {
            /* Transition: '<S43>:57' */
            localB->controlword = 0.0;
          } else {
            if (rtu_enable_drive == 1.0F) {
              /* Transition: '<S43>:98' */
              localB->controlword = 6.0;
            }
          }
          break;

         default:
          /* During 'switched_on': '<S43>:82' */
          if (rtu_statusword == 39) {
            /* Transition: '<S43>:71' */
            localDW->is_DS402StateMachine = modello_20_IN_operation_enabled;

            /* Entry 'operation_enabled': '<S43>:54' */
            localB->drive_enabled = 1.0;
            localB->fault_detected = 0.0;
            localB->drive_ready = 1.0;
            localB->controlword = 15.0;
          } else if (rtu_statusword == 33) {
            /* Transition: '<S43>:50' */
            localDW->is_DS402StateMachine = modello_2_IN_ready_to_switch_on;

            /* Entry 'ready_to_switch_on': '<S43>:49' */
            localB->drive_enabled = 0.0;
            localB->fault_detected = 0.0;
            localB->drive_ready = 1.0;
            localB->controlword = 6.0;
          } else if (rtu_enable_drive == 0.0F) {
            /* Transition: '<S43>:96' */
            localB->controlword = 6.0;
          } else {
            if (rtu_enable_drive == 1.0F) {
              /* Transition: '<S43>:97' */
              localB->controlword = 15.0;
            }
          }
          break;
        }
      }
    }
  }
}

/*
 * System initialize for atomic system:
 *    '<S40>/DS402_state_machine'
 *    '<S44>/DS402_state_machine'
 */
void modell_DS402_state_machine_Init(DW_DS402_state_machine_modell_T *localDW)
{
  localDW->sfEvent = modello_2017b_levaRe_CALL_EVENT;
  localDW->is_DS402StateMachine = modello_2017_IN_NO_ACTIVE_CHILD;
  localDW->is_active_c3_modello_2017b_leva = 0U;
  localDW->is_c3_modello_2017b_levaRetro_a = modello_2017_IN_NO_ACTIVE_CHILD;
}

/*
 * Output and update for atomic system:
 *    '<S40>/DS402_state_machine'
 *    '<S44>/DS402_state_machine'
 */
void modello_201_DS402_state_machine(uint16_T rtu_statusword, real32_T
  rtu_enable_drive, real32_T rtu_reset_fault, real32_T rtu_quick_stop,
  B_DS402_state_machine_modello_T *localB, DW_DS402_state_machine_modell_T
  *localDW)
{
  /* Gateway: Slaves_control_and_status/x_axis_drive_control/Drive_state/DS402_state_machine */
  localDW->sfEvent = modello_2017b_levaRe_CALL_EVENT;

  /* Chart: '<S40>/DS402_state_machine' */
  /* During: Slaves_control_and_status/x_axis_drive_control/Drive_state/DS402_state_machine */
  if (localDW->is_active_c3_modello_2017b_leva == 0U) {
    /* Entry: Slaves_control_and_status/x_axis_drive_control/Drive_state/DS402_state_machine */
    localDW->is_active_c3_modello_2017b_leva = 1U;

    /* Entry Internal: Slaves_control_and_status/x_axis_drive_control/Drive_state/DS402_state_machine */
    /* Transition: '<S43>:92' */
    localDW->is_c3_modello_2017b_levaRetro_a = modello_20_IN_DS402StateMachine;

    /* Entry Internal 'DS402StateMachine': '<S43>:91' */
    /* Transition: '<S43>:75' */
    localB->controlword = 0.0;
    localB->drive_enabled = 0.0;
    localB->fault_detected = 0.0;
    localB->drive_ready = 0.0;
    localDW->is_DS402StateMachine = modello_2017b_lev_IN_dispatcher;
  } else {
    modello_2017b_DS402StateMachine(rtu_statusword, rtu_enable_drive,
      rtu_reset_fault, rtu_quick_stop, localB, localDW);
  }

  /* End of Chart: '<S40>/DS402_state_machine' */
}

/* Function for MATLAB Function: '<S23>/AntiSpike' */
static void modello_2017b_levaRetro_ac_sort(real_T x[3])
{
  boolean_T p;
  real_T b_x_idx_0;
  real_T b_x_idx_2;
  real_T b_x_idx_1;
  b_x_idx_0 = x[0];
  b_x_idx_1 = x[1];
  b_x_idx_2 = x[2];
  if ((x[0] <= x[1]) || rtIsNaN(x[1])) {
    p = true;
  } else {
    p = false;
  }

  if (p) {
    if ((x[1] <= x[2]) || rtIsNaN(x[2])) {
    } else {
      p = false;
    }

    if (!p) {
      if ((x[0] <= x[2]) || rtIsNaN(x[2])) {
        p = true;
      }

      if (p) {
        b_x_idx_1 = x[2];
        b_x_idx_2 = x[1];
      } else {
        b_x_idx_2 = x[1];
        b_x_idx_1 = x[0];
        b_x_idx_0 = x[2];
      }
    }
  } else {
    if ((x[0] <= x[2]) || rtIsNaN(x[2])) {
      p = true;
    }

    if (p) {
      b_x_idx_0 = x[1];
      b_x_idx_1 = x[0];
    } else {
      if ((x[1] <= x[2]) || rtIsNaN(x[2])) {
        p = true;
      }

      if (p) {
        b_x_idx_0 = x[1];
        b_x_idx_1 = x[2];
        b_x_idx_2 = x[0];
      } else {
        b_x_idx_0 = x[2];
        b_x_idx_2 = x[0];
      }
    }
  }

  x[0] = b_x_idx_0;
  x[1] = b_x_idx_1;
  x[2] = b_x_idx_2;
}

/*
 * System initialize for atomic system:
 *    '<S23>/AntiSpike'
 *    '<S24>/AntiSpike'
 */
void modello_2017b_le_AntiSpike_Init(DW_AntiSpike_modello_2017b_le_T *localDW)
{
  localDW->samples = 1.0;
  localDW->old_samples[0] = 0.0;
  localDW->old_samples[1] = 0.0;
  localDW->old_samples[2] = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S23>/AntiSpike'
 *    '<S24>/AntiSpike'
 */
void modello_2017b_levaRet_AntiSpike(real_T rtu_vel_in,
  B_AntiSpike_modello_2017b_lev_T *localB, DW_AntiSpike_modello_2017b_le_T
  *localDW)
{
  real_T ord_samples[3];
  real_T tmp;
  real_T tmp_0;

  /* MATLAB Function 'encoder_x_axis_processing/AntiSpike': '<S53>:1' */
  /* '<S53>:1:4' */
  /* '<S53>:1:6' */
  if (localDW->samples <= 3.0) {
    /* '<S53>:1:13' */
    /* '<S53>:1:14' */
    localDW->old_samples[(int32_T)localDW->samples - 1] = rtu_vel_in;

    /* '<S53>:1:15' */
    localB->vel_out = rtu_vel_in;

    /* '<S53>:1:16' */
    localDW->samples++;
  } else {
    /* '<S53>:1:19' */
    tmp = localDW->old_samples[1];
    tmp_0 = localDW->old_samples[2];

    /* '<S53>:1:20' */
    localDW->old_samples[0] = tmp;
    ord_samples[0] = localDW->old_samples[0];
    localDW->old_samples[1] = tmp_0;
    ord_samples[1] = localDW->old_samples[1];
    localDW->old_samples[2] = rtu_vel_in;
    ord_samples[2] = localDW->old_samples[2];
    modello_2017b_levaRetro_ac_sort(ord_samples);
    if ((fabs(rtu_vel_in) > fabs(ord_samples[1] * 0.8)) && (fabs(rtu_vel_in) <
         fabs(ord_samples[1] * 1.2))) {
      /* '<S53>:1:21' */
      /* '<S53>:1:22' */
      localB->vel_out = rtu_vel_in;
    } else {
      /* '<S53>:1:24' */
      localB->vel_out = ord_samples[1];
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S92>/demultiplexer_enable_gear_subsistems'
 *    '<S133>/demultiplexer_enable_gear_subsistems'
 */
void demultiplexer_enable_gear_subsi(real32_T rtu_index,
  B_demultiplexer_enable_gear_s_T *localB)
{
  /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/demultiplexer_enable_gear_subsistems': '<S93>:1' */
  /* '<S93>:1:3' */
  localB->out1 = 0.0;

  /* '<S93>:1:4' */
  localB->out2 = 0.0;

  /* '<S93>:1:5' */
  localB->out3 = 0.0;

  /* '<S93>:1:6' */
  localB->out4 = 0.0;

  /* '<S93>:1:7' */
  localB->out5 = 0.0;

  /* '<S93>:1:8' */
  localB->out6 = 0.0;

  /* '<S93>:1:9' */
  localB->out7 = 0.0;

  /* '<S93>:1:10' */
  localB->out8 = 0.0;
  switch ((int32_T)rtu_index) {
   case 1:
    /* '<S93>:1:14' */
    localB->out1 = 1.0;
    break;

   case 2:
    /* '<S93>:1:16' */
    localB->out2 = 1.0;
    break;

   case 3:
    /* '<S93>:1:18' */
    localB->out3 = 1.0;
    break;

   case 4:
    /* '<S93>:1:20' */
    localB->out4 = 1.0;
    break;

   case 5:
    /* '<S93>:1:22' */
    localB->out5 = 1.0;
    break;

   case 6:
    /* '<S93>:1:24' */
    localB->out6 = 1.0;
    break;

   case 7:
    /* '<S93>:1:26' */
    localB->out7 = 1.0;
    break;

   case 8:
    /* '<S93>:1:28' */
    localB->out8 = 1.0;
    break;
  }
}

/*
 * Output and update for atomic system:
 *    '<S94>/Render_wall1'
 *    '<S95>/Render_wall1'
 *    '<S96>/Render_wall1'
 *    '<S97>/Render_wall1'
 *    '<S98>/Render_wall1'
 *    '<S100>/Render_wall1'
 *    '<S101>/Render_wall1'
 *    '<S135>/Render_wall1'
 *    '<S136>/Render_wall1'
 *    '<S137>/Render_wall1'
 *    ...
 */
void modello_2017b_leva_Render_wall1(real_T rtu_pos, real_T rtu_offset, real_T
  rtu_k_stiffness, real_T rtu_force_offset, B_Render_wall1_modello_2017b__T
  *localB)
{
  /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/fifth_gear/Render_wall1': '<S102>:1' */
  /* '<S102>:1:3' */
  localB->force = (rtu_pos - rtu_offset) * -rtu_k_stiffness + rtu_force_offset;
}

/*
 * Output and update for enable system:
 *    '<S181>/crossgate_selection1_begin_left'
 *    '<S181>/crossgate_selection1_begin_left1'
 *    '<S181>/crossgate_selection1_begin_right'
 *    '<S181>/crossgate_selection1_begin_right1'
 *    '<S181>/crossgate_selection1_return_left'
 *    '<S181>/crossgate_selection1_return_right'
 *    '<S183>/crossgate_selection2_begin_left'
 *    '<S183>/crossgate_selection2_begin_right'
 *    '<S183>/crossgate_selection2_return_left'
 *    '<S183>/crossgate_selection2_return_right'
 */
void crossgate_selection1_begin_left(real_T rtu_Enable, real_T rtu_posy,
  B_crossgate_selection1_begin__T *localB, DW_crossgate_selection1_begin_T
  *localDW, P_crossgate_selection1_begin__T *localP)
{
  /* Outputs for Enabled SubSystem: '<S181>/crossgate_selection1_begin_left' incorporates:
   *  EnablePort: '<S187>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* Lookup_n-D: '<S187>/1-D Lookup Table' */
    localB->uDLookupTable = look1_binlxpw(rtu_posy,
      localP->uDLookupTable_bp01Data, localP->uDLookupTable_tableData, 4U);
    srUpdateBC(localDW->crossgate_selection1_begin_le_e);
  }

  /* End of Outputs for SubSystem: '<S181>/crossgate_selection1_begin_left' */
}

/*
 * Output and update for atomic system:
 *    '<S181>/demultiplexer_enable_subsistems'
 *    '<S183>/demultiplexer_enable_subsistems'
 */
void demultiplexer_enable_subsistems(real_T rtu_index,
  B_demultiplexer_enable_subsis_T *localB)
{
  /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/demultiplexer_enable_subsistems': '<S193>:1' */
  /* '<S193>:1:3' */
  localB->out1 = 0.0;

  /* '<S193>:1:4' */
  localB->out2 = 0.0;

  /* '<S193>:1:5' */
  localB->out3 = 0.0;

  /* '<S193>:1:6' */
  localB->out4 = 0.0;

  /* '<S193>:1:7' */
  localB->out5 = 0.0;

  /* '<S193>:1:8' */
  localB->out6 = 0.0;

  /* '<S193>:1:9' */
  localB->out7 = 0.0;

  /* '<S193>:1:10' */
  localB->out8 = 0.0;

  /* '<S193>:1:11' */
  localB->out9 = 0.0;

  /* '<S193>:1:12' */
  localB->out10 = 0.0;
  switch ((int32_T)rtu_index) {
   case 1:
    /* '<S193>:1:16' */
    localB->out1 = 1.0;
    break;

   case 2:
    /* '<S193>:1:18' */
    localB->out2 = 1.0;
    break;

   case 3:
    /* '<S193>:1:20' */
    localB->out3 = 1.0;
    break;

   case 4:
    /* '<S193>:1:22' */
    localB->out4 = 1.0;
    break;

   case 5:
    /* '<S193>:1:24' */
    localB->out5 = 1.0;
    break;

   case 6:
    /* '<S193>:1:26' */
    localB->out6 = 1.0;
    break;

   case 7:
    /* '<S193>:1:28' */
    localB->out7 = 1.0;
    break;

   case 8:
    /* '<S193>:1:30' */
    localB->out8 = 1.0;
    break;

   case 9:
    /* '<S193>:1:32' */
    localB->out9 = 1.0;
    break;

   case 10:
    /* '<S193>:1:34' */
    localB->out10 = 1.0;
    break;
  }
}

/*
 * Output and update for enable system:
 *    '<S181>/transition1_bl_rl'
 *    '<S181>/transition1_br_rr'
 *    '<S181>/transition1_pt_bl_rr_pt_bl_rr2'
 *    '<S181>/transition1_pt_rl_bl_pt_rl_bl2'
 *    '<S181>/transition1_zero'
 *    '<S183>/transition2_bl_rl'
 *    '<S183>/transition2_br_rr'
 *    '<S183>/transition2_pt_bl_rr_pt_bl_rr2'
 *    '<S183>/transition2_pt_rl_bl_pt_rl_bl2'
 *    '<S183>/transition2_zero'
 */
void modello_2017b_transition1_bl_rl(real_T rtu_Enable, real_T rtu_posy,
  B_transition1_bl_rl_modello_2_T *localB, DW_transition1_bl_rl_modello__T
  *localDW, P_transition1_bl_rl_modello_2_T *localP)
{
  /* Outputs for Enabled SubSystem: '<S181>/transition1_bl_rl' incorporates:
   *  EnablePort: '<S195>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* Lookup_n-D: '<S195>/1-D Lookup Table' */
    localB->uDLookupTable = look1_binlxpw(rtu_posy,
      localP->uDLookupTable_bp01Data, localP->uDLookupTable_tableData, 1U);
    srUpdateBC(localDW->transition1_bl_rl_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S181>/transition1_bl_rl' */
}

/* Function for Chart: '<S26>/static_Prova_griglia' */
static real_T modello_2017b__gearshift_grid_r(real_T sel_gear, real_T field)
{
  /* MATLAB Function 'gearshift_grid_r': '<S90>:148' */
  /* '<S90>:148:2' */
  return modello_2017b_levaRetro_acc_P.gearshift_grid[(int32_T)(sel_gear * 6.0 -
    (6.0 - field)) - 1];
}

/* Function for Chart: '<S26>/dynamic' */
static real_T modello_20_gearshift_grid_r_dyn(real_T sel_gear, real_T field)
{
  /* MATLAB Function 'gearshift_grid_r_dyn': '<S86>:275' */
  /* '<S86>:275:2' */
  return modello_2017b_levaRetro_acc_P.gearshift_grid_dyn[(int32_T)(sel_gear *
    6.0 - (6.0 - field)) - 1];
}

real_T rt_modd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T q;
  boolean_T y_0;
  boolean_T y_1;
  y = u0;
  y_0 = ((!rtIsNaN(u0)) && (!rtIsInf(u0)));
  y_1 = ((!rtIsNaN(u1)) && (!rtIsInf(u1)));
  if (!(y_0 && y_1)) {
    if (u1 != 0.0) {
      y = (rtNaN);
    }
  } else if (u0 == 0.0) {
    y = u1 * 0.0;
  } else {
    if (u1 != 0.0) {
      y = fmod(u0, u1);
      y_0 = (y == 0.0);
      if ((!y_0) && (u1 > floor(u1))) {
        q = fabs(u0 / u1);
        y_0 = (fabs(q - floor(q + 0.5)) <= DBL_EPSILON * q);
      }

      if (y_0) {
        y = u1 * 0.0;
      } else {
        if ((u0 < 0.0) != (u1 < 0.0)) {
          y += u1;
        }
      }
    }
  }

  return y;
}

/* Model output function */
static void modello_2017b_levaRetro_acc_output(void)
{
  real_T s1;
  real_T s2;
  real_T c1;
  real_T c2;
  real_T z22[3];
  real_T h;
  real_T z31[3];
  real_T b_gamma;
  real_T W[6];
  real32_T P[9];
  real_T T[6];
  real32_T J_i[6];
  real32_T c_y[4];
  real32_T r;
  real32_T t;
  static const int8_T b[9] = { 0, -1, 0, 1, 0, 0, 0, 0, 1 };

  static const int8_T c[9] = { 0, 1, 0, -1, 0, 0, 0, 0, 1 };

  real32_T J[6];
  static const int8_T b_0[9] = { 0, -1, 0, 1, 0, 0, 0, 0, 1 };

  static const int8_T c_0[9] = { 0, 1, 0, -1, 0, 0, 0, 0, 1 };

  boolean_T sf_internal_predicateOutput;
  int32_T on_orig_curve;
  real_T z22_0[9];
  int32_T i;
  real32_T P_0[9];
  real32_T P_1[6];
  real32_T tmp[2];
  real32_T P_2[3];
  real32_T d_y_idx_0;
  real32_T d_y_idx_1;
  real32_T d_y_idx_2;
  boolean_T guard1 = false;
  boolean_T exitg1;
  boolean_T exitg2;

  {
    /* user code (Output function Header) */
    {
      /*------------ S-Function Block: <S4>/EtherCAT Init 1 Process Received Frames ------------*/
      int32_T data[6]= { 0 };

      int32_T msdata[4] = { 0 };

      dcmHwSetIntTimestamp();          // For computing the time offset for MS DC time.
      xpcEtherCATReadProcessData(0,NULL);
      mwErrorGet((int_T)0,
                 &data[0], &data[1], &data[2], &data[3],&data[4],&data[5]);
      data[3] = slrtEcatDCM[1];        // Master Shift error, for main Init output
      memcpy(&modello_2017b_levaRetro_acc_B.EtherCATInit1[0], data,6*sizeof
             (int32_T));
      mwErrorClear( (int_T)0 );

      // Clear all momentary triggered values
    }

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.Slaves_control_and_status_Subsy);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.fifth_gear_SubsysRanBC_o);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.first_gear_SubsysRanBC_f);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.fourth_gear_SubsysRanBC_g);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.reverse_gear_SubsysRanBC_m);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.second_gear_SubsysRanBC_l);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.selection_axis1_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.sixth_gear_SubsysRanBC_i);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.third_gear_SubsysRanBC_n);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.fifth_gear_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.first_gear_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.fourth_gear_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.reverse_gear_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.second_gear_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.selection_axis_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.sixth_gear_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.third_gear_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC
      (modello_2017b_levaRetro_acc_DW.crossgate_selection1_begin_le_k.crossgate_selection1_begin_le_e);

    /* Reset subsysRan breadcrumbs */
    srClearBC
      (modello_2017b_levaRetro_acc_DW.transition1_bl_rl.transition1_bl_rl_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.crossgate_selection1_profile_Su);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.crossgate_selection2_profile_Su);

    /* Reset subsysRan breadcrumbs */
    srClearBC(modello_2017b_levaRetro_acc_DW.inside_gear_path_SubsysRanBC);

    /* Memory: '<Root>/Memory8' */
    modello_2017b_levaRetro_acc_B.Memory8 =
      modello_2017b_levaRetro_acc_DW.Memory8_PreviousInput;

    /* Constant: '<Root>/quick_stop_drives' */
    modello_2017b_levaRetro_acc_B.quick_stop_drives =
      modello_2017b_levaRetro_acc_P.quick_stop_drives_Value;

    /* Constant: '<Root>/x_axis_reset_fault' */
    modello_2017b_levaRetro_acc_B.x_axis_reset_fault =
      modello_2017b_levaRetro_acc_P.x_axis_reset_fault_Value;

    /* Constant: '<Root>/y_axis_reset_fault' */
    modello_2017b_levaRetro_acc_B.y_axis_reset_fault =
      modello_2017b_levaRetro_acc_P.y_axis_reset_fault_Value;

    /* Memory: '<Root>/Memory1' */
    modello_2017b_levaRetro_acc_B.Memory1 =
      modello_2017b_levaRetro_acc_DW.Memory1_PreviousInput;

    /* Memory: '<Root>/Memory2' */
    modello_2017b_levaRetro_acc_B.Memory2 =
      modello_2017b_levaRetro_acc_DW.Memory2_PreviousInput;

    /* S-Function (xpcethercatgetstate): '<S4>/EtherCAT Get State  ' */

    /* Level2 S-Function Block: '<S4>/EtherCAT Get State  ' (xpcethercatgetstate) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[14];
      sfcnOutputs(rts,0);
    }

    /* Memory: '<Root>/Memory3' */
    modello_2017b_levaRetro_acc_B.Memory3 =
      modello_2017b_levaRetro_acc_DW.Memory3_PreviousInput;

    /* Chart: '<S4>/Ethercat master State Machine' */
    /* Gateway: EtherCAT Master Control/Ethercat master State Machine */
    modello_2017b_levaRetro_acc_DW.sfEvent_ln = -1;

    /* During: EtherCAT Master Control/Ethercat master State Machine */
    if (modello_2017b_levaRetro_acc_DW.is_active_c2_modello_2017b_leva == 0U) {
      /* Entry: EtherCAT Master Control/Ethercat master State Machine */
      modello_2017b_levaRetro_acc_DW.is_active_c2_modello_2017b_leva = 1U;

      /* Entry Internal: EtherCAT Master Control/Ethercat master State Machine */
      /* Transition: '<S31>:33' */
      modello_2017b_levaRetro_acc_B.command = 1.0;
      modello_2017b_levaRetro_acc_B.master_ready = 0.0;
      modello_2017b_levaRetro_acc_DW.is_c2_modello_2017b_levaRetro_a =
        modello_2017b_l_IN_dispatcher_i;
    } else {
      switch (modello_2017b_levaRetro_acc_DW.is_c2_modello_2017b_levaRetro_a) {
       case modello_2017b_levaRetro_IN_INIT:
        /* During 'INIT': '<S31>:2' */
        if (modello_2017b_levaRetro_acc_B.EtherCATGetState == 2) {
          /* Transition: '<S31>:17' */
          modello_2017b_levaRetro_acc_DW.is_c2_modello_2017b_levaRetro_a =
            modello_2017b_levaRet_IN_PRE_OP;

          /* Entry 'PRE_OP': '<S31>:9' */
          modello_2017b_levaRetro_acc_B.master_ready = 0.0;
        } else {
          if (modello_2017b_levaRetro_acc_B.Memory3 == 1.0F) {
            /* Transition: '<S31>:34' */
            modello_2017b_levaRetro_acc_B.command = 2.0;
          }
        }
        break;

       case modello_2017b_le_IN_OPERATIONAL:
        /* During 'OPERATIONAL': '<S31>:12' */
        if (modello_2017b_levaRetro_acc_B.EtherCATGetState == 4) {
          /* Transition: '<S31>:23' */
          modello_2017b_levaRetro_acc_DW.is_c2_modello_2017b_levaRetro_a =
            modello_2017b_levaRe_IN_SAFE_OP;

          /* Entry 'SAFE_OP': '<S31>:11' */
          modello_2017b_levaRetro_acc_B.master_ready = 0.0;
        } else {
          if (modello_2017b_levaRetro_acc_B.Memory3 == 0.0F) {
            /* Transition: '<S31>:39' */
            modello_2017b_levaRetro_acc_B.command = 4.0;
          }
        }
        break;

       case modello_2017b_levaRet_IN_PRE_OP:
        /* During 'PRE_OP': '<S31>:9' */
        if (modello_2017b_levaRetro_acc_B.EtherCATGetState == 1) {
          /* Transition: '<S31>:19' */
          modello_2017b_levaRetro_acc_DW.is_c2_modello_2017b_levaRetro_a =
            modello_2017b_levaRetro_IN_INIT;

          /* Entry 'INIT': '<S31>:2' */
          modello_2017b_levaRetro_acc_B.master_ready = 0.0;
        } else if (modello_2017b_levaRetro_acc_B.EtherCATGetState == 4) {
          /* Transition: '<S31>:18' */
          modello_2017b_levaRetro_acc_DW.is_c2_modello_2017b_levaRetro_a =
            modello_2017b_levaRe_IN_SAFE_OP;

          /* Entry 'SAFE_OP': '<S31>:11' */
          modello_2017b_levaRetro_acc_B.master_ready = 0.0;
        } else if (modello_2017b_levaRetro_acc_B.Memory3 == 1.0F) {
          /* Transition: '<S31>:35' */
          modello_2017b_levaRetro_acc_B.command = 4.0;
        } else {
          if (modello_2017b_levaRetro_acc_B.Memory3 == 0.0F) {
            /* Transition: '<S31>:36' */
            modello_2017b_levaRetro_acc_B.command = 1.0;
          }
        }
        break;

       case modello_2017b_levaRe_IN_SAFE_OP:
        /* During 'SAFE_OP': '<S31>:11' */
        if (modello_2017b_levaRetro_acc_B.EtherCATGetState == 2) {
          /* Transition: '<S31>:20' */
          modello_2017b_levaRetro_acc_DW.is_c2_modello_2017b_levaRetro_a =
            modello_2017b_levaRet_IN_PRE_OP;

          /* Entry 'PRE_OP': '<S31>:9' */
          modello_2017b_levaRetro_acc_B.master_ready = 0.0;
        } else if (modello_2017b_levaRetro_acc_B.EtherCATGetState == 8) {
          /* Transition: '<S31>:21' */
          modello_2017b_levaRetro_acc_DW.is_c2_modello_2017b_levaRetro_a =
            modello_2017b_le_IN_OPERATIONAL;

          /* Entry 'OPERATIONAL': '<S31>:12' */
          modello_2017b_levaRetro_acc_B.master_ready = 1.0;
        } else if (modello_2017b_levaRetro_acc_B.Memory3 == 1.0F) {
          /* Transition: '<S31>:37' */
          modello_2017b_levaRetro_acc_B.command = 8.0;
        } else {
          if (modello_2017b_levaRetro_acc_B.Memory3 == 0.0F) {
            /* Transition: '<S31>:38' */
            modello_2017b_levaRetro_acc_B.command = 2.0;
          }
        }
        break;

       default:
        /* During 'dispatcher': '<S31>:32' */
        if (modello_2017b_levaRetro_acc_B.EtherCATGetState == 4) {
          /* Transition: '<S31>:14' */
          modello_2017b_levaRetro_acc_DW.is_c2_modello_2017b_levaRetro_a =
            modello_2017b_levaRe_IN_SAFE_OP;

          /* Entry 'SAFE_OP': '<S31>:11' */
          modello_2017b_levaRetro_acc_B.master_ready = 0.0;
        } else if (modello_2017b_levaRetro_acc_B.EtherCATGetState == 1) {
          /* Transition: '<S31>:3' */
          modello_2017b_levaRetro_acc_DW.is_c2_modello_2017b_levaRetro_a =
            modello_2017b_levaRetro_IN_INIT;

          /* Entry 'INIT': '<S31>:2' */
          modello_2017b_levaRetro_acc_B.master_ready = 0.0;
        } else if (modello_2017b_levaRetro_acc_B.EtherCATGetState == 8) {
          /* Transition: '<S31>:15' */
          modello_2017b_levaRetro_acc_DW.is_c2_modello_2017b_levaRetro_a =
            modello_2017b_le_IN_OPERATIONAL;

          /* Entry 'OPERATIONAL': '<S31>:12' */
          modello_2017b_levaRetro_acc_B.master_ready = 1.0;
        } else {
          if (modello_2017b_levaRetro_acc_B.EtherCATGetState == 2) {
            /* Transition: '<S31>:10' */
            modello_2017b_levaRetro_acc_DW.is_c2_modello_2017b_levaRetro_a =
              modello_2017b_levaRet_IN_PRE_OP;

            /* Entry 'PRE_OP': '<S31>:9' */
            modello_2017b_levaRetro_acc_B.master_ready = 0.0;
          }
        }
        break;
      }
    }

    /* End of Chart: '<S4>/Ethercat master State Machine' */

    /* DataTypeConversion: '<S4>/Data Type Conversion' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion_d3 = (real32_T)
      modello_2017b_levaRetro_acc_B.master_ready;

    /* Outputs for Enabled SubSystem: '<Root>/Slaves_control_and_status' incorporates:
     *  EnablePort: '<S20>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.DataTypeConversion_d3 > 0.0F) {
      /* S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive1' */

      /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive1' (xpcethercatpdorx) */
      {
        SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[0];
        sfcnOutputs(rts,0);
      }

      /* S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive3' */

      /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive3' (xpcethercatpdorx) */
      {
        SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[1];
        sfcnOutputs(rts,0);
      }

      /* S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive4' */

      /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive4' (xpcethercatpdorx) */
      {
        SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[2];
        sfcnOutputs(rts,0);
      }

      /* S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive2' */

      /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive2' (xpcethercatpdorx) */
      {
        SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[3];
        sfcnOutputs(rts,0);
      }

      /* S-Function (xpcethercatpdorx): '<S40>/Drive_statusword' */

      /* Level2 S-Function Block: '<S40>/Drive_statusword' (xpcethercatpdorx) */
      {
        SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[4];
        sfcnOutputs(rts,0);
      }

      /* S-Function (sfix_bitop): '<S40>/statusword mask' */
      modello_2017b_levaRetro_acc_B.statuswordmask = (uint16_T)
        (modello_2017b_levaRetro_acc_B.Drive_statusword &
         modello_2017b_levaRetro_acc_P.statuswordmask_BitMask);

      /* Chart: '<S40>/DS402_state_machine' */
      modello_201_DS402_state_machine
        (modello_2017b_levaRetro_acc_B.statuswordmask,
         modello_2017b_levaRetro_acc_B.Memory8,
         modello_2017b_levaRetro_acc_B.x_axis_reset_fault,
         modello_2017b_levaRetro_acc_B.quick_stop_drives,
         &modello_2017b_levaRetro_acc_B.sf_DS402_state_machine,
         &modello_2017b_levaRetro_acc_DW.sf_DS402_state_machine);

      /* DataTypeConversion: '<S40>/Data Type Conversion' */
      s1 = floor
        (modello_2017b_levaRetro_acc_B.sf_DS402_state_machine.controlword);
      if (rtIsNaN(s1) || rtIsInf(s1)) {
        s1 = 0.0;
      } else {
        s1 = fmod(s1, 65536.0);
      }

      modello_2017b_levaRetro_acc_B.DataTypeConversion_g = (uint16_T)(s1 < 0.0 ?
        (int32_T)(uint16_T)-(int16_T)(uint16_T)-s1 : (int32_T)(uint16_T)s1);

      /* End of DataTypeConversion: '<S40>/Data Type Conversion' */

      /* S-Function (xpcethercatpdotx): '<S40>/Drive_controlword' */

      /* Level2 S-Function Block: '<S40>/Drive_controlword' (xpcethercatpdotx) */
      {
        SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[5];
        sfcnOutputs(rts,0);
      }

      /* DataTypeConversion: '<S40>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_f = (real32_T)
        modello_2017b_levaRetro_acc_B.sf_DS402_state_machine.fault_detected;

      /* DataTypeConversion: '<S40>/Data Type Conversion2' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion2_b = (real32_T)
        modello_2017b_levaRetro_acc_B.sf_DS402_state_machine.drive_enabled;

      /* DataTypeConversion: '<S40>/Data Type Conversion3' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion3_e = (real32_T)
        modello_2017b_levaRetro_acc_B.sf_DS402_state_machine.drive_ready;

      /* S-Function (xpcethercatpdotx): '<S41>/EtherCAT PDO Transmit 2' */

      /* Level2 S-Function Block: '<S41>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
      {
        SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[6];
        sfcnOutputs(rts,0);
      }

      /* S-Function (xpcethercatpdorx): '<S46>/EtherCAT PDO Receive1' */

      /* Level2 S-Function Block: '<S46>/EtherCAT PDO Receive1' (xpcethercatpdorx) */
      {
        SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[7];
        sfcnOutputs(rts,0);
      }

      /* S-Function (xpcethercatpdorx): '<S46>/EtherCAT PDO Receive3' */

      /* Level2 S-Function Block: '<S46>/EtherCAT PDO Receive3' (xpcethercatpdorx) */
      {
        SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[8];
        sfcnOutputs(rts,0);
      }

      /* S-Function (xpcethercatpdorx): '<S46>/EtherCAT PDO Receive4' */

      /* Level2 S-Function Block: '<S46>/EtherCAT PDO Receive4' (xpcethercatpdorx) */
      {
        SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[9];
        sfcnOutputs(rts,0);
      }

      /* S-Function (xpcethercatpdorx): '<S46>/EtherCAT PDO Receive2' */

      /* Level2 S-Function Block: '<S46>/EtherCAT PDO Receive2' (xpcethercatpdorx) */
      {
        SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[10];
        sfcnOutputs(rts,0);
      }

      /* S-Function (xpcethercatpdorx): '<S44>/Drive_statusword' */

      /* Level2 S-Function Block: '<S44>/Drive_statusword' (xpcethercatpdorx) */
      {
        SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[11];
        sfcnOutputs(rts,0);
      }

      /* S-Function (sfix_bitop): '<S44>/statusword mask' */
      modello_2017b_levaRetro_acc_B.statuswordmask_e = (uint16_T)
        (modello_2017b_levaRetro_acc_B.Drive_statusword_m &
         modello_2017b_levaRetro_acc_P.statuswordmask_BitMask_h);

      /* Chart: '<S44>/DS402_state_machine' */
      modello_201_DS402_state_machine
        (modello_2017b_levaRetro_acc_B.statuswordmask_e,
         modello_2017b_levaRetro_acc_B.Memory8,
         modello_2017b_levaRetro_acc_B.y_axis_reset_fault,
         modello_2017b_levaRetro_acc_B.quick_stop_drives,
         &modello_2017b_levaRetro_acc_B.sf_DS402_state_machine_g,
         &modello_2017b_levaRetro_acc_DW.sf_DS402_state_machine_g);

      /* DataTypeConversion: '<S44>/Data Type Conversion' */
      s1 = floor
        (modello_2017b_levaRetro_acc_B.sf_DS402_state_machine_g.controlword);
      if (rtIsNaN(s1) || rtIsInf(s1)) {
        s1 = 0.0;
      } else {
        s1 = fmod(s1, 65536.0);
      }

      modello_2017b_levaRetro_acc_B.DataTypeConversion_ph = (uint16_T)(s1 < 0.0 ?
        (int32_T)(uint16_T)-(int16_T)(uint16_T)-s1 : (int32_T)(uint16_T)s1);

      /* End of DataTypeConversion: '<S44>/Data Type Conversion' */

      /* S-Function (xpcethercatpdotx): '<S44>/Drive_controlword' */

      /* Level2 S-Function Block: '<S44>/Drive_controlword' (xpcethercatpdotx) */
      {
        SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[12];
        sfcnOutputs(rts,0);
      }

      /* DataTypeConversion: '<S44>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_e = (real32_T)
        modello_2017b_levaRetro_acc_B.sf_DS402_state_machine_g.drive_enabled;

      /* DataTypeConversion: '<S44>/Data Type Conversion2' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion2_a = (real32_T)
        modello_2017b_levaRetro_acc_B.sf_DS402_state_machine_g.fault_detected;

      /* DataTypeConversion: '<S44>/Data Type Conversion3' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion3_gd = (real32_T)
        modello_2017b_levaRetro_acc_B.sf_DS402_state_machine_g.drive_ready;

      /* S-Function (xpcethercatpdotx): '<S45>/EtherCAT PDO Transmit 2' */

      /* Level2 S-Function Block: '<S45>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
      {
        SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[13];
        sfcnOutputs(rts,0);
      }

      srUpdateBC(modello_2017b_levaRetro_acc_DW.Slaves_control_and_status_Subsy);
    }

    /* End of Outputs for SubSystem: '<Root>/Slaves_control_and_status' */

    /* Memory: '<S23>/Memory' */
    modello_2017b_levaRetro_acc_B.Memory_o =
      modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_n;

    /* Sum: '<S23>/Sum' */
    modello_2017b_levaRetro_acc_B.Sum_k =
      modello_2017b_levaRetro_acc_B.EtherCATPDOReceive3 -
      modello_2017b_levaRetro_acc_B.Memory_o;

    /* Sum: '<S23>/Sum1' incorporates:
     *  Constant: '<Root>/x_axis_encoder_raw_offset'
     */
    modello_2017b_levaRetro_acc_B.Sum1 = (real_T)
      modello_2017b_levaRetro_acc_B.Sum_k -
      modello_2017b_levaRetro_acc_P.x_axis_encoder_raw_offset_Value;

    /* Gain: '<S23>/enc_raw_to_rad1' */
    s1 = modello_2017b_levaRetro_acc_P.transmission_ratio[0];
    b_gamma = 6.2831853071795862 / s1;
    b_gamma /= 1.048576E+6;
    modello_2017b_levaRetro_acc_B.enc_raw_to_rad1 = b_gamma *
      modello_2017b_levaRetro_acc_B.Sum1;

    /* Gain: '<S7>/change_sign4' */
    modello_2017b_levaRetro_acc_B.change_sign4 =
      modello_2017b_levaRetro_acc_P.change_sign4_Gain *
      modello_2017b_levaRetro_acc_B.enc_raw_to_rad1;

    /* Memory: '<S24>/Memory' */
    modello_2017b_levaRetro_acc_B.Memory_b =
      modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_nc;

    /* Sum: '<S24>/Sum' */
    modello_2017b_levaRetro_acc_B.Sum_a2 =
      modello_2017b_levaRetro_acc_B.EtherCATPDOReceive3_l -
      modello_2017b_levaRetro_acc_B.Memory_b;

    /* Sum: '<S24>/Sum1' incorporates:
     *  Constant: '<Root>/y_axis_encoder_raw_offset'
     */
    modello_2017b_levaRetro_acc_B.Sum1_d = (real_T)
      modello_2017b_levaRetro_acc_B.Sum_a2 -
      modello_2017b_levaRetro_acc_P.y_axis_encoder_raw_offset_Value;

    /* Gain: '<S24>/enc_raw_to_rad1' */
    s1 = modello_2017b_levaRetro_acc_P.transmission_ratio[1];
    b_gamma = 6.2831853071795862 / s1;
    b_gamma /= 1.048576E+6;
    modello_2017b_levaRetro_acc_B.enc_raw_to_rad1_p = b_gamma *
      modello_2017b_levaRetro_acc_B.Sum1_d;

    /* Gain: '<S7>/change_sign5' */
    modello_2017b_levaRetro_acc_B.change_sign5 =
      modello_2017b_levaRetro_acc_P.change_sign5_Gain *
      modello_2017b_levaRetro_acc_B.enc_raw_to_rad1_p;

    /* Gain: '<S23>/enc_raw_to_rad' */
    modello_2017b_levaRetro_acc_B.enc_raw_to_rad = (real_T)
      modello_2017b_levaRetro_acc_P.enc_raw_to_rad_Gain * 2.2204460492503131E-16
      * (real_T)modello_2017b_levaRetro_acc_B.EtherCATPDOReceive3;

    /* UnitDelay: '<S54>/Unit Delay' */
    modello_2017b_levaRetro_acc_B.UnitDelay =
      modello_2017b_levaRetro_acc_DW.UnitDelay_DSTATE;

    /* Sum: '<S54>/Sum1' */
    modello_2017b_levaRetro_acc_B.Sum1_a =
      modello_2017b_levaRetro_acc_B.enc_raw_to_rad -
      modello_2017b_levaRetro_acc_B.UnitDelay;

    /* Gain: '<S54>/length1' */
    s1 = modello_2017b_levaRetro_acc_P.SystemSampleTime;
    b_gamma = 1.0 / s1;
    modello_2017b_levaRetro_acc_B.length1 = b_gamma *
      modello_2017b_levaRetro_acc_B.Sum1_a;

    /* MATLAB Function: '<S23>/AntiSpike' */
    modello_2017b_levaRet_AntiSpike(modello_2017b_levaRetro_acc_B.length1,
      &modello_2017b_levaRetro_acc_B.sf_AntiSpike,
      &modello_2017b_levaRetro_acc_DW.sf_AntiSpike);

    /* Gain: '<S7>/change_sign6' */
    modello_2017b_levaRetro_acc_B.change_sign6 =
      modello_2017b_levaRetro_acc_P.change_sign6_Gain *
      modello_2017b_levaRetro_acc_B.sf_AntiSpike.vel_out;

    /* Gain: '<S24>/enc_raw_to_rad' */
    modello_2017b_levaRetro_acc_B.enc_raw_to_rad_p = (real_T)
      modello_2017b_levaRetro_acc_P.enc_raw_to_rad_Gain_a *
      4.4408920985006262E-16 * (real_T)
      modello_2017b_levaRetro_acc_B.EtherCATPDOReceive3_l;

    /* UnitDelay: '<S56>/Unit Delay' */
    modello_2017b_levaRetro_acc_B.UnitDelay_c =
      modello_2017b_levaRetro_acc_DW.UnitDelay_DSTATE_a;

    /* Sum: '<S56>/Sum1' */
    modello_2017b_levaRetro_acc_B.Sum1_j =
      modello_2017b_levaRetro_acc_B.enc_raw_to_rad_p -
      modello_2017b_levaRetro_acc_B.UnitDelay_c;

    /* Gain: '<S56>/length1' */
    s1 = modello_2017b_levaRetro_acc_P.SystemSampleTime;
    b_gamma = 1.0 / s1;
    modello_2017b_levaRetro_acc_B.length1_i = b_gamma *
      modello_2017b_levaRetro_acc_B.Sum1_j;

    /* MATLAB Function: '<S24>/AntiSpike' */
    modello_2017b_levaRet_AntiSpike(modello_2017b_levaRetro_acc_B.length1_i,
      &modello_2017b_levaRetro_acc_B.sf_AntiSpike_b,
      &modello_2017b_levaRetro_acc_DW.sf_AntiSpike_b);

    /* Gain: '<S7>/change_sign7' */
    modello_2017b_levaRetro_acc_B.change_sign7 =
      modello_2017b_levaRetro_acc_P.change_sign7_Gain *
      modello_2017b_levaRetro_acc_B.sf_AntiSpike_b.vel_out;

    /* MATLAB Function: '<S7>/MATLAB Function' incorporates:
     *  Constant: '<Root>/lever_length_without_knob1'
     */
    /* MATLAB Function 'Kinematics/MATLAB Function': '<S34>:1' */
    /* '<S34>:1:87' */
    /* '<S34>:1:82' */
    /* '<S34>:1:49' */
    /* '<S34>:1:44' */
    /* '<S34>:1:29' */
    s1 = sin(modello_2017b_levaRetro_acc_B.change_sign4);

    /* '<S34>:1:30' */
    s2 = sin(modello_2017b_levaRetro_acc_B.change_sign5);

    /* '<S34>:1:31' */
    c1 = cos(modello_2017b_levaRetro_acc_B.change_sign4);

    /* '<S34>:1:32' */
    c2 = cos(modello_2017b_levaRetro_acc_B.change_sign5);

    /* '<S34>:1:37' */
    z22[0] = -c2;
    z22[1] = 0.0;
    z22[2] = s2;

    /* '<S34>:1:38' */
    h = sqrt((c1 * c1 + c2 * c2) - c1 * c1 * (c2 * c2));

    /* '<S34>:1:39' */
    b_gamma = 1.0 / h;
    z31[0] = -c1 * s2 * b_gamma;
    z31[1] = s1 * c2 * b_gamma;
    z31[2] = -c1 * c2 * b_gamma;

    /* '<S34>:1:41' */
    /* '<S34>:1:44' */
    /* '<S34>:1:47' */
    b_gamma = s1 * s1 * (c2 * c2) + c1 * c1;

    /* '<S34>:1:48' */
    W[0] = c2 * c2 / b_gamma;
    W[3] = -(c1 * c1) * c2 * s1 * s2 / b_gamma;
    W[1] = 0.0;
    W[4] = 1.0;
    W[2] = -c2 * s2 / b_gamma;
    W[5] = c1 * c1 * s1 * (s2 * s2) / b_gamma;

    /* '<S34>:1:52' */
    r = modello_2017b_levaRetro_acc_P.lever_length / (real32_T)h;
    P[0] = r * 0.0F;
    P[3] = (real32_T)(c1 * c2) * r;
    P[6] = (real32_T)(s1 * c2) * r;
    P[1] = (real32_T)(-c1 * c2) * r;
    P[4] = r * 0.0F;
    P[7] = (real32_T)(c1 * s2) * r;
    P[2] = (real32_T)(-s1 * c2) * r;
    P[5] = (real32_T)(-c1 * s2) * r;
    P[8] = r * 0.0F;

    /* '<S34>:1:65' */
    /* '<S34>:1:67' */
    /* '<S34>:1:69' */
    /* '<S34>:1:80' */
    /* '<S34>:1:81' */
    /* '<S34>:1:82' */
    z22_0[1] = 0.0 * z31[2] - z22[2] * z31[1];
    z22_0[4] = z22[2] * z31[0] - z22[0] * z31[2];
    z22_0[7] = z22[0] * z31[1] - 0.0 * z31[0];

    /* '<S34>:1:84' */
    for (on_orig_curve = 0; on_orig_curve < 3; on_orig_curve++) {
      z22_0[3 * on_orig_curve] = z22[on_orig_curve];
      z22_0[2 + 3 * on_orig_curve] = z31[on_orig_curve];
      for (i = 0; i < 2; i++) {
        T[i + (on_orig_curve << 1)] = z22_0[3 * on_orig_curve + i];
        P_1[on_orig_curve + 3 * i] = 0.0F;
        t = P_1[3 * i + on_orig_curve];
        t += (real32_T)W[3 * i] * -P[on_orig_curve];
        P_1[on_orig_curve + 3 * i] = t;
        t = P_1[3 * i + on_orig_curve];
        t += (real32_T)W[3 * i + 1] * -P[on_orig_curve + 3];
        P_1[on_orig_curve + 3 * i] = t;
        t = P_1[3 * i + on_orig_curve];
        t += (real32_T)W[3 * i + 2] * -P[on_orig_curve + 6];
        P_1[on_orig_curve + 3 * i] = t;
      }
    }

    for (on_orig_curve = 0; on_orig_curve < 2; on_orig_curve++) {
      for (i = 0; i < 2; i++) {
        c_y[i + (on_orig_curve << 1)] = 0.0F;
        t = c_y[(on_orig_curve << 1) + i];
        t += P_1[3 * on_orig_curve] * (real32_T)T[i];
        c_y[i + (on_orig_curve << 1)] = t;
        t = c_y[(on_orig_curve << 1) + i];
        t += P_1[3 * on_orig_curve + 1] * (real32_T)T[i + 2];
        c_y[i + (on_orig_curve << 1)] = t;
        t = c_y[(on_orig_curve << 1) + i];
        t += P_1[3 * on_orig_curve + 2] * (real32_T)T[i + 4];
        c_y[i + (on_orig_curve << 1)] = t;
      }
    }

    if ((real32_T)fabs(c_y[1]) > (real32_T)fabs(c_y[0])) {
      r = c_y[0] / c_y[1];
      t = 1.0F / (r * c_y[3] - c_y[2]);
      d_y_idx_0 = c_y[3] / c_y[1] * t;
      d_y_idx_1 = -t;
      d_y_idx_2 = -c_y[2] / c_y[1] * t;
      t *= r;
    } else {
      r = c_y[1] / c_y[0];
      t = 1.0F / (c_y[3] - r * c_y[2]);
      d_y_idx_0 = c_y[3] / c_y[0] * t;
      d_y_idx_1 = -r * t;
      d_y_idx_2 = -c_y[2] / c_y[0] * t;
    }

    /* '<S34>:1:87' */
    for (on_orig_curve = 0; on_orig_curve < 3; on_orig_curve++) {
      J_i[on_orig_curve << 1] = 0.0F;
      r = J_i[on_orig_curve << 1];
      r += (real32_T)T[on_orig_curve << 1] * d_y_idx_0;
      J_i[on_orig_curve << 1] = r;
      r = J_i[on_orig_curve << 1];
      r += (real32_T)T[(on_orig_curve << 1) + 1] * d_y_idx_2;
      J_i[on_orig_curve << 1] = r;
      J_i[1 + (on_orig_curve << 1)] = 0.0F;
      r = J_i[(on_orig_curve << 1) + 1];
      r += (real32_T)T[on_orig_curve << 1] * d_y_idx_1;
      J_i[1 + (on_orig_curve << 1)] = r;
      r = J_i[(on_orig_curve << 1) + 1];
      r += (real32_T)T[(on_orig_curve << 1) + 1] * t;
      J_i[1 + (on_orig_curve << 1)] = r;
      modello_2017b_levaRetro_acc_B.p_ref[on_orig_curve] = 0.0F;
      modello_2017b_levaRetro_acc_B.p_ref[on_orig_curve] +=
        modello_2017b_levaRetro_acc_P.lever_length * (real32_T)z31[0] *
        (real32_T)b[on_orig_curve];
      P_0[3 * on_orig_curve] = -P[3 * on_orig_curve];
      modello_2017b_levaRetro_acc_B.p_ref[on_orig_curve] += (real32_T)
        b[on_orig_curve + 3] * (modello_2017b_levaRetro_acc_P.lever_length *
        (real32_T)z31[1]);
      P_0[1 + 3 * on_orig_curve] = -P[3 * on_orig_curve + 1];
      modello_2017b_levaRetro_acc_B.p_ref[on_orig_curve] += (real32_T)
        b[on_orig_curve + 6] * (modello_2017b_levaRetro_acc_P.lever_length *
        (real32_T)z31[2]);
      P_0[2 + 3 * on_orig_curve] = -P[3 * on_orig_curve + 2];
    }

    tmp[0] = (real32_T)modello_2017b_levaRetro_acc_B.change_sign6;
    tmp[1] = (real32_T)modello_2017b_levaRetro_acc_B.change_sign7;
    for (on_orig_curve = 0; on_orig_curve < 3; on_orig_curve++) {
      P_2[on_orig_curve] = 0.0F;
      for (i = 0; i < 2; i++) {
        t = P_2[on_orig_curve];
        P_1[on_orig_curve + 3 * i] = 0.0F;
        d_y_idx_0 = P_1[3 * i + on_orig_curve];
        d_y_idx_0 += (real32_T)W[3 * i] * P_0[on_orig_curve];
        P_1[on_orig_curve + 3 * i] = d_y_idx_0;
        d_y_idx_0 = P_1[3 * i + on_orig_curve];
        d_y_idx_0 += (real32_T)W[3 * i + 1] * P_0[on_orig_curve + 3];
        P_1[on_orig_curve + 3 * i] = d_y_idx_0;
        d_y_idx_0 = P_1[3 * i + on_orig_curve];
        d_y_idx_0 += (real32_T)W[3 * i + 2] * P_0[on_orig_curve + 6];
        P_1[on_orig_curve + 3 * i] = d_y_idx_0;
        t += P_1[3 * i + on_orig_curve] * tmp[i];
        P_2[on_orig_curve] = t;
      }
    }

    for (on_orig_curve = 0; on_orig_curve < 3; on_orig_curve++) {
      modello_2017b_levaRetro_acc_B.vp_ref[on_orig_curve] = 0.0F;
      modello_2017b_levaRetro_acc_B.vp_ref[on_orig_curve] += (real32_T)
        b[on_orig_curve] * P_2[0];
      modello_2017b_levaRetro_acc_B.vp_ref[on_orig_curve] += (real32_T)
        b[on_orig_curve + 3] * P_2[1];
      modello_2017b_levaRetro_acc_B.vp_ref[on_orig_curve] += (real32_T)
        b[on_orig_curve + 6] * P_2[2];
      P_1[on_orig_curve] = 0.0F;
      r = P_1[on_orig_curve];
      r += J_i[on_orig_curve << 1];
      P_1[on_orig_curve] = r;
      r = P_1[on_orig_curve];
      r += J_i[(on_orig_curve << 1) + 1] * 0.0F;
      P_1[on_orig_curve] = r;
      P_1[on_orig_curve + 3] = 0.0F;
      r = P_1[on_orig_curve + 3];
      r += J_i[on_orig_curve << 1] * 0.0F;
      P_1[on_orig_curve + 3] = r;
      r = P_1[on_orig_curve + 3];
      r += J_i[(on_orig_curve << 1) + 1];
      P_1[on_orig_curve + 3] = r;
      for (i = 0; i < 3; i++) {
        P[on_orig_curve + 3 * i] = 0.0F;
        r = P[3 * i + on_orig_curve];
        r += J_i[i << 1] * P_1[on_orig_curve];
        P[on_orig_curve + 3 * i] = r;
        r = P[3 * i + on_orig_curve];
        r += J_i[(i << 1) + 1] * P_1[on_orig_curve + 3];
        P[on_orig_curve + 3 * i] = r;
      }
    }

    for (on_orig_curve = 0; on_orig_curve < 3; on_orig_curve++) {
      for (i = 0; i < 3; i++) {
        P_0[i + 3 * on_orig_curve] = 0.0F;
        t = P_0[3 * on_orig_curve + i];
        t += P[3 * on_orig_curve] * (real32_T)c[i];
        P_0[i + 3 * on_orig_curve] = t;
        t = P_0[3 * on_orig_curve + i];
        t += P[3 * on_orig_curve + 1] * (real32_T)c[i + 3];
        P_0[i + 3 * on_orig_curve] = t;
        t = P_0[3 * on_orig_curve + i];
        t += P[3 * on_orig_curve + 2] * (real32_T)c[i + 6];
        P_0[i + 3 * on_orig_curve] = t;
      }
    }

    for (on_orig_curve = 0; on_orig_curve < 3; on_orig_curve++) {
      for (i = 0; i < 3; i++) {
        modello_2017b_levaRetro_acc_B.M[i + 3 * on_orig_curve] = 0.0F;
        modello_2017b_levaRetro_acc_B.M[i + 3 * on_orig_curve] += (real32_T)b[3 *
          on_orig_curve] * P_0[i];
        modello_2017b_levaRetro_acc_B.M[i + 3 * on_orig_curve] += (real32_T)b[3 *
          on_orig_curve + 1] * P_0[i + 3];
        modello_2017b_levaRetro_acc_B.M[i + 3 * on_orig_curve] += (real32_T)b[3 *
          on_orig_curve + 2] * P_0[i + 6];
      }
    }

    /* End of MATLAB Function: '<S7>/MATLAB Function' */

    /* DataTypeConversion: '<S7>/Data Type Conversion4' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion4_n =
      modello_2017b_levaRetro_acc_B.p_ref[0];

    /* Outport: '<Root>/position_x' */
    modello_2017b_levaRetro_acc_Y.position_x =
      modello_2017b_levaRetro_acc_B.DataTypeConversion4_n;

    /* Memory: '<Root>/Memory9' */
    modello_2017b_levaRetro_acc_B.Memory9 =
      modello_2017b_levaRetro_acc_DW.Memory9_PreviousInput;

    /* ManualSwitch: '<Root>/Manual Switch12' incorporates:
     *  Constant: '<Root>/dynamic1'
     *  Constant: '<Root>/static1'
     */
    if (modello_2017b_levaRetro_acc_P.ManualSwitch12_CurrentSetting == 1) {
      modello_2017b_levaRetro_acc_B.ManualSwitch12 =
        modello_2017b_levaRetro_acc_P.static1_Value;
    } else {
      modello_2017b_levaRetro_acc_B.ManualSwitch12 =
        modello_2017b_levaRetro_acc_P.dynamic1_Value;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch12' */

    /* DataTypeConversion: '<S7>/Data Type Conversion6' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion6_a =
      modello_2017b_levaRetro_acc_B.vp_ref[0];

    /* DataTypeConversion: '<S7>/Data Type Conversion5' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion5_n =
      modello_2017b_levaRetro_acc_B.p_ref[1];

    /* Memory: '<S26>/Memory' */
    modello_2017b_levaRetro_acc_B.Memory =
      modello_2017b_levaRetro_acc_DW.Memory_PreviousInput;

    /* ManualSwitch: '<Root>/Manual Switch11' incorporates:
     *  Constant: '<Root>/dynamic2'
     *  Constant: '<Root>/static2'
     */
    if (modello_2017b_levaRetro_acc_P.ManualSwitch11_CurrentSetting == 1) {
      modello_2017b_levaRetro_acc_B.ManualSwitch11 =
        modello_2017b_levaRetro_acc_P.static2_Value;
    } else {
      modello_2017b_levaRetro_acc_B.ManualSwitch11 =
        modello_2017b_levaRetro_acc_P.dynamic2_Value;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch11' */

    /* MATLAB Function: '<S26>/MATLAB Function' incorporates:
     *  Constant: '<S26>/Constant'
     *  Constant: '<S26>/Constant1'
     *  Constant: '<S26>/Constant3'
     *  Constant: '<S26>/Constant4'
     *  Constant: '<S26>/Constant5'
     *  Constant: '<S26>/Constant6'
     */
    r = modello_2017b_levaRetro_acc_B.DataTypeConversion5_n;

    /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/MATLAB Function': '<S83>:1' */
    /* '<S83>:1:15' */
    /* '<S83>:1:16' */
    b_gamma = modello_2017b_levaRetro_acc_B.Memory;
    if (modello_2017b_levaRetro_acc_DW.retroState == 0.0) {
      /* '<S83>:1:18' */
      if (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n > (real32_T)
          modello_2017b_levaRetro_acc_P.selection1_y_pos) {
        /* '<S83>:1:19' */
        /* '<S83>:1:20' */
        r = (real32_T)modello_2017b_levaRetro_acc_P.selection1_y_pos;
      } else {
        if (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n < (real32_T)
            modello_2017b_levaRetro_acc_P.selection1_y_neg) {
          /* '<S83>:1:21' */
          /* '<S83>:1:22' */
          r = (real32_T)modello_2017b_levaRetro_acc_P.selection1_y_neg;
        }
      }
    } else if (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n > (real32_T)
               modello_2017b_levaRetro_acc_P.selection2_y_pos) {
      /* '<S83>:1:25' */
      /* '<S83>:1:26' */
      r = (real32_T)modello_2017b_levaRetro_acc_P.selection2_y_pos;
    } else {
      if (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n < (real32_T)
          modello_2017b_levaRetro_acc_P.selection2_y_neg) {
        /* '<S83>:1:27' */
        /* '<S83>:1:28' */
        r = (real32_T)modello_2017b_levaRetro_acc_P.selection2_y_neg;
      }
    }

    if (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n >=
        modello_2017b_levaRetro_acc_P.selection_x_pos) {
      /* '<S83>:1:31' */
      /* '<S83>:1:32' */
      on_orig_curve = 1;
      exitg2 = false;
      while ((!exitg2) && (on_orig_curve - 1 < 7)) {
        /* '<S83>:1:32' */
        /* '<S83>:1:34' */
        /* '<S83>:1:35' */
        /* '<S83>:1:36' */
        /* '<S83>:1:37' */
        if ((r + 0.0001F >=
             modello_2017b_levaRetro_acc_P.gearshift_grid[on_orig_curve * 6 - 5])
            && (r - 0.0001F <=
                modello_2017b_levaRetro_acc_P.gearshift_grid[on_orig_curve * 6 -
                4]) &&
            (modello_2017b_levaRetro_acc_P.gearshift_grid[on_orig_curve * 6 - 2]
             == 1.0) && (modello_2017b_levaRetro_acc_B.Memory == 8.0)) {
          /* '<S83>:1:38' */
          /* '<S83>:1:39' */
          b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[on_orig_curve *
            6 - 3];
          exitg2 = true;
        } else {
          on_orig_curve++;
        }
      }
    } else if (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n <=
               modello_2017b_levaRetro_acc_P.selection_x_neg) {
      /* '<S83>:1:43' */
      /* '<S83>:1:44' */
      on_orig_curve = 1;
      exitg1 = false;
      while ((!exitg1) && (on_orig_curve - 1 < 7)) {
        /* '<S83>:1:44' */
        /* '<S83>:1:46' */
        /* '<S83>:1:47' */
        /* '<S83>:1:48' */
        /* '<S83>:1:49' */
        if ((r + 0.0001F >=
             modello_2017b_levaRetro_acc_P.gearshift_grid[on_orig_curve * 6 - 5])
            && (r - 0.0001F <=
                modello_2017b_levaRetro_acc_P.gearshift_grid[on_orig_curve * 6 -
                4]) &&
            (modello_2017b_levaRetro_acc_P.gearshift_grid[on_orig_curve * 6 - 2]
             == 0.0) && (modello_2017b_levaRetro_acc_B.Memory == 8.0)) {
          /* '<S83>:1:50' */
          /* '<S83>:1:51' */
          b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[on_orig_curve *
            6 - 3];
          exitg1 = true;
        } else {
          on_orig_curve++;
        }
      }
    } else {
      /* '<S83>:1:56' */
      b_gamma = 8.0;
    }

    if (modello_2017b_levaRetro_acc_B.ManualSwitch11 == 1.0) {
      /* '<S83>:1:60' */
      if (modello_2017b_levaRetro_acc_DW.retroState == 0.0) {
        /* '<S83>:1:61' */
        /* '<S83>:1:62' */
        modello_2017b_levaRetro_acc_DW.retroState = 0.0;
      } else {
        /* '<S83>:1:64' */
        if (r - 0.0001F <= modello_2017b_levaRetro_acc_P.gearshift_grid[2]) {
          /* '<S83>:1:66' */
          /* '<S83>:1:67' */
          modello_2017b_levaRetro_acc_DW.retroState = 0.0;
        }
      }
    } else {
      if (b_gamma == 8.0) {
        /* '<S83>:1:71' */
        /* '<S83>:1:72' */
        modello_2017b_levaRetro_acc_DW.retroState = 1.0;
      }
    }

    /* '<S83>:1:76' */
    modello_2017b_levaRetro_acc_B.retro =
      modello_2017b_levaRetro_acc_DW.retroState;
    modello_2017b_levaRetro_acc_B.selection = b_gamma;

    /* End of MATLAB Function: '<S26>/MATLAB Function' */

    /* DataTypeConversion: '<S26>/Data Type Conversion' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion_kx = (real32_T)
      modello_2017b_levaRetro_acc_B.selection;

    /* DataTypeConversion: '<S26>/Data Type Conversion3' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion3_g = (real32_T)
      modello_2017b_levaRetro_acc_B.retro;

    /* Chart: '<S26>/static_Prova_griglia' */
    /* Gateway: prova_cambio_con_profili_enabled_sbox_viscous_variable/static_Prova_griglia */
    modello_2017b_levaRetro_acc_DW.sfEvent = -1;

    /* During: prova_cambio_con_profili_enabled_sbox_viscous_variable/static_Prova_griglia */
    if (modello_2017b_levaRetro_acc_DW.is_active_c152_modello_2017b_le == 0U) {
      /* Entry: prova_cambio_con_profili_enabled_sbox_viscous_variable/static_Prova_griglia */
      modello_2017b_levaRetro_acc_DW.is_active_c152_modello_2017b_le = 1U;

      /* Entry Internal: prova_cambio_con_profili_enabled_sbox_viscous_variable/static_Prova_griglia */
      modello_2017b_levaRetro_acc_DW.is_active_asse_x = 1U;

      /* Entry Internal 'asse_x': '<S90>:8' */
      /* Transition: '<S90>:39' */
      modello_2017b_levaRetro_acc_DW.is_asse_x = modello_2017b_levaRet_IN_IDLE_e;

      /* Entry 'IDLE': '<S90>:211' */
      modello_2017b_levaRetro_acc_B.statex_g = 8.0F;
      modello_2017b_levaRetro_acc_DW.is_active_asse_y = 1U;

      /* Entry Internal 'asse_y': '<S90>:9' */
      /* Transition: '<S90>:201' */
      modello_2017b_levaRetro_acc_DW.is_asse_y = modello_2017b_levaRet_IN_IDLE_e;

      /* Entry 'IDLE': '<S90>:215' */
      modello_2017b_levaRetro_acc_B.statey = 5.0F;
    } else {
      /* During 'asse_x': '<S90>:8' */
      if (modello_2017b_levaRetro_acc_B.Memory9 == 0.0F) {
        /* Transition: '<S90>:214' */
        /* Exit Internal 'asse_x': '<S90>:8' */
        modello_2017b_levaRetro_acc_DW.is_asse_x =
          modello_2017b_levaRet_IN_IDLE_e;

        /* Entry 'IDLE': '<S90>:211' */
        modello_2017b_levaRetro_acc_B.statex_g = 8.0F;
      } else {
        switch (modello_2017b_levaRetro_acc_DW.is_asse_x) {
         case modello_2017b_levaRet_IN_IDLE_e:
          /* During 'IDLE': '<S90>:211' */
          if (modello_2017b_levaRetro_acc_B.Memory9 == 1.0F) {
            /* Transition: '<S90>:212' */
            modello_2017b_levaRetro_acc_DW.is_asse_x =
              modello_2017_IN_forza_crossgate;

            /* Entry 'forza_crossgate': '<S90>:10' */
            modello_2017b_levaRetro_acc_B.statex_g = 7.0F;
          }
          break;

         case modello_2017b_l_IN_curva_andata:
          /* During 'curva_andata': '<S90>:138' */
          if (modello_2017b_levaRetro_acc_B.DataTypeConversion_kx == 8.0F) {
            /* Transition: '<S90>:142' */
            modello_2017b_levaRetro_acc_DW.is_asse_x =
              modello_2017_IN_forza_crossgate;

            /* Entry 'forza_crossgate': '<S90>:10' */
            modello_2017b_levaRetro_acc_B.statex_g = 7.0F;
          } else {
            if (((modello_2017b_levaRetro_acc_DW.up_gear == 1.0) && (fabs
                  (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                   modello_2017b_levaRetro_acc_P.selection_x_pos) >=
                  modello_2017b_levaRetro_acc_DW.punto_marcia_innestata)) ||
                ((modello_2017b_levaRetro_acc_DW.up_gear == 0.0) && (fabs
                  (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                   modello_2017b_levaRetro_acc_P.selection_x_neg) >=
                  modello_2017b_levaRetro_acc_DW.punto_marcia_innestata))) {
              /* Transition: '<S90>:166' */
              modello_2017b_levaRetro_acc_DW.is_asse_x =
                modello_201_IN_marcia_innestata;

              /* Entry 'marcia_innestata': '<S90>:163' */
              modello_2017b_levaRetro_acc_B.statex_g = 7.0F;
            }
          }
          break;

         case modello_2017b__IN_curva_ritorno:
          /* During 'curva_ritorno': '<S90>:151' */
          if (modello_2017b_levaRetro_acc_B.DataTypeConversion_kx == 8.0F) {
            /* Transition: '<S90>:168' */
            modello_2017b_levaRetro_acc_DW.is_asse_x =
              modello_2017_IN_forza_crossgate;

            /* Entry 'forza_crossgate': '<S90>:10' */
            modello_2017b_levaRetro_acc_B.statex_g = 7.0F;
          } else {
            if (((modello_2017b_levaRetro_acc_DW.up_gear == 1.0) && (fabs
                  (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                   modello_2017b_levaRetro_acc_P.selection_x_pos) >=
                  modello_2017b_levaRetro_acc_DW.punto_marcia_innestata)) ||
                ((modello_2017b_levaRetro_acc_DW.up_gear == 0.0) && (fabs
                  (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                   modello_2017b_levaRetro_acc_P.selection_x_neg) >=
                  modello_2017b_levaRetro_acc_DW.punto_marcia_innestata))) {
              /* Transition: '<S90>:169' */
              modello_2017b_levaRetro_acc_DW.is_asse_x =
                modello_201_IN_marcia_innestata;

              /* Entry 'marcia_innestata': '<S90>:163' */
              modello_2017b_levaRetro_acc_B.statex_g = 7.0F;
            }
          }
          break;

         case modello_2017_IN_forza_crossgate:
          /* During 'forza_crossgate': '<S90>:10' */
          if ((modello_2017b_levaRetro_acc_B.DataTypeConversion_kx == 8.0F) &&
              ((modello_2017b_levaRetro_acc_B.DataTypeConversion4_n >=
                modello_2017b_levaRetro_acc_P.selection_x_pos) ||
               (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n <=
                modello_2017b_levaRetro_acc_P.selection_x_neg))) {
            /* Transition: '<S90>:136' */
            modello_2017b_levaRetro_acc_DW.is_asse_x =
              modello_201_IN_muro_selezione_x;
          } else {
            if ((modello_2017b_levaRetro_acc_B.DataTypeConversion_kx != 8.0F) &&
                ((modello_2017b_levaRetro_acc_B.DataTypeConversion4_n >=
                  modello_2017b_levaRetro_acc_P.selection_x_pos) ||
                 (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n <=
                  modello_2017b_levaRetro_acc_P.selection_x_neg))) {
              /* Transition: '<S90>:140' */
              modello_2017b_levaRetro_acc_DW.corsa_marcia_x = fabs
                (modello_2017b__gearshift_grid_r((real_T)
                  modello_2017b_levaRetro_acc_B.DataTypeConversion_kx, 1.0));
              modello_2017b_levaRetro_acc_DW.punto_marcia_innestata = fabs
                (modello_2017b__gearshift_grid_r((real_T)
                  modello_2017b_levaRetro_acc_B.DataTypeConversion_kx, 6.0));
              modello_2017b_levaRetro_acc_DW.up_gear =
                modello_2017b__gearshift_grid_r((real_T)
                modello_2017b_levaRetro_acc_B.DataTypeConversion_kx, 5.0);
              modello_2017b_levaRetro_acc_DW.is_asse_x =
                modello_2017b_l_IN_curva_andata;

              /* Entry 'curva_andata': '<S90>:138' */
              modello_2017b_levaRetro_acc_B.statex_g = 1.0F;
            }
          }
          break;

         case modello_201_IN_marcia_innestata:
          /* During 'marcia_innestata': '<S90>:163' */
          if (((modello_2017b_levaRetro_acc_DW.up_gear == 1.0) && (fabs
                (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                 modello_2017b_levaRetro_acc_P.selection_x_pos) <
                modello_2017b_levaRetro_acc_DW.punto_marcia_innestata)) ||
              ((modello_2017b_levaRetro_acc_DW.up_gear == 0.0) && (fabs
                (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                 modello_2017b_levaRetro_acc_P.selection_x_neg) <
                modello_2017b_levaRetro_acc_DW.punto_marcia_innestata))) {
            /* Transition: '<S90>:167' */
            modello_2017b_levaRetro_acc_DW.is_asse_x =
              modello_2017b__IN_curva_ritorno;

            /* Entry 'curva_ritorno': '<S90>:151' */
            modello_2017b_levaRetro_acc_B.statex_g = 2.0F;
          } else {
            if (((modello_2017b_levaRetro_acc_DW.up_gear == 1.0) && (fabs
                  (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                   modello_2017b_levaRetro_acc_P.selection_x_pos) >=
                  modello_2017b_levaRetro_acc_DW.punto_marcia_innestata)) ||
                ((modello_2017b_levaRetro_acc_DW.up_gear == 0.0) && (fabs
                  (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                   modello_2017b_levaRetro_acc_P.selection_x_neg) >=
                  modello_2017b_levaRetro_acc_DW.punto_marcia_innestata))) {
              /* Transition: '<S90>:174' */
              modello_2017b_levaRetro_acc_DW.is_asse_x =
                modello_201_IN_rigidezza_finale;

              /* Entry 'rigidezza_finale': '<S90>:152' */
              modello_2017b_levaRetro_acc_B.statex_g = 3.0F;
            }
          }
          break;

         case modello_201_IN_muro_selezione_x:
          /* During 'muro_selezione_x': '<S90>:133' */
          if ((modello_2017b_levaRetro_acc_B.DataTypeConversion4_n <
               modello_2017b_levaRetro_acc_P.selection_x_pos) &&
              (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n >
               modello_2017b_levaRetro_acc_P.selection_x_neg)) {
            /* Transition: '<S90>:137' */
            modello_2017b_levaRetro_acc_DW.is_asse_x =
              modello_2017_IN_forza_crossgate;

            /* Entry 'forza_crossgate': '<S90>:10' */
            modello_2017b_levaRetro_acc_B.statex_g = 7.0F;
          } else if ((modello_2017b_levaRetro_acc_B.DataTypeConversion_kx !=
                      8.0F) &&
                     ((modello_2017b_levaRetro_acc_B.DataTypeConversion4_n >=
                       modello_2017b_levaRetro_acc_P.selection_x_pos) ||
                      (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n <=
                       modello_2017b_levaRetro_acc_P.selection_x_neg))) {
            /* Transition: '<S90>:157' */
            modello_2017b_levaRetro_acc_DW.corsa_marcia_x = fabs
              (modello_2017b__gearshift_grid_r((real_T)
                modello_2017b_levaRetro_acc_B.DataTypeConversion_kx, 1.0));
            modello_2017b_levaRetro_acc_DW.punto_marcia_innestata = fabs
              (modello_2017b__gearshift_grid_r((real_T)
                modello_2017b_levaRetro_acc_B.DataTypeConversion_kx, 6.0));
            modello_2017b_levaRetro_acc_DW.up_gear =
              modello_2017b__gearshift_grid_r((real_T)
              modello_2017b_levaRetro_acc_B.DataTypeConversion_kx, 5.0);
            modello_2017b_levaRetro_acc_DW.is_asse_x =
              modello_2017b_l_IN_curva_andata;

            /* Entry 'curva_andata': '<S90>:138' */
            modello_2017b_levaRetro_acc_B.statex_g = 1.0F;
          } else if ((modello_2017b_levaRetro_acc_B.DataTypeConversion_kx ==
                      8.0F) &&
                     (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n >=
                      modello_2017b_levaRetro_acc_P.selection_x_pos)) {
            /* Transition: '<S90>:134' */
            modello_2017b_levaRetro_acc_B.statex_g = 5.0F;
            modello_2017b_levaRetro_acc_DW.is_asse_x =
              modello_201_IN_muro_selezione_x;
          } else {
            if ((modello_2017b_levaRetro_acc_B.DataTypeConversion_kx == 8.0F) &&
                (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n <=
                 modello_2017b_levaRetro_acc_P.selection_x_neg)) {
              /* Transition: '<S90>:135' */
              modello_2017b_levaRetro_acc_B.statex_g = 6.0F;
              modello_2017b_levaRetro_acc_DW.is_asse_x =
                modello_201_IN_muro_selezione_x;
            }
          }
          break;

         case modello_2017b_levaRet_IN_muro_x:
          /* During 'muro_x': '<S90>:153' */
          if (((modello_2017b_levaRetro_acc_DW.up_gear == 1.0) && (fabs
                (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                 modello_2017b_levaRetro_acc_P.selection_x_pos) <
                modello_2017b_levaRetro_acc_DW.corsa_marcia_x)) ||
              ((modello_2017b_levaRetro_acc_DW.up_gear == 0.0) && (fabs
                (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                 modello_2017b_levaRetro_acc_P.selection_x_neg) <
                modello_2017b_levaRetro_acc_DW.corsa_marcia_x))) {
            /* Transition: '<S90>:155' */
            modello_2017b_levaRetro_acc_DW.is_asse_x =
              modello_201_IN_rigidezza_finale;

            /* Entry 'rigidezza_finale': '<S90>:152' */
            modello_2017b_levaRetro_acc_B.statex_g = 3.0F;
          }
          break;

         default:
          /* During 'rigidezza_finale': '<S90>:152' */
          if (((modello_2017b_levaRetro_acc_DW.up_gear == 1.0) && (fabs
                (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                 modello_2017b_levaRetro_acc_P.selection_x_pos) >=
                modello_2017b_levaRetro_acc_DW.corsa_marcia_x)) ||
              ((modello_2017b_levaRetro_acc_DW.up_gear == 0.0) && (fabs
                (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                 modello_2017b_levaRetro_acc_P.selection_x_neg) >=
                modello_2017b_levaRetro_acc_DW.corsa_marcia_x))) {
            /* Transition: '<S90>:154' */
            modello_2017b_levaRetro_acc_DW.is_asse_x =
              modello_2017b_levaRet_IN_muro_x;

            /* Entry 'muro_x': '<S90>:153' */
            modello_2017b_levaRetro_acc_B.statex_g = 4.0F;
          } else {
            if (((modello_2017b_levaRetro_acc_DW.up_gear == 1.0) && (fabs
                  (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                   modello_2017b_levaRetro_acc_P.selection_x_pos) <
                  modello_2017b_levaRetro_acc_DW.punto_marcia_innestata)) ||
                ((modello_2017b_levaRetro_acc_DW.up_gear == 0.0) && (fabs
                  (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                   modello_2017b_levaRetro_acc_P.selection_x_neg) <
                  modello_2017b_levaRetro_acc_DW.punto_marcia_innestata))) {
              /* Transition: '<S90>:175' */
              modello_2017b_levaRetro_acc_DW.is_asse_x =
                modello_201_IN_marcia_innestata;

              /* Entry 'marcia_innestata': '<S90>:163' */
              modello_2017b_levaRetro_acc_B.statex_g = 7.0F;
            }
          }
          break;
        }
      }

      /* During 'asse_y': '<S90>:9' */
      if (modello_2017b_levaRetro_acc_B.Memory9 == 0.0F) {
        /* Transition: '<S90>:217' */
        /* Exit Internal 'asse_y': '<S90>:9' */
        modello_2017b_levaRetro_acc_DW.is_asse_y =
          modello_2017b_levaRet_IN_IDLE_e;

        /* Entry 'IDLE': '<S90>:215' */
        modello_2017b_levaRetro_acc_B.statey = 5.0F;
      } else if (modello_2017b_levaRetro_acc_DW.is_asse_y ==
                 modello_2017b_levaRet_IN_IDLE_e) {
        /* During 'IDLE': '<S90>:215' */
        if (modello_2017b_levaRetro_acc_B.Memory9 == 1.0F) {
          /* Transition: '<S90>:216' */
          modello_2017b_levaRetro_acc_DW.is_asse_y =
            modello_2017b_levaRetr_IN_logic;
        }
      } else {
        /* During 'logic': '<S90>:204' */
        guard1 = false;
        if (modello_2017b_levaRetro_acc_B.DataTypeConversion_kx != 8.0F) {
          /* Transition: '<S90>:202' */
          modello_2017b_levaRetro_acc_DW.muro_dx =
            modello_2017b__gearshift_grid_r((real_T)
            modello_2017b_levaRetro_acc_B.DataTypeConversion_kx, 2.0);
          modello_2017b_levaRetro_acc_DW.muro_sx =
            modello_2017b__gearshift_grid_r((real_T)
            modello_2017b_levaRetro_acc_B.DataTypeConversion_kx, 3.0);
          guard1 = true;
        } else if ((modello_2017b_levaRetro_acc_B.DataTypeConversion_kx == 8.0F)
                   && (modello_2017b_levaRetro_acc_B.DataTypeConversion3_g ==
                       0.0F)) {
          /* Transition: '<S90>:205' */
          modello_2017b_levaRetro_acc_DW.muro_dx =
            modello_2017b_levaRetro_acc_P.selection1_y_neg;
          modello_2017b_levaRetro_acc_DW.muro_sx =
            modello_2017b_levaRetro_acc_P.selection1_y_pos;
          guard1 = true;
        } else {
          if ((modello_2017b_levaRetro_acc_B.DataTypeConversion_kx == 8.0F) &&
              (modello_2017b_levaRetro_acc_B.DataTypeConversion3_g == 1.0F)) {
            /* Transition: '<S90>:208' */
            modello_2017b_levaRetro_acc_DW.muro_dx =
              modello_2017b_levaRetro_acc_P.selection2_y_neg;
            modello_2017b_levaRetro_acc_DW.muro_sx =
              modello_2017b_levaRetro_acc_P.selection2_y_pos;
            guard1 = true;
          }
        }

        if (guard1) {
          if (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n <=
              modello_2017b_levaRetro_acc_DW.muro_dx) {
            /* Transition: '<S90>:207' */
            modello_2017b_levaRetro_acc_B.statey = 1.0F;
          } else if (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n >=
                     modello_2017b_levaRetro_acc_DW.muro_sx) {
            /* Transition: '<S90>:200' */
            modello_2017b_levaRetro_acc_B.statey = 2.0F;
          } else if ((modello_2017b_levaRetro_acc_B.DataTypeConversion_kx ==
                      8.0F) &&
                     (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n >
                      modello_2017b_levaRetro_acc_DW.muro_dx) &&
                     (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n <
                      modello_2017b_levaRetro_acc_DW.muro_sx)) {
            /* Transition: '<S90>:206' */
            modello_2017b_levaRetro_acc_B.statey = 3.0F;
          } else if ((modello_2017b_levaRetro_acc_B.DataTypeConversion_kx !=
                      8.0F) &&
                     (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n >
                      modello_2017b_levaRetro_acc_DW.muro_dx) &&
                     (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n <
                      modello_2017b_levaRetro_acc_DW.muro_sx)) {
            /* Transition: '<S90>:199' */
            modello_2017b_levaRetro_acc_B.statey = 4.0F;
          } else {
            /* Transition: '<S90>:209' */
          }

          modello_2017b_levaRetro_acc_DW.is_asse_y =
            modello_2017b_levaRetr_IN_logic;
        }
      }
    }

    /* End of Chart: '<S26>/static_Prova_griglia' */

    /* MATLAB Function: '<S92>/demultiplexer_enable_gear_subsistems' */
    demultiplexer_enable_gear_subsi
      (modello_2017b_levaRetro_acc_B.DataTypeConversion_kx,
       &modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear_su);

    /* Outputs for Enabled SubSystem: '<S92>/first_gear ' incorporates:
     *  EnablePort: '<S95>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear_su.out1 > 0.0)
    {
      /* Switch: '<S95>/Switch' incorporates:
       *  Constant: '<S95>/selection_x_neg'
       *  Constant: '<S95>/selection_x_pos'
       *  Constant: '<S95>/up//down'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[4];
      if (b_gamma != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch_h =
          modello_2017b_levaRetro_acc_P.selection_x_pos;
      } else {
        modello_2017b_levaRetro_acc_B.Switch_h =
          modello_2017b_levaRetro_acc_P.selection_x_neg;
      }

      /* End of Switch: '<S95>/Switch' */

      /* Sum: '<S95>/Sum' */
      modello_2017b_levaRetro_acc_B.Sum_f =
        modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
        modello_2017b_levaRetro_acc_B.Switch_h;

      /* DataTypeConversion: '<S95>/Data Type Conversion' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion_c =
        modello_2017b_levaRetro_acc_B.Sum_f;

      /* DataTypeConversion: '<S95>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_d =
        modello_2017b_levaRetro_acc_B.statex_g;

      /* Memory: '<S95>/Memory' */
      modello_2017b_levaRetro_acc_B.Memory_mn =
        modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_am;

      /* MATLAB Function: '<S95>/Render_wall1' incorporates:
       *  Constant: '<S95>/offset'
       *  Constant: '<S95>/stiffness'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[0];
      modello_2017b_leva_Render_wall1
        (modello_2017b_levaRetro_acc_B.DataTypeConversion_c, b_gamma,
         modello_2017b_levaRetro_acc_P.k_stiffness,
         modello_2017b_levaRetro_acc_B.Memory_mn,
         &modello_2017b_levaRetro_acc_B.sf_Render_wall1_h);

      /* Sum: '<S95>/Sum1' incorporates:
       *  Constant: '<S95>/constant '
       */
      modello_2017b_levaRetro_acc_B.Sum1_o2 =
        modello_2017b_levaRetro_acc_B.DataTypeConversion1_d -
        modello_2017b_levaRetro_acc_P.constant_Value_o;

      /* MultiPortSwitch: '<S95>/force_selector' incorporates:
       *  Constant: '<S95>/zero'
       *  Constant: '<S95>/zero1'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion1_d) {
       case 1:
        /* Lookup_n-D: '<S107>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_hj = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_c,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_h,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_ct, 14U);

        /* Lookup_n-D: '<S107>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_hb = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_c,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_g,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_m, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_it[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_hj;
        modello_2017b_levaRetro_acc_B.force_selector_it[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_hb;
        break;

       case 2:
        /* Lookup_n-D: '<S108>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_ca = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_c,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_b,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_cp, 14U);

        /* Lookup_n-D: '<S108>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_em = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_c,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_n,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_d, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_it[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_ca;
        modello_2017b_levaRetro_acc_B.force_selector_it[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_em;
        break;

       case 3:
        /* Lookup_n-D: '<S109>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_dn = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_c,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_m,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_b, 11U);

        /* Lookup_n-D: '<S109>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_i = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_c,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_i,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_i, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_it[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_dn;
        modello_2017b_levaRetro_acc_B.force_selector_it[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_i;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.force_selector_it[0] =
          modello_2017b_levaRetro_acc_B.sf_Render_wall1_h.force;
        modello_2017b_levaRetro_acc_B.force_selector_it[1] =
          modello_2017b_levaRetro_acc_P.zero1_Value_j;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.force_selector_it[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_f;
        modello_2017b_levaRetro_acc_B.force_selector_it[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_f;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.force_selector_it[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_f;
        modello_2017b_levaRetro_acc_B.force_selector_it[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_f;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.force_selector_it[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_f;
        modello_2017b_levaRetro_acc_B.force_selector_it[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_f;
        break;

       default:
        modello_2017b_levaRetro_acc_B.force_selector_it[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_f;
        modello_2017b_levaRetro_acc_B.force_selector_it[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_f;
        break;
      }

      /* End of MultiPortSwitch: '<S95>/force_selector' */

      /* Switch: '<S95>/Switch1' */
      if (modello_2017b_levaRetro_acc_B.Sum1_o2 != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch1_j0 =
          modello_2017b_levaRetro_acc_B.Memory_mn;
      } else {
        modello_2017b_levaRetro_acc_B.Switch1_j0 =
          modello_2017b_levaRetro_acc_B.force_selector_it[0];
      }

      /* End of Switch: '<S95>/Switch1' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.first_gear_SubsysRanBC_f);
    }

    /* End of Outputs for SubSystem: '<S92>/first_gear ' */

    /* Outputs for Enabled SubSystem: '<S92>/second_gear' incorporates:
     *  EnablePort: '<S98>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear_su.out2 > 0.0)
    {
      /* Switch: '<S98>/Switch' incorporates:
       *  Constant: '<S98>/selection_x_neg'
       *  Constant: '<S98>/selection_x_pos'
       *  Constant: '<S98>/up//down'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[10];
      if (b_gamma != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch_aj =
          modello_2017b_levaRetro_acc_P.selection_x_pos;
      } else {
        modello_2017b_levaRetro_acc_B.Switch_aj =
          modello_2017b_levaRetro_acc_P.selection_x_neg;
      }

      /* End of Switch: '<S98>/Switch' */

      /* Sum: '<S98>/Sum' */
      modello_2017b_levaRetro_acc_B.Sum_py =
        modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
        modello_2017b_levaRetro_acc_B.Switch_aj;

      /* DataTypeConversion: '<S98>/Data Type Conversion' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion_o5 =
        modello_2017b_levaRetro_acc_B.Sum_py;

      /* DataTypeConversion: '<S98>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_an =
        modello_2017b_levaRetro_acc_B.statex_g;

      /* Memory: '<S98>/Memory' */
      modello_2017b_levaRetro_acc_B.Memory_kx =
        modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_l0;

      /* MATLAB Function: '<S98>/Render_wall1' incorporates:
       *  Constant: '<S98>/offset'
       *  Constant: '<S98>/stiffness'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[6];
      modello_2017b_leva_Render_wall1
        (modello_2017b_levaRetro_acc_B.DataTypeConversion_o5, b_gamma,
         modello_2017b_levaRetro_acc_P.k_stiffness,
         modello_2017b_levaRetro_acc_B.Memory_kx,
         &modello_2017b_levaRetro_acc_B.sf_Render_wall1_o);

      /* Sum: '<S98>/Sum1' incorporates:
       *  Constant: '<S98>/constant '
       */
      modello_2017b_levaRetro_acc_B.Sum1_b =
        modello_2017b_levaRetro_acc_B.DataTypeConversion1_an -
        modello_2017b_levaRetro_acc_P.constant_Value_f;

      /* MultiPortSwitch: '<S98>/force_selector' incorporates:
       *  Constant: '<S98>/zero'
       *  Constant: '<S98>/zero1'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion1_an) {
       case 1:
        /* Lookup_n-D: '<S119>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_id = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_o5,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_d,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_j, 14U);

        /* Lookup_n-D: '<S119>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_ht = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_o5,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_nx,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_me, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_jo[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_id;
        modello_2017b_levaRetro_acc_B.force_selector_jo[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_ht;
        break;

       case 2:
        /* Lookup_n-D: '<S120>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_as = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_o5,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_g3,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_a, 14U);

        /* Lookup_n-D: '<S120>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_ns = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_o5,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_ls,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_l, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_jo[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_as;
        modello_2017b_levaRetro_acc_B.force_selector_jo[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_ns;
        break;

       case 3:
        /* Lookup_n-D: '<S121>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_mg = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_o5,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_f2,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_fd, 12U);

        /* Lookup_n-D: '<S121>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_p0 = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_o5,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_a0,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_hs, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_jo[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_mg;
        modello_2017b_levaRetro_acc_B.force_selector_jo[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_p0;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.force_selector_jo[0] =
          modello_2017b_levaRetro_acc_B.sf_Render_wall1_o.force;
        modello_2017b_levaRetro_acc_B.force_selector_jo[1] =
          modello_2017b_levaRetro_acc_P.zero1_Value_d;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.force_selector_jo[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_lb;
        modello_2017b_levaRetro_acc_B.force_selector_jo[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_lb;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.force_selector_jo[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_lb;
        modello_2017b_levaRetro_acc_B.force_selector_jo[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_lb;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.force_selector_jo[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_lb;
        modello_2017b_levaRetro_acc_B.force_selector_jo[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_lb;
        break;

       default:
        modello_2017b_levaRetro_acc_B.force_selector_jo[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_lb;
        modello_2017b_levaRetro_acc_B.force_selector_jo[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_lb;
        break;
      }

      /* End of MultiPortSwitch: '<S98>/force_selector' */

      /* Switch: '<S98>/Switch1' */
      if (modello_2017b_levaRetro_acc_B.Sum1_b != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch1_fu =
          modello_2017b_levaRetro_acc_B.Memory_kx;
      } else {
        modello_2017b_levaRetro_acc_B.Switch1_fu =
          modello_2017b_levaRetro_acc_B.force_selector_jo[0];
      }

      /* End of Switch: '<S98>/Switch1' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.second_gear_SubsysRanBC_l);
    }

    /* End of Outputs for SubSystem: '<S92>/second_gear' */

    /* Outputs for Enabled SubSystem: '<S92>/third_gear' incorporates:
     *  EnablePort: '<S101>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear_su.out3 > 0.0)
    {
      /* Switch: '<S101>/Switch' incorporates:
       *  Constant: '<S101>/selection_x_neg'
       *  Constant: '<S101>/selection_x_pos'
       *  Constant: '<S101>/up//down'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[16];
      if (b_gamma != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch_e =
          modello_2017b_levaRetro_acc_P.selection_x_pos;
      } else {
        modello_2017b_levaRetro_acc_B.Switch_e =
          modello_2017b_levaRetro_acc_P.selection_x_neg;
      }

      /* End of Switch: '<S101>/Switch' */

      /* Sum: '<S101>/Sum' */
      modello_2017b_levaRetro_acc_B.Sum_e =
        modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
        modello_2017b_levaRetro_acc_B.Switch_e;

      /* DataTypeConversion: '<S101>/Data Type Conversion' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion_f =
        modello_2017b_levaRetro_acc_B.Sum_e;

      /* DataTypeConversion: '<S101>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_i =
        modello_2017b_levaRetro_acc_B.statex_g;

      /* Memory: '<S101>/Memory' */
      modello_2017b_levaRetro_acc_B.Memory_i =
        modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_p;

      /* MATLAB Function: '<S101>/Render_wall1' incorporates:
       *  Constant: '<S101>/offset'
       *  Constant: '<S101>/stiffness'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[12];
      modello_2017b_leva_Render_wall1
        (modello_2017b_levaRetro_acc_B.DataTypeConversion_f, b_gamma,
         modello_2017b_levaRetro_acc_P.k_stiffness,
         modello_2017b_levaRetro_acc_B.Memory_i,
         &modello_2017b_levaRetro_acc_B.sf_Render_wall1_l);

      /* Sum: '<S101>/Sum1' incorporates:
       *  Constant: '<S101>/constant '
       */
      modello_2017b_levaRetro_acc_B.Sum1_ca =
        modello_2017b_levaRetro_acc_B.DataTypeConversion1_i -
        modello_2017b_levaRetro_acc_P.constant_Value_h;

      /* MultiPortSwitch: '<S101>/force_selector' incorporates:
       *  Constant: '<S101>/zero'
       *  Constant: '<S101>/zero1'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion1_i) {
       case 1:
        /* Lookup_n-D: '<S130>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_i5v = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_f,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_mv,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_i, 14U);

        /* Lookup_n-D: '<S130>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_hd = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_f,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_ij,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_n1, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_j[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_i5v;
        modello_2017b_levaRetro_acc_B.force_selector_j[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_hd;
        break;

       case 2:
        /* Lookup_n-D: '<S131>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_a0 = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_f,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_o,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_cv, 14U);

        /* Lookup_n-D: '<S131>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_as = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_f,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_dd,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_k, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_j[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_a0;
        modello_2017b_levaRetro_acc_B.force_selector_j[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_as;
        break;

       case 3:
        /* Lookup_n-D: '<S132>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_ib = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_f,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_dz,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_o, 11U);

        /* Lookup_n-D: '<S132>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_e = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_f,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_kd,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_dn, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_j[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_ib;
        modello_2017b_levaRetro_acc_B.force_selector_j[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_e;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.force_selector_j[0] =
          modello_2017b_levaRetro_acc_B.sf_Render_wall1_l.force;
        modello_2017b_levaRetro_acc_B.force_selector_j[1] =
          modello_2017b_levaRetro_acc_P.zero1_Value_m;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.force_selector_j[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_a;
        modello_2017b_levaRetro_acc_B.force_selector_j[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_a;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.force_selector_j[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_a;
        modello_2017b_levaRetro_acc_B.force_selector_j[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_a;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.force_selector_j[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_a;
        modello_2017b_levaRetro_acc_B.force_selector_j[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_a;
        break;

       default:
        modello_2017b_levaRetro_acc_B.force_selector_j[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_a;
        modello_2017b_levaRetro_acc_B.force_selector_j[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_a;
        break;
      }

      /* End of MultiPortSwitch: '<S101>/force_selector' */

      /* Switch: '<S101>/Switch1' */
      if (modello_2017b_levaRetro_acc_B.Sum1_ca != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch1_k =
          modello_2017b_levaRetro_acc_B.Memory_i;
      } else {
        modello_2017b_levaRetro_acc_B.Switch1_k =
          modello_2017b_levaRetro_acc_B.force_selector_j[0];
      }

      /* End of Switch: '<S101>/Switch1' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.third_gear_SubsysRanBC_n);
    }

    /* End of Outputs for SubSystem: '<S92>/third_gear' */

    /* Outputs for Enabled SubSystem: '<S92>/fourth_gear' incorporates:
     *  EnablePort: '<S96>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear_su.out4 > 0.0)
    {
      /* Switch: '<S96>/Switch' incorporates:
       *  Constant: '<S96>/selection_x_neg'
       *  Constant: '<S96>/selection_x_pos'
       *  Constant: '<S96>/up//down'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[22];
      if (b_gamma != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch_d =
          modello_2017b_levaRetro_acc_P.selection_x_pos;
      } else {
        modello_2017b_levaRetro_acc_B.Switch_d =
          modello_2017b_levaRetro_acc_P.selection_x_neg;
      }

      /* End of Switch: '<S96>/Switch' */

      /* Sum: '<S96>/Sum' */
      modello_2017b_levaRetro_acc_B.Sum_bf =
        modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
        modello_2017b_levaRetro_acc_B.Switch_d;

      /* DataTypeConversion: '<S96>/Data Type Conversion' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion_k =
        modello_2017b_levaRetro_acc_B.Sum_bf;

      /* DataTypeConversion: '<S96>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_o =
        modello_2017b_levaRetro_acc_B.statex_g;

      /* Memory: '<S96>/Memory' */
      modello_2017b_levaRetro_acc_B.Memory_n =
        modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_i;

      /* MATLAB Function: '<S96>/Render_wall1' incorporates:
       *  Constant: '<S96>/offset'
       *  Constant: '<S96>/stiffness'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[18];
      modello_2017b_leva_Render_wall1
        (modello_2017b_levaRetro_acc_B.DataTypeConversion_k, b_gamma,
         modello_2017b_levaRetro_acc_P.k_stiffness,
         modello_2017b_levaRetro_acc_B.Memory_n,
         &modello_2017b_levaRetro_acc_B.sf_Render_wall1_f);

      /* Sum: '<S96>/Sum1' incorporates:
       *  Constant: '<S96>/constant '
       */
      modello_2017b_levaRetro_acc_B.Sum1_cc =
        modello_2017b_levaRetro_acc_B.DataTypeConversion1_o -
        modello_2017b_levaRetro_acc_P.constant_Value_l;

      /* MultiPortSwitch: '<S96>/force_selector' incorporates:
       *  Constant: '<S96>/zero'
       *  Constant: '<S96>/zero1'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion1_o) {
       case 1:
        /* Lookup_n-D: '<S111>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_c = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_k,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_c,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_f, 14U);

        /* Lookup_n-D: '<S111>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_fb = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_k,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_j,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_f, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_hh[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_c;
        modello_2017b_levaRetro_acc_B.force_selector_hh[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_fb;
        break;

       case 2:
        /* Lookup_n-D: '<S112>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_el = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_k,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_e,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_ps, 14U);

        /* Lookup_n-D: '<S112>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_ok = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_k,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_an,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_dv, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_hh[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_el;
        modello_2017b_levaRetro_acc_B.force_selector_hh[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_ok;
        break;

       case 3:
        /* Lookup_n-D: '<S113>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_b4 = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_k,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_hd,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_p, 12U);

        /* Lookup_n-D: '<S113>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_py = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_k,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_a,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_j, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_hh[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_b4;
        modello_2017b_levaRetro_acc_B.force_selector_hh[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_py;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.force_selector_hh[0] =
          modello_2017b_levaRetro_acc_B.sf_Render_wall1_f.force;
        modello_2017b_levaRetro_acc_B.force_selector_hh[1] =
          modello_2017b_levaRetro_acc_P.zero1_Value_l;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.force_selector_hh[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_c;
        modello_2017b_levaRetro_acc_B.force_selector_hh[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_c;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.force_selector_hh[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_c;
        modello_2017b_levaRetro_acc_B.force_selector_hh[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_c;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.force_selector_hh[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_c;
        modello_2017b_levaRetro_acc_B.force_selector_hh[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_c;
        break;

       default:
        modello_2017b_levaRetro_acc_B.force_selector_hh[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_c;
        modello_2017b_levaRetro_acc_B.force_selector_hh[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_c;
        break;
      }

      /* End of MultiPortSwitch: '<S96>/force_selector' */

      /* Switch: '<S96>/Switch1' */
      if (modello_2017b_levaRetro_acc_B.Sum1_cc != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch1_a =
          modello_2017b_levaRetro_acc_B.Memory_n;
      } else {
        modello_2017b_levaRetro_acc_B.Switch1_a =
          modello_2017b_levaRetro_acc_B.force_selector_hh[0];
      }

      /* End of Switch: '<S96>/Switch1' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.fourth_gear_SubsysRanBC_g);
    }

    /* End of Outputs for SubSystem: '<S92>/fourth_gear' */

    /* Outputs for Enabled SubSystem: '<S92>/fifth_gear' incorporates:
     *  EnablePort: '<S94>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear_su.out5 > 0.0)
    {
      /* Switch: '<S94>/Switch' incorporates:
       *  Constant: '<S94>/selection_x_neg'
       *  Constant: '<S94>/selection_x_pos'
       *  Constant: '<S94>/up//down'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[28];
      if (b_gamma != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch_bc =
          modello_2017b_levaRetro_acc_P.selection_x_pos;
      } else {
        modello_2017b_levaRetro_acc_B.Switch_bc =
          modello_2017b_levaRetro_acc_P.selection_x_neg;
      }

      /* End of Switch: '<S94>/Switch' */

      /* Sum: '<S94>/Sum' */
      modello_2017b_levaRetro_acc_B.Sum_of =
        modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
        modello_2017b_levaRetro_acc_B.Switch_bc;

      /* DataTypeConversion: '<S94>/Data Type Conversion' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion_c2 =
        modello_2017b_levaRetro_acc_B.Sum_of;

      /* DataTypeConversion: '<S94>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_b4 =
        modello_2017b_levaRetro_acc_B.statex_g;

      /* Memory: '<S94>/Memory' */
      modello_2017b_levaRetro_acc_B.Memory_e4 =
        modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_hl;

      /* MATLAB Function: '<S94>/Render_wall1' incorporates:
       *  Constant: '<S94>/offset'
       *  Constant: '<S94>/stiffness'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[24];
      modello_2017b_leva_Render_wall1
        (modello_2017b_levaRetro_acc_B.DataTypeConversion_c2, b_gamma,
         modello_2017b_levaRetro_acc_P.k_stiffness,
         modello_2017b_levaRetro_acc_B.Memory_e4,
         &modello_2017b_levaRetro_acc_B.sf_Render_wall1);

      /* Sum: '<S94>/Sum1' incorporates:
       *  Constant: '<S94>/constant '
       */
      modello_2017b_levaRetro_acc_B.Sum1_nb =
        modello_2017b_levaRetro_acc_B.DataTypeConversion1_b4 -
        modello_2017b_levaRetro_acc_P.constant_Value;

      /* MultiPortSwitch: '<S94>/force_selector' incorporates:
       *  Constant: '<S94>/zero'
       *  Constant: '<S94>/zero1'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion1_b4) {
       case 1:
        /* Lookup_n-D: '<S103>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_m4 = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_c2,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_i,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_n, 14U);

        /* Lookup_n-D: '<S103>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_ku = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_c2,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_k,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_h, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_f[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_m4;
        modello_2017b_levaRetro_acc_B.force_selector_f[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_ku;
        break;

       case 2:
        /* Lookup_n-D: '<S104>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_ih = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_c2,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_p,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_h, 14U);

        /* Lookup_n-D: '<S104>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_la = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_c2,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_d,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_o, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_f[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_ih;
        modello_2017b_levaRetro_acc_B.force_selector_f[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_la;
        break;

       case 3:
        /* Lookup_n-D: '<S105>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_iy = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_c2,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_g,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_ch, 13U);

        /* Lookup_n-D: '<S105>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_of = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_c2,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_f[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_iy;
        modello_2017b_levaRetro_acc_B.force_selector_f[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_of;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.force_selector_f[0] =
          modello_2017b_levaRetro_acc_B.sf_Render_wall1.force;
        modello_2017b_levaRetro_acc_B.force_selector_f[1] =
          modello_2017b_levaRetro_acc_P.zero1_Value_p;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.force_selector_f[0] =
          modello_2017b_levaRetro_acc_P.zero_Value;
        modello_2017b_levaRetro_acc_B.force_selector_f[1] =
          modello_2017b_levaRetro_acc_P.zero_Value;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.force_selector_f[0] =
          modello_2017b_levaRetro_acc_P.zero_Value;
        modello_2017b_levaRetro_acc_B.force_selector_f[1] =
          modello_2017b_levaRetro_acc_P.zero_Value;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.force_selector_f[0] =
          modello_2017b_levaRetro_acc_P.zero_Value;
        modello_2017b_levaRetro_acc_B.force_selector_f[1] =
          modello_2017b_levaRetro_acc_P.zero_Value;
        break;

       default:
        modello_2017b_levaRetro_acc_B.force_selector_f[0] =
          modello_2017b_levaRetro_acc_P.zero_Value;
        modello_2017b_levaRetro_acc_B.force_selector_f[1] =
          modello_2017b_levaRetro_acc_P.zero_Value;
        break;
      }

      /* End of MultiPortSwitch: '<S94>/force_selector' */

      /* Switch: '<S94>/Switch1' */
      if (modello_2017b_levaRetro_acc_B.Sum1_nb != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch1_d =
          modello_2017b_levaRetro_acc_B.Memory_e4;
      } else {
        modello_2017b_levaRetro_acc_B.Switch1_d =
          modello_2017b_levaRetro_acc_B.force_selector_f[0];
      }

      /* End of Switch: '<S94>/Switch1' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.fifth_gear_SubsysRanBC_o);
    }

    /* End of Outputs for SubSystem: '<S92>/fifth_gear' */

    /* Outputs for Enabled SubSystem: '<S92>/sixth_gear' incorporates:
     *  EnablePort: '<S100>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear_su.out6 > 0.0)
    {
      /* Switch: '<S100>/Switch' incorporates:
       *  Constant: '<S100>/selection_x_neg'
       *  Constant: '<S100>/selection_x_pos'
       *  Constant: '<S100>/up//down'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[34];
      if (b_gamma != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch_j =
          modello_2017b_levaRetro_acc_P.selection_x_pos;
      } else {
        modello_2017b_levaRetro_acc_B.Switch_j =
          modello_2017b_levaRetro_acc_P.selection_x_neg;
      }

      /* End of Switch: '<S100>/Switch' */

      /* Sum: '<S100>/Sum' */
      modello_2017b_levaRetro_acc_B.Sum_a =
        modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
        modello_2017b_levaRetro_acc_B.Switch_j;

      /* DataTypeConversion: '<S100>/Data Type Conversion' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion_o =
        modello_2017b_levaRetro_acc_B.Sum_a;

      /* DataTypeConversion: '<S100>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_gm =
        modello_2017b_levaRetro_acc_B.statex_g;

      /* Memory: '<S100>/Memory' */
      modello_2017b_levaRetro_acc_B.Memory_c =
        modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_of;

      /* MATLAB Function: '<S100>/Render_wall1' incorporates:
       *  Constant: '<S100>/offset'
       *  Constant: '<S100>/stiffness'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[30];
      modello_2017b_leva_Render_wall1
        (modello_2017b_levaRetro_acc_B.DataTypeConversion_o, b_gamma,
         modello_2017b_levaRetro_acc_P.k_stiffness,
         modello_2017b_levaRetro_acc_B.Memory_c,
         &modello_2017b_levaRetro_acc_B.sf_Render_wall1_m);

      /* Sum: '<S100>/Sum1' incorporates:
       *  Constant: '<S100>/constant '
       */
      modello_2017b_levaRetro_acc_B.Sum1_h =
        modello_2017b_levaRetro_acc_B.DataTypeConversion1_gm -
        modello_2017b_levaRetro_acc_P.constant_Value_aq;

      /* MultiPortSwitch: '<S100>/force_selector' incorporates:
       *  Constant: '<S100>/zero'
       *  Constant: '<S100>/zero1'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion1_gm) {
       case 1:
        /* Lookup_n-D: '<S126>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_jx = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_o,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_hr,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_jh, 14U);

        /* Lookup_n-D: '<S126>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_ky = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_o,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_ln,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_n, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_m[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_jx;
        modello_2017b_levaRetro_acc_B.force_selector_m[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_ky;
        break;

       case 2:
        /* Lookup_n-D: '<S127>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_k = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_o,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_gc,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_p1, 14U);

        /* Lookup_n-D: '<S127>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_hg = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_o,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_jl,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_a, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_m[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_k;
        modello_2017b_levaRetro_acc_B.force_selector_m[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_hg;
        break;

       case 3:
        /* Lookup_n-D: '<S128>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_lz = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_o,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_k,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_bi, 11U);

        /* Lookup_n-D: '<S128>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_dt = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_o,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_b,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_p, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_m[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_lz;
        modello_2017b_levaRetro_acc_B.force_selector_m[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_dt;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.force_selector_m[0] =
          modello_2017b_levaRetro_acc_B.sf_Render_wall1_m.force;
        modello_2017b_levaRetro_acc_B.force_selector_m[1] =
          modello_2017b_levaRetro_acc_P.zero1_Value_c;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.force_selector_m[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_m;
        modello_2017b_levaRetro_acc_B.force_selector_m[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_m;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.force_selector_m[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_m;
        modello_2017b_levaRetro_acc_B.force_selector_m[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_m;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.force_selector_m[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_m;
        modello_2017b_levaRetro_acc_B.force_selector_m[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_m;
        break;

       default:
        modello_2017b_levaRetro_acc_B.force_selector_m[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_m;
        modello_2017b_levaRetro_acc_B.force_selector_m[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_m;
        break;
      }

      /* End of MultiPortSwitch: '<S100>/force_selector' */

      /* Switch: '<S100>/Switch1' */
      if (modello_2017b_levaRetro_acc_B.Sum1_h != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch1_kc =
          modello_2017b_levaRetro_acc_B.Memory_c;
      } else {
        modello_2017b_levaRetro_acc_B.Switch1_kc =
          modello_2017b_levaRetro_acc_B.force_selector_m[0];
      }

      /* End of Switch: '<S100>/Switch1' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.sixth_gear_SubsysRanBC_i);
    }

    /* End of Outputs for SubSystem: '<S92>/sixth_gear' */

    /* Outputs for Enabled SubSystem: '<S92>/reverse_gear' incorporates:
     *  EnablePort: '<S97>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear_su.out7 > 0.0)
    {
      /* Switch: '<S97>/Switch' incorporates:
       *  Constant: '<S97>/selection_x_neg'
       *  Constant: '<S97>/selection_x_pos'
       *  Constant: '<S97>/up//down'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[40];
      if (b_gamma != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch_m =
          modello_2017b_levaRetro_acc_P.selection_x_pos;
      } else {
        modello_2017b_levaRetro_acc_B.Switch_m =
          modello_2017b_levaRetro_acc_P.selection_x_neg;
      }

      /* End of Switch: '<S97>/Switch' */

      /* Sum: '<S97>/Sum' */
      modello_2017b_levaRetro_acc_B.Sum_b =
        modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
        modello_2017b_levaRetro_acc_B.Switch_m;

      /* DataTypeConversion: '<S97>/Data Type Conversion' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion_n =
        modello_2017b_levaRetro_acc_B.Sum_b;

      /* DataTypeConversion: '<S97>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_k5 =
        modello_2017b_levaRetro_acc_B.statex_g;

      /* Memory: '<S97>/Memory' */
      modello_2017b_levaRetro_acc_B.Memory_ir =
        modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_fv;

      /* MATLAB Function: '<S97>/Render_wall1' incorporates:
       *  Constant: '<S97>/offset'
       *  Constant: '<S97>/stiffness'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[36];
      modello_2017b_leva_Render_wall1
        (modello_2017b_levaRetro_acc_B.DataTypeConversion_n, b_gamma,
         modello_2017b_levaRetro_acc_P.k_stiffness,
         modello_2017b_levaRetro_acc_B.Memory_ir,
         &modello_2017b_levaRetro_acc_B.sf_Render_wall1_d);

      /* Sum: '<S97>/Sum1' incorporates:
       *  Constant: '<S97>/constant '
       */
      modello_2017b_levaRetro_acc_B.Sum1_l =
        modello_2017b_levaRetro_acc_B.DataTypeConversion1_k5 -
        modello_2017b_levaRetro_acc_P.constant_Value_a;

      /* MultiPortSwitch: '<S97>/force_selector' incorporates:
       *  Constant: '<S97>/zero'
       *  Constant: '<S97>/zero1'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion1_k5) {
       case 1:
        /* Lookup_n-D: '<S115>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_dr = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_n,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_cf,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_hr, 14U);

        /* Lookup_n-D: '<S115>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_d4 = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_n,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_ih,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_im, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_an[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_dr;
        modello_2017b_levaRetro_acc_B.force_selector_an[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_d4;
        break;

       case 2:
        /* Lookup_n-D: '<S116>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_bn = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_n,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_f,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_d, 14U);

        /* Lookup_n-D: '<S116>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_ck = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_n,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_l,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_oi, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_an[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_bn;
        modello_2017b_levaRetro_acc_B.force_selector_an[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_ck;
        break;

       case 3:
        /* Lookup_n-D: '<S117>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_jt = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_n,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_hc,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_nm, 10U);

        /* Lookup_n-D: '<S117>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_ln = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_n,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_g1,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_m3, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_an[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_jt;
        modello_2017b_levaRetro_acc_B.force_selector_an[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_ln;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.force_selector_an[0] =
          modello_2017b_levaRetro_acc_B.sf_Render_wall1_d.force;
        modello_2017b_levaRetro_acc_B.force_selector_an[1] =
          modello_2017b_levaRetro_acc_P.zero1_Value_b;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.force_selector_an[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_l;
        modello_2017b_levaRetro_acc_B.force_selector_an[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_l;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.force_selector_an[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_l;
        modello_2017b_levaRetro_acc_B.force_selector_an[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_l;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.force_selector_an[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_l;
        modello_2017b_levaRetro_acc_B.force_selector_an[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_l;
        break;

       default:
        modello_2017b_levaRetro_acc_B.force_selector_an[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_l;
        modello_2017b_levaRetro_acc_B.force_selector_an[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_l;
        break;
      }

      /* End of MultiPortSwitch: '<S97>/force_selector' */

      /* Switch: '<S97>/Switch1' */
      if (modello_2017b_levaRetro_acc_B.Sum1_l != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch1_l =
          modello_2017b_levaRetro_acc_B.Memory_ir;
      } else {
        modello_2017b_levaRetro_acc_B.Switch1_l =
          modello_2017b_levaRetro_acc_B.force_selector_an[0];
      }

      /* End of Switch: '<S97>/Switch1' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.reverse_gear_SubsysRanBC_m);
    }

    /* End of Outputs for SubSystem: '<S92>/reverse_gear' */

    /* Outputs for Enabled SubSystem: '<S92>/selection_axis1' incorporates:
     *  EnablePort: '<S99>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear_su.out8 > 0.0)
    {
      /* DataTypeConversion: '<S99>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_hk =
        modello_2017b_levaRetro_acc_B.statex_g;

      /* Memory: '<S99>/Memory' */
      modello_2017b_levaRetro_acc_B.Memory_k3 =
        modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_b;

      /* MATLAB Function: '<S99>/offset' */
      /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/selection_axis1/offset': '<S124>:1' */
      if (((modello_2017b_levaRetro_acc_B.DataTypeConversion1_hk == 5.0) ||
           (modello_2017b_levaRetro_acc_B.DataTypeConversion1_hk == 6.0)) &&
          (modello_2017b_levaRetro_acc_DW.toggle == 0.0)) {
        /* '<S124>:1:11' */
        /* '<S124>:1:12' */
        modello_2017b_levaRetro_acc_DW.toggle = 1.0;

        /* '<S124>:1:13' */
        modello_2017b_levaRetro_acc_DW.force_ =
          modello_2017b_levaRetro_acc_B.Memory_k3;
      }

      if (modello_2017b_levaRetro_acc_B.DataTypeConversion1_hk == 7.0) {
        /* '<S124>:1:16' */
        /* '<S124>:1:17' */
        modello_2017b_levaRetro_acc_DW.toggle = 0.0;

        /* '<S124>:1:18' */
        modello_2017b_levaRetro_acc_DW.force_ = 0.0;
      }

      /* '<S124>:1:21' */
      modello_2017b_levaRetro_acc_B.force_offset =
        modello_2017b_levaRetro_acc_DW.force_;

      /* End of MATLAB Function: '<S99>/offset' */

      /* DataTypeConversion: '<S99>/Data Type Conversion2' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion2_l =
        modello_2017b_levaRetro_acc_B.force_offset;

      /* DataTypeConversion: '<S99>/Data Type Conversion3' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion3_b =
        modello_2017b_levaRetro_acc_B.DataTypeConversion4_n;

      /* Lookup_n-D: '<S122>/1-D Lookup Table' */
      modello_2017b_levaRetro_acc_B.uDLookupTable_gb = look1_binlxpw
        (modello_2017b_levaRetro_acc_B.DataTypeConversion3_b,
         modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_n,
         modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_he, 1U);

      /* MultiPortSwitch: '<S99>/second_gear1' incorporates:
       *  Constant: '<S99>/selection_x_neg'
       *  Constant: '<S99>/selection_x_pos'
       *  Constant: '<S99>/zero1'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion1_hk) {
       case 1:
        modello_2017b_levaRetro_acc_B.second_gear1_h =
          modello_2017b_levaRetro_acc_P.zero1_Value_lp;
        break;

       case 2:
        modello_2017b_levaRetro_acc_B.second_gear1_h =
          modello_2017b_levaRetro_acc_P.zero1_Value_lp;
        break;

       case 3:
        modello_2017b_levaRetro_acc_B.second_gear1_h =
          modello_2017b_levaRetro_acc_P.zero1_Value_lp;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.second_gear1_h =
          modello_2017b_levaRetro_acc_P.zero1_Value_lp;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.second_gear1_h =
          modello_2017b_levaRetro_acc_P.selection_x_pos;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.second_gear1_h =
          modello_2017b_levaRetro_acc_P.selection_x_neg;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.second_gear1_h =
          modello_2017b_levaRetro_acc_P.zero1_Value_lp;
        break;

       default:
        modello_2017b_levaRetro_acc_B.second_gear1_h =
          modello_2017b_levaRetro_acc_P.zero1_Value_lp;
        break;
      }

      /* End of MultiPortSwitch: '<S99>/second_gear1' */

      /* MATLAB Function: '<S99>/muro_x' incorporates:
       *  Constant: '<S99>/stiffness'
       */
      /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/selection_axis1/muro_x': '<S123>:1' */
      /* '<S123>:1:3' */
      modello_2017b_levaRetro_acc_B.force_k =
        (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n - (real32_T)
         modello_2017b_levaRetro_acc_B.second_gear1_h) * (real32_T)
        -modello_2017b_levaRetro_acc_P.k_stiffness + (real32_T)
        modello_2017b_levaRetro_acc_B.DataTypeConversion2_l;

      /* MultiPortSwitch: '<S99>/second_gear' incorporates:
       *  Constant: '<S99>/Constant'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion1_hk) {
       case 1:
        modello_2017b_levaRetro_acc_B.second_gear_n =
          modello_2017b_levaRetro_acc_P.Constant_Value_f;
        break;

       case 2:
        modello_2017b_levaRetro_acc_B.second_gear_n =
          modello_2017b_levaRetro_acc_P.Constant_Value_f;
        break;

       case 3:
        modello_2017b_levaRetro_acc_B.second_gear_n =
          modello_2017b_levaRetro_acc_P.Constant_Value_f;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.second_gear_n =
          modello_2017b_levaRetro_acc_P.Constant_Value_f;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.second_gear_n =
          modello_2017b_levaRetro_acc_B.force_k;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.second_gear_n =
          modello_2017b_levaRetro_acc_B.force_k;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.second_gear_n =
          modello_2017b_levaRetro_acc_B.uDLookupTable_gb;
        break;

       default:
        modello_2017b_levaRetro_acc_B.second_gear_n =
          modello_2017b_levaRetro_acc_P.Constant_Value_f;
        break;
      }

      /* End of MultiPortSwitch: '<S99>/second_gear' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.selection_axis1_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S92>/selection_axis1' */

    /* MultiPortSwitch: '<S92>/selected_gear' incorporates:
     *  Constant: '<S92>/zero1'
     */
    switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion_kx) {
     case 1:
      modello_2017b_levaRetro_acc_B.selected_gear[0] =
        modello_2017b_levaRetro_acc_B.force_selector_it[0];
      modello_2017b_levaRetro_acc_B.selected_gear[1] =
        modello_2017b_levaRetro_acc_B.force_selector_it[1];
      break;

     case 2:
      modello_2017b_levaRetro_acc_B.selected_gear[0] =
        modello_2017b_levaRetro_acc_B.force_selector_jo[0];
      modello_2017b_levaRetro_acc_B.selected_gear[1] =
        modello_2017b_levaRetro_acc_B.force_selector_jo[1];
      break;

     case 3:
      modello_2017b_levaRetro_acc_B.selected_gear[0] =
        modello_2017b_levaRetro_acc_B.force_selector_j[0];
      modello_2017b_levaRetro_acc_B.selected_gear[1] =
        modello_2017b_levaRetro_acc_B.force_selector_j[1];
      break;

     case 4:
      modello_2017b_levaRetro_acc_B.selected_gear[0] =
        modello_2017b_levaRetro_acc_B.force_selector_hh[0];
      modello_2017b_levaRetro_acc_B.selected_gear[1] =
        modello_2017b_levaRetro_acc_B.force_selector_hh[1];
      break;

     case 5:
      modello_2017b_levaRetro_acc_B.selected_gear[0] =
        modello_2017b_levaRetro_acc_B.force_selector_f[0];
      modello_2017b_levaRetro_acc_B.selected_gear[1] =
        modello_2017b_levaRetro_acc_B.force_selector_f[1];
      break;

     case 6:
      modello_2017b_levaRetro_acc_B.selected_gear[0] =
        modello_2017b_levaRetro_acc_B.force_selector_m[0];
      modello_2017b_levaRetro_acc_B.selected_gear[1] =
        modello_2017b_levaRetro_acc_B.force_selector_m[1];
      break;

     case 7:
      modello_2017b_levaRetro_acc_B.selected_gear[0] =
        modello_2017b_levaRetro_acc_B.force_selector_an[0];
      modello_2017b_levaRetro_acc_B.selected_gear[1] =
        modello_2017b_levaRetro_acc_B.force_selector_an[1];
      break;

     default:
      modello_2017b_levaRetro_acc_B.selected_gear[0] =
        modello_2017b_levaRetro_acc_B.second_gear_n;
      modello_2017b_levaRetro_acc_B.selected_gear[1] =
        modello_2017b_levaRetro_acc_P.zero1_Value;
      break;
    }

    /* End of MultiPortSwitch: '<S92>/selected_gear' */

    /* DataTypeConversion: '<S87>/Data Type Conversion' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion_p[0] = (real32_T)
      modello_2017b_levaRetro_acc_B.selected_gear[0];

    /* Gain: '<S87>/scala_forza' */
    modello_2017b_levaRetro_acc_B.scala_forza[0] =
      modello_2017b_levaRetro_acc_P.gain_forces *
      modello_2017b_levaRetro_acc_B.DataTypeConversion_p[0];

    /* DataTypeConversion: '<S87>/Data Type Conversion' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion_p[1] = (real32_T)
      modello_2017b_levaRetro_acc_B.selected_gear[1];

    /* Gain: '<S87>/scala_forza' */
    modello_2017b_levaRetro_acc_B.scala_forza[1] =
      modello_2017b_levaRetro_acc_P.gain_forces *
      modello_2017b_levaRetro_acc_B.DataTypeConversion_p[1];

    /* Chart: '<S26>/dynamic' */
    /* Gateway: prova_cambio_con_profili_enabled_sbox_viscous_variable/dynamic */
    modello_2017b_levaRetro_acc_DW.sfEvent_m = -1;

    /* During: prova_cambio_con_profili_enabled_sbox_viscous_variable/dynamic */
    if (modello_2017b_levaRetro_acc_DW.is_active_c52_modello_2017b_lev == 0U) {
      /* Entry: prova_cambio_con_profili_enabled_sbox_viscous_variable/dynamic */
      modello_2017b_levaRetro_acc_DW.is_active_c52_modello_2017b_lev = 1U;

      /* Entry Internal: prova_cambio_con_profili_enabled_sbox_viscous_variable/dynamic */
      modello_2017b_levaRetro_acc_DW.is_active_asse_x_dyn = 1U;

      /* Entry Internal 'asse_x_dyn': '<S86>:244' */
      /* Transition: '<S86>:246' */
      modello_2017b_levaRetro_acc_DW.is_asse_x_dyn =
        modello_2017b_levaRet_IN_IDLE_e;

      /* Entry 'IDLE': '<S86>:263' */
      modello_2017b_levaRetro_acc_B.statex = 8.0;
    } else {
      /* During 'asse_x_dyn': '<S86>:244' */
      if (modello_2017b_levaRetro_acc_B.Memory9 == 0.0F) {
        /* Transition: '<S86>:245' */
        /* Exit Internal 'asse_x_dyn': '<S86>:244' */
        modello_2017b_levaRetro_acc_DW.is_asse_x_dyn =
          modello_2017b_levaRet_IN_IDLE_e;

        /* Entry 'IDLE': '<S86>:263' */
        modello_2017b_levaRetro_acc_B.statex = 8.0;
      } else {
        switch (modello_2017b_levaRetro_acc_DW.is_asse_x_dyn) {
         case modello_2017b_levaRet_IN_IDLE_e:
          /* During 'IDLE': '<S86>:263' */
          if (modello_2017b_levaRetro_acc_B.Memory9 == 1.0F) {
            /* Transition: '<S86>:248' */
            modello_2017b_levaRetro_acc_DW.is_asse_x_dyn =
              modello_2017_IN_forza_crossgate;

            /* Entry 'forza_crossgate': '<S86>:264' */
            modello_2017b_levaRetro_acc_B.statex = 7.0;
          }
          break;

         case modello_2017b_l_IN_curva_andata:
          /* During 'curva_andata': '<S86>:266' */
          if (modello_2017b_levaRetro_acc_B.DataTypeConversion_kx == 8.0F) {
            /* Transition: '<S86>:255' */
            modello_2017b_levaRetro_acc_DW.is_asse_x_dyn =
              modello_2017_IN_forza_crossgate;

            /* Entry 'forza_crossgate': '<S86>:264' */
            modello_2017b_levaRetro_acc_B.statex = 7.0;
          } else {
            if (((modello_2017b_levaRetro_acc_DW.up_gear_f == 1.0) && (fabs
                  (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                   modello_2017b_levaRetro_acc_P.selection_x_pos) >=
                  modello_2017b_levaRetro_acc_DW.punto_marcia_innestata_p)) ||
                ((modello_2017b_levaRetro_acc_DW.up_gear_f == 0.0) && (fabs
                  (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                   modello_2017b_levaRetro_acc_P.selection_x_neg) >=
                  modello_2017b_levaRetro_acc_DW.punto_marcia_innestata_p))) {
              /* Transition: '<S86>:256' */
              modello_2017b_levaRetro_acc_DW.is_asse_x_dyn =
                modello_201_IN_marcia_innestata;

              /* Entry 'marcia_innestata': '<S86>:270' */
              modello_2017b_levaRetro_acc_B.statex = 7.0;
            }
          }
          break;

         case modello_2017b__IN_curva_ritorno:
          /* During 'curva_ritorno': '<S86>:267' */
          if (modello_2017b_levaRetro_acc_B.DataTypeConversion_kx == 8.0F) {
            /* Transition: '<S86>:251' */
            modello_2017b_levaRetro_acc_DW.is_asse_x_dyn =
              modello_2017_IN_forza_crossgate;

            /* Entry 'forza_crossgate': '<S86>:264' */
            modello_2017b_levaRetro_acc_B.statex = 7.0;
          } else {
            if (((modello_2017b_levaRetro_acc_DW.up_gear_f == 1.0) && (fabs
                  (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                   modello_2017b_levaRetro_acc_P.selection_x_pos) >=
                  modello_2017b_levaRetro_acc_DW.punto_marcia_innestata_p)) ||
                ((modello_2017b_levaRetro_acc_DW.up_gear_f == 0.0) && (fabs
                  (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                   modello_2017b_levaRetro_acc_P.selection_x_neg) >=
                  modello_2017b_levaRetro_acc_DW.punto_marcia_innestata_p))) {
              /* Transition: '<S86>:257' */
              modello_2017b_levaRetro_acc_DW.is_asse_x_dyn =
                modello_201_IN_marcia_innestata;

              /* Entry 'marcia_innestata': '<S86>:270' */
              modello_2017b_levaRetro_acc_B.statex = 7.0;
            }
          }
          break;

         case modello_2017_IN_forza_crossgate:
          /* During 'forza_crossgate': '<S86>:264' */
          if ((modello_2017b_levaRetro_acc_B.DataTypeConversion_kx == 8.0F) &&
              ((modello_2017b_levaRetro_acc_B.DataTypeConversion4_n >=
                modello_2017b_levaRetro_acc_P.selection_x_pos) ||
               (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n <=
                modello_2017b_levaRetro_acc_P.selection_x_neg))) {
            /* Transition: '<S86>:249' */
            modello_2017b_levaRetro_acc_DW.is_asse_x_dyn =
              modello_201_IN_muro_selezione_x;
          } else {
            if ((modello_2017b_levaRetro_acc_B.DataTypeConversion_kx != 8.0F) &&
                ((modello_2017b_levaRetro_acc_B.DataTypeConversion4_n >=
                  modello_2017b_levaRetro_acc_P.selection_x_pos) ||
                 (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n <=
                  modello_2017b_levaRetro_acc_P.selection_x_neg))) {
              /* Transition: '<S86>:254' */
              modello_2017b_levaRetro_acc_DW.corsa_marcia_x_e = fabs
                (modello_20_gearshift_grid_r_dyn((real_T)
                  modello_2017b_levaRetro_acc_B.DataTypeConversion_kx, 1.0));
              modello_2017b_levaRetro_acc_DW.punto_marcia_innestata_p = fabs
                (modello_20_gearshift_grid_r_dyn((real_T)
                  modello_2017b_levaRetro_acc_B.DataTypeConversion_kx, 6.0));
              modello_2017b_levaRetro_acc_DW.up_gear_f =
                modello_20_gearshift_grid_r_dyn((real_T)
                modello_2017b_levaRetro_acc_B.DataTypeConversion_kx, 5.0);
              modello_2017b_levaRetro_acc_DW.is_asse_x_dyn =
                modello_2017b_l_IN_curva_andata;

              /* Entry 'curva_andata': '<S86>:266' */
              modello_2017b_levaRetro_acc_B.statex = 1.0;
            }
          }
          break;

         case modello_201_IN_marcia_innestata:
          /* During 'marcia_innestata': '<S86>:270' */
          if (((modello_2017b_levaRetro_acc_DW.up_gear_f == 1.0) && (fabs
                (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                 modello_2017b_levaRetro_acc_P.selection_x_pos) <
                modello_2017b_levaRetro_acc_DW.punto_marcia_innestata_p)) ||
              ((modello_2017b_levaRetro_acc_DW.up_gear_f == 0.0) && (fabs
                (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                 modello_2017b_levaRetro_acc_P.selection_x_neg) <
                modello_2017b_levaRetro_acc_DW.punto_marcia_innestata_p))) {
            /* Transition: '<S86>:258' */
            modello_2017b_levaRetro_acc_DW.is_asse_x_dyn =
              modello_2017b__IN_curva_ritorno;

            /* Entry 'curva_ritorno': '<S86>:267' */
            modello_2017b_levaRetro_acc_B.statex = 2.0;
          } else {
            if (((modello_2017b_levaRetro_acc_DW.up_gear_f == 1.0) && (fabs
                  (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                   modello_2017b_levaRetro_acc_P.selection_x_pos) >=
                  modello_2017b_levaRetro_acc_DW.punto_marcia_innestata_p)) ||
                ((modello_2017b_levaRetro_acc_DW.up_gear_f == 0.0) && (fabs
                  (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                   modello_2017b_levaRetro_acc_P.selection_x_neg) >=
                  modello_2017b_levaRetro_acc_DW.punto_marcia_innestata_p))) {
              /* Transition: '<S86>:259' */
              modello_2017b_levaRetro_acc_DW.is_asse_x_dyn =
                modello_201_IN_rigidezza_finale;

              /* Entry 'rigidezza_finale': '<S86>:268' */
              modello_2017b_levaRetro_acc_B.statex = 3.0;
            }
          }
          break;

         case modello_201_IN_muro_selezione_x:
          /* During 'muro_selezione_x': '<S86>:265' */
          if ((modello_2017b_levaRetro_acc_B.DataTypeConversion4_n <
               modello_2017b_levaRetro_acc_P.selection_x_pos) &&
              (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n >
               modello_2017b_levaRetro_acc_P.selection_x_neg)) {
            /* Transition: '<S86>:250' */
            modello_2017b_levaRetro_acc_DW.is_asse_x_dyn =
              modello_2017_IN_forza_crossgate;

            /* Entry 'forza_crossgate': '<S86>:264' */
            modello_2017b_levaRetro_acc_B.statex = 7.0;
          } else if ((modello_2017b_levaRetro_acc_B.DataTypeConversion_kx !=
                      8.0F) &&
                     ((modello_2017b_levaRetro_acc_B.DataTypeConversion4_n >=
                       modello_2017b_levaRetro_acc_P.selection_x_pos) ||
                      (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n <=
                       modello_2017b_levaRetro_acc_P.selection_x_neg))) {
            /* Transition: '<S86>:252' */
            modello_2017b_levaRetro_acc_DW.corsa_marcia_x_e = fabs
              (modello_20_gearshift_grid_r_dyn((real_T)
                modello_2017b_levaRetro_acc_B.DataTypeConversion_kx, 1.0));
            modello_2017b_levaRetro_acc_DW.punto_marcia_innestata_p = fabs
              (modello_20_gearshift_grid_r_dyn((real_T)
                modello_2017b_levaRetro_acc_B.DataTypeConversion_kx, 6.0));
            modello_2017b_levaRetro_acc_DW.up_gear_f =
              modello_20_gearshift_grid_r_dyn((real_T)
              modello_2017b_levaRetro_acc_B.DataTypeConversion_kx, 5.0);
            modello_2017b_levaRetro_acc_DW.is_asse_x_dyn =
              modello_2017b_l_IN_curva_andata;

            /* Entry 'curva_andata': '<S86>:266' */
            modello_2017b_levaRetro_acc_B.statex = 1.0;
          } else if ((modello_2017b_levaRetro_acc_B.DataTypeConversion_kx ==
                      8.0F) &&
                     (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n >=
                      modello_2017b_levaRetro_acc_P.selection_x_pos)) {
            /* Transition: '<S86>:247' */
            modello_2017b_levaRetro_acc_B.statex = 5.0;
            modello_2017b_levaRetro_acc_DW.is_asse_x_dyn =
              modello_201_IN_muro_selezione_x;
          } else {
            if ((modello_2017b_levaRetro_acc_B.DataTypeConversion_kx == 8.0F) &&
                (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n <=
                 modello_2017b_levaRetro_acc_P.selection_x_neg)) {
              /* Transition: '<S86>:253' */
              modello_2017b_levaRetro_acc_B.statex = 6.0;
              modello_2017b_levaRetro_acc_DW.is_asse_x_dyn =
                modello_201_IN_muro_selezione_x;
            }
          }
          break;

         case modello_2017b_levaRet_IN_muro_x:
          /* During 'muro_x': '<S86>:269' */
          if (((modello_2017b_levaRetro_acc_DW.up_gear_f == 1.0) && (fabs
                (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                 modello_2017b_levaRetro_acc_P.selection_x_pos) <
                modello_2017b_levaRetro_acc_DW.corsa_marcia_x_e)) ||
              ((modello_2017b_levaRetro_acc_DW.up_gear_f == 0.0) && (fabs
                (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                 modello_2017b_levaRetro_acc_P.selection_x_neg) <
                modello_2017b_levaRetro_acc_DW.corsa_marcia_x_e))) {
            /* Transition: '<S86>:260' */
            modello_2017b_levaRetro_acc_DW.is_asse_x_dyn =
              modello_201_IN_rigidezza_finale;

            /* Entry 'rigidezza_finale': '<S86>:268' */
            modello_2017b_levaRetro_acc_B.statex = 3.0;
          }
          break;

         default:
          /* During 'rigidezza_finale': '<S86>:268' */
          if (((modello_2017b_levaRetro_acc_DW.up_gear_f == 1.0) && (fabs
                (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                 modello_2017b_levaRetro_acc_P.selection_x_pos) >=
                modello_2017b_levaRetro_acc_DW.corsa_marcia_x_e)) ||
              ((modello_2017b_levaRetro_acc_DW.up_gear_f == 0.0) && (fabs
                (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                 modello_2017b_levaRetro_acc_P.selection_x_neg) >=
                modello_2017b_levaRetro_acc_DW.corsa_marcia_x_e))) {
            /* Transition: '<S86>:261' */
            modello_2017b_levaRetro_acc_DW.is_asse_x_dyn =
              modello_2017b_levaRet_IN_muro_x;

            /* Entry 'muro_x': '<S86>:269' */
            modello_2017b_levaRetro_acc_B.statex = 4.0;
          } else {
            if (((modello_2017b_levaRetro_acc_DW.up_gear_f == 1.0) && (fabs
                  (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                   modello_2017b_levaRetro_acc_P.selection_x_pos) <
                  modello_2017b_levaRetro_acc_DW.punto_marcia_innestata_p)) ||
                ((modello_2017b_levaRetro_acc_DW.up_gear_f == 0.0) && (fabs
                  (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
                   modello_2017b_levaRetro_acc_P.selection_x_neg) <
                  modello_2017b_levaRetro_acc_DW.punto_marcia_innestata_p))) {
              /* Transition: '<S86>:262' */
              modello_2017b_levaRetro_acc_DW.is_asse_x_dyn =
                modello_201_IN_marcia_innestata;

              /* Entry 'marcia_innestata': '<S86>:270' */
              modello_2017b_levaRetro_acc_B.statex = 7.0;
            }
          }
          break;
        }
      }
    }

    /* End of Chart: '<S26>/dynamic' */

    /* MATLAB Function: '<S133>/demultiplexer_enable_gear_subsistems' */
    demultiplexer_enable_gear_subsi
      (modello_2017b_levaRetro_acc_B.DataTypeConversion_kx,
       &modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear__j);

    /* Outputs for Enabled SubSystem: '<S133>/first_gear ' incorporates:
     *  EnablePort: '<S136>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear__j.out1 > 0.0)
    {
      /* Switch: '<S136>/Switch' incorporates:
       *  Constant: '<S136>/selection_x_neg'
       *  Constant: '<S136>/selection_x_pos'
       *  Constant: '<S136>/up//down'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[4];
      if (b_gamma != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch_l =
          modello_2017b_levaRetro_acc_P.selection_x_pos;
      } else {
        modello_2017b_levaRetro_acc_B.Switch_l =
          modello_2017b_levaRetro_acc_P.selection_x_neg;
      }

      /* End of Switch: '<S136>/Switch' */

      /* Sum: '<S136>/Sum' */
      modello_2017b_levaRetro_acc_B.Sum_i =
        modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
        modello_2017b_levaRetro_acc_B.Switch_l;

      /* DataTypeConversion: '<S136>/Data Type Conversion' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion_er =
        modello_2017b_levaRetro_acc_B.Sum_i;

      /* DataTypeConversion: '<S136>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_p4 =
        modello_2017b_levaRetro_acc_B.statex;

      /* Memory: '<S136>/Memory' */
      modello_2017b_levaRetro_acc_B.Memory_kp =
        modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_l;

      /* MATLAB Function: '<S136>/Render_wall1' incorporates:
       *  Constant: '<S136>/offset'
       *  Constant: '<S136>/stiffness'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid_dyn[0];
      modello_2017b_leva_Render_wall1
        (modello_2017b_levaRetro_acc_B.DataTypeConversion_er, b_gamma,
         modello_2017b_levaRetro_acc_P.k_stiffness,
         modello_2017b_levaRetro_acc_B.Memory_kp,
         &modello_2017b_levaRetro_acc_B.sf_Render_wall1_mb);

      /* Sum: '<S136>/Sum1' incorporates:
       *  Constant: '<S136>/constant '
       */
      modello_2017b_levaRetro_acc_B.Sum1_ko =
        modello_2017b_levaRetro_acc_B.DataTypeConversion1_p4 -
        modello_2017b_levaRetro_acc_P.constant_Value_ol;

      /* MultiPortSwitch: '<S136>/force_selector' incorporates:
       *  Constant: '<S136>/zero'
       *  Constant: '<S136>/zero1'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion1_p4) {
       case 1:
        /* Lookup_n-D: '<S148>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_g = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_er,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_kr,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_fv, 20U);

        /* Lookup_n-D: '<S148>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_o = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_er,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_lo,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_l5, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_iy[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_g;
        modello_2017b_levaRetro_acc_B.force_selector_iy[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_o;
        break;

       case 2:
        /* Lookup_n-D: '<S149>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_p = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_er,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_g2,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_jp, 18U);

        /* Lookup_n-D: '<S149>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_pr = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_er,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_ns,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_g, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_iy[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_p;
        modello_2017b_levaRetro_acc_B.force_selector_iy[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_pr;
        break;

       case 3:
        /* Lookup_n-D: '<S150>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_df = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_er,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_np,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_am, 6U);

        /* Lookup_n-D: '<S150>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_bu = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_er,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_dt,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_ox, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_iy[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_df;
        modello_2017b_levaRetro_acc_B.force_selector_iy[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_bu;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.force_selector_iy[0] =
          modello_2017b_levaRetro_acc_B.sf_Render_wall1_mb.force;
        modello_2017b_levaRetro_acc_B.force_selector_iy[1] =
          modello_2017b_levaRetro_acc_P.zero1_Value_pr;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.force_selector_iy[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_av;
        modello_2017b_levaRetro_acc_B.force_selector_iy[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_av;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.force_selector_iy[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_av;
        modello_2017b_levaRetro_acc_B.force_selector_iy[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_av;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.force_selector_iy[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_av;
        modello_2017b_levaRetro_acc_B.force_selector_iy[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_av;
        break;

       default:
        modello_2017b_levaRetro_acc_B.force_selector_iy[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_av;
        modello_2017b_levaRetro_acc_B.force_selector_iy[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_av;
        break;
      }

      /* End of MultiPortSwitch: '<S136>/force_selector' */

      /* Switch: '<S136>/Switch1' */
      if (modello_2017b_levaRetro_acc_B.Sum1_ko != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch1_e =
          modello_2017b_levaRetro_acc_B.Memory_kp;
      } else {
        modello_2017b_levaRetro_acc_B.Switch1_e =
          modello_2017b_levaRetro_acc_B.force_selector_iy[0];
      }

      /* End of Switch: '<S136>/Switch1' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.first_gear_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S133>/first_gear ' */

    /* Outputs for Enabled SubSystem: '<S133>/second_gear' incorporates:
     *  EnablePort: '<S139>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear__j.out2 > 0.0)
    {
      /* Switch: '<S139>/Switch' incorporates:
       *  Constant: '<S139>/selection_x_neg'
       *  Constant: '<S139>/selection_x_pos'
       *  Constant: '<S139>/up//down'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[10];
      if (b_gamma != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch_n0 =
          modello_2017b_levaRetro_acc_P.selection_x_pos;
      } else {
        modello_2017b_levaRetro_acc_B.Switch_n0 =
          modello_2017b_levaRetro_acc_P.selection_x_neg;
      }

      /* End of Switch: '<S139>/Switch' */

      /* Sum: '<S139>/Sum' */
      modello_2017b_levaRetro_acc_B.Sum_p =
        modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
        modello_2017b_levaRetro_acc_B.Switch_n0;

      /* DataTypeConversion: '<S139>/Data Type Conversion' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion_h =
        modello_2017b_levaRetro_acc_B.Sum_p;

      /* DataTypeConversion: '<S139>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_k =
        modello_2017b_levaRetro_acc_B.statex;

      /* Memory: '<S139>/Memory' */
      modello_2017b_levaRetro_acc_B.Memory_k =
        modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_h;

      /* MATLAB Function: '<S139>/Render_wall1' incorporates:
       *  Constant: '<S139>/offset'
       *  Constant: '<S139>/stiffness'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[6];
      modello_2017b_leva_Render_wall1
        (modello_2017b_levaRetro_acc_B.DataTypeConversion_h, b_gamma,
         modello_2017b_levaRetro_acc_P.k_stiffness,
         modello_2017b_levaRetro_acc_B.Memory_k,
         &modello_2017b_levaRetro_acc_B.sf_Render_wall1_k);

      /* Sum: '<S139>/Sum1' incorporates:
       *  Constant: '<S139>/constant '
       */
      modello_2017b_levaRetro_acc_B.Sum1_g =
        modello_2017b_levaRetro_acc_B.DataTypeConversion1_k -
        modello_2017b_levaRetro_acc_P.constant_Value_g;

      /* MultiPortSwitch: '<S139>/force_selector' incorporates:
       *  Constant: '<S139>/zero'
       *  Constant: '<S139>/zero1'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion1_k) {
       case 1:
        /* Lookup_n-D: '<S160>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_a = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_h,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_do,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_cj, 14U);

        /* Lookup_n-D: '<S160>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_b = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_h,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_on,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_jo, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_l[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_a;
        modello_2017b_levaRetro_acc_B.force_selector_l[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_b;
        break;

       case 2:
        /* Lookup_n-D: '<S161>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_h3 = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_h,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_kv,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_pp, 14U);

        /* Lookup_n-D: '<S161>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_lv = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_h,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_d4,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_hv, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_l[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_h3;
        modello_2017b_levaRetro_acc_B.force_selector_l[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_lv;
        break;

       case 3:
        /* Lookup_n-D: '<S162>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_l = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_h,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_lb,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_by, 12U);

        /* Lookup_n-D: '<S162>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_d = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_h,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_dy,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_kv, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_l[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_l;
        modello_2017b_levaRetro_acc_B.force_selector_l[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_d;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.force_selector_l[0] =
          modello_2017b_levaRetro_acc_B.sf_Render_wall1_k.force;
        modello_2017b_levaRetro_acc_B.force_selector_l[1] =
          modello_2017b_levaRetro_acc_P.zero1_Value_o;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.force_selector_l[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_lp;
        modello_2017b_levaRetro_acc_B.force_selector_l[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_lp;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.force_selector_l[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_lp;
        modello_2017b_levaRetro_acc_B.force_selector_l[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_lp;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.force_selector_l[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_lp;
        modello_2017b_levaRetro_acc_B.force_selector_l[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_lp;
        break;

       default:
        modello_2017b_levaRetro_acc_B.force_selector_l[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_lp;
        modello_2017b_levaRetro_acc_B.force_selector_l[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_lp;
        break;
      }

      /* End of MultiPortSwitch: '<S139>/force_selector' */

      /* Switch: '<S139>/Switch1' */
      if (modello_2017b_levaRetro_acc_B.Sum1_g != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch1_g =
          modello_2017b_levaRetro_acc_B.Memory_k;
      } else {
        modello_2017b_levaRetro_acc_B.Switch1_g =
          modello_2017b_levaRetro_acc_B.force_selector_l[0];
      }

      /* End of Switch: '<S139>/Switch1' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.second_gear_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S133>/second_gear' */

    /* Outputs for Enabled SubSystem: '<S133>/third_gear' incorporates:
     *  EnablePort: '<S142>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear__j.out3 > 0.0)
    {
      /* Switch: '<S142>/Switch' incorporates:
       *  Constant: '<S142>/selection_x_neg'
       *  Constant: '<S142>/selection_x_pos'
       *  Constant: '<S142>/up//down'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[16];
      if (b_gamma != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch_a =
          modello_2017b_levaRetro_acc_P.selection_x_pos;
      } else {
        modello_2017b_levaRetro_acc_B.Switch_a =
          modello_2017b_levaRetro_acc_P.selection_x_neg;
      }

      /* End of Switch: '<S142>/Switch' */

      /* Sum: '<S142>/Sum' */
      modello_2017b_levaRetro_acc_B.Sum_d =
        modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
        modello_2017b_levaRetro_acc_B.Switch_a;

      /* DataTypeConversion: '<S142>/Data Type Conversion' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion_d =
        modello_2017b_levaRetro_acc_B.Sum_d;

      /* DataTypeConversion: '<S142>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_a =
        modello_2017b_levaRetro_acc_B.statex;

      /* Memory: '<S142>/Memory' */
      modello_2017b_levaRetro_acc_B.Memory_d =
        modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_a;

      /* MATLAB Function: '<S142>/Render_wall1' incorporates:
       *  Constant: '<S142>/offset'
       *  Constant: '<S142>/stiffness'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[12];
      modello_2017b_leva_Render_wall1
        (modello_2017b_levaRetro_acc_B.DataTypeConversion_d, b_gamma,
         modello_2017b_levaRetro_acc_P.k_stiffness,
         modello_2017b_levaRetro_acc_B.Memory_d,
         &modello_2017b_levaRetro_acc_B.sf_Render_wall1_mw);

      /* Sum: '<S142>/Sum1' incorporates:
       *  Constant: '<S142>/constant '
       */
      modello_2017b_levaRetro_acc_B.Sum1_c =
        modello_2017b_levaRetro_acc_B.DataTypeConversion1_a -
        modello_2017b_levaRetro_acc_P.constant_Value_d;

      /* MultiPortSwitch: '<S142>/force_selector' incorporates:
       *  Constant: '<S142>/zero'
       *  Constant: '<S142>/zero1'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion1_a) {
       case 1:
        /* Lookup_n-D: '<S170>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_d,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_fw,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_dn, 14U);

        /* Lookup_n-D: '<S170>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1 = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_d,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_nm,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_hs3, 14U);
        modello_2017b_levaRetro_acc_B.force_selector[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable;
        modello_2017b_levaRetro_acc_B.force_selector[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1;
        break;

       case 2:
        /* Lookup_n-D: '<S171>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_m = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_d,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_fi,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_b4, 14U);

        /* Lookup_n-D: '<S171>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_a = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_d,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_eq,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_mu, 14U);
        modello_2017b_levaRetro_acc_B.force_selector[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_m;
        modello_2017b_levaRetro_acc_B.force_selector[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_a;
        break;

       case 3:
        /* Lookup_n-D: '<S172>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_e = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_d,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_p5,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_nmk, 11U);

        /* Lookup_n-D: '<S172>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_n = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_d,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_i0,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_p4, 14U);
        modello_2017b_levaRetro_acc_B.force_selector[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_e;
        modello_2017b_levaRetro_acc_B.force_selector[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_n;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.force_selector[0] =
          modello_2017b_levaRetro_acc_B.sf_Render_wall1_mw.force;
        modello_2017b_levaRetro_acc_B.force_selector[1] =
          modello_2017b_levaRetro_acc_P.zero1_Value_g;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.force_selector[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_dn;
        modello_2017b_levaRetro_acc_B.force_selector[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_dn;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.force_selector[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_dn;
        modello_2017b_levaRetro_acc_B.force_selector[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_dn;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.force_selector[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_dn;
        modello_2017b_levaRetro_acc_B.force_selector[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_dn;
        break;

       default:
        modello_2017b_levaRetro_acc_B.force_selector[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_dn;
        modello_2017b_levaRetro_acc_B.force_selector[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_dn;
        break;
      }

      /* End of MultiPortSwitch: '<S142>/force_selector' */

      /* Switch: '<S142>/Switch1' */
      if (modello_2017b_levaRetro_acc_B.Sum1_c != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch1_c =
          modello_2017b_levaRetro_acc_B.Memory_d;
      } else {
        modello_2017b_levaRetro_acc_B.Switch1_c =
          modello_2017b_levaRetro_acc_B.force_selector[0];
      }

      /* End of Switch: '<S142>/Switch1' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.third_gear_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S133>/third_gear' */

    /* Outputs for Enabled SubSystem: '<S133>/fourth_gear' incorporates:
     *  EnablePort: '<S137>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear__j.out4 > 0.0)
    {
      /* Switch: '<S137>/Switch' incorporates:
       *  Constant: '<S137>/selection_x_neg'
       *  Constant: '<S137>/selection_x_pos'
       *  Constant: '<S137>/up//down'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[22];
      if (b_gamma != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch_g =
          modello_2017b_levaRetro_acc_P.selection_x_pos;
      } else {
        modello_2017b_levaRetro_acc_B.Switch_g =
          modello_2017b_levaRetro_acc_P.selection_x_neg;
      }

      /* End of Switch: '<S137>/Switch' */

      /* Sum: '<S137>/Sum' */
      modello_2017b_levaRetro_acc_B.Sum_nt =
        modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
        modello_2017b_levaRetro_acc_B.Switch_g;

      /* DataTypeConversion: '<S137>/Data Type Conversion' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion_a =
        modello_2017b_levaRetro_acc_B.Sum_nt;

      /* DataTypeConversion: '<S137>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_h =
        modello_2017b_levaRetro_acc_B.statex;

      /* Memory: '<S137>/Memory' */
      modello_2017b_levaRetro_acc_B.Memory_fw =
        modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_o;

      /* MATLAB Function: '<S137>/Render_wall1' incorporates:
       *  Constant: '<S137>/offset'
       *  Constant: '<S137>/stiffness'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[18];
      modello_2017b_leva_Render_wall1
        (modello_2017b_levaRetro_acc_B.DataTypeConversion_a, b_gamma,
         modello_2017b_levaRetro_acc_P.k_stiffness,
         modello_2017b_levaRetro_acc_B.Memory_fw,
         &modello_2017b_levaRetro_acc_B.sf_Render_wall1_b);

      /* Sum: '<S137>/Sum1' incorporates:
       *  Constant: '<S137>/constant '
       */
      modello_2017b_levaRetro_acc_B.Sum1_g4 =
        modello_2017b_levaRetro_acc_B.DataTypeConversion1_h -
        modello_2017b_levaRetro_acc_P.constant_Value_oh;

      /* MultiPortSwitch: '<S137>/force_selector' incorporates:
       *  Constant: '<S137>/zero'
       *  Constant: '<S137>/zero1'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion1_h) {
       case 1:
        /* Lookup_n-D: '<S152>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_b = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_a,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_oq,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_ds, 14U);

        /* Lookup_n-D: '<S152>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_pj = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_a,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_l3,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_ok, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_i[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_b;
        modello_2017b_levaRetro_acc_B.force_selector_i[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_pj;
        break;

       case 2:
        /* Lookup_n-D: '<S153>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_lf = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_a,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_go,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_np, 14U);

        /* Lookup_n-D: '<S153>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_n3 = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_a,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_c,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_hu, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_i[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_lf;
        modello_2017b_levaRetro_acc_B.force_selector_i[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_n3;
        break;

       case 3:
        /* Lookup_n-D: '<S154>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_i5 = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_a,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_ku,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_ah, 12U);

        /* Lookup_n-D: '<S154>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_f = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_a,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_h,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_jb, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_i[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_i5;
        modello_2017b_levaRetro_acc_B.force_selector_i[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_f;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.force_selector_i[0] =
          modello_2017b_levaRetro_acc_B.sf_Render_wall1_b.force;
        modello_2017b_levaRetro_acc_B.force_selector_i[1] =
          modello_2017b_levaRetro_acc_P.zero1_Value_f;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.force_selector_i[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_l1;
        modello_2017b_levaRetro_acc_B.force_selector_i[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_l1;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.force_selector_i[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_l1;
        modello_2017b_levaRetro_acc_B.force_selector_i[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_l1;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.force_selector_i[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_l1;
        modello_2017b_levaRetro_acc_B.force_selector_i[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_l1;
        break;

       default:
        modello_2017b_levaRetro_acc_B.force_selector_i[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_l1;
        modello_2017b_levaRetro_acc_B.force_selector_i[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_l1;
        break;
      }

      /* End of MultiPortSwitch: '<S137>/force_selector' */

      /* Switch: '<S137>/Switch1' */
      if (modello_2017b_levaRetro_acc_B.Sum1_g4 != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch1_j =
          modello_2017b_levaRetro_acc_B.Memory_fw;
      } else {
        modello_2017b_levaRetro_acc_B.Switch1_j =
          modello_2017b_levaRetro_acc_B.force_selector_i[0];
      }

      /* End of Switch: '<S137>/Switch1' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.fourth_gear_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S133>/fourth_gear' */

    /* Outputs for Enabled SubSystem: '<S133>/fifth_gear' incorporates:
     *  EnablePort: '<S135>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear__j.out5 > 0.0)
    {
      /* Switch: '<S135>/Switch' incorporates:
       *  Constant: '<S135>/selection_x_neg'
       *  Constant: '<S135>/selection_x_pos'
       *  Constant: '<S135>/up//down'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[28];
      if (b_gamma != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch_b =
          modello_2017b_levaRetro_acc_P.selection_x_pos;
      } else {
        modello_2017b_levaRetro_acc_B.Switch_b =
          modello_2017b_levaRetro_acc_P.selection_x_neg;
      }

      /* End of Switch: '<S135>/Switch' */

      /* Sum: '<S135>/Sum' */
      modello_2017b_levaRetro_acc_B.Sum_c =
        modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
        modello_2017b_levaRetro_acc_B.Switch_b;

      /* DataTypeConversion: '<S135>/Data Type Conversion' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion_hc =
        modello_2017b_levaRetro_acc_B.Sum_c;

      /* DataTypeConversion: '<S135>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_n =
        modello_2017b_levaRetro_acc_B.statex;

      /* Memory: '<S135>/Memory' */
      modello_2017b_levaRetro_acc_B.Memory_e =
        modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_g4;

      /* MATLAB Function: '<S135>/Render_wall1' incorporates:
       *  Constant: '<S135>/offset'
       *  Constant: '<S135>/stiffness'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[24];
      modello_2017b_leva_Render_wall1
        (modello_2017b_levaRetro_acc_B.DataTypeConversion_hc, b_gamma,
         modello_2017b_levaRetro_acc_P.k_stiffness,
         modello_2017b_levaRetro_acc_B.Memory_e,
         &modello_2017b_levaRetro_acc_B.sf_Render_wall1_mk);

      /* Sum: '<S135>/Sum1' incorporates:
       *  Constant: '<S135>/constant '
       */
      modello_2017b_levaRetro_acc_B.Sum1_gh =
        modello_2017b_levaRetro_acc_B.DataTypeConversion1_n -
        modello_2017b_levaRetro_acc_P.constant_Value_fr;

      /* MultiPortSwitch: '<S135>/force_selector' incorporates:
       *  Constant: '<S135>/zero'
       *  Constant: '<S135>/zero1'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion1_n) {
       case 1:
        /* Lookup_n-D: '<S144>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_eq = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_hc,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_c0,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_o5, 14U);

        /* Lookup_n-D: '<S144>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_h = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_hc,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_oo,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_iy, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_h[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_eq;
        modello_2017b_levaRetro_acc_B.force_selector_h[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_h;
        break;

       case 2:
        /* Lookup_n-D: '<S145>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_h0 = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_hc,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_og,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_iu, 14U);

        /* Lookup_n-D: '<S145>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_dz = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_hc,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_o,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_ni, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_h[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_h0;
        modello_2017b_levaRetro_acc_B.force_selector_h[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_dz;
        break;

       case 3:
        /* Lookup_n-D: '<S146>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_du = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_hc,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_kw,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_g, 13U);

        /* Lookup_n-D: '<S146>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_j = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_hc,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_e,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_ds, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_h[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_du;
        modello_2017b_levaRetro_acc_B.force_selector_h[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_j;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.force_selector_h[0] =
          modello_2017b_levaRetro_acc_B.sf_Render_wall1_mk.force;
        modello_2017b_levaRetro_acc_B.force_selector_h[1] =
          modello_2017b_levaRetro_acc_P.zero1_Value_ba;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.force_selector_h[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_a0;
        modello_2017b_levaRetro_acc_B.force_selector_h[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_a0;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.force_selector_h[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_a0;
        modello_2017b_levaRetro_acc_B.force_selector_h[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_a0;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.force_selector_h[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_a0;
        modello_2017b_levaRetro_acc_B.force_selector_h[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_a0;
        break;

       default:
        modello_2017b_levaRetro_acc_B.force_selector_h[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_a0;
        modello_2017b_levaRetro_acc_B.force_selector_h[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_a0;
        break;
      }

      /* End of MultiPortSwitch: '<S135>/force_selector' */

      /* Switch: '<S135>/Switch1' */
      if (modello_2017b_levaRetro_acc_B.Sum1_gh != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch1_n3 =
          modello_2017b_levaRetro_acc_B.Memory_e;
      } else {
        modello_2017b_levaRetro_acc_B.Switch1_n3 =
          modello_2017b_levaRetro_acc_B.force_selector_h[0];
      }

      /* End of Switch: '<S135>/Switch1' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.fifth_gear_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S133>/fifth_gear' */

    /* Outputs for Enabled SubSystem: '<S133>/sixth_gear' incorporates:
     *  EnablePort: '<S141>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear__j.out6 > 0.0)
    {
      /* Switch: '<S141>/Switch' incorporates:
       *  Constant: '<S141>/selection_x_neg'
       *  Constant: '<S141>/selection_x_pos'
       *  Constant: '<S141>/up//down'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[34];
      if (b_gamma != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch_c =
          modello_2017b_levaRetro_acc_P.selection_x_pos;
      } else {
        modello_2017b_levaRetro_acc_B.Switch_c =
          modello_2017b_levaRetro_acc_P.selection_x_neg;
      }

      /* End of Switch: '<S141>/Switch' */

      /* Sum: '<S141>/Sum' */
      modello_2017b_levaRetro_acc_B.Sum_n =
        modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
        modello_2017b_levaRetro_acc_B.Switch_c;

      /* DataTypeConversion: '<S141>/Data Type Conversion' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion_e =
        modello_2017b_levaRetro_acc_B.Sum_n;

      /* DataTypeConversion: '<S141>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_b =
        modello_2017b_levaRetro_acc_B.statex;

      /* Memory: '<S141>/Memory' */
      modello_2017b_levaRetro_acc_B.Memory_f =
        modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_g;

      /* MATLAB Function: '<S141>/Render_wall1' incorporates:
       *  Constant: '<S141>/offset'
       *  Constant: '<S141>/stiffness'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[30];
      modello_2017b_leva_Render_wall1
        (modello_2017b_levaRetro_acc_B.DataTypeConversion_e, b_gamma,
         modello_2017b_levaRetro_acc_P.k_stiffness,
         modello_2017b_levaRetro_acc_B.Memory_f,
         &modello_2017b_levaRetro_acc_B.sf_Render_wall1_ku);

      /* Sum: '<S141>/Sum1' incorporates:
       *  Constant: '<S141>/constant '
       */
      modello_2017b_levaRetro_acc_B.Sum1_k =
        modello_2017b_levaRetro_acc_B.DataTypeConversion1_b -
        modello_2017b_levaRetro_acc_P.constant_Value_fq;

      /* MultiPortSwitch: '<S141>/force_selector' incorporates:
       *  Constant: '<S141>/zero'
       *  Constant: '<S141>/zero1'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion1_b) {
       case 1:
        /* Lookup_n-D: '<S166>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_j = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_e,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_mm,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_m, 14U);

        /* Lookup_n-D: '<S166>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_m = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_e,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_m,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_ib, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_a[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_j;
        modello_2017b_levaRetro_acc_B.force_selector_a[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_m;
        break;

       case 2:
        /* Lookup_n-D: '<S167>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_i = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_e,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_gi,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_de, 14U);

        /* Lookup_n-D: '<S167>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_l = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_e,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_hs,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_kq, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_a[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_i;
        modello_2017b_levaRetro_acc_B.force_selector_a[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_l;
        break;

       case 3:
        /* Lookup_n-D: '<S168>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_o = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_e,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_gj,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_e, 11U);

        /* Lookup_n-D: '<S168>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_ml = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_e,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_fn,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_e, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_a[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_o;
        modello_2017b_levaRetro_acc_B.force_selector_a[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_ml;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.force_selector_a[0] =
          modello_2017b_levaRetro_acc_B.sf_Render_wall1_ku.force;
        modello_2017b_levaRetro_acc_B.force_selector_a[1] =
          modello_2017b_levaRetro_acc_P.zero1_Value_lt;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.force_selector_a[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_o;
        modello_2017b_levaRetro_acc_B.force_selector_a[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_o;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.force_selector_a[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_o;
        modello_2017b_levaRetro_acc_B.force_selector_a[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_o;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.force_selector_a[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_o;
        modello_2017b_levaRetro_acc_B.force_selector_a[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_o;
        break;

       default:
        modello_2017b_levaRetro_acc_B.force_selector_a[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_o;
        modello_2017b_levaRetro_acc_B.force_selector_a[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_o;
        break;
      }

      /* End of MultiPortSwitch: '<S141>/force_selector' */

      /* Switch: '<S141>/Switch1' */
      if (modello_2017b_levaRetro_acc_B.Sum1_k != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch1_n =
          modello_2017b_levaRetro_acc_B.Memory_f;
      } else {
        modello_2017b_levaRetro_acc_B.Switch1_n =
          modello_2017b_levaRetro_acc_B.force_selector_a[0];
      }

      /* End of Switch: '<S141>/Switch1' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.sixth_gear_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S133>/sixth_gear' */

    /* Outputs for Enabled SubSystem: '<S133>/reverse_gear' incorporates:
     *  EnablePort: '<S138>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear__j.out7 > 0.0)
    {
      /* Switch: '<S138>/Switch' incorporates:
       *  Constant: '<S138>/selection_x_neg'
       *  Constant: '<S138>/selection_x_pos'
       *  Constant: '<S138>/up//down'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[40];
      if (b_gamma != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch_na =
          modello_2017b_levaRetro_acc_P.selection_x_pos;
      } else {
        modello_2017b_levaRetro_acc_B.Switch_na =
          modello_2017b_levaRetro_acc_P.selection_x_neg;
      }

      /* End of Switch: '<S138>/Switch' */

      /* Sum: '<S138>/Sum' */
      modello_2017b_levaRetro_acc_B.Sum_o =
        modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
        modello_2017b_levaRetro_acc_B.Switch_na;

      /* DataTypeConversion: '<S138>/Data Type Conversion' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion_j =
        modello_2017b_levaRetro_acc_B.Sum_o;

      /* DataTypeConversion: '<S138>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_p =
        modello_2017b_levaRetro_acc_B.statex;

      /* Memory: '<S138>/Memory' */
      modello_2017b_levaRetro_acc_B.Memory_db =
        modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_f;

      /* MATLAB Function: '<S138>/Render_wall1' incorporates:
       *  Constant: '<S138>/offset'
       *  Constant: '<S138>/stiffness'
       */
      b_gamma = modello_2017b_levaRetro_acc_P.gearshift_grid[36];
      modello_2017b_leva_Render_wall1
        (modello_2017b_levaRetro_acc_B.DataTypeConversion_j, b_gamma,
         modello_2017b_levaRetro_acc_P.k_stiffness,
         modello_2017b_levaRetro_acc_B.Memory_db,
         &modello_2017b_levaRetro_acc_B.sf_Render_wall1_c);

      /* Sum: '<S138>/Sum1' incorporates:
       *  Constant: '<S138>/constant '
       */
      modello_2017b_levaRetro_acc_B.Sum1_o =
        modello_2017b_levaRetro_acc_B.DataTypeConversion1_p -
        modello_2017b_levaRetro_acc_P.constant_Value_m;

      /* MultiPortSwitch: '<S138>/force_selector' incorporates:
       *  Constant: '<S138>/zero'
       *  Constant: '<S138>/zero1'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion1_p) {
       case 1:
        /* Lookup_n-D: '<S156>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_ic = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_j,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_j,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_k, 14U);

        /* Lookup_n-D: '<S156>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_c = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_j,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_om,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_ae, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_p[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_ic;
        modello_2017b_levaRetro_acc_B.force_selector_p[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_c;
        break;

       case 2:
        /* Lookup_n-D: '<S157>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_d = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_j,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_cy,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_iw, 14U);

        /* Lookup_n-D: '<S157>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_p = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_j,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_gb,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_g3, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_p[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_d;
        modello_2017b_levaRetro_acc_B.force_selector_p[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_p;
        break;

       case 3:
        /* Lookup_n-D: '<S158>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_hn = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_j,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_e0,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_od, 10U);

        /* Lookup_n-D: '<S158>/1-D Lookup Table1' */
        modello_2017b_levaRetro_acc_B.uDLookupTable1_k = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion_j,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_bp01Data_f,
           modello_2017b_levaRetro_acc_P.uDLookupTable1_tableData_jx, 14U);
        modello_2017b_levaRetro_acc_B.force_selector_p[0] =
          modello_2017b_levaRetro_acc_B.uDLookupTable_hn;
        modello_2017b_levaRetro_acc_B.force_selector_p[1] =
          modello_2017b_levaRetro_acc_B.uDLookupTable1_k;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.force_selector_p[0] =
          modello_2017b_levaRetro_acc_B.sf_Render_wall1_c.force;
        modello_2017b_levaRetro_acc_B.force_selector_p[1] =
          modello_2017b_levaRetro_acc_P.zero1_Value_dp;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.force_selector_p[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_d;
        modello_2017b_levaRetro_acc_B.force_selector_p[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_d;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.force_selector_p[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_d;
        modello_2017b_levaRetro_acc_B.force_selector_p[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_d;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.force_selector_p[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_d;
        modello_2017b_levaRetro_acc_B.force_selector_p[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_d;
        break;

       default:
        modello_2017b_levaRetro_acc_B.force_selector_p[0] =
          modello_2017b_levaRetro_acc_P.zero_Value_d;
        modello_2017b_levaRetro_acc_B.force_selector_p[1] =
          modello_2017b_levaRetro_acc_P.zero_Value_d;
        break;
      }

      /* End of MultiPortSwitch: '<S138>/force_selector' */

      /* Switch: '<S138>/Switch1' */
      if (modello_2017b_levaRetro_acc_B.Sum1_o != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch1_f =
          modello_2017b_levaRetro_acc_B.Memory_db;
      } else {
        modello_2017b_levaRetro_acc_B.Switch1_f =
          modello_2017b_levaRetro_acc_B.force_selector_p[0];
      }

      /* End of Switch: '<S138>/Switch1' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.reverse_gear_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S133>/reverse_gear' */

    /* Outputs for Enabled SubSystem: '<S133>/selection_axis' incorporates:
     *  EnablePort: '<S140>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear__j.out8 > 0.0)
    {
      /* DataTypeConversion: '<S140>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_g =
        modello_2017b_levaRetro_acc_B.statex;

      /* MultiPortSwitch: '<S140>/second_gear1' incorporates:
       *  Constant: '<S140>/selection_x_neg'
       *  Constant: '<S140>/selection_x_pos'
       *  Constant: '<S140>/zero1'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion1_g) {
       case 1:
        modello_2017b_levaRetro_acc_B.second_gear1 =
          modello_2017b_levaRetro_acc_P.zero1_Value_jo;
        break;

       case 2:
        modello_2017b_levaRetro_acc_B.second_gear1 =
          modello_2017b_levaRetro_acc_P.zero1_Value_jo;
        break;

       case 3:
        modello_2017b_levaRetro_acc_B.second_gear1 =
          modello_2017b_levaRetro_acc_P.zero1_Value_jo;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.second_gear1 =
          modello_2017b_levaRetro_acc_P.zero1_Value_jo;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.second_gear1 =
          modello_2017b_levaRetro_acc_P.selection_x_pos;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.second_gear1 =
          modello_2017b_levaRetro_acc_P.selection_x_neg;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.second_gear1 =
          modello_2017b_levaRetro_acc_P.zero1_Value_jo;
        break;

       default:
        modello_2017b_levaRetro_acc_B.second_gear1 =
          modello_2017b_levaRetro_acc_P.zero1_Value_jo;
        break;
      }

      /* End of MultiPortSwitch: '<S140>/second_gear1' */

      /* MATLAB Function: '<S140>/muro_x' incorporates:
       *  Constant: '<S140>/stiffness'
       */
      /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/selection_axis/muro_x': '<S164>:1' */
      /* '<S164>:1:3' */
      modello_2017b_levaRetro_acc_B.force_dq =
        (modello_2017b_levaRetro_acc_B.DataTypeConversion4_n - (real32_T)
         modello_2017b_levaRetro_acc_B.second_gear1) * (real32_T)
        -modello_2017b_levaRetro_acc_P.k_stiffness;

      /* MultiPortSwitch: '<S140>/second_gear' incorporates:
       *  Constant: '<S140>/Constant'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion1_g) {
       case 1:
        modello_2017b_levaRetro_acc_B.second_gear =
          modello_2017b_levaRetro_acc_P.Constant_Value_b;
        break;

       case 2:
        modello_2017b_levaRetro_acc_B.second_gear =
          modello_2017b_levaRetro_acc_P.Constant_Value_b;
        break;

       case 3:
        modello_2017b_levaRetro_acc_B.second_gear =
          modello_2017b_levaRetro_acc_P.Constant_Value_b;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.second_gear =
          modello_2017b_levaRetro_acc_P.Constant_Value_b;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.second_gear =
          modello_2017b_levaRetro_acc_B.force_dq;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.second_gear =
          modello_2017b_levaRetro_acc_B.force_dq;
        break;

       case 7:
        /* DataTypeConversion: '<S140>/Data Type Conversion3' */
        modello_2017b_levaRetro_acc_B.DataTypeConversion3_j =
          modello_2017b_levaRetro_acc_B.DataTypeConversion4_n;

        /* Lookup_n-D: '<S163>/1-D Lookup Table' */
        modello_2017b_levaRetro_acc_B.uDLookupTable_h = look1_binlxpw
          (modello_2017b_levaRetro_acc_B.DataTypeConversion3_j,
           modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_mt,
           modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_heq, 1U);
        modello_2017b_levaRetro_acc_B.second_gear =
          modello_2017b_levaRetro_acc_B.uDLookupTable_h;
        break;

       default:
        modello_2017b_levaRetro_acc_B.second_gear =
          modello_2017b_levaRetro_acc_P.Constant_Value_b;
        break;
      }

      /* End of MultiPortSwitch: '<S140>/second_gear' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.selection_axis_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S133>/selection_axis' */

    /* MultiPortSwitch: '<S133>/selected_gear' incorporates:
     *  Constant: '<S133>/zero1'
     */
    switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion_kx) {
     case 1:
      modello_2017b_levaRetro_acc_B.selected_gear_b[0] =
        modello_2017b_levaRetro_acc_B.force_selector_iy[0];
      modello_2017b_levaRetro_acc_B.selected_gear_b[1] =
        modello_2017b_levaRetro_acc_B.force_selector_iy[1];
      break;

     case 2:
      modello_2017b_levaRetro_acc_B.selected_gear_b[0] =
        modello_2017b_levaRetro_acc_B.force_selector_l[0];
      modello_2017b_levaRetro_acc_B.selected_gear_b[1] =
        modello_2017b_levaRetro_acc_B.force_selector_l[1];
      break;

     case 3:
      modello_2017b_levaRetro_acc_B.selected_gear_b[0] =
        modello_2017b_levaRetro_acc_B.force_selector[0];
      modello_2017b_levaRetro_acc_B.selected_gear_b[1] =
        modello_2017b_levaRetro_acc_B.force_selector[1];
      break;

     case 4:
      modello_2017b_levaRetro_acc_B.selected_gear_b[0] =
        modello_2017b_levaRetro_acc_B.force_selector_i[0];
      modello_2017b_levaRetro_acc_B.selected_gear_b[1] =
        modello_2017b_levaRetro_acc_B.force_selector_i[1];
      break;

     case 5:
      modello_2017b_levaRetro_acc_B.selected_gear_b[0] =
        modello_2017b_levaRetro_acc_B.force_selector_h[0];
      modello_2017b_levaRetro_acc_B.selected_gear_b[1] =
        modello_2017b_levaRetro_acc_B.force_selector_h[1];
      break;

     case 6:
      modello_2017b_levaRetro_acc_B.selected_gear_b[0] =
        modello_2017b_levaRetro_acc_B.force_selector_a[0];
      modello_2017b_levaRetro_acc_B.selected_gear_b[1] =
        modello_2017b_levaRetro_acc_B.force_selector_a[1];
      break;

     case 7:
      modello_2017b_levaRetro_acc_B.selected_gear_b[0] =
        modello_2017b_levaRetro_acc_B.force_selector_p[0];
      modello_2017b_levaRetro_acc_B.selected_gear_b[1] =
        modello_2017b_levaRetro_acc_B.force_selector_p[1];
      break;

     default:
      modello_2017b_levaRetro_acc_B.selected_gear_b[0] =
        modello_2017b_levaRetro_acc_B.second_gear;
      modello_2017b_levaRetro_acc_B.selected_gear_b[1] =
        modello_2017b_levaRetro_acc_P.zero1_Value_n;
      break;
    }

    /* End of MultiPortSwitch: '<S133>/selected_gear' */

    /* DataTypeConversion: '<S88>/Data Type Conversion' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion_cg[0] = (real32_T)
      modello_2017b_levaRetro_acc_B.selected_gear_b[0];

    /* Gain: '<S88>/scala_forza' */
    modello_2017b_levaRetro_acc_B.scala_forza_h[0] =
      modello_2017b_levaRetro_acc_P.gain_forces *
      modello_2017b_levaRetro_acc_B.DataTypeConversion_cg[0];

    /* DataTypeConversion: '<S88>/Data Type Conversion' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion_cg[1] = (real32_T)
      modello_2017b_levaRetro_acc_B.selected_gear_b[1];

    /* Gain: '<S88>/scala_forza' */
    modello_2017b_levaRetro_acc_B.scala_forza_h[1] =
      modello_2017b_levaRetro_acc_P.gain_forces *
      modello_2017b_levaRetro_acc_B.DataTypeConversion_cg[1];

    /* MultiPortSwitch: '<S26>/state_y2' incorporates:
     *  MultiPortSwitch: '<S26>/state_y1'
     */
    if ((int32_T)modello_2017b_levaRetro_acc_B.ManualSwitch12 == 0) {
      /* ManualSwitch: '<S26>/Manual Switch' */
      if (modello_2017b_levaRetro_acc_P.ManualSwitch_CurrentSetting == 1) {
        /* Gain: '<S26>/Gain' */
        modello_2017b_levaRetro_acc_B.Gain_h =
          modello_2017b_levaRetro_acc_P.Gain_Gain *
          modello_2017b_levaRetro_acc_B.DataTypeConversion6_a;
        modello_2017b_levaRetro_acc_B.ManualSwitch_l =
          modello_2017b_levaRetro_acc_B.Gain_h;
      } else {
        /* Product: '<S26>/Product' */
        modello_2017b_levaRetro_acc_B.Product_k =
          modello_2017b_levaRetro_acc_B.DataTypeConversion6_a *
          modello_2017b_levaRetro_acc_B.scala_forza[1];

        /* Gain: '<S26>/change_sign' */
        modello_2017b_levaRetro_acc_B.change_sign_j =
          modello_2017b_levaRetro_acc_P.change_sign_Gain *
          modello_2017b_levaRetro_acc_B.Product_k;
        modello_2017b_levaRetro_acc_B.ManualSwitch_l =
          modello_2017b_levaRetro_acc_B.change_sign_j;
      }

      /* End of ManualSwitch: '<S26>/Manual Switch' */
      modello_2017b_levaRetro_acc_B.state_y2_k =
        modello_2017b_levaRetro_acc_B.ManualSwitch_l;
      modello_2017b_levaRetro_acc_B.state_y1 =
        modello_2017b_levaRetro_acc_B.scala_forza[0];
    } else {
      /* Product: '<S26>/Product1' */
      modello_2017b_levaRetro_acc_B.Product1_i =
        modello_2017b_levaRetro_acc_B.scala_forza_h[1] *
        modello_2017b_levaRetro_acc_B.DataTypeConversion6_a;

      /* Gain: '<S26>/change_sign1' */
      modello_2017b_levaRetro_acc_B.change_sign1 =
        modello_2017b_levaRetro_acc_P.change_sign1_Gain *
        modello_2017b_levaRetro_acc_B.Product1_i;
      modello_2017b_levaRetro_acc_B.state_y2_k =
        modello_2017b_levaRetro_acc_B.change_sign1;
      modello_2017b_levaRetro_acc_B.state_y1 =
        modello_2017b_levaRetro_acc_B.scala_forza_h[0];
    }

    /* End of MultiPortSwitch: '<S26>/state_y2' */

    /* MATLAB Function: '<S26>/MATLAB Function1' incorporates:
     *  Constant: '<Root>/received_data'
     */
    /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/MATLAB Function1': '<S84>:1' */
    if (modello_2017b_levaRetro_acc_B.Memory9 == 1.0F) {
      /* '<S84>:1:4' */
      /* '<S84>:1:5' */
      modello_2017b_levaRetro_acc_B.f_f =
        modello_2017b_levaRetro_acc_P.received_data_Value[0] *
        modello_2017b_levaRetro_acc_B.state_y1 +
        modello_2017b_levaRetro_acc_P.received_data_Value[1] *
        modello_2017b_levaRetro_acc_B.state_y2_k;
    } else {
      /* '<S84>:1:8' */
      modello_2017b_levaRetro_acc_B.f_f = 0.0F;
    }

    /* End of MATLAB Function: '<S26>/MATLAB Function1' */

    /* DataTypeConversion: '<S26>/Data Type Conversion2' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion2_f =
      modello_2017b_levaRetro_acc_B.f_f;

    /* Gain: '<Root>/Gain4' */
    modello_2017b_levaRetro_acc_B.Gain4 =
      modello_2017b_levaRetro_acc_P.Gain4_Gain *
      modello_2017b_levaRetro_acc_B.DataTypeConversion2_f;

    /* Outport: '<Root>/force_x' */
    modello_2017b_levaRetro_acc_Y.force_x = modello_2017b_levaRetro_acc_B.Gain4;

    /* Outport: '<Root>/position_y' */
    modello_2017b_levaRetro_acc_Y.position_y =
      modello_2017b_levaRetro_acc_B.DataTypeConversion5_n;

    /* DataTypeConversion: '<S7>/Data Type Conversion7' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion7_l =
      modello_2017b_levaRetro_acc_B.vp_ref[1];

    /* ManualSwitch: '<S26>/Manual Switch1' */
    if (modello_2017b_levaRetro_acc_P.ManualSwitch1_CurrentSetting == 1) {
      /* Gain: '<S26>/Gain1' */
      modello_2017b_levaRetro_acc_B.Gain1_ai =
        modello_2017b_levaRetro_acc_P.Gain1_Gain *
        modello_2017b_levaRetro_acc_B.DataTypeConversion7_l;
      modello_2017b_levaRetro_acc_B.ManualSwitch1 =
        modello_2017b_levaRetro_acc_B.Gain1_ai;
    } else {
      /* Lookup_n-D: '<S91>/1-D Lookup Table' */
      modello_2017b_levaRetro_acc_B.uDLookupTable_ez = look1_iflf_binlxpw
        (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n,
         modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_gt,
         modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_ep, 15U);

      /* Product: '<S91>/Product' */
      modello_2017b_levaRetro_acc_B.Product =
        modello_2017b_levaRetro_acc_B.DataTypeConversion7_l *
        modello_2017b_levaRetro_acc_B.uDLookupTable_ez;

      /* Gain: '<S91>/change_sign' */
      modello_2017b_levaRetro_acc_B.change_sign =
        modello_2017b_levaRetro_acc_P.change_sign_Gain_o *
        modello_2017b_levaRetro_acc_B.Product;
      modello_2017b_levaRetro_acc_B.ManualSwitch1 =
        modello_2017b_levaRetro_acc_B.change_sign;
    }

    /* End of ManualSwitch: '<S26>/Manual Switch1' */

    /* MATLAB Function: '<S89>/MATLAB Function' incorporates:
     *  Constant: '<S89>/Constant1'
     *  Constant: '<S89>/selection1_y_neg'
     *  Constant: '<S89>/selection1_y_pos'
     *  Constant: '<S89>/selection2_y_neg'
     *  Constant: '<S89>/selection2_y_pos'
     */
    /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/MATLAB Function': '<S173>:1' */
    if (modello_2017b_levaRetro_acc_B.DataTypeConversion_kx != 8.0F) {
      /* '<S173>:1:2' */
      /* '<S173>:1:3' */
      modello_2017b_levaRetro_acc_B.muro_dx =
        modello_2017b_levaRetro_acc_P.gearshift_grid[(int32_T)
        (modello_2017b_levaRetro_acc_B.DataTypeConversion_kx * 6.0F - 4.0F) - 1];

      /* '<S173>:1:4' */
      modello_2017b_levaRetro_acc_B.muro_sx =
        modello_2017b_levaRetro_acc_P.gearshift_grid[(int32_T)
        (modello_2017b_levaRetro_acc_B.DataTypeConversion_kx * 6.0F - 3.0F) - 1];

      /* '<S173>:1:5' */
      modello_2017b_levaRetro_acc_B.stable_point =
        modello_2017b_levaRetro_acc_P.gearshift_grid[(int32_T)
        (modello_2017b_levaRetro_acc_B.DataTypeConversion_kx * 6.0F) - 1];

      /* '<S173>:1:6' */
      modello_2017b_levaRetro_acc_B.up_down =
        modello_2017b_levaRetro_acc_P.gearshift_grid[(int32_T)
        (modello_2017b_levaRetro_acc_B.DataTypeConversion_kx * 6.0F - 1.0F) - 1];

      /* '<S173>:1:7' */
      modello_2017b_levaRetro_acc_B.inside_gear_path = 1.0;
    } else {
      if (modello_2017b_levaRetro_acc_B.DataTypeConversion3_g == 0.0F) {
        /* '<S173>:1:9' */
        /* '<S173>:1:10' */
        modello_2017b_levaRetro_acc_B.muro_dx =
          modello_2017b_levaRetro_acc_P.selection1_y_neg;

        /* '<S173>:1:11' */
        modello_2017b_levaRetro_acc_B.muro_sx =
          modello_2017b_levaRetro_acc_P.selection1_y_pos;

        /* '<S173>:1:12' */
        modello_2017b_levaRetro_acc_B.stable_point = 1.0;

        /* '<S173>:1:13' */
        modello_2017b_levaRetro_acc_B.up_down = 0.0;
      } else {
        /* '<S173>:1:15' */
        modello_2017b_levaRetro_acc_B.muro_dx =
          modello_2017b_levaRetro_acc_P.selection2_y_neg;

        /* '<S173>:1:16' */
        modello_2017b_levaRetro_acc_B.muro_sx =
          modello_2017b_levaRetro_acc_P.selection2_y_pos;

        /* '<S173>:1:17' */
        modello_2017b_levaRetro_acc_B.stable_point = 1.0;

        /* '<S173>:1:18' */
        modello_2017b_levaRetro_acc_B.up_down = 0.0;
      }

      /* '<S173>:1:20' */
      modello_2017b_levaRetro_acc_B.inside_gear_path = 0.0;
    }

    /* End of MATLAB Function: '<S89>/MATLAB Function' */

    /* MATLAB Function: '<S89>/MATLAB Function1' incorporates:
     *  Constant: '<S89>/Constant'
     */
    /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/MATLAB Function1': '<S174>:1' */
    /* '<S174>:1:3' */
    modello_2017b_levaRetro_acc_B.stiffdx_k =
      modello_2017b_levaRetro_acc_P.stiffness_sel_walls[(int32_T)
      modello_2017b_levaRetro_acc_B.DataTypeConversion_kx - 1];

    /* '<S174>:1:4' */
    modello_2017b_levaRetro_acc_B.stiffsx_e =
      modello_2017b_levaRetro_acc_P.stiffness_sel_walls[(int32_T)
      modello_2017b_levaRetro_acc_B.DataTypeConversion_kx + 7];

    /* Memory: '<S184>/Memory' */
    modello_2017b_levaRetro_acc_B.Memory_g =
      modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_m;

    /* DataTypeConversion: '<S176>/Data Type Conversion' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion =
      modello_2017b_levaRetro_acc_B.DataTypeConversion5_n;

    /* MATLAB Function: '<S176>/crossgate_enabler' */
    /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_enabler': '<S180>:1' */
    /* '<S180>:1:4' */
    modello_2017b_levaRetro_acc_B.out1_l = 0.0;

    /* '<S180>:1:5' */
    modello_2017b_levaRetro_acc_B.out2_d = 0.0;
    switch ((int32_T)modello_2017b_levaRetro_acc_B.DataTypeConversion3_g) {
     case 0:
      /* '<S180>:1:9' */
      modello_2017b_levaRetro_acc_B.out1_l = 1.0;
      break;

     case 1:
      /* '<S180>:1:11' */
      modello_2017b_levaRetro_acc_B.out2_d = 1.0;
      break;
    }

    /* End of MATLAB Function: '<S176>/crossgate_enabler' */

    /* Outputs for Enabled SubSystem: '<S176>/crossgate_selection2_profile' incorporates:
     *  EnablePort: '<S183>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.out2_d > 0.0) {
      /* Chart: '<S183>/Chart1' */
      /* Gateway: prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection2_profile/Chart1 */
      modello_2017b_levaRetro_acc_DW.sfEvent_h = -1;

      /* During: prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection2_profile/Chart1 */
      if (modello_2017b_levaRetro_acc_DW.is_active_c463_modello_2017b_le == 0U)
      {
        /* Entry: prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection2_profile/Chart1 */
        modello_2017b_levaRetro_acc_DW.is_active_c463_modello_2017b_le = 1U;

        /* Entry Internal: prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection2_profile/Chart1 */
        modello_2017b_levaRetro_acc_DW.is_c463_modello_2017b_levaRetro =
          modello_2017b__IN_state_machine;

        /* Entry Internal 'state_machine': '<S215>:82' */
        /* Transition: '<S215>:31' */
        modello_2017b_levaRetro_acc_DW.is_state_machine =
          modello_2017b_levaRet_IN_IDLE_c;

        /* Entry 'IDLE': '<S215>:76' */
        modello_2017b_levaRetro_acc_B.curve = 10.0;
        modello_2017b_levaRetro_acc_B.debug = 0.0F;
      } else {
        /* During 'state_machine': '<S215>:82' */
        if (modello_2017b_levaRetro_acc_B.Memory9 == 0.0F) {
          /* Transition: '<S215>:83' */
          /* Exit Internal 'state_machine': '<S215>:82' */
          modello_2017b_levaRetro_acc_DW.is_state_machine =
            modello_2017b_levaRet_IN_IDLE_c;

          /* Entry 'IDLE': '<S215>:76' */
          modello_2017b_levaRetro_acc_B.curve = 10.0;
          modello_2017b_levaRetro_acc_B.debug = 0.0F;
        } else {
          switch (modello_2017b_levaRetro_acc_DW.is_state_machine) {
           case modello_2017b_l_IN_BEGIN_LEFT_1:
            /* During 'BEGIN_LEFT_1': '<S215>:51' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion >=
                modello_2017b_levaRetro_acc_P.crossgate2_retleft_begright_stable_pos
                * modello_2017b_levaRetro_acc_P.t_m) {
              /* Transition: '<S215>:54' */
              modello_2017b_levaRetro_acc_DW.is_state_machine =
                modello_2017b_l_IN_BEGIN_LEFT_2;

              /* Entry 'BEGIN_LEFT_2': '<S215>:53' */
              modello_2017b_levaRetro_acc_B.curve = 3.0;
              modello_2017b_levaRetro_acc_B.debug = 10.0F;
            } else {
              if (modello_2017b_levaRetro_acc_B.DataTypeConversion <=
                  modello_2017b_levaRetro_acc_P.crossgate2_begleft_retright_stable_pos)
              {
                /* Transition: '<S215>:71' */
                modello_2017b_levaRetro_acc_DW.is_state_machine =
                  IN_TRANSITION_PT_BL_RR_PT_BL_RR;

                /* Entry 'TRANSITION_PT_BL_RR_PT_BL_RR2': '<S215>:34' */
                modello_2017b_levaRetro_acc_B.curve = 5.0;
                modello_2017b_levaRetro_acc_B.debug = 7.0F;
              }
            }
            break;

           case modello_2017b_l_IN_BEGIN_LEFT_2:
            /* During 'BEGIN_LEFT_2': '<S215>:53' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion <
                modello_2017b_levaRetro_acc_P.crossgate2_retleft_begright_stable_pos
                * modello_2017b_levaRetro_acc_P.t_m) {
              /* Transition: '<S215>:56' */
              modello_2017b_levaRetro_acc_DW.is_state_machine =
                IN_TRANSITION_PT_RL_BR2_PT_RL_B;

              /* Entry 'TRANSITION_PT_RL_BR2_PT_RL_BR': '<S215>:55' */
              modello_2017b_levaRetro_acc_B.curve = 6.0;
              modello_2017b_levaRetro_acc_B.debug = 13.0F;
            } else {
              if (modello_2017b_levaRetro_acc_B.DataTypeConversion >
                  modello_2017b_levaRetro_acc_P.crossgate2_left_pos_threshold) {
                /* Transition: '<S215>:62' */
                modello_2017b_levaRetro_acc_DW.is_state_machine =
                  modello_2017b_l_IN_THRESHOLD_BL;

                /* Entry 'THRESHOLD_BL': '<S215>:60' */
                modello_2017b_levaRetro_acc_B.curve = 3.0;
                modello_2017b_levaRetro_acc_B.debug = 11.0F;
              }
            }
            break;

           case modello_2017b__IN_BEGIN_RIGHT_1:
            /* During 'BEGIN_RIGHT_1': '<S215>:32' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion <=
                modello_2017b_levaRetro_acc_P.crossgate2_begleft_retright_stable_pos
                * modello_2017b_levaRetro_acc_P.t_m) {
              /* Transition: '<S215>:36' */
              modello_2017b_levaRetro_acc_DW.is_state_machine =
                modello_2017b__IN_BEGIN_RIGHT_2;

              /* Entry 'BEGIN_RIGHT_2': '<S215>:33' */
              modello_2017b_levaRetro_acc_B.curve = 1.0;
              modello_2017b_levaRetro_acc_B.debug = 4.0F;
            } else {
              if (modello_2017b_levaRetro_acc_B.DataTypeConversion >=
                  modello_2017b_levaRetro_acc_P.crossgate2_retleft_begright_stable_pos)
              {
                /* Transition: '<S215>:70' */
                modello_2017b_levaRetro_acc_DW.is_state_machine =
                  IN_TRANSITION_PT_RL_BR2_PT_RL_B;

                /* Entry 'TRANSITION_PT_RL_BR2_PT_RL_BR': '<S215>:55' */
                modello_2017b_levaRetro_acc_B.curve = 6.0;
                modello_2017b_levaRetro_acc_B.debug = 13.0F;
              }
            }
            break;

           case modello_2017b__IN_BEGIN_RIGHT_2:
            /* During 'BEGIN_RIGHT_2': '<S215>:33' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion >
                modello_2017b_levaRetro_acc_P.crossgate2_begleft_retright_stable_pos
                * modello_2017b_levaRetro_acc_P.t_m) {
              /* Transition: '<S215>:37' */
              modello_2017b_levaRetro_acc_DW.is_state_machine =
                IN_TRANSITION_PT_BL_RR_PT_BL_RR;

              /* Entry 'TRANSITION_PT_BL_RR_PT_BL_RR2': '<S215>:34' */
              modello_2017b_levaRetro_acc_B.curve = 5.0;
              modello_2017b_levaRetro_acc_B.debug = 7.0F;
            } else {
              if (modello_2017b_levaRetro_acc_B.DataTypeConversion <
                  modello_2017b_levaRetro_acc_P.crossgate2_right_pos_threshold)
              {
                /* Transition: '<S215>:44' */
                modello_2017b_levaRetro_acc_DW.is_state_machine =
                  modello_2017b_l_IN_THRESHOLD_BR;

                /* Entry 'THRESHOLD_BR': '<S215>:43' */
                modello_2017b_levaRetro_acc_B.curve = 1.0;
                modello_2017b_levaRetro_acc_B.debug = 5.0F;
              }
            }
            break;

           case modello_2017b_levaRet_IN_IDLE_c:
            /* During 'IDLE': '<S215>:76' */
            if (modello_2017b_levaRetro_acc_B.Memory9 == 1.0F) {
              /* Transition: '<S215>:77' */
              modello_2017b_levaRetro_acc_DW.is_state_machine =
                modello_2017b_levaRet_IN_INIT_l;

              /* Entry 'INIT': '<S215>:67' */
              modello_2017b_levaRetro_acc_B.curve = 7.0;
              modello_2017b_levaRetro_acc_B.debug = 1.0F;
            }
            break;

           case modello_2017b_levaRet_IN_INIT_l:
            /* During 'INIT': '<S215>:67' */
            if ((modello_2017b_levaRetro_acc_B.DataTypeConversion <=
                 modello_2017b_levaRetro_acc_P.crossgate2_begleft_retright_stable_pos)
                && (modello_2017b_levaRetro_acc_B.DataTypeConversion >=
                    modello_2017b_levaRetro_acc_P.crossgate2_begleft_retright_stable_pos
                    - modello_2017b_levaRetro_a_eps_b)) {
              /* Transition: '<S215>:68' */
              modello_2017b_levaRetro_acc_DW.is_state_machine =
                modello_2017b__IN_BEGIN_RIGHT_1;

              /* Entry 'BEGIN_RIGHT_1': '<S215>:32' */
              modello_2017b_levaRetro_acc_B.curve = 1.0;
              modello_2017b_levaRetro_acc_B.debug = 3.0F;
            } else {
              if ((modello_2017b_levaRetro_acc_B.DataTypeConversion >=
                   modello_2017b_levaRetro_acc_P.crossgate2_retleft_begright_stable_pos)
                  && (modello_2017b_levaRetro_acc_B.DataTypeConversion <=
                      modello_2017b_levaRetro_acc_P.crossgate2_retleft_begright_stable_pos
                      + modello_2017b_levaRetro_a_eps_b)) {
                /* Transition: '<S215>:69' */
                modello_2017b_levaRetro_acc_DW.is_state_machine =
                  modello_2017b_l_IN_BEGIN_LEFT_1;

                /* Entry 'BEGIN_LEFT_1': '<S215>:51' */
                modello_2017b_levaRetro_acc_B.curve = 3.0;
                modello_2017b_levaRetro_acc_B.debug = 9.0F;
              }
            }
            break;

           case modello_2017b_le_IN_RETURN_LEFT:
            /* During 'RETURN_LEFT': '<S215>:61' */
            if ((modello_2017b_levaRetro_acc_B.DataTypeConversion >
                 modello_2017b_levaRetro_acc_P.crossgate2_retleft_begright_stable_pos
                 - modello_2017b_levaRetro_a_eps_b) &&
                (modello_2017b_levaRetro_acc_B.DataTypeConversion <
                 modello_2017b_levaRetro_acc_P.crossgate2_retleft_begright_stable_pos
                 + modello_2017b_levaRetro_a_eps_b)) {
              /* Transition: '<S215>:65' */
              modello_2017b_levaRetro_acc_DW.is_state_machine =
                modello_2017b__IN_BEGIN_RIGHT_1;

              /* Entry 'BEGIN_RIGHT_1': '<S215>:32' */
              modello_2017b_levaRetro_acc_B.curve = 1.0;
              modello_2017b_levaRetro_acc_B.debug = 3.0F;
            }
            break;

           case modello_2017b_l_IN_RETURN_RIGHT:
            /* During 'RETURN_RIGHT': '<S215>:45' */
            if ((modello_2017b_levaRetro_acc_B.DataTypeConversion >
                 modello_2017b_levaRetro_acc_P.crossgate2_begleft_retright_stable_pos
                 - modello_2017b_levaRetro_a_eps_b) &&
                (modello_2017b_levaRetro_acc_B.DataTypeConversion <
                 modello_2017b_levaRetro_acc_P.crossgate2_begleft_retright_stable_pos
                 + modello_2017b_levaRetro_a_eps_b)) {
              /* Transition: '<S215>:48' */
              modello_2017b_levaRetro_acc_DW.is_state_machine =
                modello_2017b_l_IN_BEGIN_LEFT_1;

              /* Entry 'BEGIN_LEFT_1': '<S215>:51' */
              modello_2017b_levaRetro_acc_B.curve = 3.0;
              modello_2017b_levaRetro_acc_B.debug = 9.0F;
            }
            break;

           case modello_2017b_l_IN_SWITCH_BL_RL:
            /* During 'SWITCH_BL_RL': '<S215>:90' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion <
                modello_2017b_levaRetro_acc_P.crossgate2_left_pos_threshold -
                modello_2017b_levaRetro_acc_P.off_sw_curve) {
              /* Transition: '<S215>:63' */
              modello_2017b_levaRetro_acc_DW.is_state_machine =
                modello_2017b_le_IN_RETURN_LEFT;

              /* Entry 'RETURN_LEFT': '<S215>:61' */
              modello_2017b_levaRetro_acc_B.curve = 4.0;
              modello_2017b_levaRetro_acc_B.debug = 12.0F;
            }
            break;

           case modello_2017b_l_IN_SWITCH_BR_RR:
            /* During 'SWITCH_BR_RR': '<S215>:97' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion >
                modello_2017b_levaRetro_acc_P.crossgate2_right_pos_threshold +
                modello_2017b_levaRetro_acc_P.off_sw_curve) {
              /* Transition: '<S215>:46' */
              modello_2017b_levaRetro_acc_DW.is_state_machine =
                modello_2017b_l_IN_RETURN_RIGHT;

              /* Entry 'RETURN_RIGHT': '<S215>:45' */
              modello_2017b_levaRetro_acc_B.curve = 2.0;
              modello_2017b_levaRetro_acc_B.debug = 6.0F;
            }
            break;

           case modello_2017b_l_IN_THRESHOLD_BL:
            /* During 'THRESHOLD_BL': '<S215>:60' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion <
                modello_2017b_levaRetro_acc_P.crossgate2_left_pos_threshold) {
              /* Transition: '<S215>:91' */
              modello_2017b_levaRetro_acc_DW.is_state_machine =
                modello_2017b_l_IN_SWITCH_BL_RL;

              /* Entry 'SWITCH_BL_RL': '<S215>:90' */
              modello_2017b_levaRetro_acc_B.curve = 8.0;
              modello_2017b_levaRetro_acc_B.debug = 14.0F;
            }
            break;

           case modello_2017b_l_IN_THRESHOLD_BR:
            /* During 'THRESHOLD_BR': '<S215>:43' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion >
                modello_2017b_levaRetro_acc_P.crossgate2_right_pos_threshold) {
              /* Transition: '<S215>:98' */
              modello_2017b_levaRetro_acc_DW.is_state_machine =
                modello_2017b_l_IN_SWITCH_BR_RR;

              /* Entry 'SWITCH_BR_RR': '<S215>:97' */
              modello_2017b_levaRetro_acc_B.curve = 9.0;
              modello_2017b_levaRetro_acc_B.debug = 15.0F;
            }
            break;

           case IN_TRANSITION_PT_BL_RR_PT_BL_RR:
            /* During 'TRANSITION_PT_BL_RR_PT_BL_RR2': '<S215>:34' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion <=
                modello_2017b_levaRetro_acc_P.crossgate2_begleft_retright_stable_pos
                * modello_2017b_levaRetro_acc_P.t_m) {
              /* Transition: '<S215>:38' */
              modello_2017b_levaRetro_acc_DW.is_state_machine =
                modello_2017b__IN_BEGIN_RIGHT_2;

              /* Entry 'BEGIN_RIGHT_2': '<S215>:33' */
              modello_2017b_levaRetro_acc_B.curve = 1.0;
              modello_2017b_levaRetro_acc_B.debug = 4.0F;
            } else {
              if (modello_2017b_levaRetro_acc_B.DataTypeConversion >
                  modello_2017b_levaRetro_acc_P.crossgate2_begleft_retright_stable_pos)
              {
                /* Transition: '<S215>:52' */
                modello_2017b_levaRetro_acc_DW.is_state_machine =
                  modello_2017b_l_IN_BEGIN_LEFT_1;

                /* Entry 'BEGIN_LEFT_1': '<S215>:51' */
                modello_2017b_levaRetro_acc_B.curve = 3.0;
                modello_2017b_levaRetro_acc_B.debug = 9.0F;
              }
            }
            break;

           default:
            /* During 'TRANSITION_PT_RL_BR2_PT_RL_BR': '<S215>:55' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion <
                modello_2017b_levaRetro_acc_P.crossgate2_retleft_begright_stable_pos)
            {
              /* Transition: '<S215>:35' */
              modello_2017b_levaRetro_acc_DW.is_state_machine =
                modello_2017b__IN_BEGIN_RIGHT_1;

              /* Entry 'BEGIN_RIGHT_1': '<S215>:32' */
              modello_2017b_levaRetro_acc_B.curve = 1.0;
              modello_2017b_levaRetro_acc_B.debug = 3.0F;
            } else {
              if (modello_2017b_levaRetro_acc_B.DataTypeConversion >=
                  modello_2017b_levaRetro_acc_P.crossgate2_retleft_begright_stable_pos
                  * modello_2017b_levaRetro_acc_P.t_m) {
                /* Transition: '<S215>:57' */
                modello_2017b_levaRetro_acc_DW.is_state_machine =
                  modello_2017b_l_IN_BEGIN_LEFT_2;

                /* Entry 'BEGIN_LEFT_2': '<S215>:53' */
                modello_2017b_levaRetro_acc_B.curve = 3.0;
                modello_2017b_levaRetro_acc_B.debug = 10.0F;
              }
            }
            break;
          }
        }
      }

      /* End of Chart: '<S183>/Chart1' */

      /* MATLAB Function: '<S183>/demultiplexer_enable_subsistems' */
      demultiplexer_enable_subsistems(modello_2017b_levaRetro_acc_B.curve,
        &modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsi_b);

      /* Outputs for Enabled SubSystem: '<S183>/crossgate_selection2_begin_right' */
      crossgate_selection1_begin_left
        (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsi_b.out1,
         modello_2017b_levaRetro_acc_B.DataTypeConversion,
         &modello_2017b_levaRetro_acc_B.crossgate_selection2_begin_righ,
         &modello_2017b_levaRetro_acc_DW.crossgate_selection2_begin_righ,
         &modello_2017b_levaRetro_acc_P.crossgate_selection2_begin_righ);

      /* End of Outputs for SubSystem: '<S183>/crossgate_selection2_begin_right' */

      /* Outputs for Enabled SubSystem: '<S183>/crossgate_selection2_return_right' */
      crossgate_selection1_begin_left
        (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsi_b.out2,
         modello_2017b_levaRetro_acc_B.DataTypeConversion,
         &modello_2017b_levaRetro_acc_B.crossgate_selection2_return_rig,
         &modello_2017b_levaRetro_acc_DW.crossgate_selection2_return_rig,
         &modello_2017b_levaRetro_acc_P.crossgate_selection2_return_rig);

      /* End of Outputs for SubSystem: '<S183>/crossgate_selection2_return_right' */

      /* Outputs for Enabled SubSystem: '<S183>/crossgate_selection2_begin_left' */
      crossgate_selection1_begin_left
        (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsi_b.out3,
         modello_2017b_levaRetro_acc_B.DataTypeConversion,
         &modello_2017b_levaRetro_acc_B.crossgate_selection2_begin_left,
         &modello_2017b_levaRetro_acc_DW.crossgate_selection2_begin_left,
         &modello_2017b_levaRetro_acc_P.crossgate_selection2_begin_left);

      /* End of Outputs for SubSystem: '<S183>/crossgate_selection2_begin_left' */

      /* Outputs for Enabled SubSystem: '<S183>/crossgate_selection2_return_left' */
      crossgate_selection1_begin_left
        (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsi_b.out4,
         modello_2017b_levaRetro_acc_B.DataTypeConversion,
         &modello_2017b_levaRetro_acc_B.crossgate_selection2_return_lef,
         &modello_2017b_levaRetro_acc_DW.crossgate_selection2_return_lef,
         &modello_2017b_levaRetro_acc_P.crossgate_selection2_return_lef);

      /* End of Outputs for SubSystem: '<S183>/crossgate_selection2_return_left' */

      /* Outputs for Enabled SubSystem: '<S183>/transition2_pt_bl_rr_pt_bl_rr2' */
      modello_2017b_transition1_bl_rl
        (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsi_b.out5,
         modello_2017b_levaRetro_acc_B.DataTypeConversion,
         &modello_2017b_levaRetro_acc_B.transition2_pt_bl_rr_pt_bl_rr2,
         &modello_2017b_levaRetro_acc_DW.transition2_pt_bl_rr_pt_bl_rr2,
         &modello_2017b_levaRetro_acc_P.transition2_pt_bl_rr_pt_bl_rr2);

      /* End of Outputs for SubSystem: '<S183>/transition2_pt_bl_rr_pt_bl_rr2' */

      /* Outputs for Enabled SubSystem: '<S183>/transition2_pt_rl_bl_pt_rl_bl2' */
      modello_2017b_transition1_bl_rl
        (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsi_b.out6,
         modello_2017b_levaRetro_acc_B.DataTypeConversion,
         &modello_2017b_levaRetro_acc_B.transition2_pt_rl_bl_pt_rl_bl2,
         &modello_2017b_levaRetro_acc_DW.transition2_pt_rl_bl_pt_rl_bl2,
         &modello_2017b_levaRetro_acc_P.transition2_pt_rl_bl_pt_rl_bl2);

      /* End of Outputs for SubSystem: '<S183>/transition2_pt_rl_bl_pt_rl_bl2' */

      /* Outputs for Enabled SubSystem: '<S183>/transition2_zero' */
      modello_2017b_transition1_bl_rl
        (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsi_b.out7,
         modello_2017b_levaRetro_acc_B.DataTypeConversion,
         &modello_2017b_levaRetro_acc_B.transition2_zero,
         &modello_2017b_levaRetro_acc_DW.transition2_zero,
         &modello_2017b_levaRetro_acc_P.transition2_zero);

      /* End of Outputs for SubSystem: '<S183>/transition2_zero' */

      /* Outputs for Enabled SubSystem: '<S183>/transition2_bl_rl' */
      modello_2017b_transition1_bl_rl
        (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsi_b.out8,
         modello_2017b_levaRetro_acc_B.DataTypeConversion,
         &modello_2017b_levaRetro_acc_B.transition2_bl_rl,
         &modello_2017b_levaRetro_acc_DW.transition2_bl_rl,
         &modello_2017b_levaRetro_acc_P.transition2_bl_rl);

      /* End of Outputs for SubSystem: '<S183>/transition2_bl_rl' */

      /* Outputs for Enabled SubSystem: '<S183>/transition2_br_rr' */
      modello_2017b_transition1_bl_rl
        (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsi_b.out9,
         modello_2017b_levaRetro_acc_B.DataTypeConversion,
         &modello_2017b_levaRetro_acc_B.transition2_br_rr,
         &modello_2017b_levaRetro_acc_DW.transition2_br_rr,
         &modello_2017b_levaRetro_acc_P.transition2_br_rr);

      /* End of Outputs for SubSystem: '<S183>/transition2_br_rr' */

      /* MultiPortSwitch: '<S183>/Multiport Switch' incorporates:
       *  Constant: '<S183>/zero'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.curve) {
       case 1:
        modello_2017b_levaRetro_acc_B.MultiportSwitch =
          modello_2017b_levaRetro_acc_B.crossgate_selection2_begin_righ.uDLookupTable;
        break;

       case 2:
        modello_2017b_levaRetro_acc_B.MultiportSwitch =
          modello_2017b_levaRetro_acc_B.crossgate_selection2_return_rig.uDLookupTable;
        break;

       case 3:
        modello_2017b_levaRetro_acc_B.MultiportSwitch =
          modello_2017b_levaRetro_acc_B.crossgate_selection2_begin_left.uDLookupTable;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.MultiportSwitch =
          modello_2017b_levaRetro_acc_B.crossgate_selection2_return_lef.uDLookupTable;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.MultiportSwitch =
          modello_2017b_levaRetro_acc_B.transition2_pt_bl_rr_pt_bl_rr2.uDLookupTable;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.MultiportSwitch =
          modello_2017b_levaRetro_acc_B.transition2_pt_rl_bl_pt_rl_bl2.uDLookupTable;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.MultiportSwitch =
          modello_2017b_levaRetro_acc_B.transition2_zero.uDLookupTable;
        break;

       case 8:
        modello_2017b_levaRetro_acc_B.MultiportSwitch =
          modello_2017b_levaRetro_acc_B.transition2_bl_rl.uDLookupTable;
        break;

       case 9:
        modello_2017b_levaRetro_acc_B.MultiportSwitch =
          modello_2017b_levaRetro_acc_B.transition2_br_rr.uDLookupTable;
        break;

       default:
        modello_2017b_levaRetro_acc_B.MultiportSwitch =
          modello_2017b_levaRetro_acc_P.zero_Value_p;
        break;
      }

      /* End of MultiPortSwitch: '<S183>/Multiport Switch' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.crossgate_selection2_profile_Su);
    }

    /* End of Outputs for SubSystem: '<S176>/crossgate_selection2_profile' */

    /* Outputs for Enabled SubSystem: '<S176>/crossgate_selection1_profile' incorporates:
     *  EnablePort: '<S181>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.out1_l > 0.0) {
      /* Chart: '<S181>/Chart1' */
      /* Gateway: prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/Chart1 */
      modello_2017b_levaRetro_acc_DW.sfEvent_l = -1;

      /* During: prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/Chart1 */
      if (modello_2017b_levaRetro_acc_DW.is_active_c451_modello_2017b_le == 0U)
      {
        /* Entry: prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/Chart1 */
        modello_2017b_levaRetro_acc_DW.is_active_c451_modello_2017b_le = 1U;

        /* Entry Internal: prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/Chart1 */
        modello_2017b_levaRetro_acc_DW.is_c451_modello_2017b_levaRetro =
          modello_2017b__IN_state_machine;

        /* Entry Internal 'state_machine': '<S185>:82' */
        /* Transition: '<S185>:31' */
        modello_2017b_levaRetro_acc_DW.is_state_machine_j =
          modello_2017b_levaRet_IN_IDLE_c;

        /* Entry 'IDLE': '<S185>:76' */
        modello_2017b_levaRetro_acc_B.curve_f = 10.0;
        modello_2017b_levaRetro_acc_B.debug_i = 0.0F;
      } else {
        /* During 'state_machine': '<S185>:82' */
        if (modello_2017b_levaRetro_acc_B.Memory9 == 0.0F) {
          /* Transition: '<S185>:83' */
          /* Exit Internal 'state_machine': '<S185>:82' */
          modello_2017b_levaRetro_acc_DW.is_state_machine_j =
            modello_2017b_levaRet_IN_IDLE_c;

          /* Entry 'IDLE': '<S185>:76' */
          modello_2017b_levaRetro_acc_B.curve_f = 10.0;
          modello_2017b_levaRetro_acc_B.debug_i = 0.0F;
        } else {
          switch (modello_2017b_levaRetro_acc_DW.is_state_machine_j) {
           case modello_2017b_l_IN_BEGIN_LEFT_1:
            /* During 'BEGIN_LEFT_1': '<S185>:51' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion >=
                modello_2017b_levaRetro_acc_P.crossgate1_retleft_begright_stable_pos
                * modello_2017b_levaRetro_acc_P.t_m) {
              /* Transition: '<S185>:54' */
              modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                modello_2017b_l_IN_BEGIN_LEFT_2;

              /* Entry 'BEGIN_LEFT_2': '<S185>:53' */
              modello_2017b_levaRetro_acc_B.curve_f = 3.0;
              modello_2017b_levaRetro_acc_B.debug_i = 10.0F;
            } else {
              if (modello_2017b_levaRetro_acc_B.DataTypeConversion <=
                  modello_2017b_levaRetro_acc_P.crossgate1_begleft_retright_stable_pos)
              {
                /* Transition: '<S185>:71' */
                modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                  IN_TRANSITION_PT_BL_RR_PT_BL_RR;

                /* Entry 'TRANSITION_PT_BL_RR_PT_BL_RR2': '<S185>:34' */
                modello_2017b_levaRetro_acc_B.curve_f = 5.0;
                modello_2017b_levaRetro_acc_B.debug_i = 7.0F;
              }
            }
            break;

           case modello_2017b_l_IN_BEGIN_LEFT_2:
            /* During 'BEGIN_LEFT_2': '<S185>:53' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion <
                modello_2017b_levaRetro_acc_P.crossgate1_retleft_begright_stable_pos
                * modello_2017b_levaRetro_acc_P.t_m) {
              /* Transition: '<S185>:56' */
              modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                IN_TRANSITION_PT_RL_BR2_PT_RL_B;

              /* Entry 'TRANSITION_PT_RL_BR2_PT_RL_BR': '<S185>:55' */
              modello_2017b_levaRetro_acc_B.curve_f = 6.0;
              modello_2017b_levaRetro_acc_B.debug_i = 13.0F;
            } else {
              if (modello_2017b_levaRetro_acc_B.DataTypeConversion >
                  modello_2017b_levaRetro_acc_P.crossgate1_left_pos_threshold) {
                /* Transition: '<S185>:62' */
                modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                  modello_2017b_l_IN_THRESHOLD_BL;

                /* Entry 'THRESHOLD_BL': '<S185>:60' */
                modello_2017b_levaRetro_acc_B.curve_f = 3.0;
                modello_2017b_levaRetro_acc_B.debug_i = 11.0F;
              }
            }
            break;

           case modello_2017b__IN_BEGIN_RIGHT_1:
            /* During 'BEGIN_RIGHT_1': '<S185>:32' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion >=
                modello_2017b_levaRetro_acc_P.crossgate1_retleft_begright_stable_pos)
            {
              /* Transition: '<S185>:59' */
              modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                IN_TRANSITION_PT_RL_BR2_PT_RL_B;

              /* Entry 'TRANSITION_PT_RL_BR2_PT_RL_BR': '<S185>:55' */
              modello_2017b_levaRetro_acc_B.curve_f = 6.0;
              modello_2017b_levaRetro_acc_B.debug_i = 13.0F;
            } else {
              if (modello_2017b_levaRetro_acc_B.DataTypeConversion <=
                  modello_2017b_levaRetro_acc_P.crossgate1_begleft_retright_stable_pos
                  * modello_2017b_levaRetro_acc_P.t_m) {
                /* Transition: '<S185>:36' */
                modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                  modello_2017b__IN_BEGIN_RIGHT_2;

                /* Entry 'BEGIN_RIGHT_2': '<S185>:33' */
                modello_2017b_levaRetro_acc_B.curve_f = 1.0;
                modello_2017b_levaRetro_acc_B.debug_i = 4.0F;
              }
            }
            break;

           case modello_2017b__IN_BEGIN_RIGHT_2:
            /* During 'BEGIN_RIGHT_2': '<S185>:33' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion >
                modello_2017b_levaRetro_acc_P.crossgate1_begleft_retright_stable_pos
                * modello_2017b_levaRetro_acc_P.t_m) {
              /* Transition: '<S185>:37' */
              modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                IN_TRANSITION_PT_BL_RR_PT_BL_RR;

              /* Entry 'TRANSITION_PT_BL_RR_PT_BL_RR2': '<S185>:34' */
              modello_2017b_levaRetro_acc_B.curve_f = 5.0;
              modello_2017b_levaRetro_acc_B.debug_i = 7.0F;
            } else {
              if (modello_2017b_levaRetro_acc_B.DataTypeConversion <
                  modello_2017b_levaRetro_acc_P.crossgate1_right_pos_threshold)
              {
                /* Transition: '<S185>:44' */
                modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                  modello_2017b_l_IN_THRESHOLD_BR;

                /* Entry 'THRESHOLD_BR': '<S185>:43' */
                modello_2017b_levaRetro_acc_B.curve_f = 1.0;
                modello_2017b_levaRetro_acc_B.debug_i = 5.0F;
              }
            }
            break;

           case modello_2017b_levaRet_IN_IDLE_c:
            /* During 'IDLE': '<S185>:76' */
            if (modello_2017b_levaRetro_acc_B.Memory9 == 1.0F) {
              /* Transition: '<S185>:77' */
              modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                modello_2017b_levaRet_IN_INIT_l;

              /* Entry 'INIT': '<S185>:67' */
              modello_2017b_levaRetro_acc_B.curve_f = 7.0;
              modello_2017b_levaRetro_acc_B.debug_i = 1.0F;
            }
            break;

           case modello_2017b_levaRet_IN_INIT_l:
            /* During 'INIT': '<S185>:67' */
            if ((modello_2017b_levaRetro_acc_B.DataTypeConversion <=
                 modello_2017b_levaRetro_acc_P.crossgate1_begleft_retright_stable_pos)
                && (modello_2017b_levaRetro_acc_B.DataTypeConversion >=
                    modello_2017b_levaRetro_acc_P.crossgate1_begleft_retright_stable_pos
                    - modello_2017b_levaRetro_acc_eps)) {
              /* Transition: '<S185>:68' */
              modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                modello_2017b__IN_BEGIN_RIGHT_1;

              /* Entry 'BEGIN_RIGHT_1': '<S185>:32' */
              modello_2017b_levaRetro_acc_B.curve_f = 1.0;
              modello_2017b_levaRetro_acc_B.debug_i = 3.0F;
            } else {
              if ((modello_2017b_levaRetro_acc_B.DataTypeConversion >=
                   modello_2017b_levaRetro_acc_P.crossgate1_retleft_begright_stable_pos)
                  && (modello_2017b_levaRetro_acc_B.DataTypeConversion <=
                      modello_2017b_levaRetro_acc_P.crossgate1_retleft_begright_stable_pos
                      + modello_2017b_levaRetro_acc_eps)) {
                /* Transition: '<S185>:69' */
                modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                  modello_2017b_l_IN_BEGIN_LEFT_1;

                /* Entry 'BEGIN_LEFT_1': '<S185>:51' */
                modello_2017b_levaRetro_acc_B.curve_f = 3.0;
                modello_2017b_levaRetro_acc_B.debug_i = 9.0F;
              }
            }
            break;

           case modello_2017b_le_IN_RETURN_LEFT:
            /* During 'RETURN_LEFT': '<S185>:61' */
            if ((modello_2017b_levaRetro_acc_B.DataTypeConversion >
                 modello_2017b_levaRetro_acc_P.crossgate1_retleft_begright_stable_pos
                 - modello_2017b_levaRetro_acc_eps) &&
                (modello_2017b_levaRetro_acc_B.DataTypeConversion <
                 modello_2017b_levaRetro_acc_P.crossgate1_retleft_begright_stable_pos
                 + modello_2017b_levaRetro_acc_eps)) {
              /* Transition: '<S185>:65' */
              modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                modello_2017b__IN_BEGIN_RIGHT_1;

              /* Entry 'BEGIN_RIGHT_1': '<S185>:32' */
              modello_2017b_levaRetro_acc_B.curve_f = 1.0;
              modello_2017b_levaRetro_acc_B.debug_i = 3.0F;
            }
            break;

           case modello_2017b_l_IN_RETURN_RIGHT:
            /* During 'RETURN_RIGHT': '<S185>:45' */
            if ((modello_2017b_levaRetro_acc_B.DataTypeConversion >
                 modello_2017b_levaRetro_acc_P.crossgate1_begleft_retright_stable_pos
                 - modello_2017b_levaRetro_acc_eps) &&
                (modello_2017b_levaRetro_acc_B.DataTypeConversion <
                 modello_2017b_levaRetro_acc_P.crossgate1_begleft_retright_stable_pos
                 + modello_2017b_levaRetro_acc_eps)) {
              /* Transition: '<S185>:48' */
              modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                modello_2017b_l_IN_BEGIN_LEFT_1;

              /* Entry 'BEGIN_LEFT_1': '<S185>:51' */
              modello_2017b_levaRetro_acc_B.curve_f = 3.0;
              modello_2017b_levaRetro_acc_B.debug_i = 9.0F;
            }
            break;

           case modello_2017b_l_IN_SWITCH_BL_RL:
            /* During 'SWITCH_BL_RL': '<S185>:90' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion <
                modello_2017b_levaRetro_acc_P.crossgate1_left_pos_threshold -
                modello_2017b_levaRetro_acc_P.off_sw_curve) {
              /* Transition: '<S185>:63' */
              modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                modello_2017b_le_IN_RETURN_LEFT;

              /* Entry 'RETURN_LEFT': '<S185>:61' */
              modello_2017b_levaRetro_acc_B.curve_f = 4.0;
              modello_2017b_levaRetro_acc_B.debug_i = 12.0F;
            }
            break;

           case modello_2017b_l_IN_SWITCH_BR_RR:
            /* During 'SWITCH_BR_RR': '<S185>:97' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion >
                modello_2017b_levaRetro_acc_P.crossgate1_right_pos_threshold +
                modello_2017b_levaRetro_acc_P.off_sw_curve) {
              /* Transition: '<S185>:46' */
              modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                modello_2017b_l_IN_RETURN_RIGHT;

              /* Entry 'RETURN_RIGHT': '<S185>:45' */
              modello_2017b_levaRetro_acc_B.curve_f = 2.0;
              modello_2017b_levaRetro_acc_B.debug_i = 6.0F;
            }
            break;

           case modello_2017b_l_IN_THRESHOLD_BL:
            /* During 'THRESHOLD_BL': '<S185>:60' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion <
                modello_2017b_levaRetro_acc_P.crossgate1_left_pos_threshold) {
              /* Transition: '<S185>:91' */
              modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                modello_2017b_l_IN_SWITCH_BL_RL;

              /* Entry 'SWITCH_BL_RL': '<S185>:90' */
              modello_2017b_levaRetro_acc_B.curve_f = 8.0;
              modello_2017b_levaRetro_acc_B.debug_i = 14.0F;
            }
            break;

           case modello_2017b_l_IN_THRESHOLD_BR:
            /* During 'THRESHOLD_BR': '<S185>:43' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion >
                modello_2017b_levaRetro_acc_P.crossgate1_right_pos_threshold) {
              /* Transition: '<S185>:98' */
              modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                modello_2017b_l_IN_SWITCH_BR_RR;

              /* Entry 'SWITCH_BR_RR': '<S185>:97' */
              modello_2017b_levaRetro_acc_B.curve_f = 9.0;
              modello_2017b_levaRetro_acc_B.debug_i = 15.0F;
            }
            break;

           case IN_TRANSITION_PT_BL_RR_PT_BL_RR:
            /* During 'TRANSITION_PT_BL_RR_PT_BL_RR2': '<S185>:34' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion <=
                modello_2017b_levaRetro_acc_P.crossgate1_begleft_retright_stable_pos
                * modello_2017b_levaRetro_acc_P.t_m) {
              /* Transition: '<S185>:38' */
              modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                modello_2017b__IN_BEGIN_RIGHT_2;

              /* Entry 'BEGIN_RIGHT_2': '<S185>:33' */
              modello_2017b_levaRetro_acc_B.curve_f = 1.0;
              modello_2017b_levaRetro_acc_B.debug_i = 4.0F;
            } else {
              if (modello_2017b_levaRetro_acc_B.DataTypeConversion >
                  modello_2017b_levaRetro_acc_P.crossgate1_begleft_retright_stable_pos)
              {
                /* Transition: '<S185>:52' */
                modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                  modello_2017b_l_IN_BEGIN_LEFT_1;

                /* Entry 'BEGIN_LEFT_1': '<S185>:51' */
                modello_2017b_levaRetro_acc_B.curve_f = 3.0;
                modello_2017b_levaRetro_acc_B.debug_i = 9.0F;
              }
            }
            break;

           default:
            /* During 'TRANSITION_PT_RL_BR2_PT_RL_BR': '<S185>:55' */
            if (modello_2017b_levaRetro_acc_B.DataTypeConversion >=
                modello_2017b_levaRetro_acc_P.crossgate1_retleft_begright_stable_pos
                * modello_2017b_levaRetro_acc_P.t_m) {
              /* Transition: '<S185>:57' */
              modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                modello_2017b_l_IN_BEGIN_LEFT_2;

              /* Entry 'BEGIN_LEFT_2': '<S185>:53' */
              modello_2017b_levaRetro_acc_B.curve_f = 3.0;
              modello_2017b_levaRetro_acc_B.debug_i = 10.0F;
            } else {
              if (modello_2017b_levaRetro_acc_B.DataTypeConversion <
                  modello_2017b_levaRetro_acc_P.crossgate1_retleft_begright_stable_pos)
              {
                /* Transition: '<S185>:58' */
                modello_2017b_levaRetro_acc_DW.is_state_machine_j =
                  modello_2017b__IN_BEGIN_RIGHT_1;

                /* Entry 'BEGIN_RIGHT_1': '<S185>:32' */
                modello_2017b_levaRetro_acc_B.curve_f = 1.0;
                modello_2017b_levaRetro_acc_B.debug_i = 3.0F;
              }
            }
            break;
          }
        }
      }

      /* End of Chart: '<S181>/Chart1' */

      /* MATLAB Function: '<S181>/demultiplexer_enable_subsistems' */
      demultiplexer_enable_subsistems(modello_2017b_levaRetro_acc_B.curve_f,
        &modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsist);

      /* Outputs for Enabled SubSystem: '<S181>/crossgate_selection1_begin_right' */
      crossgate_selection1_begin_left
        (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsist.out1,
         modello_2017b_levaRetro_acc_B.DataTypeConversion,
         &modello_2017b_levaRetro_acc_B.crossgate_selection1_begin_righ,
         &modello_2017b_levaRetro_acc_DW.crossgate_selection1_begin_righ,
         &modello_2017b_levaRetro_acc_P.crossgate_selection1_begin_righ);

      /* End of Outputs for SubSystem: '<S181>/crossgate_selection1_begin_right' */

      /* Outputs for Enabled SubSystem: '<S181>/crossgate_selection1_return_right' */
      crossgate_selection1_begin_left
        (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsist.out2,
         modello_2017b_levaRetro_acc_B.DataTypeConversion,
         &modello_2017b_levaRetro_acc_B.crossgate_selection1_return_rig,
         &modello_2017b_levaRetro_acc_DW.crossgate_selection1_return_rig,
         &modello_2017b_levaRetro_acc_P.crossgate_selection1_return_rig);

      /* End of Outputs for SubSystem: '<S181>/crossgate_selection1_return_right' */

      /* Outputs for Enabled SubSystem: '<S181>/crossgate_selection1_begin_left' */
      crossgate_selection1_begin_left
        (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsist.out3,
         modello_2017b_levaRetro_acc_B.DataTypeConversion,
         &modello_2017b_levaRetro_acc_B.crossgate_selection1_begin_le_k,
         &modello_2017b_levaRetro_acc_DW.crossgate_selection1_begin_le_k,
         &modello_2017b_levaRetro_acc_P.crossgate_selection1_begin_le_k);

      /* End of Outputs for SubSystem: '<S181>/crossgate_selection1_begin_left' */

      /* Outputs for Enabled SubSystem: '<S181>/crossgate_selection1_return_left' */
      crossgate_selection1_begin_left
        (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsist.out4,
         modello_2017b_levaRetro_acc_B.DataTypeConversion,
         &modello_2017b_levaRetro_acc_B.crossgate_selection1_return_lef,
         &modello_2017b_levaRetro_acc_DW.crossgate_selection1_return_lef,
         &modello_2017b_levaRetro_acc_P.crossgate_selection1_return_lef);

      /* End of Outputs for SubSystem: '<S181>/crossgate_selection1_return_left' */

      /* Outputs for Enabled SubSystem: '<S181>/transition1_pt_bl_rr_pt_bl_rr2' */
      modello_2017b_transition1_bl_rl
        (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsist.out5,
         modello_2017b_levaRetro_acc_B.DataTypeConversion,
         &modello_2017b_levaRetro_acc_B.transition1_pt_bl_rr_pt_bl_rr2,
         &modello_2017b_levaRetro_acc_DW.transition1_pt_bl_rr_pt_bl_rr2,
         &modello_2017b_levaRetro_acc_P.transition1_pt_bl_rr_pt_bl_rr2);

      /* End of Outputs for SubSystem: '<S181>/transition1_pt_bl_rr_pt_bl_rr2' */

      /* Outputs for Enabled SubSystem: '<S181>/transition1_pt_rl_bl_pt_rl_bl2' */
      modello_2017b_transition1_bl_rl
        (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsist.out6,
         modello_2017b_levaRetro_acc_B.DataTypeConversion,
         &modello_2017b_levaRetro_acc_B.transition1_pt_rl_bl_pt_rl_bl2,
         &modello_2017b_levaRetro_acc_DW.transition1_pt_rl_bl_pt_rl_bl2,
         &modello_2017b_levaRetro_acc_P.transition1_pt_rl_bl_pt_rl_bl2);

      /* End of Outputs for SubSystem: '<S181>/transition1_pt_rl_bl_pt_rl_bl2' */

      /* Outputs for Enabled SubSystem: '<S181>/transition1_zero' */
      modello_2017b_transition1_bl_rl
        (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsist.out7,
         modello_2017b_levaRetro_acc_B.DataTypeConversion,
         &modello_2017b_levaRetro_acc_B.transition1_zero,
         &modello_2017b_levaRetro_acc_DW.transition1_zero,
         &modello_2017b_levaRetro_acc_P.transition1_zero);

      /* End of Outputs for SubSystem: '<S181>/transition1_zero' */

      /* Outputs for Enabled SubSystem: '<S181>/transition1_bl_rl' */
      modello_2017b_transition1_bl_rl
        (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsist.out8,
         modello_2017b_levaRetro_acc_B.DataTypeConversion,
         &modello_2017b_levaRetro_acc_B.transition1_bl_rl,
         &modello_2017b_levaRetro_acc_DW.transition1_bl_rl,
         &modello_2017b_levaRetro_acc_P.transition1_bl_rl);

      /* End of Outputs for SubSystem: '<S181>/transition1_bl_rl' */

      /* Outputs for Enabled SubSystem: '<S181>/transition1_br_rr' */
      modello_2017b_transition1_bl_rl
        (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_subsist.out9,
         modello_2017b_levaRetro_acc_B.DataTypeConversion,
         &modello_2017b_levaRetro_acc_B.transition1_br_rr,
         &modello_2017b_levaRetro_acc_DW.transition1_br_rr,
         &modello_2017b_levaRetro_acc_P.transition1_br_rr);

      /* End of Outputs for SubSystem: '<S181>/transition1_br_rr' */

      /* MultiPortSwitch: '<S181>/Multiport Switch' incorporates:
       *  Constant: '<S181>/zero'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.curve_f) {
       case 1:
        modello_2017b_levaRetro_acc_B.MultiportSwitch_d =
          modello_2017b_levaRetro_acc_B.crossgate_selection1_begin_righ.uDLookupTable;
        break;

       case 2:
        modello_2017b_levaRetro_acc_B.MultiportSwitch_d =
          modello_2017b_levaRetro_acc_B.crossgate_selection1_return_rig.uDLookupTable;
        break;

       case 3:
        modello_2017b_levaRetro_acc_B.MultiportSwitch_d =
          modello_2017b_levaRetro_acc_B.crossgate_selection1_begin_le_k.uDLookupTable;
        break;

       case 4:
        modello_2017b_levaRetro_acc_B.MultiportSwitch_d =
          modello_2017b_levaRetro_acc_B.crossgate_selection1_return_lef.uDLookupTable;
        break;

       case 5:
        modello_2017b_levaRetro_acc_B.MultiportSwitch_d =
          modello_2017b_levaRetro_acc_B.transition1_pt_bl_rr_pt_bl_rr2.uDLookupTable;
        break;

       case 6:
        modello_2017b_levaRetro_acc_B.MultiportSwitch_d =
          modello_2017b_levaRetro_acc_B.transition1_pt_rl_bl_pt_rl_bl2.uDLookupTable;
        break;

       case 7:
        modello_2017b_levaRetro_acc_B.MultiportSwitch_d =
          modello_2017b_levaRetro_acc_B.transition1_zero.uDLookupTable;
        break;

       case 8:
        modello_2017b_levaRetro_acc_B.MultiportSwitch_d =
          modello_2017b_levaRetro_acc_B.transition1_bl_rl.uDLookupTable;
        break;

       case 9:
        modello_2017b_levaRetro_acc_B.MultiportSwitch_d =
          modello_2017b_levaRetro_acc_B.transition1_br_rr.uDLookupTable;
        break;

       default:
        modello_2017b_levaRetro_acc_B.MultiportSwitch_d =
          modello_2017b_levaRetro_acc_P.zero_Value_i;
        break;
      }

      /* End of MultiPortSwitch: '<S181>/Multiport Switch' */

      /* MATLAB Function: '<S181>/Select curve' incorporates:
       *  Constant: '<S181>/Constant'
       */
      /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/Select curve': '<S186>:1' */
      if (modello_2017b_levaRetro_acc_B.Memory9 == 1.0F) {
        /* '<S186>:1:3' */
        if (modello_2017b_levaRetro_acc_B.DataTypeConversion <
            modello_2017b_levaRetro_acc_P.Constant_Value) {
          /* '<S186>:1:4' */
          /* '<S186>:1:6' */
          modello_2017b_levaRetro_acc_B.curve_index = 1.0;
        } else {
          /* '<S186>:1:8' */
          modello_2017b_levaRetro_acc_B.curve_index = 2.0;
        }
      } else {
        /* '<S186>:1:11' */
        modello_2017b_levaRetro_acc_B.curve_index = 3.0;
      }

      /* End of MATLAB Function: '<S181>/Select curve' */

      /* MATLAB Function: '<S181>/demultiplexer_enable_subsistems1' */
      /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/demultiplexer_enable_subsistems1': '<S194>:1' */
      /* '<S194>:1:3' */
      modello_2017b_levaRetro_acc_B.out1 = 0.0;

      /* '<S194>:1:4' */
      modello_2017b_levaRetro_acc_B.out2 = 0.0;
      switch ((int32_T)modello_2017b_levaRetro_acc_B.curve_index) {
       case 1:
        /* '<S194>:1:9' */
        modello_2017b_levaRetro_acc_B.out1 = 1.0;
        break;

       case 2:
        /* '<S194>:1:11' */
        modello_2017b_levaRetro_acc_B.out2 = 1.0;
        break;
      }

      /* End of MATLAB Function: '<S181>/demultiplexer_enable_subsistems1' */

      /* Outputs for Enabled SubSystem: '<S181>/crossgate_selection1_begin_right1' */
      crossgate_selection1_begin_left(modello_2017b_levaRetro_acc_B.out1,
        modello_2017b_levaRetro_acc_B.DataTypeConversion,
        &modello_2017b_levaRetro_acc_B.crossgate_selection1_begin_ri_e,
        &modello_2017b_levaRetro_acc_DW.crossgate_selection1_begin_ri_e,
        &modello_2017b_levaRetro_acc_P.crossgate_selection1_begin_ri_e);

      /* End of Outputs for SubSystem: '<S181>/crossgate_selection1_begin_right1' */

      /* Outputs for Enabled SubSystem: '<S181>/crossgate_selection1_begin_left1' */
      crossgate_selection1_begin_left(modello_2017b_levaRetro_acc_B.out2,
        modello_2017b_levaRetro_acc_B.DataTypeConversion,
        &modello_2017b_levaRetro_acc_B.crossgate_selection1_begin_le_h,
        &modello_2017b_levaRetro_acc_DW.crossgate_selection1_begin_le_h,
        &modello_2017b_levaRetro_acc_P.crossgate_selection1_begin_le_h);

      /* End of Outputs for SubSystem: '<S181>/crossgate_selection1_begin_left1' */

      /* MultiPortSwitch: '<S181>/Multiport Switch1' incorporates:
       *  Constant: '<S181>/zero1'
       */
      switch ((int32_T)modello_2017b_levaRetro_acc_B.curve_index) {
       case 1:
        modello_2017b_levaRetro_acc_B.MultiportSwitch1 =
          modello_2017b_levaRetro_acc_B.crossgate_selection1_begin_ri_e.uDLookupTable;
        break;

       case 2:
        modello_2017b_levaRetro_acc_B.MultiportSwitch1 =
          modello_2017b_levaRetro_acc_B.crossgate_selection1_begin_le_h.uDLookupTable;
        break;

       default:
        modello_2017b_levaRetro_acc_B.MultiportSwitch1 =
          modello_2017b_levaRetro_acc_P.zero1_Value_h;
        break;
      }

      /* End of MultiPortSwitch: '<S181>/Multiport Switch1' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.crossgate_selection1_profile_Su);
    }

    /* End of Outputs for SubSystem: '<S176>/crossgate_selection1_profile' */

    /* Switch: '<S176>/Switch' */
    if (modello_2017b_levaRetro_acc_B.DataTypeConversion3_g != 0.0F) {
      modello_2017b_levaRetro_acc_B.Switch =
        modello_2017b_levaRetro_acc_B.MultiportSwitch;
    } else {
      modello_2017b_levaRetro_acc_B.Switch =
        modello_2017b_levaRetro_acc_B.MultiportSwitch_d;
    }

    /* End of Switch: '<S176>/Switch' */

    /* DataTypeConversion: '<S176>/Data Type Conversion1' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion1_o1 = (real32_T)
      modello_2017b_levaRetro_acc_B.Switch;

    /* Outputs for Enabled SubSystem: '<S89>/inside_gear_path' incorporates:
     *  EnablePort: '<S177>/Enable'
     */
    if (modello_2017b_levaRetro_acc_B.inside_gear_path > 0.0) {
      /* MATLAB Function: '<S227>/MATLAB Function1' incorporates:
       *  Constant: '<S227>/Constant'
       */
      /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/inside_gear_path/inside_gear_force_y/MATLAB Function1': '<S230>:1' */
      /* '<S230>:1:5' */
      modello_2017b_levaRetro_acc_B.giocodx =
        modello_2017b_levaRetro_acc_P.backlash[(int32_T)
        modello_2017b_levaRetro_acc_B.DataTypeConversion_kx + 6];

      /* '<S230>:1:6' */
      modello_2017b_levaRetro_acc_B.giocosx =
        modello_2017b_levaRetro_acc_P.backlash[(int32_T)
        modello_2017b_levaRetro_acc_B.DataTypeConversion_kx - 1];

      /* MATLAB Function: '<S227>/MATLAB Function2' incorporates:
       *  Constant: '<S227>/Constant1'
       */
      /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/inside_gear_path/inside_gear_force_y/MATLAB Function2': '<S231>:1' */
      /* '<S231>:1:3' */
      modello_2017b_levaRetro_acc_B.stiffdx =
        modello_2017b_levaRetro_acc_P.stiffness_gioco_gear[(int32_T)
        modello_2017b_levaRetro_acc_B.DataTypeConversion_kx - 1];

      /* '<S231>:1:4' */
      modello_2017b_levaRetro_acc_B.stiffsx =
        modello_2017b_levaRetro_acc_P.stiffness_gioco_gear[(int32_T)
        modello_2017b_levaRetro_acc_B.DataTypeConversion_kx + 6];

      /* MATLAB Function: '<S227>/MATLAB Function' */
      /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/inside_gear_path/inside_gear_force_y/MATLAB Function': '<S229>:1' */
      /* '<S229>:1:3' */
      modello_2017b_levaRetro_acc_B.forcey = 0.0F;
      if (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n >
          modello_2017b_levaRetro_acc_B.giocosx) {
        /* '<S229>:1:11' */
        /* '<S229>:1:12' */
        modello_2017b_levaRetro_acc_B.forcey =
          (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n - (real32_T)
           modello_2017b_levaRetro_acc_B.giocosx) * (real32_T)
          -modello_2017b_levaRetro_acc_B.stiffsx;
      } else {
        if (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n <
            modello_2017b_levaRetro_acc_B.giocodx) {
          /* '<S229>:1:13' */
          /* '<S229>:1:14' */
          modello_2017b_levaRetro_acc_B.forcey =
            (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n - (real32_T)
             modello_2017b_levaRetro_acc_B.giocodx) * (real32_T)
            -modello_2017b_levaRetro_acc_B.stiffdx;
        }
      }

      /* End of MATLAB Function: '<S227>/MATLAB Function' */

      /* Switch: '<S177>/Switch' incorporates:
       *  Constant: '<S177>/selection_x_neg'
       *  Constant: '<S177>/selection_x_pos'
       */
      if (modello_2017b_levaRetro_acc_B.up_down != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch_n =
          modello_2017b_levaRetro_acc_P.selection_x_pos;
      } else {
        modello_2017b_levaRetro_acc_B.Switch_n =
          modello_2017b_levaRetro_acc_P.selection_x_neg;
      }

      /* End of Switch: '<S177>/Switch' */

      /* Sum: '<S177>/Sum' */
      modello_2017b_levaRetro_acc_B.Sum =
        modello_2017b_levaRetro_acc_B.DataTypeConversion4_n -
        modello_2017b_levaRetro_acc_B.Switch_n;

      /* MATLAB Function: '<S177>/Force_connector' */
      /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/inside_gear_path/Force_connector': '<S226>:1' */
      if (fabs(modello_2017b_levaRetro_acc_B.Sum) < fabs
          (modello_2017b_levaRetro_acc_B.stable_point)) {
        /* '<S226>:1:3' */
        /* '<S226>:1:9' */
        /* '<S226>:1:10' */
        modello_2017b_levaRetro_acc_B.forcey_m =
          modello_2017b_levaRetro_acc_B.DataTypeConversion1_o1 -
          (modello_2017b_levaRetro_acc_B.DataTypeConversion1_o1 -
           modello_2017b_levaRetro_acc_B.forcey) / (real32_T)fabs
          (modello_2017b_levaRetro_acc_B.stable_point) * (real32_T)fabs
          (modello_2017b_levaRetro_acc_B.Sum);
      } else {
        /* '<S226>:1:13' */
        modello_2017b_levaRetro_acc_B.forcey_m =
          modello_2017b_levaRetro_acc_B.forcey;
      }

      /* End of MATLAB Function: '<S177>/Force_connector' */

      /* Memory: '<S228>/Memory' */
      modello_2017b_levaRetro_acc_B.Memory_m =
        modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_j;

      /* Sum: '<S228>/Sum1' incorporates:
       *  Constant: '<S228>/constant '
       */
      modello_2017b_levaRetro_acc_B.Sum1_f =
        modello_2017b_levaRetro_acc_B.statey -
        modello_2017b_levaRetro_acc_P.constant_Value_fd;

      /* Switch: '<S228>/Switch1' */
      if (modello_2017b_levaRetro_acc_B.Sum1_f != 0.0) {
        modello_2017b_levaRetro_acc_B.Switch1 =
          modello_2017b_levaRetro_acc_B.Memory_m;
      } else {
        modello_2017b_levaRetro_acc_B.Switch1 =
          modello_2017b_levaRetro_acc_B.forcey_m;
      }

      /* End of Switch: '<S228>/Switch1' */
      srUpdateBC(modello_2017b_levaRetro_acc_DW.inside_gear_path_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S89>/inside_gear_path' */

    /* MATLAB Function: '<S89>/muro_marcia_dx' */
    /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/muro_marcia_dx': '<S178>:1' */
    if (!modello_2017b_levaRetro_acc_DW.last_state_not_empty_p) {
      /* '<S178>:1:5' */
      /* '<S178>:1:6' */
      modello_2017b_levaRetro_acc_DW.last_state_j =
        modello_2017b_levaRetro_acc_B.statey;
      modello_2017b_levaRetro_acc_DW.last_state_not_empty_p = true;
    }

    if ((modello_2017b_levaRetro_acc_DW.last_state_j == 3.0F) &&
        (modello_2017b_levaRetro_acc_B.statey == 1.0F)) {
      /* '<S178>:1:9' */
      /* '<S178>:1:12' */
      modello_2017b_levaRetro_acc_B.force_d =
        (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n - (real32_T)
         modello_2017b_levaRetro_acc_B.muro_dx) * (real32_T)
        -modello_2017b_levaRetro_acc_B.stiffdx_k +
        modello_2017b_levaRetro_acc_B.Memory_g;

      /* '<S178>:1:13' */
      modello_2017b_levaRetro_acc_DW.last_state_j = 3.0F;
    } else if ((modello_2017b_levaRetro_acc_DW.last_state_j == 4.0F) &&
               (modello_2017b_levaRetro_acc_B.statey == 1.0F)) {
      /* '<S178>:1:14' */
      /* '<S178>:1:17' */
      modello_2017b_levaRetro_acc_B.force_d =
        (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n - (real32_T)
         modello_2017b_levaRetro_acc_B.muro_dx) * (real32_T)
        -modello_2017b_levaRetro_acc_B.stiffdx_k + (real32_T)
        modello_2017b_levaRetro_acc_B.Memory_m;

      /* '<S178>:1:18' */
      modello_2017b_levaRetro_acc_DW.last_state_j = 4.0F;
    } else {
      /* '<S178>:1:20' */
      modello_2017b_levaRetro_acc_DW.last_state_j =
        modello_2017b_levaRetro_acc_B.statey;

      /* '<S178>:1:21' */
      modello_2017b_levaRetro_acc_B.force_d = 0.0F;
    }

    /* End of MATLAB Function: '<S89>/muro_marcia_dx' */

    /* MATLAB Function: '<S89>/muro_marcia_sx' */
    /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/muro_marcia_sx': '<S179>:1' */
    if (!modello_2017b_levaRetro_acc_DW.last_state_not_empty) {
      /* '<S179>:1:5' */
      /* '<S179>:1:6' */
      modello_2017b_levaRetro_acc_DW.last_state =
        modello_2017b_levaRetro_acc_B.statey;
      modello_2017b_levaRetro_acc_DW.last_state_not_empty = true;
    }

    if ((modello_2017b_levaRetro_acc_DW.last_state == 3.0F) &&
        (modello_2017b_levaRetro_acc_B.statey == 2.0F)) {
      /* '<S179>:1:9' */
      /* '<S179>:1:12' */
      modello_2017b_levaRetro_acc_B.force =
        (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n - (real32_T)
         modello_2017b_levaRetro_acc_B.muro_sx) * (real32_T)
        -modello_2017b_levaRetro_acc_B.stiffsx_e +
        modello_2017b_levaRetro_acc_B.Memory_g;

      /* '<S179>:1:13' */
      modello_2017b_levaRetro_acc_DW.last_state = 3.0F;
    } else if ((modello_2017b_levaRetro_acc_DW.last_state == 4.0F) &&
               (modello_2017b_levaRetro_acc_B.statey == 2.0F)) {
      /* '<S179>:1:14' */
      /* '<S179>:1:17' */
      modello_2017b_levaRetro_acc_B.force =
        (modello_2017b_levaRetro_acc_B.DataTypeConversion5_n - (real32_T)
         modello_2017b_levaRetro_acc_B.muro_sx) * (real32_T)
        -modello_2017b_levaRetro_acc_B.stiffsx_e + (real32_T)
        modello_2017b_levaRetro_acc_B.Memory_m;

      /* '<S179>:1:18' */
      modello_2017b_levaRetro_acc_DW.last_state = 4.0F;
    } else {
      /* '<S179>:1:20' */
      modello_2017b_levaRetro_acc_DW.last_state =
        modello_2017b_levaRetro_acc_B.statey;

      /* '<S179>:1:21' */
      modello_2017b_levaRetro_acc_B.force = 0.0F;
    }

    /* End of MATLAB Function: '<S89>/muro_marcia_sx' */

    /* MultiPortSwitch: '<S89>/state_y2' incorporates:
     *  Constant: '<S89>/zero1'
     */
    switch ((int32_T)modello_2017b_levaRetro_acc_B.statey) {
     case 1:
      modello_2017b_levaRetro_acc_B.state_y2 =
        modello_2017b_levaRetro_acc_B.force_d;
      break;

     case 2:
      modello_2017b_levaRetro_acc_B.state_y2 =
        modello_2017b_levaRetro_acc_B.force;
      break;

     case 3:
      modello_2017b_levaRetro_acc_B.state_y2 =
        modello_2017b_levaRetro_acc_B.DataTypeConversion1_o1;
      break;

     case 4:
      modello_2017b_levaRetro_acc_B.state_y2 =
        modello_2017b_levaRetro_acc_B.forcey_m;
      break;

     default:
      modello_2017b_levaRetro_acc_B.state_y2 =
        modello_2017b_levaRetro_acc_P.zero1_Value_ja;
      break;
    }

    /* End of MultiPortSwitch: '<S89>/state_y2' */

    /* DataTypeConversion: '<S89>/Data Type Conversion' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion_f0 = (real32_T)
      modello_2017b_levaRetro_acc_B.state_y2;

    /* Gain: '<S89>/scala_forza' */
    modello_2017b_levaRetro_acc_B.scala_forza_k =
      modello_2017b_levaRetro_acc_P.gain_forces *
      modello_2017b_levaRetro_acc_B.DataTypeConversion_f0;

    /* MATLAB Function: '<S26>/MATLAB Function2' incorporates:
     *  Constant: '<Root>/received_data'
     */
    /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/MATLAB Function2': '<S85>:1' */
    if (modello_2017b_levaRetro_acc_B.Memory9 == 1.0F) {
      /* '<S85>:1:4' */
      /* '<S85>:1:5' */
      modello_2017b_levaRetro_acc_B.f =
        modello_2017b_levaRetro_acc_P.received_data_Value[0] *
        modello_2017b_levaRetro_acc_B.scala_forza_k +
        modello_2017b_levaRetro_acc_P.received_data_Value[1] *
        modello_2017b_levaRetro_acc_B.ManualSwitch1;
    } else {
      /* '<S85>:1:7' */
      modello_2017b_levaRetro_acc_B.f = 0.0F;
    }

    /* End of MATLAB Function: '<S26>/MATLAB Function2' */

    /* DataTypeConversion: '<S26>/Data Type Conversion1' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion1_am =
      modello_2017b_levaRetro_acc_B.f;

    /* Gain: '<Root>/Gain3' */
    modello_2017b_levaRetro_acc_B.Gain3 =
      modello_2017b_levaRetro_acc_P.Gain3_Gain *
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_am;

    /* Outport: '<Root>/force_y' */
    modello_2017b_levaRetro_acc_Y.force_y = modello_2017b_levaRetro_acc_B.Gain3;

    /* S-Function (scblock): '<S16>/S-Function' */
    /* ok to acquire for <S16>/S-Function */
    modello_2017b_levaRetro_acc_DW.SFunction_IWORK.AcquireOK = 1;

    /* S-Function (scblock): '<S17>/S-Function' */
    /* ok to acquire for <S17>/S-Function */
    modello_2017b_levaRetro_acc_DW.SFunction_IWORK_e.AcquireOK = 1;

    /* S-Function (scblock): '<S18>/S-Function' */
    /* ok to acquire for <S18>/S-Function */
    modello_2017b_levaRetro_acc_DW.SFunction_IWORK_d.AcquireOK = 1;

    /* DataTypeConversion: '<Root>/Data Type Conversion34' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion34 =
      modello_2017b_levaRetro_acc_B.DataTypeConversion_kx;

    /* S-Function (any2byte): '<Root>/Byte Pack1' */

    /* Pack: <Root>/Byte Pack1 */
    (void) memcpy(&modello_2017b_levaRetro_acc_B.BytePack1[0],
                  &modello_2017b_levaRetro_acc_B.DataTypeConversion34,
                  4);

    /* Constant: '<Root>/zero force4' */
    modello_2017b_levaRetro_acc_B.zeroforce4 =
      modello_2017b_levaRetro_acc_P.zeroforce4_Value;

    /* RateTransition: '<Root>/Rate Transition' */
    if (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[3] == 0) {
      modello_2017b_levaRetro_acc_B.RateTransition[0] =
        modello_2017b_levaRetro_acc_B.BytePack1[0];
      modello_2017b_levaRetro_acc_B.RateTransition[1] =
        modello_2017b_levaRetro_acc_B.BytePack1[1];
      modello_2017b_levaRetro_acc_B.RateTransition[2] =
        modello_2017b_levaRetro_acc_B.BytePack1[2];
      modello_2017b_levaRetro_acc_B.RateTransition[3] =
        modello_2017b_levaRetro_acc_B.BytePack1[3];

      /* S-Function (slrtUDPSend): '<Root>/UDP Send1' */

      /* Level2 S-Function Block: '<Root>/UDP Send1' (slrtUDPSend) */
      {
        SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[15];
        sfcnOutputs(rts,3);
      }
    }

    /* End of RateTransition: '<Root>/Rate Transition' */

    /* DataTypeConversion: '<Root>/Data Type Conversion35' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion35 =
      modello_2017b_levaRetro_acc_B.DataTypeConversion4_n;

    /* DataTypeConversion: '<Root>/Data Type Conversion36' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion36 =
      modello_2017b_levaRetro_acc_B.DataTypeConversion5_n;

    /* ManualSwitch: '<Root>/Manual Switch9' incorporates:
     *  Constant: '<Root>/fx_offset9'
     */
    if (modello_2017b_levaRetro_acc_P.ManualSwitch9_CurrentSetting == 1) {
      modello_2017b_levaRetro_acc_B.ManualSwitch9 =
        modello_2017b_levaRetro_acc_B.Gain4;
    } else {
      modello_2017b_levaRetro_acc_B.ManualSwitch9 =
        modello_2017b_levaRetro_acc_P.fx_offset9_Value;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch9' */

    /* DataTypeConversion: '<Root>/Data Type Conversion42' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion42 = (real32_T)
      modello_2017b_levaRetro_acc_B.ManualSwitch9;

    /* ManualSwitch: '<Root>/Manual Switch10' incorporates:
     *  Constant: '<Root>/fx_offset10'
     */
    if (modello_2017b_levaRetro_acc_P.ManualSwitch10_CurrentSetting == 1) {
      modello_2017b_levaRetro_acc_B.ManualSwitch10 =
        modello_2017b_levaRetro_acc_B.Gain3;
    } else {
      modello_2017b_levaRetro_acc_B.ManualSwitch10 =
        modello_2017b_levaRetro_acc_P.fx_offset10_Value;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch10' */

    /* DataTypeConversion: '<Root>/Data Type Conversion41' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion41 = (real32_T)
      modello_2017b_levaRetro_acc_B.ManualSwitch10;

    /* DataTypeConversion: '<Root>/Data Type Conversion43' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion43 =
      modello_2017b_levaRetro_acc_B.DataTypeConversion_kx;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtByte Pack2Inport1' */
    modello_2017b_levaRetro_acc_B.TmpSignalConversionAtBytePack2I[0] =
      modello_2017b_levaRetro_acc_B.DataTypeConversion35;
    modello_2017b_levaRetro_acc_B.TmpSignalConversionAtBytePack2I[1] =
      modello_2017b_levaRetro_acc_B.DataTypeConversion36;
    modello_2017b_levaRetro_acc_B.TmpSignalConversionAtBytePack2I[2] =
      modello_2017b_levaRetro_acc_B.DataTypeConversion42;
    modello_2017b_levaRetro_acc_B.TmpSignalConversionAtBytePack2I[3] =
      modello_2017b_levaRetro_acc_B.DataTypeConversion41;
    modello_2017b_levaRetro_acc_B.TmpSignalConversionAtBytePack2I[4] =
      modello_2017b_levaRetro_acc_B.DataTypeConversion43;

    /* S-Function (any2byte): '<Root>/Byte Pack2' */

    /* Pack: <Root>/Byte Pack2 */
    (void) memcpy(&modello_2017b_levaRetro_acc_B.BytePack2[0],
                  &modello_2017b_levaRetro_acc_B.TmpSignalConversionAtBytePack2I[
                  0],
                  20);

    /* Constant: '<Root>/zero force5' */
    modello_2017b_levaRetro_acc_B.zeroforce5 =
      modello_2017b_levaRetro_acc_P.zeroforce5_Value;

    /* RateTransition: '<Root>/Rate Transition1' */
    if (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[2] == 0) {
      for (on_orig_curve = 0; on_orig_curve < 20; on_orig_curve++) {
        modello_2017b_levaRetro_acc_B.RateTransition1[on_orig_curve] =
          modello_2017b_levaRetro_acc_B.BytePack2[on_orig_curve];
      }

      /* S-Function (slrtUDPSend): '<Root>/UDP Send2' */

      /* Level2 S-Function Block: '<Root>/UDP Send2' (slrtUDPSend) */
      {
        SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[16];
        sfcnOutputs(rts,2);
      }
    }

    /* End of RateTransition: '<Root>/Rate Transition1' */

    /* Gain: '<S29>/change_sign4' */
    modello_2017b_levaRetro_acc_B.change_sign4_p =
      modello_2017b_levaRetro_acc_P.change_sign4_Gain_j *
      modello_2017b_levaRetro_acc_B.enc_raw_to_rad1;

    /* Gain: '<S29>/change_sign5' */
    modello_2017b_levaRetro_acc_B.change_sign5_a =
      modello_2017b_levaRetro_acc_P.change_sign5_Gain_l *
      modello_2017b_levaRetro_acc_B.enc_raw_to_rad1_p;

    /* Sum: '<Root>/Sum7' incorporates:
     *  Constant: '<Root>/fx_offset'
     */
    modello_2017b_levaRetro_acc_B.Sum7 =
      modello_2017b_levaRetro_acc_B.ManualSwitch9 -
      modello_2017b_levaRetro_acc_P.fx_offset_Value;

    /* Gain: '<Root>/b7' */
    modello_2017b_levaRetro_acc_B.b7 = modello_2017b_levaRetro_acc_P.b7_Gain *
      modello_2017b_levaRetro_acc_B.Sum7;

    /* MATLAB Function: '<Root>/MATLAB Function2' incorporates:
     *  Constant: '<Root>/fx_offset1'
     *  Constant: '<Root>/fx_offset2'
     *  Constant: '<Root>/fx_offset3'
     *  Constant: '<Root>/fx_offset4'
     */
    /* MATLAB Function 'MATLAB Function2': '<S11>:1' */
    /* '<S11>:1:3' */
    modello_2017b_levaRetro_acc_B.y_e = 0.0;
    if ((!rtIsInfF(modello_2017b_levaRetro_acc_B.DataTypeConversion_kx)) &&
        (!rtIsNaNF(modello_2017b_levaRetro_acc_B.DataTypeConversion_kx))) {
      if (modello_2017b_levaRetro_acc_B.DataTypeConversion_kx == 0.0F) {
        r = 0.0F;
      } else {
        r = (real32_T)fmod(modello_2017b_levaRetro_acc_B.DataTypeConversion_kx,
                           2.0);
        if (r == 0.0F) {
          r = 0.0F;
        } else {
          if (modello_2017b_levaRetro_acc_B.DataTypeConversion_kx < 0.0F) {
            r += 2.0F;
          }
        }
      }
    } else {
      r = (rtNaNF);
    }

    if (r == 1.0F) {
      /* '<S11>:1:5' */
      if (modello_2017b_levaRetro_acc_B.statex_g == 1.0F) {
        /* '<S11>:1:6' */
        /* '<S11>:1:7' */
        modello_2017b_levaRetro_acc_B.y_e =
          modello_2017b_levaRetro_acc_P.fx_offset1_Value;
      } else {
        if (modello_2017b_levaRetro_acc_B.statex_g == 2.0F) {
          /* '<S11>:1:9' */
          /* '<S11>:1:10' */
          modello_2017b_levaRetro_acc_B.y_e =
            modello_2017b_levaRetro_acc_P.fx_offset2_Value;
        }
      }
    } else if (modello_2017b_levaRetro_acc_B.statex_g == 1.0F) {
      /* '<S11>:1:14' */
      /* '<S11>:1:15' */
      modello_2017b_levaRetro_acc_B.y_e =
        modello_2017b_levaRetro_acc_P.fx_offset3_Value;
    } else {
      if (modello_2017b_levaRetro_acc_B.statex_g == 2.0F) {
        /* '<S11>:1:17' */
        /* '<S11>:1:18' */
        modello_2017b_levaRetro_acc_B.y_e =
          modello_2017b_levaRetro_acc_P.fx_offset4_Value;
      }
    }

    /* End of MATLAB Function: '<Root>/MATLAB Function2' */

    /* Gain: '<Root>/b9' */
    modello_2017b_levaRetro_acc_B.b9 = modello_2017b_levaRetro_acc_P.b9_Gain *
      modello_2017b_levaRetro_acc_B.y_e;

    /* Sum: '<Root>/Sum11' */
    modello_2017b_levaRetro_acc_B.Sum11 = modello_2017b_levaRetro_acc_B.b7 -
      modello_2017b_levaRetro_acc_B.b9;

    /* Sum: '<Root>/Sum8' incorporates:
     *  Constant: '<Root>/fy_offset'
     */
    modello_2017b_levaRetro_acc_B.Sum8 =
      modello_2017b_levaRetro_acc_B.ManualSwitch10 -
      modello_2017b_levaRetro_acc_P.fy_offset_Value;

    /* Gain: '<Root>/b8' */
    modello_2017b_levaRetro_acc_B.b8 = modello_2017b_levaRetro_acc_P.b8_Gain *
      modello_2017b_levaRetro_acc_B.Sum8;

    /* MATLAB Function: '<Root>/MATLAB Function3' incorporates:
     *  Constant: '<Root>/fx_offset5'
     *  Constant: '<Root>/fx_offset6'
     *  Constant: '<Root>/fx_offset7'
     *  Constant: '<Root>/fx_offset8'
     */
    /* MATLAB Function 'MATLAB Function3': '<S12>:1' */
    /* '<S12>:1:3' */
    modello_2017b_levaRetro_acc_B.y = 0.0;
    if (modello_2017b_levaRetro_acc_B.DataTypeConversion_kx == 8.0F) {
      /* '<S12>:1:5' */
      if (modello_2017b_levaRetro_acc_B.curve_f == 1.0) {
        /* '<S12>:1:6' */
        /* '<S12>:1:7' */
        modello_2017b_levaRetro_acc_B.y =
          modello_2017b_levaRetro_acc_P.fx_offset5_Value;
      } else if (modello_2017b_levaRetro_acc_B.curve_f == 2.0) {
        /* '<S12>:1:9' */
        /* '<S12>:1:10' */
        modello_2017b_levaRetro_acc_B.y =
          modello_2017b_levaRetro_acc_P.fx_offset6_Value;
      } else if (modello_2017b_levaRetro_acc_B.curve_f == 3.0) {
        /* '<S12>:1:12' */
        /* '<S12>:1:13' */
        modello_2017b_levaRetro_acc_B.y =
          modello_2017b_levaRetro_acc_P.fx_offset7_Value;
      } else {
        if (modello_2017b_levaRetro_acc_B.curve_f == 4.0) {
          /* '<S12>:1:15' */
          /* '<S12>:1:16' */
          modello_2017b_levaRetro_acc_B.y =
            modello_2017b_levaRetro_acc_P.fx_offset8_Value;
        }
      }
    }

    /* End of MATLAB Function: '<Root>/MATLAB Function3' */

    /* Gain: '<Root>/b10' */
    modello_2017b_levaRetro_acc_B.b10 = modello_2017b_levaRetro_acc_P.b10_Gain *
      modello_2017b_levaRetro_acc_B.y;

    /* Sum: '<Root>/Sum12' */
    modello_2017b_levaRetro_acc_B.Sum12 = modello_2017b_levaRetro_acc_B.b8 -
      modello_2017b_levaRetro_acc_B.b10;

    /* MATLAB Function: '<S29>/MATLAB Function' incorporates:
     *  Constant: '<S1>/lever_length_without_knob1'
     */
    /* MATLAB Function 'Actuation/Kinematics/MATLAB Function': '<S30>:1' */
    /* '<S30>:1:84' */
    /* '<S30>:1:79' */
    /* '<S30>:1:49' */
    /* '<S30>:1:44' */
    /* '<S30>:1:29' */
    s1 = sin(modello_2017b_levaRetro_acc_B.change_sign4_p);

    /* '<S30>:1:30' */
    s2 = sin(modello_2017b_levaRetro_acc_B.change_sign5_a);

    /* '<S30>:1:31' */
    c1 = cos(modello_2017b_levaRetro_acc_B.change_sign4_p);

    /* '<S30>:1:32' */
    c2 = cos(modello_2017b_levaRetro_acc_B.change_sign5_a);

    /* '<S30>:1:37' */
    z22[0] = -c2;
    z22[1] = 0.0;
    z22[2] = s2;

    /* '<S30>:1:38' */
    h = sqrt((c1 * c1 + c2 * c2) - c1 * c1 * (c2 * c2));

    /* '<S30>:1:39' */
    b_gamma = 1.0 / h;
    z31[0] = -c1 * s2 * b_gamma;
    z31[1] = s1 * c2 * b_gamma;
    z31[2] = -c1 * c2 * b_gamma;

    /* '<S30>:1:41' */
    /* '<S30>:1:44' */
    /* '<S30>:1:47' */
    b_gamma = s1 * s1 * (c2 * c2) + c1 * c1;

    /* '<S30>:1:48' */
    /* '<S30>:1:52' */
    r = modello_2017b_levaRetro_acc_P.lever_length / (real32_T)h;

    /* '<S30>:1:66' */
    P[0] = -(r * 0.0F);
    P[3] = -((real32_T)(c1 * c2) * r);
    P[6] = -((real32_T)(s1 * c2) * r);
    P[1] = -((real32_T)(-c1 * c2) * r);
    P[4] = -(r * 0.0F);
    P[7] = -((real32_T)(c1 * s2) * r);
    P[2] = -((real32_T)(-s1 * c2) * r);
    P[5] = -((real32_T)(-c1 * s2) * r);
    P[8] = -(r * 0.0F);
    P_1[0] = (real32_T)(c2 * c2 / b_gamma);
    P_1[3] = (real32_T)(-(c1 * c1) * c2 * s1 * s2 / b_gamma);
    P_1[1] = 0.0F;
    P_1[4] = 1.0F;
    P_1[2] = (real32_T)(-c2 * s2 / b_gamma);
    P_1[5] = (real32_T)(c1 * c1 * s1 * (s2 * s2) / b_gamma);

    /* '<S30>:1:77' */
    /* '<S30>:1:78' */
    /* '<S30>:1:79' */
    z22_0[1] = 0.0 * z31[2] - z22[2] * z31[1];
    z22_0[4] = z22[2] * z31[0] - z22[0] * z31[2];
    z22_0[7] = z22[0] * z31[1] - 0.0 * z31[0];
    for (on_orig_curve = 0; on_orig_curve < 3; on_orig_curve++) {
      z22_0[3 * on_orig_curve] = z22[on_orig_curve];
      z22_0[2 + 3 * on_orig_curve] = z31[on_orig_curve];
      for (i = 0; i < 2; i++) {
        J[on_orig_curve + 3 * i] = 0.0F;
        t = J[3 * i + on_orig_curve];
        t += P_1[3 * i] * P[on_orig_curve];
        J[on_orig_curve + 3 * i] = t;
        t = J[3 * i + on_orig_curve];
        t += P_1[3 * i + 1] * P[on_orig_curve + 3];
        J[on_orig_curve + 3 * i] = t;
        t = J[3 * i + on_orig_curve];
        t += P_1[3 * i + 2] * P[on_orig_curve + 6];
        J[on_orig_curve + 3 * i] = t;
        T[i + (on_orig_curve << 1)] = z22_0[3 * on_orig_curve + i];
      }
    }

    /* '<S30>:1:81' */
    for (on_orig_curve = 0; on_orig_curve < 2; on_orig_curve++) {
      for (i = 0; i < 2; i++) {
        c_y[i + (on_orig_curve << 1)] = 0.0F;
        t = c_y[(on_orig_curve << 1) + i];
        t += J[3 * on_orig_curve] * (real32_T)T[i];
        c_y[i + (on_orig_curve << 1)] = t;
        t = c_y[(on_orig_curve << 1) + i];
        t += J[3 * on_orig_curve + 1] * (real32_T)T[i + 2];
        c_y[i + (on_orig_curve << 1)] = t;
        t = c_y[(on_orig_curve << 1) + i];
        t += J[3 * on_orig_curve + 2] * (real32_T)T[i + 4];
        c_y[i + (on_orig_curve << 1)] = t;
      }
    }

    if ((real32_T)fabs(c_y[1]) > (real32_T)fabs(c_y[0])) {
      r = c_y[0] / c_y[1];
      t = 1.0F / (r * c_y[3] - c_y[2]);
      d_y_idx_0 = c_y[3] / c_y[1] * t;
      d_y_idx_1 = -t;
      d_y_idx_2 = -c_y[2] / c_y[1] * t;
      t *= r;
    } else {
      r = c_y[1] / c_y[0];
      t = 1.0F / (c_y[3] - r * c_y[2]);
      d_y_idx_0 = c_y[3] / c_y[0] * t;
      d_y_idx_1 = -r * t;
      d_y_idx_2 = -c_y[2] / c_y[0] * t;
    }

    for (on_orig_curve = 0; on_orig_curve < 3; on_orig_curve++) {
      J_i[on_orig_curve << 1] = 0.0F;
      r = J_i[on_orig_curve << 1];
      r += (real32_T)T[on_orig_curve << 1] * d_y_idx_0;
      J_i[on_orig_curve << 1] = r;
      r = J_i[on_orig_curve << 1];
      r += (real32_T)T[(on_orig_curve << 1) + 1] * d_y_idx_2;
      J_i[on_orig_curve << 1] = r;
      J_i[1 + (on_orig_curve << 1)] = 0.0F;
      r = J_i[(on_orig_curve << 1) + 1];
      r += (real32_T)T[on_orig_curve << 1] * d_y_idx_1;
      J_i[1 + (on_orig_curve << 1)] = r;
      r = J_i[(on_orig_curve << 1) + 1];
      r += (real32_T)T[(on_orig_curve << 1) + 1] * t;
      J_i[1 + (on_orig_curve << 1)] = r;
    }

    /* '<S30>:1:84' */
    /* '<S30>:1:86' */
    for (on_orig_curve = 0; on_orig_curve < 3; on_orig_curve++) {
      modello_2017b_levaRetro_acc_B.p_ref_i[on_orig_curve] = 0.0F;
      modello_2017b_levaRetro_acc_B.p_ref_i[on_orig_curve] +=
        modello_2017b_levaRetro_acc_P.lever_length * (real32_T)z31[0] *
        (real32_T)b_0[on_orig_curve];
      modello_2017b_levaRetro_acc_B.p_ref_i[on_orig_curve] += (real32_T)
        b_0[on_orig_curve + 3] * (modello_2017b_levaRetro_acc_P.lever_length *
        (real32_T)z31[1]);
      modello_2017b_levaRetro_acc_B.p_ref_i[on_orig_curve] += (real32_T)
        b_0[on_orig_curve + 6] * (modello_2017b_levaRetro_acc_P.lever_length *
        (real32_T)z31[2]);
    }

    for (on_orig_curve = 0; on_orig_curve < 3; on_orig_curve++) {
      P_1[on_orig_curve] = 0.0F;
      r = P_1[on_orig_curve];
      r += J_i[on_orig_curve << 1];
      P_1[on_orig_curve] = r;
      r = P_1[on_orig_curve];
      r += J_i[(on_orig_curve << 1) + 1] * 0.0F;
      P_1[on_orig_curve] = r;
      P_1[on_orig_curve + 3] = 0.0F;
      r = P_1[on_orig_curve + 3];
      r += J_i[on_orig_curve << 1] * 0.0F;
      P_1[on_orig_curve + 3] = r;
      r = P_1[on_orig_curve + 3];
      r += J_i[(on_orig_curve << 1) + 1];
      P_1[on_orig_curve + 3] = r;
      for (i = 0; i < 3; i++) {
        P[on_orig_curve + 3 * i] = 0.0F;
        r = P[3 * i + on_orig_curve];
        r += J_i[i << 1] * P_1[on_orig_curve];
        P[on_orig_curve + 3 * i] = r;
        r = P[3 * i + on_orig_curve];
        r += J_i[(i << 1) + 1] * P_1[on_orig_curve + 3];
        P[on_orig_curve + 3 * i] = r;
      }
    }

    for (on_orig_curve = 0; on_orig_curve < 3; on_orig_curve++) {
      for (i = 0; i < 3; i++) {
        P_0[i + 3 * on_orig_curve] = 0.0F;
        t = P_0[3 * on_orig_curve + i];
        t += P[3 * on_orig_curve] * (real32_T)c_0[i];
        P_0[i + 3 * on_orig_curve] = t;
        t = P_0[3 * on_orig_curve + i];
        t += P[3 * on_orig_curve + 1] * (real32_T)c_0[i + 3];
        P_0[i + 3 * on_orig_curve] = t;
        t = P_0[3 * on_orig_curve + i];
        t += P[3 * on_orig_curve + 2] * (real32_T)c_0[i + 6];
        P_0[i + 3 * on_orig_curve] = t;
      }
    }

    for (on_orig_curve = 0; on_orig_curve < 3; on_orig_curve++) {
      for (i = 0; i < 3; i++) {
        modello_2017b_levaRetro_acc_B.M_p[i + 3 * on_orig_curve] = 0.0F;
        modello_2017b_levaRetro_acc_B.M_p[i + 3 * on_orig_curve] += (real32_T)
          b_0[3 * on_orig_curve] * P_0[i];
        modello_2017b_levaRetro_acc_B.M_p[i + 3 * on_orig_curve] += (real32_T)
          b_0[3 * on_orig_curve + 1] * P_0[i + 3];
        modello_2017b_levaRetro_acc_B.M_p[i + 3 * on_orig_curve] += (real32_T)
          b_0[3 * on_orig_curve + 2] * P_0[i + 6];
      }
    }

    P_2[0] = (real32_T)modello_2017b_levaRetro_acc_B.Sum11;
    P_2[1] = (real32_T)modello_2017b_levaRetro_acc_B.Sum12;
    P_2[2] = 0.0F;
    for (on_orig_curve = 0; on_orig_curve < 2; on_orig_curve++) {
      modello_2017b_levaRetro_acc_B.tau[on_orig_curve] = 0.0F;
      for (i = 0; i < 3; i++) {
        J_i[on_orig_curve + (i << 1)] = 0.0F;
        t = J_i[(i << 1) + on_orig_curve];
        t += J[3 * on_orig_curve] * (real32_T)c_0[3 * i];
        J_i[on_orig_curve + (i << 1)] = t;
        t = J_i[(i << 1) + on_orig_curve];
        t += J[3 * on_orig_curve + 1] * (real32_T)c_0[3 * i + 1];
        J_i[on_orig_curve + (i << 1)] = t;
        t = J_i[(i << 1) + on_orig_curve];
        t += J[3 * on_orig_curve + 2] * (real32_T)c_0[3 * i + 2];
        J_i[on_orig_curve + (i << 1)] = t;
        modello_2017b_levaRetro_acc_B.tau[on_orig_curve] += J_i[(i << 1) +
          on_orig_curve] * P_2[i];
      }
    }

    /* End of MATLAB Function: '<S29>/MATLAB Function' */

    /* Gain: '<S1>/gain' */
    modello_2017b_levaRetro_acc_B.gain = modello_2017b_levaRetro_acc_P.gain_Gain
      * modello_2017b_levaRetro_acc_B.tau[0];

    /* Saturate: '<S1>/Saturation' */
    t = modello_2017b_levaRetro_acc_B.gain;
    d_y_idx_0 = modello_2017b_levaRetro_acc_P.Saturation_LowerSat;
    d_y_idx_1 = modello_2017b_levaRetro_acc_P.Saturation_UpperSat;
    if (t > d_y_idx_1) {
      modello_2017b_levaRetro_acc_B.Saturation = d_y_idx_1;
    } else if (t < d_y_idx_0) {
      modello_2017b_levaRetro_acc_B.Saturation = d_y_idx_0;
    } else {
      modello_2017b_levaRetro_acc_B.Saturation = t;
    }

    /* End of Saturate: '<S1>/Saturation' */

    /* Gain: '<S1>/gain1' */
    modello_2017b_levaRetro_acc_B.gain1_i =
      modello_2017b_levaRetro_acc_P.gain1_Gain_a *
      modello_2017b_levaRetro_acc_B.tau[1];

    /* Saturate: '<S1>/Saturation1' */
    t = modello_2017b_levaRetro_acc_B.gain1_i;
    d_y_idx_0 = modello_2017b_levaRetro_acc_P.Saturation1_LowerSat;
    d_y_idx_1 = modello_2017b_levaRetro_acc_P.Saturation1_UpperSat;
    if (t > d_y_idx_1) {
      modello_2017b_levaRetro_acc_B.Saturation1 = d_y_idx_1;
    } else if (t < d_y_idx_0) {
      modello_2017b_levaRetro_acc_B.Saturation1 = d_y_idx_0;
    } else {
      modello_2017b_levaRetro_acc_B.Saturation1 = t;
    }

    /* End of Saturate: '<S1>/Saturation1' */

    /* Constant: '<Root>/start_signal' */
    modello_2017b_levaRetro_acc_B.start_signal =
      modello_2017b_levaRetro_acc_P.start_signal_Value;

    /* DigitalClock: '<Root>/Digital Clock' */
    modello_2017b_levaRetro_acc_B.DigitalClock =
      modello_2017b_levaRetro_acc_M->Timing.t[0];

    /* Gain: '<Root>/Gain2' */
    modello_2017b_levaRetro_acc_B.Gain2 = (real_T)
      modello_2017b_levaRetro_acc_P.Gain2_Gain_l *
      modello_2017b_levaRetro_acc_B.DigitalClock;

    /* Chart: '<Root>/Chart' */
    /* Gateway: Chart */
    modello_2017b_levaRetro_acc_DW.sfEvent_b = -1;

    /* During: Chart */
    if (modello_2017b_levaRetro_acc_DW.is_active_c27_modello_2017b_lev == 0U) {
      /* Entry: Chart */
      modello_2017b_levaRetro_acc_DW.is_active_c27_modello_2017b_lev = 1U;

      /* Entry Internal: Chart */
      /* Transition: '<S3>:10' */
      modello_2017b_levaRetro_acc_B.x_axis_reset = 0.0;
      modello_2017b_levaRetro_acc_B.y_axis_reset = 0.0;
      modello_2017b_levaRetro_acc_B.enable_drives = 0.0;
      modello_2017b_levaRetro_acc_B.enable_forces = 0.0;
      modello_2017b_levaRetro_acc_B.enable_ethercat = 0.0;
      modello_2017b_levaRetro_acc_DW.is_c27_modello_2017b_levaRetro_ =
        modello_2017b_levaRetro_IN_IDLE;
    } else {
      switch (modello_2017b_levaRetro_acc_DW.is_c27_modello_2017b_levaRetro_) {
       case modello_2017_IN_ACTIVATE_DRIVES:
        /* During 'ACTIVATE_DRIVES': '<S3>:20' */
        sf_internal_predicateOutput =
          (modello_2017b_levaRetro_acc_B.DataTypeConversion2_b == 1.0F);
        if (sf_internal_predicateOutput) {
          /* Transition: '<S3>:23' */
          modello_2017b_levaRetro_acc_DW.is_c27_modello_2017b_levaRetro_ =
            modello_2017b__IN_DRIVES_ACTIVE;

          /* Entry 'DRIVES_ACTIVE': '<S3>:22' */
          modello_2017b_levaRetro_acc_B.enable_forces = 1.0;
        }
        break;

       case modello_2017b__IN_DRIVES_ACTIVE:
        /* During 'DRIVES_ACTIVE': '<S3>:22' */
        if (modello_2017b_levaRetro_acc_B.start_signal == 0.0F) {
          /* Transition: '<S3>:25' */
          modello_2017b_levaRetro_acc_DW.is_c27_modello_2017b_levaRetro_ =
            modello_20_IN_SWITCH_OFF_DRIVES;

          /* Entry 'SWITCH_OFF_DRIVES': '<S3>:24' */
          modello_2017b_levaRetro_acc_B.enable_forces = 0.0;
          modello_2017b_levaRetro_acc_B.enable_drives = 0.0;
        }
        break;

       case modello_201_IN_ETHERCAT_STARTED:
        /* During 'ETHERCAT_STARTED': '<S3>:16' */
        if (modello_2017b_levaRetro_acc_B.Gain2 -
            modello_2017b_levaRetro_acc_DW.timenow > 1000.0) {
          /* Transition: '<S3>:19' */
          modello_2017b_levaRetro_acc_DW.is_c27_modello_2017b_levaRetro_ =
            modello_2017b__IN_RESET_ENCODER;

          /* Entry 'RESET_ENCODER': '<S3>:18' */
          modello_2017b_levaRetro_acc_B.x_axis_reset = 0.0;
          modello_2017b_levaRetro_acc_B.y_axis_reset = 0.0;
          modello_2017b_levaRetro_acc_DW.timenow =
            modello_2017b_levaRetro_acc_B.Gain2;
        }
        break;

       case modello_2017b_levaRetro_IN_IDLE:
        /* During 'IDLE': '<S3>:9' */
        if (modello_2017b_levaRetro_acc_B.start_signal == 1.0F) {
          /* Transition: '<S3>:15' */
          modello_2017b_levaRetro_acc_DW.is_c27_modello_2017b_levaRetro_ =
            modello_2017b_IN_START_ETHERCAT;

          /* Entry 'START_ETHERCAT': '<S3>:11' */
          modello_2017b_levaRetro_acc_B.enable_ethercat = 1.0;
        }
        break;

       case modello_2017b__IN_RESET_ENCODER:
        /* During 'RESET_ENCODER': '<S3>:18' */
        if (modello_2017b_levaRetro_acc_B.Gain2 -
            modello_2017b_levaRetro_acc_DW.timenow > 1000.0) {
          /* Transition: '<S3>:21' */
          modello_2017b_levaRetro_acc_DW.is_c27_modello_2017b_levaRetro_ =
            modello_2017_IN_ACTIVATE_DRIVES;

          /* Entry 'ACTIVATE_DRIVES': '<S3>:20' */
          modello_2017b_levaRetro_acc_B.enable_drives = 1.0;
        }
        break;

       case modello_2017b_IN_START_ETHERCAT:
        /* During 'START_ETHERCAT': '<S3>:11' */
        if (modello_2017b_levaRetro_acc_B.DataTypeConversion_d3 == 1.0F) {
          /* Transition: '<S3>:17' */
          modello_2017b_levaRetro_acc_DW.is_c27_modello_2017b_levaRetro_ =
            modello_201_IN_ETHERCAT_STARTED;

          /* Entry 'ETHERCAT_STARTED': '<S3>:16' */
          modello_2017b_levaRetro_acc_B.x_axis_reset = 1.0;
          modello_2017b_levaRetro_acc_B.y_axis_reset = 1.0;
          modello_2017b_levaRetro_acc_DW.timenow =
            modello_2017b_levaRetro_acc_B.Gain2;
        }
        break;

       case modello_20_IN_SWITCH_OFF_DRIVES:
        /* During 'SWITCH_OFF_DRIVES': '<S3>:24' */
        sf_internal_predicateOutput =
          (modello_2017b_levaRetro_acc_B.DataTypeConversion2_b == 0.0F);
        if (sf_internal_predicateOutput) {
          /* Transition: '<S3>:27' */
          modello_2017b_levaRetro_acc_DW.is_c27_modello_2017b_levaRetro_ =
            modello_2017b_IN_SWITCH_OFF_ETH;

          /* Entry 'SWITCH_OFF_ETH': '<S3>:26' */
          modello_2017b_levaRetro_acc_B.enable_ethercat = 0.0;
        }
        break;

       default:
        /* During 'SWITCH_OFF_ETH': '<S3>:26' */
        if (modello_2017b_levaRetro_acc_B.DataTypeConversion_d3 == 0.0F) {
          /* Transition: '<S3>:28' */
          modello_2017b_levaRetro_acc_DW.is_c27_modello_2017b_levaRetro_ =
            modello_2017b_levaRetro_IN_IDLE;
        }
        break;
      }
    }

    /* End of Chart: '<Root>/Chart' */

    /* DataTypeConversion: '<Root>/Data Type Conversion' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion_l =
      modello_2017b_levaRetro_acc_B.DataTypeConversion_d3;

    /* DataTypeConversion: '<Root>/Data Type Conversion1' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion1 =
      modello_2017b_levaRetro_acc_B.statuswordmask;

    /* DataTypeConversion: '<Root>/Data Type Conversion10' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion10 =
      modello_2017b_levaRetro_acc_B.ManualSwitch9;

    /* DataTypeConversion: '<Root>/Data Type Conversion11' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion11 =
      modello_2017b_levaRetro_acc_B.ManualSwitch10;

    /* DataTypeConversion: '<Root>/Data Type Conversion12' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion12 =
      modello_2017b_levaRetro_acc_B.DataTypeConversion6_a;

    /* DataTypeConversion: '<Root>/Data Type Conversion13' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion13 =
      modello_2017b_levaRetro_acc_B.DataTypeConversion7_l;

    /* DataTypeConversion: '<Root>/Data Type Conversion17' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion17 = (real32_T)
      modello_2017b_levaRetro_acc_B.enable_ethercat;

    /* DataTypeConversion: '<Root>/Data Type Conversion18' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion18 = (real32_T)
      modello_2017b_levaRetro_acc_B.enable_forces;

    /* DataTypeConversion: '<Root>/Data Type Conversion19' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion19 = (real32_T)
      modello_2017b_levaRetro_acc_B.enable_drives;

    /* DataTypeConversion: '<Root>/Data Type Conversion2' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion2 =
      modello_2017b_levaRetro_acc_B.statuswordmask_e;

    /* DataTypeConversion: '<Root>/Data Type Conversion3' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion3 =
      modello_2017b_levaRetro_acc_B.EtherCATInit1[0];

    /* DataTypeConversion: '<Root>/Data Type Conversion4' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion4 =
      modello_2017b_levaRetro_acc_B.EtherCATGetState;

    /* DataTypeConversion: '<Root>/Data Type Conversion5' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion5 =
      modello_2017b_levaRetro_acc_B.DataTypeConversion_kx;

    /* DataTypeConversion: '<Root>/Data Type Conversion6' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion6 =
      modello_2017b_levaRetro_acc_B.DataTypeConversion4_n;

    /* ManualSwitch: '<Root>/Manual Switch' incorporates:
     *  Constant: '<Root>/Constant'
     */
    if (modello_2017b_levaRetro_acc_P.ManualSwitch_CurrentSetting_h == 1) {
      modello_2017b_levaRetro_acc_B.ManualSwitch =
        modello_2017b_levaRetro_acc_P.Constant_Value_o;
    } else {
      /* Gain: '<S5>/gravity_const' */
      modello_2017b_levaRetro_acc_B.gravity_const =
        modello_2017b_levaRetro_acc_P.gravity_const_Gain *
        modello_2017b_levaRetro_acc_B.DataTypeConversion4_n;

      /* Product: '<S5>/Product2' incorporates:
       *  Constant: '<Root>/knob_mass'
       */
      modello_2017b_levaRetro_acc_B.Product2 =
        modello_2017b_levaRetro_acc_B.gravity_const
        * modello_2017b_levaRetro_acc_P.knob_mass_Value;

      /* Product: '<S5>/Product4' incorporates:
       *  Constant: '<Root>/lever_length_without_knob'
       */
      modello_2017b_levaRetro_acc_B.Product4 =
        modello_2017b_levaRetro_acc_B.Product2 *
        modello_2017b_levaRetro_acc_P.lever_length_without_knob_Value;

      /* Gain: '<S5>/gain2' */
      modello_2017b_levaRetro_acc_B.gain2 =
        modello_2017b_levaRetro_acc_P.gain2_Gain *
        modello_2017b_levaRetro_acc_B.Product4;
      modello_2017b_levaRetro_acc_B.ManualSwitch =
        modello_2017b_levaRetro_acc_B.gain2;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch' */

    /* Gain: '<Root>/Gain5' */
    modello_2017b_levaRetro_acc_B.Gain5 = (real_T)
      modello_2017b_levaRetro_acc_P.Gain5_Gain *
      modello_2017b_levaRetro_acc_B.ManualSwitch;

    /* ManualSwitch: '<Root>/Manual Switch7' incorporates:
     *  Constant: '<Root>/Constant'
     *  Constant: '<S5>/Constant'
     */
    if (modello_2017b_levaRetro_acc_P.ManualSwitch7_CurrentSetting == 1) {
      modello_2017b_levaRetro_acc_B.ManualSwitch7 =
        modello_2017b_levaRetro_acc_P.Constant_Value_o;
    } else {
      modello_2017b_levaRetro_acc_B.ManualSwitch7 =
        modello_2017b_levaRetro_acc_P.Constant_Value_j;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch7' */

    /* Gain: '<Root>/Gain8' */
    modello_2017b_levaRetro_acc_B.Gain8 = (real_T)
      modello_2017b_levaRetro_acc_P.Gain8_Gain *
      modello_2017b_levaRetro_acc_B.ManualSwitch7;

    /* Sum: '<Root>/Sum10' */
    modello_2017b_levaRetro_acc_B.Sum10 = modello_2017b_levaRetro_acc_B.Gain5 +
      modello_2017b_levaRetro_acc_B.Gain8;

    /* Sum: '<Root>/Sum6' */
    modello_2017b_levaRetro_acc_B.Sum6 =
      modello_2017b_levaRetro_acc_B.Saturation +
      modello_2017b_levaRetro_acc_B.Sum10;

    /* DataTypeConversion: '<Root>/Data Type Conversion7' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion7 =
      modello_2017b_levaRetro_acc_B.Sum6;

    /* ManualSwitch: '<Root>/Manual Switch2' incorporates:
     *  Constant: '<Root>/Constant'
     */
    if (modello_2017b_levaRetro_acc_P.ManualSwitch2_CurrentSetting == 1) {
      modello_2017b_levaRetro_acc_B.ManualSwitch2 =
        modello_2017b_levaRetro_acc_P.Constant_Value_o;
    } else {
      /* Gain: '<S5>/gravity_const1' */
      modello_2017b_levaRetro_acc_B.gravity_const1 =
        modello_2017b_levaRetro_acc_P.gravity_const1_Gain *
        modello_2017b_levaRetro_acc_B.DataTypeConversion5_n;

      /* Product: '<S5>/Product3' incorporates:
       *  Constant: '<Root>/knob_mass'
       */
      modello_2017b_levaRetro_acc_B.Product3 =
        modello_2017b_levaRetro_acc_B.gravity_const1 *
        modello_2017b_levaRetro_acc_P.knob_mass_Value;

      /* Product: '<S5>/Product5' incorporates:
       *  Constant: '<Root>/lever_length_without_knob'
       */
      modello_2017b_levaRetro_acc_B.Product5 =
        modello_2017b_levaRetro_acc_B.Product3 *
        modello_2017b_levaRetro_acc_P.lever_length_without_knob_Value;

      /* Gain: '<S5>/gain4' */
      modello_2017b_levaRetro_acc_B.gain4 =
        modello_2017b_levaRetro_acc_P.gain4_Gain *
        modello_2017b_levaRetro_acc_B.Product5;
      modello_2017b_levaRetro_acc_B.ManualSwitch2 =
        modello_2017b_levaRetro_acc_B.gain4;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch2' */

    /* Gain: '<Root>/Gain6' */
    modello_2017b_levaRetro_acc_B.Gain6 = (real_T)
      modello_2017b_levaRetro_acc_P.Gain6_Gain *
      modello_2017b_levaRetro_acc_B.ManualSwitch2;

    /* ManualSwitch: '<Root>/Manual Switch8' incorporates:
     *  Constant: '<Root>/Constant'
     */
    if (modello_2017b_levaRetro_acc_P.ManualSwitch8_CurrentSetting == 1) {
      modello_2017b_levaRetro_acc_B.ManualSwitch8 =
        modello_2017b_levaRetro_acc_P.Constant_Value_o;
    } else {
      /* Gain: '<S5>/gravity_const2' incorporates:
       *  Constant: '<S5>/massa leva selezione'
       */
      modello_2017b_levaRetro_acc_B.gravity_const2 =
        modello_2017b_levaRetro_acc_P.gravity_const2_Gain *
        modello_2017b_levaRetro_acc_P.massalevaselezione_Value;

      /* Trigonometry: '<S5>/Trigonometric Function' */
      modello_2017b_levaRetro_acc_B.TrigonometricFunction = cos
        (modello_2017b_levaRetro_acc_B.enc_raw_to_rad1_p);

      /* Product: '<S5>/Product6' incorporates:
       *  Constant: '<S5>/braccio leva selezione theta 0'
       */
      modello_2017b_levaRetro_acc_B.Product6 =
        modello_2017b_levaRetro_acc_B.TrigonometricFunction *
        modello_2017b_levaRetro_acc_P.bracciolevaselezionetheta0_Valu;

      /* Product: '<S5>/Product1' */
      modello_2017b_levaRetro_acc_B.Product1 =
        modello_2017b_levaRetro_acc_B.Product6 *
        modello_2017b_levaRetro_acc_B.gravity_const2;

      /* Gain: '<S5>/gain1' */
      modello_2017b_levaRetro_acc_B.gain1 =
        modello_2017b_levaRetro_acc_P.gain1_Gain *
        modello_2017b_levaRetro_acc_B.Product1;
      modello_2017b_levaRetro_acc_B.ManualSwitch8 =
        modello_2017b_levaRetro_acc_B.gain1;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch8' */

    /* Gain: '<Root>/Gain7' */
    modello_2017b_levaRetro_acc_B.Gain7 = (real_T)
      modello_2017b_levaRetro_acc_P.Gain7_Gain *
      modello_2017b_levaRetro_acc_B.ManualSwitch8;

    /* Sum: '<Root>/Sum9' */
    modello_2017b_levaRetro_acc_B.Sum9 = modello_2017b_levaRetro_acc_B.Gain6 +
      modello_2017b_levaRetro_acc_B.Gain7;

    /* Sum: '<Root>/Sum1' */
    modello_2017b_levaRetro_acc_B.Sum1_i =
      modello_2017b_levaRetro_acc_B.Saturation1 +
      modello_2017b_levaRetro_acc_B.Sum9;

    /* DataTypeConversion: '<Root>/Data Type Conversion8' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion8 =
      modello_2017b_levaRetro_acc_B.Sum1_i;

    /* DataTypeConversion: '<Root>/Data Type Conversion9' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion9 =
      modello_2017b_levaRetro_acc_B.DataTypeConversion5_n;

    /* DataTypeConversion: '<S4>/Data Type Conversion1' */
    s1 = floor(modello_2017b_levaRetro_acc_B.command);
    if (rtIsNaN(s1) || rtIsInf(s1)) {
      s1 = 0.0;
    } else {
      s1 = fmod(s1, 4.294967296E+9);
    }

    modello_2017b_levaRetro_acc_B.DataTypeConversion1_dj = s1 < 0.0 ? -(int32_T)
      (uint32_T)-s1 : (int32_T)(uint32_T)s1;

    /* End of DataTypeConversion: '<S4>/Data Type Conversion1' */

    /* S-Function (xpcethercatsetstate): '<S4>/EtherCAT Set State ' */

    /* Level2 S-Function Block: '<S4>/EtherCAT Set State ' (xpcethercatsetstate) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[17];
      sfcnOutputs(rts,0);
    }

    /* Memory: '<Root>/Memory6' */
    modello_2017b_levaRetro_acc_B.Memory6 =
      modello_2017b_levaRetro_acc_DW.Memory6_PreviousInput;

    /* Memory: '<Root>/Memory7' */
    modello_2017b_levaRetro_acc_B.Memory7 =
      modello_2017b_levaRetro_acc_DW.Memory7_PreviousInput;

    /* Gain: '<S14>/Gain' */
    s1 = modello_2017b_levaRetro_acc_P.torque_constant;
    b_gamma = 1000.0 / s1;
    modello_2017b_levaRetro_acc_B.Gain = b_gamma *
      modello_2017b_levaRetro_acc_B.Sum6;

    /* ManualSwitch: '<S14>/Ripple compensation switch' incorporates:
     *  Constant: '<S14>/Constant'
     */
    if (modello_2017b_levaRetro_acc_P.Ripplecompensationswitch_Curren == 1) {
      /* Gain: '<S14>/Gain1' */
      b_gamma = modello_2017b_levaRetro_acc_P.transmission_ratio[0];
      modello_2017b_levaRetro_acc_B.Gain1_a = b_gamma *
        modello_2017b_levaRetro_acc_B.enc_raw_to_rad;

      /* Math: '<S14>/Math Function' incorporates:
       *  Constant: '<S14>/Constant2'
       */
      modello_2017b_levaRetro_acc_B.MathFunction_b = rt_modd_snf
        (modello_2017b_levaRetro_acc_B.Gain1_a,
         modello_2017b_levaRetro_acc_P.Constant2_Value);

      /* Lookup_n-D: '<S14>/1-D Lookup Table' */
      modello_2017b_levaRetro_acc_B.uDLookupTable_ln = look1_binlxpw
        (modello_2017b_levaRetro_acc_B.MathFunction_b,
         modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data,
         modello_2017b_levaRetro_acc_P.uDLookupTable_tableData, 199U);
      modello_2017b_levaRetro_acc_B.Ripplecompensationswitch =
        modello_2017b_levaRetro_acc_B.uDLookupTable_ln;
    } else {
      modello_2017b_levaRetro_acc_B.Ripplecompensationswitch =
        modello_2017b_levaRetro_acc_P.Constant_Value_o5;
    }

    /* End of ManualSwitch: '<S14>/Ripple compensation switch' */

    /* Gain: '<S14>/Gain2' */
    modello_2017b_levaRetro_acc_B.Gain2_b =
      modello_2017b_levaRetro_acc_P.Gain2_Gain *
      modello_2017b_levaRetro_acc_B.Ripplecompensationswitch;

    /* Sum: '<S14>/Sum' */
    s1 = floor(modello_2017b_levaRetro_acc_B.Gain +
               modello_2017b_levaRetro_acc_B.Gain2_b);
    if (rtIsNaN(s1) || rtIsInf(s1)) {
      s1 = 0.0;
    } else {
      s1 = fmod(s1, 4.294967296E+9);
    }

    modello_2017b_levaRetro_acc_B.Sum_l = s1 < 0.0 ? -(int32_T)(uint32_T)-s1 :
      (int32_T)(uint32_T)s1;

    /* End of Sum: '<S14>/Sum' */

    /* Gain: '<S15>/Gain' */
    s1 = modello_2017b_levaRetro_acc_P.torque_constant;
    b_gamma = 1000.0 / s1;
    modello_2017b_levaRetro_acc_B.Gain_l = b_gamma *
      modello_2017b_levaRetro_acc_B.Sum1_i;

    /* ManualSwitch: '<S15>/Ripple compensation switch' incorporates:
     *  Constant: '<S15>/Constant'
     */
    if (modello_2017b_levaRetro_acc_P.Ripplecompensationswitch_Curr_g == 1) {
      /* Gain: '<S15>/Gain1' */
      b_gamma = modello_2017b_levaRetro_acc_P.transmission_ratio[1];
      modello_2017b_levaRetro_acc_B.Gain1 = b_gamma *
        modello_2017b_levaRetro_acc_B.enc_raw_to_rad_p;

      /* Math: '<S15>/Math Function' incorporates:
       *  Constant: '<S15>/Constant2'
       */
      modello_2017b_levaRetro_acc_B.MathFunction = rt_modd_snf
        (modello_2017b_levaRetro_acc_B.Gain1,
         modello_2017b_levaRetro_acc_P.Constant2_Value_n);

      /* Lookup_n-D: '<S15>/1-D Lookup Table' */
      modello_2017b_levaRetro_acc_B.uDLookupTable_i2 = look1_binlxpw
        (modello_2017b_levaRetro_acc_B.MathFunction,
         modello_2017b_levaRetro_acc_P.uDLookupTable_bp01Data_l,
         modello_2017b_levaRetro_acc_P.uDLookupTable_tableData_c, 199U);
      modello_2017b_levaRetro_acc_B.Ripplecompensationswitch_h =
        modello_2017b_levaRetro_acc_B.uDLookupTable_i2;
    } else {
      modello_2017b_levaRetro_acc_B.Ripplecompensationswitch_h =
        modello_2017b_levaRetro_acc_P.Constant_Value_l;
    }

    /* End of ManualSwitch: '<S15>/Ripple compensation switch' */

    /* Sum: '<S15>/Sum' */
    s1 = floor(modello_2017b_levaRetro_acc_B.Gain_l +
               modello_2017b_levaRetro_acc_B.Ripplecompensationswitch_h);
    if (rtIsNaN(s1) || rtIsInf(s1)) {
      s1 = 0.0;
    } else {
      s1 = fmod(s1, 4.294967296E+9);
    }

    modello_2017b_levaRetro_acc_B.Sum_bh = s1 < 0.0 ? -(int32_T)(uint32_T)-s1 :
      (int32_T)(uint32_T)s1;

    /* End of Sum: '<S15>/Sum' */

    /* Switch: '<S23>/Switch' */
    if (modello_2017b_levaRetro_acc_B.Memory6 != 0.0) {
      modello_2017b_levaRetro_acc_B.Switch_jn =
        modello_2017b_levaRetro_acc_B.EtherCATPDOReceive3;
    } else {
      modello_2017b_levaRetro_acc_B.Switch_jn =
        modello_2017b_levaRetro_acc_B.Memory_o;
    }

    /* End of Switch: '<S23>/Switch' */

    /* Switch: '<S24>/Switch' */
    if (modello_2017b_levaRetro_acc_B.Memory7 != 0.0) {
      modello_2017b_levaRetro_acc_B.Switch_e4 =
        modello_2017b_levaRetro_acc_B.EtherCATPDOReceive3_l;
    } else {
      modello_2017b_levaRetro_acc_B.Switch_e4 =
        modello_2017b_levaRetro_acc_B.Memory_b;
    }

    /* End of Switch: '<S24>/Switch' */

    /* DataTypeConversion: '<S89>/Data Type Conversion2' */
    modello_2017b_levaRetro_acc_B.DataTypeConversion2_m =
      modello_2017b_levaRetro_acc_B.statey;
    if (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[3] == 0) {
      /* DataTypeConversion: '<S89>/Data Type Conversion1' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion1_j = 0.0;

      /* MATLAB Function: '<S89>/MATLAB Function2' incorporates:
       *  Constant: '<S89>/Constant8'
       */
      /* MATLAB Function 'prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/MATLAB Function2': '<S175>:1' */
      if (!modello_2017b_levaRetro_acc_DW.y_not_empty) {
        /* '<S175>:1:6' */
        /* '<S175>:1:7' */
        modello_2017b_levaRetro_acc_DW.y =
          modello_2017b_levaRetro_acc_B.DataTypeConversion1_j;
        modello_2017b_levaRetro_acc_DW.y_not_empty = true;
      }

      if (((modello_2017b_levaRetro_acc_DW.prev_state == 1.0) ||
           (modello_2017b_levaRetro_acc_DW.prev_state == 2.0)) &&
          (modello_2017b_levaRetro_acc_B.DataTypeConversion2_m == 3.0)) {
        /* '<S175>:1:13' */
        /* '<S175>:1:15' */
        on_orig_curve = 1;
        if (modello_2017b_levaRetro_acc_B.DataTypeConversion1_j -
            modello_2017b_levaRetro_acc_DW.y >
            modello_2017b_levaRetro_acc_P.Constant8_Value) {
          /* '<S175>:1:16' */
          /* '<S175>:1:17' */
          modello_2017b_levaRetro_acc_B.yout = modello_2017b_levaRetro_acc_DW.y
            + modello_2017b_levaRetro_acc_P.Constant8_Value;
        } else if (modello_2017b_levaRetro_acc_B.DataTypeConversion1_j -
                   modello_2017b_levaRetro_acc_DW.y <
                   -modello_2017b_levaRetro_acc_P.Constant8_Value) {
          /* '<S175>:1:18' */
          /* '<S175>:1:19' */
          modello_2017b_levaRetro_acc_B.yout = modello_2017b_levaRetro_acc_DW.y
            - modello_2017b_levaRetro_acc_P.Constant8_Value;
        } else {
          /* '<S175>:1:21' */
          modello_2017b_levaRetro_acc_B.yout =
            modello_2017b_levaRetro_acc_B.DataTypeConversion1_j;

          /* '<S175>:1:22' */
          on_orig_curve = 0;
        }
      } else {
        /* '<S175>:1:27' */
        modello_2017b_levaRetro_acc_B.yout =
          modello_2017b_levaRetro_acc_B.DataTypeConversion1_j;

        /* '<S175>:1:28' */
        on_orig_curve = 0;
      }

      if (on_orig_curve == 0) {
        /* '<S175>:1:32' */
        /* '<S175>:1:33' */
        modello_2017b_levaRetro_acc_DW.prev_state =
          modello_2017b_levaRetro_acc_B.DataTypeConversion2_m;
      }

      /* '<S175>:1:35' */
      modello_2017b_levaRetro_acc_DW.y = modello_2017b_levaRetro_acc_B.yout;

      /* End of MATLAB Function: '<S89>/MATLAB Function2' */
    }

    /* Sum: '<S184>/Sum1' incorporates:
     *  Constant: '<S184>/constant '
     */
    modello_2017b_levaRetro_acc_B.Sum1_n = modello_2017b_levaRetro_acc_B.statey
      - modello_2017b_levaRetro_acc_P.constant_Value_d2;

    /* Switch: '<S184>/Switch1' */
    if (modello_2017b_levaRetro_acc_B.Sum1_n != 0.0) {
      modello_2017b_levaRetro_acc_B.Switch1_h =
        modello_2017b_levaRetro_acc_B.Memory_g;
    } else {
      modello_2017b_levaRetro_acc_B.Switch1_h =
        modello_2017b_levaRetro_acc_B.DataTypeConversion1_o1;
    }

    /* End of Switch: '<S184>/Switch1' */

    /* Gain: '<Root>/torque_raw_to_torque_nm' */
    modello_2017b_levaRetro_acc_B.torque_raw_to_torque_nm = (real_T)
      modello_2017b_levaRetro_acc_P.torque_raw_to_torque_nm_Gain *
      5.9604644775390625E-8 * (real_T)
      modello_2017b_levaRetro_acc_B.EtherCATPDOReceive4;

    /* Gain: '<Root>/torque_raw_to_torque_nm1' */
    modello_2017b_levaRetro_acc_B.torque_raw_to_torque_nm1 = (real_T)
      modello_2017b_levaRetro_acc_P.torque_raw_to_torque_nm1_Gain *
      5.9604644775390625E-8 * (real_T)
      modello_2017b_levaRetro_acc_B.EtherCATPDOReceive4_a;

    /* S-Function (scblock): '<S19>/S-Function' */
    /* ok to acquire for <S19>/S-Function */
    modello_2017b_levaRetro_acc_DW.SFunction_IWORK_l.AcquireOK = 1;
    if (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[1] == 0) {
      /* S-Function (slrtUDPReceive): '<Root>/UDP Receive' */

      /* Level2 S-Function Block: '<Root>/UDP Receive' (slrtUDPReceive) */
      {
        SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[18];
        sfcnOutputs(rts,1);
      }

      /* S-Function (byte2any): '<Root>/Byte Unpack' */

      /* Unpack: <Root>/Byte Unpack */
      (void) memcpy(&modello_2017b_levaRetro_acc_B.ByteUnpack[0],
                    &modello_2017b_levaRetro_acc_B.UDPReceive_o1[0],
                    16);

      /* S-Function (any2byte): '<Root>/Byte Pack3' */

      /* Pack: <Root>/Byte Pack3 */
      (void) memcpy(&modello_2017b_levaRetro_acc_B.BytePack3[0],
                    &modello_2017b_levaRetro_acc_B.ByteUnpack[0],
                    16);

      /* RateTransition: '<Root>/Rate Transition2' */
      if (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[4] == 0) {
        for (on_orig_curve = 0; on_orig_curve < 16; on_orig_curve++) {
          modello_2017b_levaRetro_acc_B.RateTransition2[on_orig_curve] =
            modello_2017b_levaRetro_acc_B.BytePack3[on_orig_curve];
        }
      }

      /* End of RateTransition: '<Root>/Rate Transition2' */
    }

    /* Constant: '<Root>/zero force6' */
    modello_2017b_levaRetro_acc_B.zeroforce6 =
      modello_2017b_levaRetro_acc_P.zeroforce6_Value;
    if (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[4] == 0) {
      /* S-Function (slrtUDPSend): '<Root>/UDP Send3' */

      /* Level2 S-Function Block: '<Root>/UDP Send3' (slrtUDPSend) */
      {
        SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[19];
        sfcnOutputs(rts,4);
      }
    }

    if (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[1] == 0) {
      /* DataTypeConversion: '<Root>/Data Type Conversion33' */
      modello_2017b_levaRetro_acc_B.DataTypeConversion33[0] =
        modello_2017b_levaRetro_acc_B.ByteUnpack[0];
      modello_2017b_levaRetro_acc_B.DataTypeConversion33[1] =
        modello_2017b_levaRetro_acc_B.ByteUnpack[1];
      modello_2017b_levaRetro_acc_B.DataTypeConversion33[2] =
        modello_2017b_levaRetro_acc_B.ByteUnpack[2];
      modello_2017b_levaRetro_acc_B.DataTypeConversion33[3] =
        modello_2017b_levaRetro_acc_B.ByteUnpack[3];
    }

    /* Constant: '<Root>/Master_enabler ' */
    modello_2017b_levaRetro_acc_B.Master_enabler =
      modello_2017b_levaRetro_acc_P.Master_enabler_Value;

    /* Constant: '<Root>/enable_drives' */
    modello_2017b_levaRetro_acc_B.enable_drives_g =
      modello_2017b_levaRetro_acc_P.enable_drives_Value;

    /* Constant: '<Root>/enable_forces' */
    modello_2017b_levaRetro_acc_B.enable_forces_e =
      modello_2017b_levaRetro_acc_P.enable_forces_Value;

    /* Constant: '<Root>/fy_offset1' */
    modello_2017b_levaRetro_acc_B.fy_offset1 =
      modello_2017b_levaRetro_acc_P.fy_offset1_Value;

    /* Constant: '<Root>/fy_offset2' */
    modello_2017b_levaRetro_acc_B.fy_offset2 =
      modello_2017b_levaRetro_acc_P.fy_offset2_Value;

    /* Constant: '<Root>/x_axis_encoder_reset ' */
    modello_2017b_levaRetro_acc_B.x_axis_encoder_reset =
      modello_2017b_levaRetro_acc_P.x_axis_encoder_reset_Value;

    /* Constant: '<Root>/x_axis_torque_ref' */
    modello_2017b_levaRetro_acc_B.x_axis_torque_ref =
      modello_2017b_levaRetro_acc_P.x_axis_torque_ref_Value;

    /* Constant: '<Root>/y_axis_encoder_reset' */
    modello_2017b_levaRetro_acc_B.y_axis_encoder_reset =
      modello_2017b_levaRetro_acc_P.y_axis_encoder_reset_Value;

    /* Constant: '<Root>/y_axis_torque_ref' */
    modello_2017b_levaRetro_acc_B.y_axis_torque_ref =
      modello_2017b_levaRetro_acc_P.y_axis_torque_ref_Value;

    /* user code (Output function Trailer) */
    {
      /*------------ S-Function Block: <S4>/EtherCAT Init 1 Write Process Data ,Run Admin Tasks and then Write Acyclic Data------------*/
      uint32_T mserror;
      static char_T *errMsg;
      xpcEtherCATWriteProcessData(0,NULL);
      xpcEtherCATExecAdminJobs(0);
      xpcEtherCATWriteAcyclicData(0);
      dcmCtlExecJob
        ( modello_2017b_levaRetro_acc_DW.EtherCATInit1_RWORK.EXECRATIO, &mserror
         );                            // Master shift control job
      if (mserror == -2 )              // PTP or ? is setting the sample time adjustment
      {
        errMsg = "ERROR: EtherCAT and PTP are both adjusting the sample time";
        rtmSetErrorStatus(modello_2017b_levaRetro_acc_M, errMsg);
        return;
      }
    }
  }
}

/* Model update function */
static void modello_2017b_levaRetro_acc_update(void)
{
  /* Update for Memory: '<Root>/Memory8' */
  modello_2017b_levaRetro_acc_DW.Memory8_PreviousInput =
    modello_2017b_levaRetro_acc_B.DataTypeConversion19;

  /* Update for Memory: '<Root>/Memory1' */
  modello_2017b_levaRetro_acc_DW.Memory1_PreviousInput =
    modello_2017b_levaRetro_acc_B.Sum_l;

  /* Update for Memory: '<Root>/Memory2' */
  modello_2017b_levaRetro_acc_DW.Memory2_PreviousInput =
    modello_2017b_levaRetro_acc_B.Sum_bh;

  /* Update for Memory: '<Root>/Memory3' */
  modello_2017b_levaRetro_acc_DW.Memory3_PreviousInput =
    modello_2017b_levaRetro_acc_B.DataTypeConversion17;

  /* Update for Memory: '<S23>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_n =
    modello_2017b_levaRetro_acc_B.Switch_jn;

  /* Update for Memory: '<S24>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_nc =
    modello_2017b_levaRetro_acc_B.Switch_e4;

  /* Update for UnitDelay: '<S54>/Unit Delay' */
  modello_2017b_levaRetro_acc_DW.UnitDelay_DSTATE =
    modello_2017b_levaRetro_acc_B.enc_raw_to_rad;

  /* Update for UnitDelay: '<S56>/Unit Delay' */
  modello_2017b_levaRetro_acc_DW.UnitDelay_DSTATE_a =
    modello_2017b_levaRetro_acc_B.enc_raw_to_rad_p;

  /* Update for Memory: '<Root>/Memory9' */
  modello_2017b_levaRetro_acc_DW.Memory9_PreviousInput =
    modello_2017b_levaRetro_acc_B.DataTypeConversion18;

  /* Update for Memory: '<S26>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput =
    modello_2017b_levaRetro_acc_B.selection;

  /* Update for Enabled SubSystem: '<S92>/first_gear ' incorporates:
   *  EnablePort: '<S95>/Enable'
   */
  if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear_su.out1 > 0.0)
  {
    /* Update for Memory: '<S95>/Memory' */
    modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_am =
      modello_2017b_levaRetro_acc_B.Switch1_j0;
  }

  /* End of Update for SubSystem: '<S92>/first_gear ' */

  /* Update for Enabled SubSystem: '<S92>/second_gear' incorporates:
   *  EnablePort: '<S98>/Enable'
   */
  if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear_su.out2 > 0.0)
  {
    /* Update for Memory: '<S98>/Memory' */
    modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_l0 =
      modello_2017b_levaRetro_acc_B.Switch1_fu;
  }

  /* End of Update for SubSystem: '<S92>/second_gear' */

  /* Update for Enabled SubSystem: '<S92>/third_gear' incorporates:
   *  EnablePort: '<S101>/Enable'
   */
  if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear_su.out3 > 0.0)
  {
    /* Update for Memory: '<S101>/Memory' */
    modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_p =
      modello_2017b_levaRetro_acc_B.Switch1_k;
  }

  /* End of Update for SubSystem: '<S92>/third_gear' */

  /* Update for Enabled SubSystem: '<S92>/fourth_gear' incorporates:
   *  EnablePort: '<S96>/Enable'
   */
  if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear_su.out4 > 0.0)
  {
    /* Update for Memory: '<S96>/Memory' */
    modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_i =
      modello_2017b_levaRetro_acc_B.Switch1_a;
  }

  /* End of Update for SubSystem: '<S92>/fourth_gear' */

  /* Update for Enabled SubSystem: '<S92>/fifth_gear' incorporates:
   *  EnablePort: '<S94>/Enable'
   */
  if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear_su.out5 > 0.0)
  {
    /* Update for Memory: '<S94>/Memory' */
    modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_hl =
      modello_2017b_levaRetro_acc_B.Switch1_d;
  }

  /* End of Update for SubSystem: '<S92>/fifth_gear' */

  /* Update for Enabled SubSystem: '<S92>/sixth_gear' incorporates:
   *  EnablePort: '<S100>/Enable'
   */
  if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear_su.out6 > 0.0)
  {
    /* Update for Memory: '<S100>/Memory' */
    modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_of =
      modello_2017b_levaRetro_acc_B.Switch1_kc;
  }

  /* End of Update for SubSystem: '<S92>/sixth_gear' */

  /* Update for Enabled SubSystem: '<S92>/reverse_gear' incorporates:
   *  EnablePort: '<S97>/Enable'
   */
  if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear_su.out7 > 0.0)
  {
    /* Update for Memory: '<S97>/Memory' */
    modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_fv =
      modello_2017b_levaRetro_acc_B.Switch1_l;
  }

  /* End of Update for SubSystem: '<S92>/reverse_gear' */

  /* Update for Enabled SubSystem: '<S92>/selection_axis1' incorporates:
   *  EnablePort: '<S99>/Enable'
   */
  if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear_su.out8 > 0.0)
  {
    /* Update for Memory: '<S99>/Memory' */
    modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_b =
      modello_2017b_levaRetro_acc_B.uDLookupTable_gb;
  }

  /* End of Update for SubSystem: '<S92>/selection_axis1' */

  /* Update for Enabled SubSystem: '<S133>/first_gear ' incorporates:
   *  EnablePort: '<S136>/Enable'
   */
  if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear__j.out1 > 0.0)
  {
    /* Update for Memory: '<S136>/Memory' */
    modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_l =
      modello_2017b_levaRetro_acc_B.Switch1_e;
  }

  /* End of Update for SubSystem: '<S133>/first_gear ' */

  /* Update for Enabled SubSystem: '<S133>/second_gear' incorporates:
   *  EnablePort: '<S139>/Enable'
   */
  if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear__j.out2 > 0.0)
  {
    /* Update for Memory: '<S139>/Memory' */
    modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_h =
      modello_2017b_levaRetro_acc_B.Switch1_g;
  }

  /* End of Update for SubSystem: '<S133>/second_gear' */

  /* Update for Enabled SubSystem: '<S133>/third_gear' incorporates:
   *  EnablePort: '<S142>/Enable'
   */
  if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear__j.out3 > 0.0)
  {
    /* Update for Memory: '<S142>/Memory' */
    modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_a =
      modello_2017b_levaRetro_acc_B.Switch1_c;
  }

  /* End of Update for SubSystem: '<S133>/third_gear' */

  /* Update for Enabled SubSystem: '<S133>/fourth_gear' incorporates:
   *  EnablePort: '<S137>/Enable'
   */
  if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear__j.out4 > 0.0)
  {
    /* Update for Memory: '<S137>/Memory' */
    modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_o =
      modello_2017b_levaRetro_acc_B.Switch1_j;
  }

  /* End of Update for SubSystem: '<S133>/fourth_gear' */

  /* Update for Enabled SubSystem: '<S133>/fifth_gear' incorporates:
   *  EnablePort: '<S135>/Enable'
   */
  if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear__j.out5 > 0.0)
  {
    /* Update for Memory: '<S135>/Memory' */
    modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_g4 =
      modello_2017b_levaRetro_acc_B.Switch1_n3;
  }

  /* End of Update for SubSystem: '<S133>/fifth_gear' */

  /* Update for Enabled SubSystem: '<S133>/sixth_gear' incorporates:
   *  EnablePort: '<S141>/Enable'
   */
  if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear__j.out6 > 0.0)
  {
    /* Update for Memory: '<S141>/Memory' */
    modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_g =
      modello_2017b_levaRetro_acc_B.Switch1_n;
  }

  /* End of Update for SubSystem: '<S133>/sixth_gear' */

  /* Update for Enabled SubSystem: '<S133>/reverse_gear' incorporates:
   *  EnablePort: '<S138>/Enable'
   */
  if (modello_2017b_levaRetro_acc_B.sf_demultiplexer_enable_gear__j.out7 > 0.0)
  {
    /* Update for Memory: '<S138>/Memory' */
    modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_f =
      modello_2017b_levaRetro_acc_B.Switch1_f;
  }

  /* End of Update for SubSystem: '<S133>/reverse_gear' */

  /* Update for Memory: '<S184>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_m =
    modello_2017b_levaRetro_acc_B.Switch1_h;

  /* Update for Enabled SubSystem: '<S89>/inside_gear_path' incorporates:
   *  EnablePort: '<S177>/Enable'
   */
  if (modello_2017b_levaRetro_acc_B.inside_gear_path > 0.0) {
    /* Update for Memory: '<S228>/Memory' */
    modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_j =
      modello_2017b_levaRetro_acc_B.Switch1;
  }

  /* End of Update for SubSystem: '<S89>/inside_gear_path' */

  /* Update for Memory: '<Root>/Memory6' */
  modello_2017b_levaRetro_acc_DW.Memory6_PreviousInput =
    modello_2017b_levaRetro_acc_B.x_axis_reset;

  /* Update for Memory: '<Root>/Memory7' */
  modello_2017b_levaRetro_acc_DW.Memory7_PreviousInput =
    modello_2017b_levaRetro_acc_B.y_axis_reset;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++modello_2017b_levaRetro_acc_M->Timing.clockTick0)) {
    ++modello_2017b_levaRetro_acc_M->Timing.clockTickH0;
  }

  modello_2017b_levaRetro_acc_M->Timing.t[0] =
    modello_2017b_levaRetro_acc_M->Timing.clockTick0 *
    modello_2017b_levaRetro_acc_M->Timing.stepSize0 +
    modello_2017b_levaRetro_acc_M->Timing.clockTickH0 *
    modello_2017b_levaRetro_acc_M->Timing.stepSize0 * 4294967296.0;
  if (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update absolute timer for sample time: [0.0015s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++modello_2017b_levaRetro_acc_M->Timing.clockTick1)) {
      ++modello_2017b_levaRetro_acc_M->Timing.clockTickH1;
    }

    modello_2017b_levaRetro_acc_M->Timing.t[1] =
      modello_2017b_levaRetro_acc_M->Timing.clockTick1 *
      modello_2017b_levaRetro_acc_M->Timing.stepSize1 +
      modello_2017b_levaRetro_acc_M->Timing.clockTickH1 *
      modello_2017b_levaRetro_acc_M->Timing.stepSize1 * 4294967296.0;
  }

  if (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[2] == 0) {
    /* Update absolute timer for sample time: [0.002s, 0.0s] */
    /* The "clockTick2" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick2"
     * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick2 and the high bits
     * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++modello_2017b_levaRetro_acc_M->Timing.clockTick2)) {
      ++modello_2017b_levaRetro_acc_M->Timing.clockTickH2;
    }

    modello_2017b_levaRetro_acc_M->Timing.t[2] =
      modello_2017b_levaRetro_acc_M->Timing.clockTick2 *
      modello_2017b_levaRetro_acc_M->Timing.stepSize2 +
      modello_2017b_levaRetro_acc_M->Timing.clockTickH2 *
      modello_2017b_levaRetro_acc_M->Timing.stepSize2 * 4294967296.0;
  }

  if (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[3] == 0) {
    /* Update absolute timer for sample time: [0.02s, 0.0s] */
    /* The "clockTick3" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick3"
     * and "Timing.stepSize3". Size of "clockTick3" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick3 and the high bits
     * Timing.clockTickH3. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++modello_2017b_levaRetro_acc_M->Timing.clockTick3)) {
      ++modello_2017b_levaRetro_acc_M->Timing.clockTickH3;
    }

    modello_2017b_levaRetro_acc_M->Timing.t[3] =
      modello_2017b_levaRetro_acc_M->Timing.clockTick3 *
      modello_2017b_levaRetro_acc_M->Timing.stepSize3 +
      modello_2017b_levaRetro_acc_M->Timing.clockTickH3 *
      modello_2017b_levaRetro_acc_M->Timing.stepSize3 * 4294967296.0;
  }

  if (modello_2017b_levaRetro_acc_M->Timing.TaskCounters.TID[4] == 0) {
    /* Update absolute timer for sample time: [0.06s, 0.0s] */
    /* The "clockTick4" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick4"
     * and "Timing.stepSize4". Size of "clockTick4" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick4 and the high bits
     * Timing.clockTickH4. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++modello_2017b_levaRetro_acc_M->Timing.clockTick4)) {
      ++modello_2017b_levaRetro_acc_M->Timing.clockTickH4;
    }

    modello_2017b_levaRetro_acc_M->Timing.t[4] =
      modello_2017b_levaRetro_acc_M->Timing.clockTick4 *
      modello_2017b_levaRetro_acc_M->Timing.stepSize4 +
      modello_2017b_levaRetro_acc_M->Timing.clockTickH4 *
      modello_2017b_levaRetro_acc_M->Timing.stepSize4 * 4294967296.0;
  }

  rate_scheduler();
}

/* Model initialize function */
static void modello_2017b_levaRetro_acc_initialize(void)
{
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
        if (NICerror = registerNIC( 3, 0, 0, 3 ) ) {
          sprintf( msg, "EtherCAT Init: Ethernet port at [3,0,0] in use by" );

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

          rtmSetErrorStatus(modello_2017b_levaRetro_acc_M, msg);
          return;
        }

        // Get the exec ratio at model start time.  Needed by the MS controller.
        modello_2017b_levaRetro_acc_DW.EtherCATInit1_RWORK.EXECRATIO = 0.00025 /
          slrteGetCurrentStepSize();
        status = slrtGetPciConfigAtFunction( 3, 0, 0, &pciInfo);
        if (status == -1) {
          rtmSetErrorStatus(modello_2017b_levaRetro_acc_M,
                            "You must specify a bus/slot/function, not auto search.");
          return;
        }

        if (status == -2 ) {
          rtmSetErrorStatus(modello_2017b_levaRetro_acc_M,
                            "There is no Ethernet adapter at bus 3, slot 0, function 0.");
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
          rtmSetErrorStatus(modello_2017b_levaRetro_acc_M,
                            "No valid Ethernet board found at bus 3 slot 0 function 0");
        } else {
          char *logfile = "C:\\dbglog.txt";
          mwStateClear( 0 );
          status = xpcEtherCATinitialize(0, DeviceType, 3, 0, 0, 1,
            xmlecatArr_0, xmlecatArr_0_count,1048576,
            2, logfile, 0.00025, 2 );
          if (status != XPC_ECAT_OK) {
            errMsg = xpcPrintEtherCATError(0, 0);
            rtmSetErrorStatus(modello_2017b_levaRetro_acc_M, errMsg);
            return;
          }

          //printf("init status = %08x\n", status );
        }
      }
    }

    /* Start for Constant: '<Root>/quick_stop_drives' */
    modello_2017b_levaRetro_acc_B.quick_stop_drives =
      modello_2017b_levaRetro_acc_P.quick_stop_drives_Value;

    /* Start for Constant: '<Root>/x_axis_reset_fault' */
    modello_2017b_levaRetro_acc_B.x_axis_reset_fault =
      modello_2017b_levaRetro_acc_P.x_axis_reset_fault_Value;

    /* Start for Constant: '<Root>/y_axis_reset_fault' */
    modello_2017b_levaRetro_acc_B.y_axis_reset_fault =
      modello_2017b_levaRetro_acc_P.y_axis_reset_fault_Value;

    /* Start for S-Function (xpcethercatgetstate): '<S4>/EtherCAT Get State  ' */
    /* Level2 S-Function Block: '<S4>/EtherCAT Get State  ' (xpcethercatgetstate) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[14];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Enabled SubSystem: '<Root>/Slaves_control_and_status' */

    /* Start for S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive1' */
    /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive1' (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive3' */
    /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive3' (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive4' */
    /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive4' (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[2];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive2' */
    /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive2' (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[3];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S40>/Drive_statusword' */
    /* Level2 S-Function Block: '<S40>/Drive_statusword' (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[4];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S40>/Drive_controlword' */
    /* Level2 S-Function Block: '<S40>/Drive_controlword' (xpcethercatpdotx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[5];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S41>/EtherCAT PDO Transmit 2' */
    /* Level2 S-Function Block: '<S41>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[6];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S46>/EtherCAT PDO Receive1' */
    /* Level2 S-Function Block: '<S46>/EtherCAT PDO Receive1' (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[7];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S46>/EtherCAT PDO Receive3' */
    /* Level2 S-Function Block: '<S46>/EtherCAT PDO Receive3' (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[8];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S46>/EtherCAT PDO Receive4' */
    /* Level2 S-Function Block: '<S46>/EtherCAT PDO Receive4' (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[9];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S46>/EtherCAT PDO Receive2' */
    /* Level2 S-Function Block: '<S46>/EtherCAT PDO Receive2' (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[10];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S44>/Drive_statusword' */
    /* Level2 S-Function Block: '<S44>/Drive_statusword' (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[11];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S44>/Drive_controlword' */
    /* Level2 S-Function Block: '<S44>/Drive_controlword' (xpcethercatpdotx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[12];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S45>/EtherCAT PDO Transmit 2' */
    /* Level2 S-Function Block: '<S45>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[13];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* End of Start for SubSystem: '<Root>/Slaves_control_and_status' */

    /* Start for S-Function (scblock): '<S16>/S-Function' */

    /* S-Function Block: <S16>/S-Function (scblock) */
    {
      int i;
      if ((i = rl32eScopeExists(1)) == 0) {
        if ((i = rl32eDefScope(1,2)) != 0) {
          printf("Error creating scope 1\n");
        } else {
          rl32eAddSignal(1, rl32eGetSignalNo("Data Type Conversion4"));
          rl32eAddSignal(1, rl32eGetSignalNo("Data Type Conversion3"));
          rl32eAddSignal(1, rl32eGetSignalNo("Data Type Conversion"));
          rl32eAddSignal(1, rl32eGetSignalNo("Data Type Conversion1"));
          rl32eAddSignal(1, rl32eGetSignalNo("Data Type Conversion2"));
          rl32eAddSignal(1, rl32eGetSignalNo(
            "encoder_x_axis_processing/enc_raw_to_rad"));
          rl32eAddSignal(1, rl32eGetSignalNo(
            "encoder_y_axis_processing/enc_raw_to_rad"));
          rl32eAddSignal(1, rl32eGetSignalNo("torque_raw_to_torque_nm"));
          rl32eAddSignal(1, rl32eGetSignalNo("torque_raw_to_torque_nm1"));
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo("Data Type Conversion4"),
            "master ethercat state: %15.0f");
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo("Data Type Conversion3"),
            "master ethercat error: %15.0f");
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo("Data Type Conversion"),
            "master ethercat ready: %15.0f");
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo("Data Type Conversion1"),
            "x axis SW: %15.0f");
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo("Data Type Conversion2"),
            "y axis SW: %15.0f");
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
            "encoder_x_axis_processing/enc_raw_to_rad"),
            "x axis encoder: %15.6f rad");
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
            "encoder_y_axis_processing/enc_raw_to_rad"),
            "y axis encoder: %15.6f rad");
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo("torque_raw_to_torque_nm"),
            "x axis torque: %15.6f Nm");
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo("torque_raw_to_torque_nm1"),
            "y axis torque: %15.6f Nm");
          rl32eSetScope(1, 4, 250);
          rl32eSetScope(1, 5, 0);
          rl32eSetScope(1, 6, 1);
          rl32eSetScope(1, 0, 0);
          rl32eSetScope(1, 3, rl32eGetSignalNo("Data Type Conversion4"));
          rl32eSetScope(1, 1, 0.0);
          rl32eSetScope(1, 2, 0);
          rl32eSetScope(1, 9, 0);
          rl32eSetTargetScope(1, 1, 0.0);
          rl32eSetTargetScope(1, 11, 0.0);
          rl32eSetTargetScope(1, 10, 0.0);
          xpceScopeAcqOK(1,
                         &modello_2017b_levaRetro_acc_DW.SFunction_IWORK.AcquireOK);
        }
      }

      if (i) {
        rl32eRestartAcquisition(1);
      }
    }

    /* Start for S-Function (scblock): '<S17>/S-Function' */

    /* S-Function Block: <S17>/S-Function (scblock) */
    {
      int i;
      if ((i = rl32eScopeExists(2)) == 0) {
        if ((i = rl32eDefScope(2,2)) != 0) {
          printf("Error creating scope 2\n");
        } else {
          rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion5"));
          rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion7"));
          rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion8"));
          rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion6"));
          rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion9"));
          rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion10"));
          rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion11"));
          rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion12"));
          rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion13"));
          rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion5"),
            "Selected gear: %15.0f Gear");
          rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion7"),
            "x axis torque ref: %15.6f Nm");
          rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion8"),
            "y axis torque ref: %15.6f Nm");
          rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion6"),
            "Position X: %15.6f");
          rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion9"),
            "Position Y: %15.6f");
          rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion10"),
            "Force X: %15.6f");
          rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion11"),
            "Force Y: %15.6f");
          rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion12"),
            "Vel X: %15.6f");
          rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion13"),
            "Vel Y: %15.6f");
          rl32eSetScope(2, 4, 250);
          rl32eSetScope(2, 5, 0);
          rl32eSetScope(2, 6, 1);
          rl32eSetScope(2, 0, 0);
          rl32eSetScope(2, 3, rl32eGetSignalNo("Data Type Conversion5"));
          rl32eSetScope(2, 1, 0.0);
          rl32eSetScope(2, 2, 0);
          rl32eSetScope(2, 9, 0);
          rl32eSetTargetScope(2, 1, 0.0);
          rl32eSetTargetScope(2, 11, 0.0);
          rl32eSetTargetScope(2, 10, 0.0);
          xpceScopeAcqOK(2,
                         &modello_2017b_levaRetro_acc_DW.SFunction_IWORK_e.AcquireOK);
        }
      }

      if (i) {
        rl32eRestartAcquisition(2);
      }
    }

    /* Start for S-Function (scblock): '<S18>/S-Function' */

    /* S-Function Block: <S18>/S-Function (scblock) */
    {
      int i;
      if ((i = rl32eScopeExists(3)) == 0) {
        if ((i = rl32eDefScope(3,2)) != 0) {
          printf("Error creating scope 3\n");
        } else {
          rl32eAddSignal(3, rl32eGetSignalNo(
            "encoder_x_axis_processing/enc_raw_to_rad1"));
          rl32eAddSignal(3, rl32eGetSignalNo(
            "encoder_y_axis_processing/enc_raw_to_rad1"));
          rl32eAddSignal(3, rl32eGetSignalNo("Gain2"));
          rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
            "encoder_x_axis_processing/enc_raw_to_rad1"),
            "x axis rel angle rad: %15.6f");
          rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
            "encoder_y_axis_processing/enc_raw_to_rad1"),
            "y axis rel angle rad: %15.6f");
          rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("Gain2"),"time: %15.6f");
          rl32eSetScope(3, 4, 250);
          rl32eSetScope(3, 5, 0);
          rl32eSetScope(3, 6, 1);
          rl32eSetScope(3, 0, 0);
          rl32eSetScope(3, 3, rl32eGetSignalNo(
            "encoder_x_axis_processing/enc_raw_to_rad1"));
          rl32eSetScope(3, 1, 0.0);
          rl32eSetScope(3, 2, 0);
          rl32eSetScope(3, 9, 0);
          rl32eSetTargetScope(3, 1, 0.0);
          rl32eSetTargetScope(3, 11, 0.0);
          rl32eSetTargetScope(3, 10, 0.0);
          xpceScopeAcqOK(3,
                         &modello_2017b_levaRetro_acc_DW.SFunction_IWORK_d.AcquireOK);
        }
      }

      if (i) {
        rl32eRestartAcquisition(3);
      }
    }

    /* Start for Constant: '<Root>/zero force4' */
    modello_2017b_levaRetro_acc_B.zeroforce4 =
      modello_2017b_levaRetro_acc_P.zeroforce4_Value;

    /* Start for S-Function (slrtUDPSend): '<Root>/UDP Send1' */
    /* Level2 S-Function Block: '<Root>/UDP Send1' (slrtUDPSend) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[15];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<Root>/zero force5' */
    modello_2017b_levaRetro_acc_B.zeroforce5 =
      modello_2017b_levaRetro_acc_P.zeroforce5_Value;

    /* Start for S-Function (slrtUDPSend): '<Root>/UDP Send2' */
    /* Level2 S-Function Block: '<Root>/UDP Send2' (slrtUDPSend) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[16];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<Root>/start_signal' */
    modello_2017b_levaRetro_acc_B.start_signal =
      modello_2017b_levaRetro_acc_P.start_signal_Value;

    /* Start for S-Function (xpcethercatsetstate): '<S4>/EtherCAT Set State ' */
    /* Level2 S-Function Block: '<S4>/EtherCAT Set State ' (xpcethercatsetstate) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[17];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (scblock): '<S19>/S-Function' */

    /* S-Function Block: <S19>/S-Function (scblock) */
    {
      int i;
      if ((i = rl32eScopeExists(4)) == 0) {
        if ((i = rl32eDefScope(4,2)) != 0) {
          printf("Error creating scope 4\n");
        } else {
          rl32eAddSignal(4, rl32eGetSignalNo("Data Type Conversion33/s1"));
          rl32eAddSignal(4, rl32eGetSignalNo("Data Type Conversion33/s2"));
          rl32eAddSignal(4, rl32eGetSignalNo("Data Type Conversion33/s3"));
          rl32eAddSignal(4, rl32eGetSignalNo("Data Type Conversion33/s4"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "prova_cambio_con_profili_enabled_sbox_viscous_variable/MATLAB Function/p2"));
          rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo(
            "Data Type Conversion33/s1"),"ax: %5.4f");
          rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo(
            "Data Type Conversion33/s2"),"ay: %5.4f");
          rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo(
            "Data Type Conversion33/s3"),"az: %5.4f");
          rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo(
            "Data Type Conversion33/s4"),"leva: %5.4f");
          rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo(
            "prova_cambio_con_profili_enabled_sbox_viscous_variable/MATLAB Function/p2"),
            "retroState: %5.4f");
          rl32eSetScope(4, 4, 250);
          rl32eSetScope(4, 5, 0);
          rl32eSetScope(4, 6, 1);
          rl32eSetScope(4, 0, 0);
          rl32eSetScope(4, 3, rl32eGetSignalNo("Data Type Conversion33/s1"));
          rl32eSetScope(4, 1, 0.0);
          rl32eSetScope(4, 2, 0);
          rl32eSetScope(4, 9, 0);
          rl32eSetTargetScope(4, 1, 0.0);
          rl32eSetTargetScope(4, 11, 0.0);
          rl32eSetTargetScope(4, 10, 0.0);
          xpceScopeAcqOK(4,
                         &modello_2017b_levaRetro_acc_DW.SFunction_IWORK_l.AcquireOK);
        }
      }

      if (i) {
        rl32eRestartAcquisition(4);
      }
    }

    /* Start for S-Function (slrtUDPReceive): '<Root>/UDP Receive' */
    /* Level2 S-Function Block: '<Root>/UDP Receive' (slrtUDPReceive) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[18];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<Root>/zero force6' */
    modello_2017b_levaRetro_acc_B.zeroforce6 =
      modello_2017b_levaRetro_acc_P.zeroforce6_Value;

    /* Start for S-Function (slrtUDPSend): '<Root>/UDP Send3' */
    /* Level2 S-Function Block: '<Root>/UDP Send3' (slrtUDPSend) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[19];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  /* InitializeConditions for Memory: '<Root>/Memory8' */
  modello_2017b_levaRetro_acc_DW.Memory8_PreviousInput =
    modello_2017b_levaRetro_acc_P.Memory8_InitialCondition;

  /* InitializeConditions for Memory: '<Root>/Memory1' */
  modello_2017b_levaRetro_acc_DW.Memory1_PreviousInput =
    modello_2017b_levaRetro_acc_P.Memory1_InitialCondition;

  /* InitializeConditions for Memory: '<Root>/Memory2' */
  modello_2017b_levaRetro_acc_DW.Memory2_PreviousInput =
    modello_2017b_levaRetro_acc_P.Memory2_InitialCondition;

  /* InitializeConditions for Memory: '<Root>/Memory3' */
  modello_2017b_levaRetro_acc_DW.Memory3_PreviousInput =
    modello_2017b_levaRetro_acc_P.Memory3_InitialCondition;

  /* InitializeConditions for Memory: '<S23>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_n =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_ly;

  /* InitializeConditions for Memory: '<S24>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_nc =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_o0;

  /* InitializeConditions for UnitDelay: '<S54>/Unit Delay' */
  modello_2017b_levaRetro_acc_DW.UnitDelay_DSTATE =
    modello_2017b_levaRetro_acc_P.UnitDelay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S56>/Unit Delay' */
  modello_2017b_levaRetro_acc_DW.UnitDelay_DSTATE_a =
    modello_2017b_levaRetro_acc_P.UnitDelay_InitialCondition_k;

  /* InitializeConditions for Memory: '<Root>/Memory9' */
  modello_2017b_levaRetro_acc_DW.Memory9_PreviousInput =
    modello_2017b_levaRetro_acc_P.Memory9_InitialCondition;

  /* InitializeConditions for Memory: '<S26>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_cu;

  /* InitializeConditions for Memory: '<S184>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_m =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_g;

  /* InitializeConditions for Memory: '<Root>/Memory6' */
  modello_2017b_levaRetro_acc_DW.Memory6_PreviousInput =
    modello_2017b_levaRetro_acc_P.Memory6_InitialCondition;

  /* InitializeConditions for Memory: '<Root>/Memory7' */
  modello_2017b_levaRetro_acc_DW.Memory7_PreviousInput =
    modello_2017b_levaRetro_acc_P.Memory7_InitialCondition;

  /* SystemInitialize for Chart: '<S4>/Ethercat master State Machine' */
  modello_2017b_levaRetro_acc_DW.sfEvent_ln = -1;
  modello_2017b_levaRetro_acc_DW.is_active_c2_modello_2017b_leva = 0U;
  modello_2017b_levaRetro_acc_DW.is_c2_modello_2017b_levaRetro_a =
    modello_20_IN_NO_ACTIVE_CHILD_h;

  /* SystemInitialize for Enabled SubSystem: '<Root>/Slaves_control_and_status' */

  /* SystemInitialize for Chart: '<S40>/DS402_state_machine' */
  modell_DS402_state_machine_Init
    (&modello_2017b_levaRetro_acc_DW.sf_DS402_state_machine);

  /* SystemInitialize for Chart: '<S44>/DS402_state_machine' */
  modell_DS402_state_machine_Init
    (&modello_2017b_levaRetro_acc_DW.sf_DS402_state_machine_g);

  /* End of SystemInitialize for SubSystem: '<Root>/Slaves_control_and_status' */

  /* SystemInitialize for MATLAB Function: '<S23>/AntiSpike' */
  modello_2017b_le_AntiSpike_Init(&modello_2017b_levaRetro_acc_DW.sf_AntiSpike);

  /* SystemInitialize for MATLAB Function: '<S24>/AntiSpike' */
  modello_2017b_le_AntiSpike_Init(&modello_2017b_levaRetro_acc_DW.sf_AntiSpike_b);

  /* SystemInitialize for MATLAB Function: '<S26>/MATLAB Function' */
  modello_2017b_levaRetro_acc_DW.retroState = 0.0;

  /* SystemInitialize for Chart: '<S26>/static_Prova_griglia' */
  modello_2017b_levaRetro_acc_DW.sfEvent = -1;
  modello_2017b_levaRetro_acc_DW.is_active_asse_x = 0U;
  modello_2017b_levaRetro_acc_DW.is_asse_x = modello_20_IN_NO_ACTIVE_CHILD_h;
  modello_2017b_levaRetro_acc_DW.is_active_asse_y = 0U;
  modello_2017b_levaRetro_acc_DW.is_asse_y = modello_20_IN_NO_ACTIVE_CHILD_h;
  modello_2017b_levaRetro_acc_DW.is_active_c152_modello_2017b_le = 0U;
  modello_2017b_levaRetro_acc_DW.muro_dx = 0.0;
  modello_2017b_levaRetro_acc_DW.muro_sx = 0.0;
  modello_2017b_levaRetro_acc_DW.corsa_marcia_x = 0.0;
  modello_2017b_levaRetro_acc_DW.punto_marcia_innestata = 0.0;
  modello_2017b_levaRetro_acc_DW.up_gear = 0.0;
  modello_2017b_levaRetro_acc_B.statex_g = 0.0F;
  modello_2017b_levaRetro_acc_B.statey = 0.0F;

  /* SystemInitialize for Enabled SubSystem: '<S92>/first_gear ' */
  /* InitializeConditions for Memory: '<S95>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_am =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_l;

  /* End of SystemInitialize for SubSystem: '<S92>/first_gear ' */

  /* SystemInitialize for Enabled SubSystem: '<S92>/second_gear' */
  /* InitializeConditions for Memory: '<S98>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_l0 =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_e;

  /* End of SystemInitialize for SubSystem: '<S92>/second_gear' */

  /* SystemInitialize for Enabled SubSystem: '<S92>/third_gear' */
  /* InitializeConditions for Memory: '<S101>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_p =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_kl;

  /* End of SystemInitialize for SubSystem: '<S92>/third_gear' */

  /* SystemInitialize for Enabled SubSystem: '<S92>/fourth_gear' */
  /* InitializeConditions for Memory: '<S96>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_i =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_c;

  /* End of SystemInitialize for SubSystem: '<S92>/fourth_gear' */

  /* SystemInitialize for Enabled SubSystem: '<S92>/fifth_gear' */
  /* InitializeConditions for Memory: '<S94>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_hl =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition;

  /* End of SystemInitialize for SubSystem: '<S92>/fifth_gear' */

  /* SystemInitialize for Enabled SubSystem: '<S92>/sixth_gear' */
  /* InitializeConditions for Memory: '<S100>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_of =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_b;

  /* End of SystemInitialize for SubSystem: '<S92>/sixth_gear' */

  /* SystemInitialize for Enabled SubSystem: '<S92>/reverse_gear' */
  /* InitializeConditions for Memory: '<S97>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_fv =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_k;

  /* End of SystemInitialize for SubSystem: '<S92>/reverse_gear' */

  /* SystemInitialize for Enabled SubSystem: '<S92>/selection_axis1' */
  /* InitializeConditions for Memory: '<S99>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_b =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_ku;

  /* SystemInitialize for MATLAB Function: '<S99>/offset' */
  modello_2017b_levaRetro_acc_DW.toggle = 0.0;
  modello_2017b_levaRetro_acc_DW.force_ = 0.0;

  /* End of SystemInitialize for SubSystem: '<S92>/selection_axis1' */

  /* SystemInitialize for Chart: '<S26>/dynamic' */
  modello_2017b_levaRetro_acc_DW.sfEvent_m = -1;
  modello_2017b_levaRetro_acc_DW.is_active_asse_x_dyn = 0U;
  modello_2017b_levaRetro_acc_DW.is_asse_x_dyn = modello_20_IN_NO_ACTIVE_CHILD_h;
  modello_2017b_levaRetro_acc_DW.is_active_c52_modello_2017b_lev = 0U;
  modello_2017b_levaRetro_acc_DW.muro_dx_p = 0.0;
  modello_2017b_levaRetro_acc_DW.muro_sx_l = 0.0;
  modello_2017b_levaRetro_acc_DW.corsa_marcia_x_e = 0.0;
  modello_2017b_levaRetro_acc_DW.punto_marcia_innestata_p = 0.0;
  modello_2017b_levaRetro_acc_DW.up_gear_f = 0.0;
  modello_2017b_levaRetro_acc_B.statex = 0.0;

  /* SystemInitialize for Enabled SubSystem: '<S133>/first_gear ' */
  /* InitializeConditions for Memory: '<S136>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_l =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_n;

  /* End of SystemInitialize for SubSystem: '<S133>/first_gear ' */

  /* SystemInitialize for Enabled SubSystem: '<S133>/second_gear' */
  /* InitializeConditions for Memory: '<S139>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_h =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_a;

  /* End of SystemInitialize for SubSystem: '<S133>/second_gear' */

  /* SystemInitialize for Enabled SubSystem: '<S133>/third_gear' */
  /* InitializeConditions for Memory: '<S142>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_a =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_i;

  /* End of SystemInitialize for SubSystem: '<S133>/third_gear' */

  /* SystemInitialize for Enabled SubSystem: '<S133>/fourth_gear' */
  /* InitializeConditions for Memory: '<S137>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_o =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_o;

  /* End of SystemInitialize for SubSystem: '<S133>/fourth_gear' */

  /* SystemInitialize for Enabled SubSystem: '<S133>/fifth_gear' */
  /* InitializeConditions for Memory: '<S135>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_g4 =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_ew;

  /* End of SystemInitialize for SubSystem: '<S133>/fifth_gear' */

  /* SystemInitialize for Enabled SubSystem: '<S133>/sixth_gear' */
  /* InitializeConditions for Memory: '<S141>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_g =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_a5;

  /* End of SystemInitialize for SubSystem: '<S133>/sixth_gear' */

  /* SystemInitialize for Enabled SubSystem: '<S133>/reverse_gear' */
  /* InitializeConditions for Memory: '<S138>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_f =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_j;

  /* End of SystemInitialize for SubSystem: '<S133>/reverse_gear' */

  /* SystemInitialize for Enabled SubSystem: '<S176>/crossgate_selection2_profile' */
  /* SystemInitialize for Chart: '<S183>/Chart1' */
  modello_2017b_levaRetro_acc_DW.sfEvent_h = -1;
  modello_2017b_levaRetro_acc_DW.is_state_machine =
    modello_20_IN_NO_ACTIVE_CHILD_h;
  modello_2017b_levaRetro_acc_DW.is_active_c463_modello_2017b_le = 0U;
  modello_2017b_levaRetro_acc_DW.is_c463_modello_2017b_levaRetro =
    modello_20_IN_NO_ACTIVE_CHILD_h;
  modello_2017b_levaRetro_acc_B.curve = 0.0;
  modello_2017b_levaRetro_acc_B.debug = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S176>/crossgate_selection2_profile' */

  /* SystemInitialize for Enabled SubSystem: '<S176>/crossgate_selection1_profile' */
  /* SystemInitialize for Chart: '<S181>/Chart1' */
  modello_2017b_levaRetro_acc_DW.sfEvent_l = -1;
  modello_2017b_levaRetro_acc_DW.is_state_machine_j =
    modello_20_IN_NO_ACTIVE_CHILD_h;
  modello_2017b_levaRetro_acc_DW.is_active_c451_modello_2017b_le = 0U;
  modello_2017b_levaRetro_acc_DW.is_c451_modello_2017b_levaRetro =
    modello_20_IN_NO_ACTIVE_CHILD_h;
  modello_2017b_levaRetro_acc_B.curve_f = 0.0;
  modello_2017b_levaRetro_acc_B.debug_i = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S176>/crossgate_selection1_profile' */

  /* SystemInitialize for Enabled SubSystem: '<S89>/inside_gear_path' */
  /* InitializeConditions for Memory: '<S228>/Memory' */
  modello_2017b_levaRetro_acc_DW.Memory_PreviousInput_j =
    modello_2017b_levaRetro_acc_P.Memory_InitialCondition_ki;

  /* End of SystemInitialize for SubSystem: '<S89>/inside_gear_path' */

  /* SystemInitialize for MATLAB Function: '<S89>/muro_marcia_dx' */
  modello_2017b_levaRetro_acc_DW.last_state_not_empty_p = false;

  /* SystemInitialize for MATLAB Function: '<S89>/muro_marcia_sx' */
  modello_2017b_levaRetro_acc_DW.last_state_not_empty = false;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  modello_2017b_levaRetro_acc_DW.sfEvent_b = -1;
  modello_2017b_levaRetro_acc_DW.is_active_c27_modello_2017b_lev = 0U;
  modello_2017b_levaRetro_acc_DW.is_c27_modello_2017b_levaRetro_ =
    modello_20_IN_NO_ACTIVE_CHILD_h;

  /* SystemInitialize for MATLAB Function: '<S89>/MATLAB Function2' */
  modello_2017b_levaRetro_acc_DW.y_not_empty = false;
  modello_2017b_levaRetro_acc_DW.prev_state = 3.0;
}

/* Model terminate function */
static void modello_2017b_levaRetro_acc_terminate(void)
{
  /* Terminate for S-Function (xpcethercatgetstate): '<S4>/EtherCAT Get State  ' */
  /* Level2 S-Function Block: '<S4>/EtherCAT Get State  ' (xpcethercatgetstate) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<Root>/Slaves_control_and_status' */

  /* Terminate for S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive1' */
  /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive1' (xpcethercatpdorx) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive3' */
  /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive3' (xpcethercatpdorx) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive4' */
  /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive4' (xpcethercatpdorx) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive2' */
  /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive2' (xpcethercatpdorx) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S40>/Drive_statusword' */
  /* Level2 S-Function Block: '<S40>/Drive_statusword' (xpcethercatpdorx) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S40>/Drive_controlword' */
  /* Level2 S-Function Block: '<S40>/Drive_controlword' (xpcethercatpdotx) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S41>/EtherCAT PDO Transmit 2' */
  /* Level2 S-Function Block: '<S41>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S46>/EtherCAT PDO Receive1' */
  /* Level2 S-Function Block: '<S46>/EtherCAT PDO Receive1' (xpcethercatpdorx) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S46>/EtherCAT PDO Receive3' */
  /* Level2 S-Function Block: '<S46>/EtherCAT PDO Receive3' (xpcethercatpdorx) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S46>/EtherCAT PDO Receive4' */
  /* Level2 S-Function Block: '<S46>/EtherCAT PDO Receive4' (xpcethercatpdorx) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S46>/EtherCAT PDO Receive2' */
  /* Level2 S-Function Block: '<S46>/EtherCAT PDO Receive2' (xpcethercatpdorx) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S44>/Drive_statusword' */
  /* Level2 S-Function Block: '<S44>/Drive_statusword' (xpcethercatpdorx) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S44>/Drive_controlword' */
  /* Level2 S-Function Block: '<S44>/Drive_controlword' (xpcethercatpdotx) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S45>/EtherCAT PDO Transmit 2' */
  /* Level2 S-Function Block: '<S45>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<Root>/Slaves_control_and_status' */

  /* Terminate for S-Function (slrtUDPSend): '<Root>/UDP Send1' */
  /* Level2 S-Function Block: '<Root>/UDP Send1' (slrtUDPSend) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (slrtUDPSend): '<Root>/UDP Send2' */
  /* Level2 S-Function Block: '<Root>/UDP Send2' (slrtUDPSend) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatsetstate): '<S4>/EtherCAT Set State ' */
  /* Level2 S-Function Block: '<S4>/EtherCAT Set State ' (xpcethercatsetstate) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (slrtUDPReceive): '<Root>/UDP Receive' */
  /* Level2 S-Function Block: '<Root>/UDP Receive' (slrtUDPReceive) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (slrtUDPSend): '<Root>/UDP Send3' */
  /* Level2 S-Function Block: '<Root>/UDP Send3' (slrtUDPSend) */
  {
    SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* user code (Terminate function Trailer) */

  /*------------ S-Function Block: <S4>/EtherCAT Init 1 Process Shutdown Network ------------*/
  {
    int_T status;
    if (!xpcIsModelInit()) {
      releaseNIC( 3, 0, 0 );
      status = xpcEtherCATstop(0, 1000 /* 1 second timeout */
        );
    }
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  modello_2017b_levaRetro_acc_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  modello_2017b_levaRetro_acc_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  modello_2017b_levaRetro_acc_initialize();
}

void MdlTerminate(void)
{
  modello_2017b_levaRetro_acc_terminate();
}

/* Registration function */
RT_MODEL_modello_2017b_levaRetro_acc_T *modello_2017b_levaRetro_acc(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)modello_2017b_levaRetro_acc_M, 0,
                sizeof(RT_MODEL_modello_2017b_levaRetro_acc_T));
  rtsiSetSolverName(&modello_2017b_levaRetro_acc_M->solverInfo,
                    "FixedStepDiscrete");
  modello_2017b_levaRetro_acc_M->solverInfoPtr =
    (&modello_2017b_levaRetro_acc_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      modello_2017b_levaRetro_acc_M->Timing.sampleTimeTaskIDArray;
    int_T i;
    for (i = 0; i < 5; i++) {
      mdlTsMap[i] = i;
    }

    modello_2017b_levaRetro_acc_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    modello_2017b_levaRetro_acc_M->Timing.sampleTimes =
      (&modello_2017b_levaRetro_acc_M->Timing.sampleTimesArray[0]);
    modello_2017b_levaRetro_acc_M->Timing.offsetTimes =
      (&modello_2017b_levaRetro_acc_M->Timing.offsetTimesArray[0]);

    /* task periods */
    modello_2017b_levaRetro_acc_M->Timing.sampleTimes[0] = (0.00025);
    modello_2017b_levaRetro_acc_M->Timing.sampleTimes[1] = (0.0015);
    modello_2017b_levaRetro_acc_M->Timing.sampleTimes[2] = (0.002);
    modello_2017b_levaRetro_acc_M->Timing.sampleTimes[3] = (0.02);
    modello_2017b_levaRetro_acc_M->Timing.sampleTimes[4] = (0.06);

    /* task offsets */
    modello_2017b_levaRetro_acc_M->Timing.offsetTimes[0] = (0.0);
    modello_2017b_levaRetro_acc_M->Timing.offsetTimes[1] = (0.0);
    modello_2017b_levaRetro_acc_M->Timing.offsetTimes[2] = (0.0);
    modello_2017b_levaRetro_acc_M->Timing.offsetTimes[3] = (0.0);
    modello_2017b_levaRetro_acc_M->Timing.offsetTimes[4] = (0.0);
  }

  rtmSetTPtr(modello_2017b_levaRetro_acc_M,
             &modello_2017b_levaRetro_acc_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = modello_2017b_levaRetro_acc_M->Timing.sampleHitArray;
    int_T i;
    for (i = 0; i < 5; i++) {
      mdlSampleHits[i] = 1;
    }

    modello_2017b_levaRetro_acc_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(modello_2017b_levaRetro_acc_M, -1);
  modello_2017b_levaRetro_acc_M->Timing.stepSize0 = 0.00025;
  modello_2017b_levaRetro_acc_M->Timing.stepSize1 = 0.0015;
  modello_2017b_levaRetro_acc_M->Timing.stepSize2 = 0.002;
  modello_2017b_levaRetro_acc_M->Timing.stepSize3 = 0.02;
  modello_2017b_levaRetro_acc_M->Timing.stepSize4 = 0.06;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    modello_2017b_levaRetro_acc_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(modello_2017b_levaRetro_acc_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(modello_2017b_levaRetro_acc_M->rtwLogInfo, (NULL));
    rtliSetLogT(modello_2017b_levaRetro_acc_M->rtwLogInfo, "tout");
    rtliSetLogX(modello_2017b_levaRetro_acc_M->rtwLogInfo, "");
    rtliSetLogXFinal(modello_2017b_levaRetro_acc_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(modello_2017b_levaRetro_acc_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(modello_2017b_levaRetro_acc_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(modello_2017b_levaRetro_acc_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(modello_2017b_levaRetro_acc_M->rtwLogInfo, 1);

    /*
     * Set pointers to the data and signal info for each output
     */
    {
      static void * rt_LoggedOutputSignalPtrs[] = {
        &modello_2017b_levaRetro_acc_Y.position_x,
        &modello_2017b_levaRetro_acc_Y.force_x,
        &modello_2017b_levaRetro_acc_Y.position_y,
        &modello_2017b_levaRetro_acc_Y.force_y
      };

      rtliSetLogYSignalPtrs(modello_2017b_levaRetro_acc_M->rtwLogInfo,
                            ((LogSignalPtrsType)rt_LoggedOutputSignalPtrs));
    }

    {
      static int_T rt_LoggedOutputWidths[] = {
        1,
        1,
        1,
        1
      };

      static int_T rt_LoggedOutputNumDimensions[] = {
        1,
        1,
        1,
        1
      };

      static int_T rt_LoggedOutputDimensions[] = {
        1,
        1,
        1,
        1
      };

      static boolean_T rt_LoggedOutputIsVarDims[] = {
        0,
        0,
        0,
        0
      };

      static void* rt_LoggedCurrentSignalDimensions[] = {
        (NULL),
        (NULL),
        (NULL),
        (NULL)
      };

      static int_T rt_LoggedCurrentSignalDimensionsSize[] = {
        4,
        4,
        4,
        4
      };

      static BuiltInDTypeId rt_LoggedOutputDataTypeIds[] = {
        SS_SINGLE,
        SS_SINGLE,
        SS_SINGLE,
        SS_SINGLE
      };

      static int_T rt_LoggedOutputComplexSignals[] = {
        0,
        0,
        0,
        0
      };

      static RTWPreprocessingFcnPtr rt_LoggingPreprocessingFcnPtrs[] = {
        (NULL),
        (NULL),
        (NULL),
        (NULL)
      };

      static const char_T *rt_LoggedOutputLabels[] = {
        "",
        "",
        "",
        "" };

      static const char_T *rt_LoggedOutputBlockNames[] = {
        "modello_2017b_levaRetro_acc/position_x",
        "modello_2017b_levaRetro_acc/force_x",
        "modello_2017b_levaRetro_acc/position_y",
        "modello_2017b_levaRetro_acc/force_y" };

      static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert[] = {
        { 0, SS_SINGLE, SS_SINGLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_SINGLE, SS_SINGLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_SINGLE, SS_SINGLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_SINGLE, SS_SINGLE, 0, 0, 0, 1.0, 0, 0.0 }
      };

      static RTWLogSignalInfo rt_LoggedOutputSignalInfo[] = {
        {
          4,
          rt_LoggedOutputWidths,
          rt_LoggedOutputNumDimensions,
          rt_LoggedOutputDimensions,
          rt_LoggedOutputIsVarDims,
          rt_LoggedCurrentSignalDimensions,
          rt_LoggedCurrentSignalDimensionsSize,
          rt_LoggedOutputDataTypeIds,
          rt_LoggedOutputComplexSignals,
          (NULL),
          rt_LoggingPreprocessingFcnPtrs,

          { rt_LoggedOutputLabels },
          (NULL),
          (NULL),
          (NULL),

          { rt_LoggedOutputBlockNames },

          { (NULL) },
          (NULL),
          rt_RTWLogDataTypeConvert
        }
      };

      rtliSetLogYSignalInfo(modello_2017b_levaRetro_acc_M->rtwLogInfo,
                            rt_LoggedOutputSignalInfo);

      /* set currSigDims field */
      rt_LoggedCurrentSignalDimensions[0] = &rt_LoggedOutputWidths[0];
      rt_LoggedCurrentSignalDimensions[1] = &rt_LoggedOutputWidths[1];
      rt_LoggedCurrentSignalDimensions[2] = &rt_LoggedOutputWidths[2];
      rt_LoggedCurrentSignalDimensions[3] = &rt_LoggedOutputWidths[3];
    }

    rtliSetLogY(modello_2017b_levaRetro_acc_M->rtwLogInfo, "yout");
  }

  modello_2017b_levaRetro_acc_M->solverInfoPtr =
    (&modello_2017b_levaRetro_acc_M->solverInfo);
  modello_2017b_levaRetro_acc_M->Timing.stepSize = (0.00025);
  rtsiSetFixedStepSize(&modello_2017b_levaRetro_acc_M->solverInfo, 0.00025);
  rtsiSetSolverMode(&modello_2017b_levaRetro_acc_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  modello_2017b_levaRetro_acc_M->blockIO = ((void *)
    &modello_2017b_levaRetro_acc_B);
  (void) memset(((void *) &modello_2017b_levaRetro_acc_B), 0,
                sizeof(B_modello_2017b_levaRetro_acc_T));

  /* parameters */
  modello_2017b_levaRetro_acc_M->defaultParam = ((real_T *)
    &modello_2017b_levaRetro_acc_P);

  /* states (dwork) */
  modello_2017b_levaRetro_acc_M->dwork = ((void *)
    &modello_2017b_levaRetro_acc_DW);
  (void) memset((void *)&modello_2017b_levaRetro_acc_DW, 0,
                sizeof(DW_modello_2017b_levaRetro_acc_T));

  /* external outputs */
  modello_2017b_levaRetro_acc_M->outputs = (&modello_2017b_levaRetro_acc_Y);
  (void) memset((void *)&modello_2017b_levaRetro_acc_Y, 0,
                sizeof(ExtY_modello_2017b_levaRetro_acc_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  modello_2017b_levaRetro_acc_InitializeDataMapInfo();

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.sfcnInfo;
    modello_2017b_levaRetro_acc_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (modello_2017b_levaRetro_acc_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &modello_2017b_levaRetro_acc_M->Sizes.numSampTimes);
    modello_2017b_levaRetro_acc_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(modello_2017b_levaRetro_acc_M)[0]);
    modello_2017b_levaRetro_acc_M->NonInlinedSFcns.taskTimePtrs[1] =
      &(rtmGetTPtr(modello_2017b_levaRetro_acc_M)[1]);
    modello_2017b_levaRetro_acc_M->NonInlinedSFcns.taskTimePtrs[2] =
      &(rtmGetTPtr(modello_2017b_levaRetro_acc_M)[2]);
    modello_2017b_levaRetro_acc_M->NonInlinedSFcns.taskTimePtrs[3] =
      &(rtmGetTPtr(modello_2017b_levaRetro_acc_M)[3]);
    modello_2017b_levaRetro_acc_M->NonInlinedSFcns.taskTimePtrs[4] =
      &(rtmGetTPtr(modello_2017b_levaRetro_acc_M)[4]);
    rtssSetTPtrPtr(sfcnInfo,
                   modello_2017b_levaRetro_acc_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(modello_2017b_levaRetro_acc_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(modello_2017b_levaRetro_acc_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (modello_2017b_levaRetro_acc_M));
    rtssSetStepSizePtr(sfcnInfo, &modello_2017b_levaRetro_acc_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (modello_2017b_levaRetro_acc_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &modello_2017b_levaRetro_acc_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &modello_2017b_levaRetro_acc_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &modello_2017b_levaRetro_acc_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &modello_2017b_levaRetro_acc_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &modello_2017b_levaRetro_acc_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &modello_2017b_levaRetro_acc_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &modello_2017b_levaRetro_acc_M->solverInfoPtr);
  }

  modello_2017b_levaRetro_acc_M->Sizes.numSFcns = (20);

  /* register each child */
  {
    (void) memset((void *)
                  &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  20*sizeof(SimStruct));
    modello_2017b_levaRetro_acc_M->childSfunctions =
      (&modello_2017b_levaRetro_acc_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 20; i++) {
        modello_2017b_levaRetro_acc_M->childSfunctions[i] =
          (&modello_2017b_levaRetro_acc_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<S42>/EtherCAT PDO Receive1 (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &modello_2017b_levaRetro_acc_B.EtherCATPDOReceive1));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive1");
      ssSetPath(rts,
                "modello_2017b_levaRetro_acc/Slaves_control_and_status/x_axis_drive_control/drive_output/EtherCAT PDO Receive1");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive1_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &modello_2017b_levaRetro_acc_DW.EtherCATPDOReceive1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &modello_2017b_levaRetro_acc_DW.EtherCATPDOReceive1_IWORK[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<S42>/EtherCAT PDO Receive3 (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &modello_2017b_levaRetro_acc_B.EtherCATPDOReceive3));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive3");
      ssSetPath(rts,
                "modello_2017b_levaRetro_acc/Slaves_control_and_status/x_axis_drive_control/drive_output/EtherCAT PDO Receive3");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive3_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &modello_2017b_levaRetro_acc_DW.EtherCATPDOReceive3_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &modello_2017b_levaRetro_acc_DW.EtherCATPDOReceive3_IWORK[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<S42>/EtherCAT PDO Receive4 (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn2.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int16_T *)
            &modello_2017b_levaRetro_acc_B.EtherCATPDOReceive4));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive4");
      ssSetPath(rts,
                "modello_2017b_levaRetro_acc/Slaves_control_and_status/x_axis_drive_control/drive_output/EtherCAT PDO Receive4");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive4_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive4_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive4_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &modello_2017b_levaRetro_acc_DW.EtherCATPDOReceive4_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &modello_2017b_levaRetro_acc_DW.EtherCATPDOReceive4_IWORK[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<S42>/EtherCAT PDO Receive2 (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn3.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &modello_2017b_levaRetro_acc_B.EtherCATPDOReceive2));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive2");
      ssSetPath(rts,
                "modello_2017b_levaRetro_acc/Slaves_control_and_status/x_axis_drive_control/drive_output/EtherCAT PDO Receive2");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive2_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &modello_2017b_levaRetro_acc_DW.EtherCATPDOReceive2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &modello_2017b_levaRetro_acc_DW.EtherCATPDOReceive2_IWORK[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<S40>/Drive_statusword (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn4.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &modello_2017b_levaRetro_acc_B.Drive_statusword));
        }
      }

      /* path info */
      ssSetModelName(rts, "Drive_statusword");
      ssSetPath(rts,
                "modello_2017b_levaRetro_acc/Slaves_control_and_status/x_axis_drive_control/Drive_state/Drive_statusword");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_statusword_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_statusword_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_statusword_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_statusword_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_statusword_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_statusword_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_statusword_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &modello_2017b_levaRetro_acc_DW.Drive_statusword_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &modello_2017b_levaRetro_acc_DW.Drive_statusword_IWORK[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<S40>/Drive_controlword (xpcethercatpdotx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [5]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn5.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &modello_2017b_levaRetro_acc_B.DataTypeConversion_g);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Drive_controlword");
      ssSetPath(rts,
                "modello_2017b_levaRetro_acc/Slaves_control_and_status/x_axis_drive_control/Drive_state/Drive_controlword");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_controlword_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_controlword_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_controlword_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_controlword_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_controlword_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_controlword_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_controlword_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &modello_2017b_levaRetro_acc_DW.Drive_controlword_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &modello_2017b_levaRetro_acc_DW.Drive_controlword_IWORK[0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<S41>/EtherCAT PDO Transmit 2 (xpcethercatpdotx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [6]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn6.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &modello_2017b_levaRetro_acc_B.Memory1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 2");
      ssSetPath(rts,
                "modello_2017b_levaRetro_acc/Slaves_control_and_status/x_axis_drive_control/drive_input/EtherCAT PDO Transmit 2");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOTransmit2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOTransmit2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOTransmit2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOTransmit2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOTransmit2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOTransmit2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOTransmit2_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &modello_2017b_levaRetro_acc_DW.EtherCATPDOTransmit2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &modello_2017b_levaRetro_acc_DW.EtherCATPDOTransmit2_IWORK[0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<S46>/EtherCAT PDO Receive1 (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [7]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn7.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &modello_2017b_levaRetro_acc_B.EtherCATPDOReceive1_a));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive1");
      ssSetPath(rts,
                "modello_2017b_levaRetro_acc/Slaves_control_and_status/y_axis_drive_control/drive_output/EtherCAT PDO Receive1");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive1_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive1_P2_Size_o);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive1_P3_Size_p);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive1_P4_Size_m);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive1_P5_Size_n);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive1_P6_Size_o);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive1_P7_Size_o);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &modello_2017b_levaRetro_acc_DW.EtherCATPDOReceive1_IWORK_b[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &modello_2017b_levaRetro_acc_DW.EtherCATPDOReceive1_IWORK_b[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<S46>/EtherCAT PDO Receive3 (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [8]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn8.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &modello_2017b_levaRetro_acc_B.EtherCATPDOReceive3_l));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive3");
      ssSetPath(rts,
                "modello_2017b_levaRetro_acc/Slaves_control_and_status/y_axis_drive_control/drive_output/EtherCAT PDO Receive3");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive3_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive3_P2_Size_g);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive3_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive3_P4_Size_m);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive3_P5_Size_l);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive3_P6_Size_b);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive3_P7_Size_e);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &modello_2017b_levaRetro_acc_DW.EtherCATPDOReceive3_IWORK_f[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &modello_2017b_levaRetro_acc_DW.EtherCATPDOReceive3_IWORK_f[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<S46>/EtherCAT PDO Receive4 (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [9]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[9]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [9]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[9]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn9.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn9.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int16_T *)
            &modello_2017b_levaRetro_acc_B.EtherCATPDOReceive4_a));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive4");
      ssSetPath(rts,
                "modello_2017b_levaRetro_acc/Slaves_control_and_status/y_axis_drive_control/drive_output/EtherCAT PDO Receive4");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive4_P1_Size_j);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive4_P2_Size_c);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive4_P3_Size_c);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive4_P4_Size_d);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive4_P5_Size_n);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive4_P6_Size_j);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive4_P7_Size_j);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &modello_2017b_levaRetro_acc_DW.EtherCATPDOReceive4_IWORK_m[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &modello_2017b_levaRetro_acc_DW.EtherCATPDOReceive4_IWORK_m[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<S46>/EtherCAT PDO Receive2 (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [10]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[10]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [10]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[10]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn10.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &modello_2017b_levaRetro_acc_M->
          NonInlinedSFcns.Sfcn10.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &modello_2017b_levaRetro_acc_B.EtherCATPDOReceive2_h));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive2");
      ssSetPath(rts,
                "modello_2017b_levaRetro_acc/Slaves_control_and_status/y_axis_drive_control/drive_output/EtherCAT PDO Receive2");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive2_P1_Size_c);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive2_P2_Size_l);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive2_P3_Size_h);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive2_P4_Size_h);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive2_P5_Size_p);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive2_P6_Size_n);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOReceive2_P7_Size_f);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &modello_2017b_levaRetro_acc_DW.EtherCATPDOReceive2_IWORK_c[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn10.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn10.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &modello_2017b_levaRetro_acc_DW.EtherCATPDOReceive2_IWORK_c[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<S44>/Drive_statusword (xpcethercatpdorx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [11]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[11]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [11]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[11]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn11.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &modello_2017b_levaRetro_acc_M->
          NonInlinedSFcns.Sfcn11.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &modello_2017b_levaRetro_acc_B.Drive_statusword_m));
        }
      }

      /* path info */
      ssSetModelName(rts, "Drive_statusword");
      ssSetPath(rts,
                "modello_2017b_levaRetro_acc/Slaves_control_and_status/y_axis_drive_control/Drive_state/Drive_statusword");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_statusword_P1_Size_n);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_statusword_P2_Size_f);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_statusword_P3_Size_b);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_statusword_P4_Size_i);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_statusword_P5_Size_j);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_statusword_P6_Size_i);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_statusword_P7_Size_f);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &modello_2017b_levaRetro_acc_DW.Drive_statusword_IWORK_a[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn11.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn11.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &modello_2017b_levaRetro_acc_DW.Drive_statusword_IWORK_a[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<S44>/Drive_controlword (xpcethercatpdotx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [12]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[12]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [12]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn12.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn12.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &modello_2017b_levaRetro_acc_B.DataTypeConversion_ph);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Drive_controlword");
      ssSetPath(rts,
                "modello_2017b_levaRetro_acc/Slaves_control_and_status/y_axis_drive_control/Drive_state/Drive_controlword");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_controlword_P1_Size_k);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_controlword_P2_Size_p);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_controlword_P3_Size_g);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_controlword_P4_Size_e);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_controlword_P5_Size_p);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_controlword_P6_Size_b);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       modello_2017b_levaRetro_acc_P.Drive_controlword_P7_Size_f);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &modello_2017b_levaRetro_acc_DW.Drive_controlword_IWORK_a[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn12.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn12.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &modello_2017b_levaRetro_acc_DW.Drive_controlword_IWORK_a[0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<S45>/EtherCAT PDO Transmit 2 (xpcethercatpdotx) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [13]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[13]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [13]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn13.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &modello_2017b_levaRetro_acc_B.Memory2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 2");
      ssSetPath(rts,
                "modello_2017b_levaRetro_acc/Slaves_control_and_status/y_axis_drive_control/drive_input/EtherCAT PDO Transmit 2");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOTransmit2_P1_Size_f);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOTransmit2_P2_Size_h);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOTransmit2_P3_Size_h);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOTransmit2_P4_Size_k);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOTransmit2_P5_Size_i);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOTransmit2_P6_Size_c);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATPDOTransmit2_P7_Size_o);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &modello_2017b_levaRetro_acc_DW.EtherCATPDOTransmit2_IWORK_m[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn13.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn13.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &modello_2017b_levaRetro_acc_DW.EtherCATPDOTransmit2_IWORK_m
                   [0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<S4>/EtherCAT Get State   (xpcethercatgetstate) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [14]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[14]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [14]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[14]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn14.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &modello_2017b_levaRetro_acc_M->
          NonInlinedSFcns.Sfcn14.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &modello_2017b_levaRetro_acc_B.EtherCATGetState));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT Get State  ");
      ssSetPath(rts,
                "modello_2017b_levaRetro_acc/EtherCAT Master Control/EtherCAT Get State  ");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATGetState_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATGetState_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &modello_2017b_levaRetro_acc_DW.EtherCATGetState_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn14.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn14.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &modello_2017b_levaRetro_acc_DW.EtherCATGetState_IWORK);
      }

      /* registration */
      xpcethercatgetstate(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<Root>/UDP Send1 (slrtUDPSend) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [15]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[15]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [15]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[15]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn15.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn15.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               modello_2017b_levaRetro_acc_B.RateTransition);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &modello_2017b_levaRetro_acc_B.zeroforce4);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "UDP Send1");
      ssSetPath(rts, "modello_2017b_levaRetro_acc/UDP Send1");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPSend1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPSend1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPSend1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPSend1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPSend1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPSend1_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &modello_2017b_levaRetro_acc_DW.UDPSend1_IWORK[0]);
      ssSetPWork(rts, (void **) &modello_2017b_levaRetro_acc_DW.UDPSend1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn15.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn15.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &modello_2017b_levaRetro_acc_DW.UDPSend1_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &modello_2017b_levaRetro_acc_DW.UDPSend1_PWORK);
      }

      /* registration */
      slrtUDPSend(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 3;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 4);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<Root>/UDP Send2 (slrtUDPSend) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [16]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[16]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [16]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[16]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn16.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn16.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               modello_2017b_levaRetro_acc_B.RateTransition1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 20);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &modello_2017b_levaRetro_acc_B.zeroforce5);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "UDP Send2");
      ssSetPath(rts, "modello_2017b_levaRetro_acc/UDP Send2");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPSend2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPSend2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPSend2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPSend2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPSend2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPSend2_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &modello_2017b_levaRetro_acc_DW.UDPSend2_IWORK[0]);
      ssSetPWork(rts, (void **) &modello_2017b_levaRetro_acc_DW.UDPSend2_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn16.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn16.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &modello_2017b_levaRetro_acc_DW.UDPSend2_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &modello_2017b_levaRetro_acc_DW.UDPSend2_PWORK);
      }

      /* registration */
      slrtUDPSend(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 20);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<S4>/EtherCAT Set State  (xpcethercatsetstate) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [17]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[17]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [17]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[17]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn17.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn17.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &modello_2017b_levaRetro_acc_B.DataTypeConversion1_dj);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn17.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &modello_2017b_levaRetro_acc_M->
          NonInlinedSFcns.Sfcn17.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &modello_2017b_levaRetro_acc_B.EtherCATSetState_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((int32_T *)
            &modello_2017b_levaRetro_acc_B.EtherCATSetState_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT Set State ");
      ssSetPath(rts,
                "modello_2017b_levaRetro_acc/EtherCAT Master Control/EtherCAT Set State ");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATSetState_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATSetState_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.EtherCATSetState_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &modello_2017b_levaRetro_acc_DW.EtherCATSetState_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn17.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn17.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &modello_2017b_levaRetro_acc_DW.EtherCATSetState_IWORK[0]);
      }

      /* registration */
      xpcethercatsetstate(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortConnected(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<Root>/UDP Receive (slrtUDPReceive) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [18]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[18]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [18]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[18]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn18.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &modello_2017b_levaRetro_acc_M->
          NonInlinedSFcns.Sfcn18.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            modello_2017b_levaRetro_acc_B.UDPReceive_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &modello_2017b_levaRetro_acc_B.UDPReceive_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "UDP Receive");
      ssSetPath(rts, "modello_2017b_levaRetro_acc/UDP Receive");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPReceive_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPReceive_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPReceive_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPReceive_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPReceive_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPReceive_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPReceive_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &modello_2017b_levaRetro_acc_DW.UDPReceive_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &modello_2017b_levaRetro_acc_DW.UDPReceive_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn18.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn18.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &modello_2017b_levaRetro_acc_DW.UDPReceive_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 2);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &modello_2017b_levaRetro_acc_DW.UDPReceive_PWORK[0]);
      }

      /* registration */
      slrtUDPReceive(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0015);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: modello_2017b_levaRetro_acc/<Root>/UDP Send3 (slrtUDPSend) */
    {
      SimStruct *rts = modello_2017b_levaRetro_acc_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap =
        modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.blkInfo2
                         [19]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.inputOutputPortInfo2[19]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, modello_2017b_levaRetro_acc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods2
                           [19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods3
                           [19]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.methods4
                           [19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.statesInfo2
                         [19]);
        ssSetPeriodicStatesInfo(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.periodicStatesInfo[19]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn19.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn19.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               modello_2017b_levaRetro_acc_B.RateTransition2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 16);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &modello_2017b_levaRetro_acc_B.zeroforce6);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "UDP Send3");
      ssSetPath(rts, "modello_2017b_levaRetro_acc/UDP Send3");
      ssSetRTModel(rts,modello_2017b_levaRetro_acc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPSend3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPSend3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPSend3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPSend3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPSend3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       modello_2017b_levaRetro_acc_P.UDPSend3_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &modello_2017b_levaRetro_acc_DW.UDPSend3_IWORK[0]);
      ssSetPWork(rts, (void **) &modello_2017b_levaRetro_acc_DW.UDPSend3_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn19.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &modello_2017b_levaRetro_acc_M->NonInlinedSFcns.Sfcn19.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &modello_2017b_levaRetro_acc_DW.UDPSend3_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &modello_2017b_levaRetro_acc_DW.UDPSend3_PWORK);
      }

      /* registration */
      slrtUDPSend(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.06);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 16);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }
  }

  /* Initialize Sizes */
  modello_2017b_levaRetro_acc_M->Sizes.numContStates = (0);/* Number of continuous states */
  modello_2017b_levaRetro_acc_M->Sizes.numY = (4);/* Number of model outputs */
  modello_2017b_levaRetro_acc_M->Sizes.numU = (0);/* Number of model inputs */
  modello_2017b_levaRetro_acc_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  modello_2017b_levaRetro_acc_M->Sizes.numSampTimes = (5);/* Number of sample times */
  modello_2017b_levaRetro_acc_M->Sizes.numBlocks = (849);/* Number of blocks */
  modello_2017b_levaRetro_acc_M->Sizes.numBlockIO = (552);/* Number of block outputs */
  modello_2017b_levaRetro_acc_M->Sizes.numBlockPrms = (4821);/* Sum of parameter "widths" */
  return modello_2017b_levaRetro_acc_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
