/* Include files */

#include "modello_2017b_levaRetro_acc_sfun.h"
#include "c451_modello_2017b_levaRetro_acc.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "modello_2017b_levaRetro_acc_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c451_IN_NO_ACTIVE_CHILD        ((uint8_T)0U)
#define c451_IN_state_machine          ((uint8_T)1U)
#define c451_IN_BEGIN_LEFT_1           ((uint8_T)1U)
#define c451_IN_BEGIN_LEFT_2           ((uint8_T)2U)
#define c451_IN_BEGIN_RIGHT_1          ((uint8_T)3U)
#define c451_IN_BEGIN_RIGHT_2          ((uint8_T)4U)
#define c451_IN_IDLE                   ((uint8_T)5U)
#define c451_IN_INIT                   ((uint8_T)6U)
#define c451_IN_RETURN_LEFT            ((uint8_T)7U)
#define c451_IN_RETURN_RIGHT           ((uint8_T)8U)
#define c451_IN_SWITCH_BL_RL           ((uint8_T)9U)
#define c451_IN_SWITCH_BR_RR           ((uint8_T)10U)
#define c451_IN_THRESHOLD_BL           ((uint8_T)11U)
#define c451_IN_THRESHOLD_BR           ((uint8_T)12U)
#define c451_IN_TRANSITION_PT_BL_RR_PT_BL_RR2 ((uint8_T)13U)
#define c451_IN_TRANSITION_PT_RL_BR2_PT_RL_BR ((uint8_T)14U)
#define c451_const_eps                 (0.0001)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;

/* Function Declarations */
static void initialize_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void initialize_params_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void enable_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void disable_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c451_update_debugger_state_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void ext_mode_exec_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void set_sim_state_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_st);
static void c451_set_sim_state_side_effects_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void finalize_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void sf_gateway_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void mdl_start_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void initSimStructsc451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c451_state_machine(SFc451_modello_2017b_levaRetro_accInstanceStruct *
  chartInstance);
static void c451_exit_internal_state_machine
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c451_TRANSITION_PT_RL_BR2_PT_RL_BR
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c451_TRANSITION_PT_BL_RR_PT_BL_RR2
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c451_THRESHOLD_BL(SFc451_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance);
static void c451_THRESHOLD_BR(SFc451_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c451_machineNumber, uint32_T
  c451_chartNumber, uint32_T c451_instanceNumber);
static const mxArray *c451_sf_marshallOut(void *chartInstanceVoid, void
  *c451_inData);
static int32_T c451_emlrt_marshallIn
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_u, const emlrtMsgIdentifier *c451_parentId);
static void c451_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c451_mxArrayInData, const char_T *c451_varName, void *c451_outData);
static const mxArray *c451_b_sf_marshallOut(void *chartInstanceVoid, void
  *c451_inData);
static uint8_T c451_b_emlrt_marshallIn
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_b_is_state_machine, const char_T *c451_identifier);
static uint8_T c451_c_emlrt_marshallIn
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_u, const emlrtMsgIdentifier *c451_parentId);
static void c451_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c451_mxArrayInData, const char_T *c451_varName, void *c451_outData);
static const mxArray *c451_c_sf_marshallOut(void *chartInstanceVoid, void
  *c451_inData);
static real_T c451_d_emlrt_marshallIn
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_b_curve, const char_T *c451_identifier);
static real_T c451_e_emlrt_marshallIn
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_u, const emlrtMsgIdentifier *c451_parentId);
static void c451_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c451_mxArrayInData, const char_T *c451_varName, void *c451_outData);
static const mxArray *c451_d_sf_marshallOut(void *chartInstanceVoid, void
  *c451_inData);
static real32_T c451_f_emlrt_marshallIn
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_b_debug, const char_T *c451_identifier);
static real32_T c451_g_emlrt_marshallIn
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_u, const emlrtMsgIdentifier *c451_parentId);
static void c451_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c451_mxArrayInData, const char_T *c451_varName, void *c451_outData);
static const mxArray *c451_h_emlrt_marshallIn
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_b_setSimStateSideEffectsInfo, const char_T *c451_identifier);
static const mxArray *c451_i_emlrt_marshallIn
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_u, const emlrtMsgIdentifier *c451_parentId);
static const mxArray *sf_get_hover_data_for_msg
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, int32_T
   c451_ssid);
static void c451_init_sf_message_store_memory
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void init_dsm_address_info
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void init_simulink_io_address
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc451_modello_2017b_levaRetro_acc(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c451_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c451_doSetSimStateSideEffects = 0U;
  chartInstance->c451_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c451_is_state_machine = c451_IN_NO_ACTIVE_CHILD;
  *chartInstance->c451_is_active_c451_modello_2017b_levaRetro_acc = 0U;
  *chartInstance->c451_is_c451_modello_2017b_levaRetro_acc =
    c451_IN_NO_ACTIVE_CHILD;
  chartInstance->c451_eps = 0.0001;
  _SFD_DATA_RANGE_CHECK(chartInstance->c451_eps, 4U);
  if (!(sf_get_output_port_reusable(chartInstance->S, 1) != 0)) {
    *chartInstance->c451_curve = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 2) != 0)) {
    *chartInstance->c451_debug = 0.0F;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
  }
}

static void initialize_params_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  real_T c451_d0;
  real_T c451_d1;
  real_T c451_d2;
  real_T c451_d3;
  real_T c451_d4;
  real_T c451_d5;
  sf_mex_import_named("crossgate1_begleft_retright_stable_pos",
                      sf_mex_get_sfun_param(chartInstance->S, 0, 0), &c451_d0, 0,
                      0, 0U, 0, 0U, 0);
  chartInstance->c451_crossgate1_begleft_retright_stable_pos = c451_d0;
  sf_mex_import_named("crossgate1_retleft_begright_stable_pos",
                      sf_mex_get_sfun_param(chartInstance->S, 2, 0), &c451_d1, 0,
                      0, 0U, 0, 0U, 0);
  chartInstance->c451_crossgate1_retleft_begright_stable_pos = c451_d1;
  sf_mex_import_named("t_m", sf_mex_get_sfun_param(chartInstance->S, 5, 0),
                      &c451_d2, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c451_t_m = c451_d2;
  sf_mex_import_named("crossgate1_left_pos_threshold", sf_mex_get_sfun_param
                      (chartInstance->S, 1, 0), &c451_d3, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c451_crossgate1_left_pos_threshold = c451_d3;
  sf_mex_import_named("crossgate1_right_pos_threshold", sf_mex_get_sfun_param
                      (chartInstance->S, 3, 0), &c451_d4, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c451_crossgate1_right_pos_threshold = c451_d4;
  sf_mex_import_named("off_sw_curve", sf_mex_get_sfun_param(chartInstance->S, 4,
    0), &c451_d5, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c451_off_sw_curve = c451_d5;
}

static void enable_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c451_update_debugger_state_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  uint32_T c451_prevAniVal;
  c451_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c451_is_active_c451_modello_2017b_levaRetro_acc == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 41U, *chartInstance->c451_sfEvent);
  }

  if (*chartInstance->c451_is_c451_modello_2017b_levaRetro_acc ==
      c451_IN_state_machine) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c451_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c451_sfEvent);
  }

  if (*chartInstance->c451_is_state_machine == c451_IN_IDLE) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c451_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c451_sfEvent);
  }

  if (*chartInstance->c451_is_state_machine == c451_IN_BEGIN_RIGHT_1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c451_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c451_sfEvent);
  }

  if (*chartInstance->c451_is_state_machine ==
      c451_IN_TRANSITION_PT_RL_BR2_PT_RL_BR) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, *chartInstance->c451_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c451_sfEvent);
  }

  if (*chartInstance->c451_is_state_machine == c451_IN_BEGIN_RIGHT_2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c451_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c451_sfEvent);
  }

  if (*chartInstance->c451_is_state_machine == c451_IN_RETURN_LEFT) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c451_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c451_sfEvent);
  }

  if (*chartInstance->c451_is_state_machine == c451_IN_INIT) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c451_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c451_sfEvent);
  }

  if (*chartInstance->c451_is_state_machine ==
      c451_IN_TRANSITION_PT_BL_RR_PT_BL_RR2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c451_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c451_sfEvent);
  }

  if (*chartInstance->c451_is_state_machine == c451_IN_BEGIN_LEFT_2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c451_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c451_sfEvent);
  }

  if (*chartInstance->c451_is_state_machine == c451_IN_SWITCH_BL_RL) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c451_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c451_sfEvent);
  }

  if (*chartInstance->c451_is_state_machine == c451_IN_THRESHOLD_BL) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c451_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c451_sfEvent);
  }

  if (*chartInstance->c451_is_state_machine == c451_IN_THRESHOLD_BR) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c451_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c451_sfEvent);
  }

  if (*chartInstance->c451_is_state_machine == c451_IN_BEGIN_LEFT_1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c451_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c451_sfEvent);
  }

  if (*chartInstance->c451_is_state_machine == c451_IN_SWITCH_BR_RR) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c451_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c451_sfEvent);
  }

  if (*chartInstance->c451_is_state_machine == c451_IN_RETURN_RIGHT) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c451_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c451_sfEvent);
  }

  _SFD_SET_ANIMATION(c451_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  c451_update_debugger_state_c451_modello_2017b_levaRetro_acc(chartInstance);
}

static const mxArray *get_sim_state_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  const mxArray *c451_st;
  const mxArray *c451_y = NULL;
  real_T c451_hoistedGlobal;
  const mxArray *c451_b_y = NULL;
  real32_T c451_b_hoistedGlobal;
  const mxArray *c451_c_y = NULL;
  uint8_T c451_c_hoistedGlobal;
  const mxArray *c451_d_y = NULL;
  uint8_T c451_d_hoistedGlobal;
  const mxArray *c451_e_y = NULL;
  uint8_T c451_e_hoistedGlobal;
  const mxArray *c451_f_y = NULL;
  c451_st = NULL;
  c451_st = NULL;
  c451_y = NULL;
  sf_mex_assign(&c451_y, sf_mex_createcellmatrix(5, 1), false);
  c451_hoistedGlobal = *chartInstance->c451_curve;
  c451_b_y = NULL;
  sf_mex_assign(&c451_b_y, sf_mex_create("y", &c451_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c451_y, 0, c451_b_y);
  c451_b_hoistedGlobal = *chartInstance->c451_debug;
  c451_c_y = NULL;
  sf_mex_assign(&c451_c_y, sf_mex_create("y", &c451_b_hoistedGlobal, 1, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c451_y, 1, c451_c_y);
  c451_c_hoistedGlobal =
    *chartInstance->c451_is_active_c451_modello_2017b_levaRetro_acc;
  c451_d_y = NULL;
  sf_mex_assign(&c451_d_y, sf_mex_create("y", &c451_c_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c451_y, 2, c451_d_y);
  c451_d_hoistedGlobal =
    *chartInstance->c451_is_c451_modello_2017b_levaRetro_acc;
  c451_e_y = NULL;
  sf_mex_assign(&c451_e_y, sf_mex_create("y", &c451_d_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c451_y, 3, c451_e_y);
  c451_e_hoistedGlobal = *chartInstance->c451_is_state_machine;
  c451_f_y = NULL;
  sf_mex_assign(&c451_f_y, sf_mex_create("y", &c451_e_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c451_y, 4, c451_f_y);
  sf_mex_assign(&c451_st, c451_y, false);
  return c451_st;
}

static void set_sim_state_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_st)
{
  const mxArray *c451_u;
  c451_u = sf_mex_dup(c451_st);
  *chartInstance->c451_curve = c451_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c451_u, 0)), "curve");
  *chartInstance->c451_debug = c451_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c451_u, 1)), "debug");
  *chartInstance->c451_is_active_c451_modello_2017b_levaRetro_acc =
    c451_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c451_u, 2)),
    "is_active_c451_modello_2017b_levaRetro_acc");
  *chartInstance->c451_is_c451_modello_2017b_levaRetro_acc =
    c451_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c451_u, 3)),
    "is_c451_modello_2017b_levaRetro_acc");
  *chartInstance->c451_is_state_machine = c451_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c451_u, 4)), "is_state_machine");
  sf_mex_assign(&chartInstance->c451_setSimStateSideEffectsInfo,
                c451_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c451_u, 5)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c451_u);
  chartInstance->c451_doSetSimStateSideEffects = 1U;
  c451_update_debugger_state_c451_modello_2017b_levaRetro_acc(chartInstance);
  sf_mex_destroy(&c451_st);
}

static void c451_set_sim_state_side_effects_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  if (chartInstance->c451_doSetSimStateSideEffects != 0) {
    chartInstance->c451_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c451_setSimStateSideEffectsInfo);
}

static void sf_gateway_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  c451_set_sim_state_side_effects_c451_modello_2017b_levaRetro_acc(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 41U, *chartInstance->c451_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_init, 1U);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c451_pos, 0U);
  *chartInstance->c451_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 41U,
               *chartInstance->c451_sfEvent);
  if (*chartInstance->c451_is_active_c451_modello_2017b_levaRetro_acc == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 41U,
                 *chartInstance->c451_sfEvent);
    *chartInstance->c451_is_active_c451_modello_2017b_levaRetro_acc = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 41U, *chartInstance->c451_sfEvent);
    *chartInstance->c451_is_c451_modello_2017b_levaRetro_acc =
      c451_IN_state_machine;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c451_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c451_sfEvent);
    *chartInstance->c451_curve = 10.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
    *chartInstance->c451_debug = 0.0F;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
    *chartInstance->c451_is_state_machine = c451_IN_IDLE;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c451_sfEvent);
    *chartInstance->c451_curve = 10.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
    *chartInstance->c451_debug = 0.0F;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
  } else {
    c451_state_machine(chartInstance);
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 41U, *chartInstance->c451_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_modello_2017b_levaRetro_accMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  c451_init_sf_message_store_memory(chartInstance);
  sim_mode_is_external(chartInstance->S);
}

static void initSimStructsc451_modello_2017b_levaRetro_acc
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c451_state_machine(SFc451_modello_2017b_levaRetro_accInstanceStruct *
  chartInstance)
{
  boolean_T c451_out;
  boolean_T c451_b_out;
  boolean_T c451_c_out;
  boolean_T c451_d_out;
  boolean_T c451_e_out;
  boolean_T c451_f_out;
  boolean_T c451_temp;
  boolean_T c451_b_temp;
  boolean_T c451_c_temp;
  boolean_T c451_g_out;
  boolean_T c451_h_out;
  boolean_T c451_i_out;
  boolean_T c451_j_out;
  boolean_T c451_k_out;
  boolean_T c451_l_out;
  boolean_T c451_m_out;
  boolean_T c451_n_out;
  boolean_T c451_o_out;
  boolean_T c451_d_temp;
  boolean_T c451_p_out;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, *chartInstance->c451_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 20U,
               *chartInstance->c451_sfEvent);
  c451_out = (CV_TRANSITION_EVAL(20U, (int32_T)(_SFD_CCP_CALL(5U, 20U, 0,
    (boolean_T)CV_RELATIONAL_EVAL(5U, 20U, 0, (real_T)*chartInstance->c451_init,
    0.0, -3, 0U, *chartInstance->c451_init == 0.0F) != 0U,
    *chartInstance->c451_sfEvent) != 0U)) != 0);
  if (c451_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 20U, *chartInstance->c451_sfEvent);
    c451_exit_internal_state_machine(chartInstance);
    *chartInstance->c451_is_state_machine = c451_IN_IDLE;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c451_sfEvent);
    *chartInstance->c451_curve = 10.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
    *chartInstance->c451_debug = 0.0F;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
  } else {
    switch (*chartInstance->c451_is_state_machine) {
     case c451_IN_BEGIN_LEFT_1:
      CV_STATE_EVAL(0, 0, c451_IN_BEGIN_LEFT_1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                   *chartInstance->c451_sfEvent);
      c451_b_out = (CV_TRANSITION_EVAL(8U, (int32_T)(_SFD_CCP_CALL(5U, 8U, 0,
        (boolean_T)CV_RELATIONAL_EVAL(5U, 8U, 0, *chartInstance->c451_pos,
        chartInstance->c451_crossgate1_retleft_begright_stable_pos *
        chartInstance->c451_t_m, -1, 5U, *chartInstance->c451_pos >=
        chartInstance->c451_crossgate1_retleft_begright_stable_pos *
        chartInstance->c451_t_m) != 0U, *chartInstance->c451_sfEvent) != 0U)) !=
                    0);
      if (c451_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c451_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_is_state_machine = c451_IN_BEGIN_LEFT_2;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_curve = 3.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
        *chartInstance->c451_debug = 10.0F;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 18U,
                     *chartInstance->c451_sfEvent);
        c451_i_out = (CV_TRANSITION_EVAL(18U, (int32_T)(_SFD_CCP_CALL(5U, 18U, 0,
          (boolean_T)CV_RELATIONAL_EVAL(5U, 18U, 0, *chartInstance->c451_pos,
          chartInstance->c451_crossgate1_begleft_retright_stable_pos, -1, 3U,
          *chartInstance->c451_pos <=
          chartInstance->c451_crossgate1_begleft_retright_stable_pos) != 0U,
          *chartInstance->c451_sfEvent) != 0U)) != 0);
        if (c451_i_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 18U, *chartInstance->c451_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c451_sfEvent);
          *chartInstance->c451_is_state_machine =
            c451_IN_TRANSITION_PT_BL_RR_PT_BL_RR2;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c451_sfEvent);
          *chartInstance->c451_curve = 5.0;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
          *chartInstance->c451_debug = 7.0F;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                       *chartInstance->c451_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c451_sfEvent);
      break;

     case c451_IN_BEGIN_LEFT_2:
      CV_STATE_EVAL(0, 0, c451_IN_BEGIN_LEFT_2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                   *chartInstance->c451_sfEvent);
      c451_c_out = (CV_TRANSITION_EVAL(9U, (int32_T)(_SFD_CCP_CALL(5U, 9U, 0,
        (boolean_T)CV_RELATIONAL_EVAL(5U, 9U, 0, *chartInstance->c451_pos,
        chartInstance->c451_crossgate1_retleft_begright_stable_pos *
        chartInstance->c451_t_m, -1, 2U, *chartInstance->c451_pos <
        chartInstance->c451_crossgate1_retleft_begright_stable_pos *
        chartInstance->c451_t_m) != 0U, *chartInstance->c451_sfEvent) != 0U)) !=
                    0);
      if (c451_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c451_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_is_state_machine =
          c451_IN_TRANSITION_PT_RL_BR2_PT_RL_BR;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_curve = 6.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
        *chartInstance->c451_debug = 13.0F;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                     *chartInstance->c451_sfEvent);
        c451_j_out = (CV_TRANSITION_EVAL(13U, (int32_T)(_SFD_CCP_CALL(5U, 13U, 0,
          (boolean_T)CV_RELATIONAL_EVAL(5U, 13U, 0, *chartInstance->c451_pos,
          chartInstance->c451_crossgate1_left_pos_threshold, -1, 4U,
          *chartInstance->c451_pos >
          chartInstance->c451_crossgate1_left_pos_threshold) != 0U,
          *chartInstance->c451_sfEvent) != 0U)) != 0);
        if (c451_j_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, *chartInstance->c451_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c451_sfEvent);
          *chartInstance->c451_is_state_machine = c451_IN_THRESHOLD_BL;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c451_sfEvent);
          *chartInstance->c451_curve = 3.0;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
          *chartInstance->c451_debug = 11.0F;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                       *chartInstance->c451_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c451_sfEvent);
      break;

     case c451_IN_BEGIN_RIGHT_1:
      CV_STATE_EVAL(0, 0, c451_IN_BEGIN_RIGHT_1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12U,
                   *chartInstance->c451_sfEvent);
      c451_d_out = (CV_TRANSITION_EVAL(12U, (int32_T)(_SFD_CCP_CALL(5U, 12U, 0,
        (boolean_T)CV_RELATIONAL_EVAL(5U, 12U, 0, *chartInstance->c451_pos,
        chartInstance->c451_crossgate1_retleft_begright_stable_pos, -1, 5U,
        *chartInstance->c451_pos >=
        chartInstance->c451_crossgate1_retleft_begright_stable_pos) != 0U,
        *chartInstance->c451_sfEvent) != 0U)) != 0);
      if (c451_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, *chartInstance->c451_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_is_state_machine =
          c451_IN_TRANSITION_PT_RL_BR2_PT_RL_BR;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_curve = 6.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
        *chartInstance->c451_debug = 13.0F;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                     *chartInstance->c451_sfEvent);
        c451_k_out = (CV_TRANSITION_EVAL(1U, (int32_T)(_SFD_CCP_CALL(5U, 1U, 0,
          (boolean_T)CV_RELATIONAL_EVAL(5U, 1U, 0, *chartInstance->c451_pos,
          chartInstance->c451_crossgate1_begleft_retright_stable_pos *
          chartInstance->c451_t_m, -1, 3U, *chartInstance->c451_pos <=
          chartInstance->c451_crossgate1_begleft_retright_stable_pos *
          chartInstance->c451_t_m) != 0U, *chartInstance->c451_sfEvent) != 0U))
                      != 0);
        if (c451_k_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c451_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c451_sfEvent);
          *chartInstance->c451_is_state_machine = c451_IN_BEGIN_RIGHT_2;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c451_sfEvent);
          *chartInstance->c451_curve = 1.0;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
          *chartInstance->c451_debug = 4.0F;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                       *chartInstance->c451_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c451_sfEvent);
      break;

     case c451_IN_BEGIN_RIGHT_2:
      CV_STATE_EVAL(0, 0, c451_IN_BEGIN_RIGHT_2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   *chartInstance->c451_sfEvent);
      c451_e_out = (CV_TRANSITION_EVAL(2U, (int32_T)(_SFD_CCP_CALL(5U, 2U, 0,
        (boolean_T)CV_RELATIONAL_EVAL(5U, 2U, 0, *chartInstance->c451_pos,
        chartInstance->c451_crossgate1_begleft_retright_stable_pos *
        chartInstance->c451_t_m, -1, 4U, *chartInstance->c451_pos >
        chartInstance->c451_crossgate1_begleft_retright_stable_pos *
        chartInstance->c451_t_m) != 0U, *chartInstance->c451_sfEvent) != 0U)) !=
                    0);
      if (c451_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c451_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_is_state_machine =
          c451_IN_TRANSITION_PT_BL_RR_PT_BL_RR2;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_curve = 5.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
        *chartInstance->c451_debug = 7.0F;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                     *chartInstance->c451_sfEvent);
        c451_l_out = (CV_TRANSITION_EVAL(4U, (int32_T)(_SFD_CCP_CALL(5U, 4U, 0,
          (boolean_T)CV_RELATIONAL_EVAL(5U, 4U, 0, *chartInstance->c451_pos,
          chartInstance->c451_crossgate1_right_pos_threshold, -1, 2U,
          *chartInstance->c451_pos <
          chartInstance->c451_crossgate1_right_pos_threshold) != 0U,
          *chartInstance->c451_sfEvent) != 0U)) != 0);
        if (c451_l_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c451_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c451_sfEvent);
          *chartInstance->c451_is_state_machine = c451_IN_THRESHOLD_BR;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c451_sfEvent);
          *chartInstance->c451_curve = 1.0;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
          *chartInstance->c451_debug = 5.0F;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                       *chartInstance->c451_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c451_sfEvent);
      break;

     case c451_IN_IDLE:
      CV_STATE_EVAL(0, 0, c451_IN_IDLE);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 19U,
                   *chartInstance->c451_sfEvent);
      c451_f_out = (CV_TRANSITION_EVAL(19U, (int32_T)(_SFD_CCP_CALL(5U, 19U, 0,
        (boolean_T)CV_RELATIONAL_EVAL(5U, 19U, 0, (real_T)
        *chartInstance->c451_init, 1.0, -3, 0U, *chartInstance->c451_init ==
        1.0F) != 0U, *chartInstance->c451_sfEvent) != 0U)) != 0);
      if (c451_f_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 19U, *chartInstance->c451_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_is_state_machine = c451_IN_INIT;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_curve = 7.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
        *chartInstance->c451_debug = 1.0F;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                     *chartInstance->c451_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c451_sfEvent);
      break;

     case c451_IN_INIT:
      CV_STATE_EVAL(0, 0, c451_IN_INIT);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 16U,
                   *chartInstance->c451_sfEvent);
      c451_temp = (_SFD_CCP_CALL(5U, 16U, 0, (boolean_T)CV_RELATIONAL_EVAL(5U,
        16U, 0, *chartInstance->c451_pos,
        chartInstance->c451_crossgate1_begleft_retright_stable_pos, -1, 3U,
        *chartInstance->c451_pos <=
        chartInstance->c451_crossgate1_begleft_retright_stable_pos) != 0U,
        *chartInstance->c451_sfEvent) != 0U);
      if (c451_temp) {
        c451_temp = (_SFD_CCP_CALL(5U, 16U, 1, (boolean_T)CV_RELATIONAL_EVAL(5U,
          16U, 1, *chartInstance->c451_pos,
          chartInstance->c451_crossgate1_begleft_retright_stable_pos -
          c451_const_eps, -1, 5U, *chartInstance->c451_pos >=
          chartInstance->c451_crossgate1_begleft_retright_stable_pos -
          c451_const_eps) != 0U, *chartInstance->c451_sfEvent) != 0U);
      }

      c451_m_out = (CV_TRANSITION_EVAL(16U, (int32_T)c451_temp) != 0);
      if (c451_m_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U, *chartInstance->c451_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_is_state_machine = c451_IN_BEGIN_RIGHT_1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_curve = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
        *chartInstance->c451_debug = 3.0F;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 17U,
                     *chartInstance->c451_sfEvent);
        c451_d_temp = (_SFD_CCP_CALL(5U, 17U, 0, (boolean_T)CV_RELATIONAL_EVAL
          (5U, 17U, 0, *chartInstance->c451_pos,
           chartInstance->c451_crossgate1_retleft_begright_stable_pos, -1, 5U,
           *chartInstance->c451_pos >=
           chartInstance->c451_crossgate1_retleft_begright_stable_pos) != 0U,
          *chartInstance->c451_sfEvent) != 0U);
        if (c451_d_temp) {
          c451_d_temp = (_SFD_CCP_CALL(5U, 17U, 1, (boolean_T)CV_RELATIONAL_EVAL
            (5U, 17U, 1, *chartInstance->c451_pos,
             chartInstance->c451_crossgate1_retleft_begright_stable_pos +
             c451_const_eps, -1, 3U, *chartInstance->c451_pos <=
             chartInstance->c451_crossgate1_retleft_begright_stable_pos +
             c451_const_eps) != 0U, *chartInstance->c451_sfEvent) != 0U);
        }

        c451_p_out = (CV_TRANSITION_EVAL(17U, (int32_T)c451_d_temp) != 0);
        if (c451_p_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17U, *chartInstance->c451_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c451_sfEvent);
          *chartInstance->c451_is_state_machine = c451_IN_BEGIN_LEFT_1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c451_sfEvent);
          *chartInstance->c451_curve = 3.0;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
          *chartInstance->c451_debug = 9.0F;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                       *chartInstance->c451_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c451_sfEvent);
      break;

     case c451_IN_RETURN_LEFT:
      CV_STATE_EVAL(0, 0, c451_IN_RETURN_LEFT);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 15U,
                   *chartInstance->c451_sfEvent);
      c451_b_temp = (_SFD_CCP_CALL(5U, 15U, 0, (boolean_T)CV_RELATIONAL_EVAL(5U,
        15U, 0, *chartInstance->c451_pos,
        chartInstance->c451_crossgate1_retleft_begright_stable_pos -
        c451_const_eps, -1, 4U, *chartInstance->c451_pos >
        chartInstance->c451_crossgate1_retleft_begright_stable_pos -
        c451_const_eps) != 0U, *chartInstance->c451_sfEvent) != 0U);
      if (c451_b_temp) {
        c451_b_temp = (_SFD_CCP_CALL(5U, 15U, 1, (boolean_T)CV_RELATIONAL_EVAL
          (5U, 15U, 1, *chartInstance->c451_pos,
           chartInstance->c451_crossgate1_retleft_begright_stable_pos +
           c451_const_eps, -1, 2U, *chartInstance->c451_pos <
           chartInstance->c451_crossgate1_retleft_begright_stable_pos +
           c451_const_eps) != 0U, *chartInstance->c451_sfEvent) != 0U);
      }

      c451_n_out = (CV_TRANSITION_EVAL(15U, (int32_T)c451_b_temp) != 0);
      if (c451_n_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, *chartInstance->c451_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_is_state_machine = c451_IN_BEGIN_RIGHT_1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_curve = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
        *chartInstance->c451_debug = 3.0F;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                     *chartInstance->c451_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c451_sfEvent);
      break;

     case c451_IN_RETURN_RIGHT:
      CV_STATE_EVAL(0, 0, c451_IN_RETURN_RIGHT);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   *chartInstance->c451_sfEvent);
      c451_c_temp = (_SFD_CCP_CALL(5U, 6U, 0, (boolean_T)CV_RELATIONAL_EVAL(5U,
        6U, 0, *chartInstance->c451_pos,
        chartInstance->c451_crossgate1_begleft_retright_stable_pos -
        c451_const_eps, -1, 4U, *chartInstance->c451_pos >
        chartInstance->c451_crossgate1_begleft_retright_stable_pos -
        c451_const_eps) != 0U, *chartInstance->c451_sfEvent) != 0U);
      if (c451_c_temp) {
        c451_c_temp = (_SFD_CCP_CALL(5U, 6U, 1, (boolean_T)CV_RELATIONAL_EVAL(5U,
          6U, 1, *chartInstance->c451_pos,
          chartInstance->c451_crossgate1_begleft_retright_stable_pos +
          c451_const_eps, -1, 2U, *chartInstance->c451_pos <
          chartInstance->c451_crossgate1_begleft_retright_stable_pos +
          c451_const_eps) != 0U, *chartInstance->c451_sfEvent) != 0U);
      }

      c451_o_out = (CV_TRANSITION_EVAL(6U, (int32_T)c451_c_temp) != 0);
      if (c451_o_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c451_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_is_state_machine = c451_IN_BEGIN_LEFT_1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_curve = 3.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
        *chartInstance->c451_debug = 9.0F;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8U,
                     *chartInstance->c451_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, *chartInstance->c451_sfEvent);
      break;

     case c451_IN_SWITCH_BL_RL:
      CV_STATE_EVAL(0, 0, c451_IN_SWITCH_BL_RL);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                   *chartInstance->c451_sfEvent);
      c451_g_out = (CV_TRANSITION_EVAL(14U, (int32_T)(_SFD_CCP_CALL(5U, 14U, 0,
        (boolean_T)CV_RELATIONAL_EVAL(5U, 14U, 0, *chartInstance->c451_pos,
        chartInstance->c451_crossgate1_left_pos_threshold -
        chartInstance->c451_off_sw_curve, -1, 2U, *chartInstance->c451_pos <
        chartInstance->c451_crossgate1_left_pos_threshold -
        chartInstance->c451_off_sw_curve) != 0U, *chartInstance->c451_sfEvent)
        != 0U)) != 0);
      if (c451_g_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, *chartInstance->c451_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_is_state_machine = c451_IN_RETURN_LEFT;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_curve = 4.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
        *chartInstance->c451_debug = 12.0F;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 9U,
                     *chartInstance->c451_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, *chartInstance->c451_sfEvent);
      break;

     case c451_IN_SWITCH_BR_RR:
      CV_STATE_EVAL(0, 0, c451_IN_SWITCH_BR_RR);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   *chartInstance->c451_sfEvent);
      c451_h_out = (CV_TRANSITION_EVAL(5U, (int32_T)(_SFD_CCP_CALL(5U, 5U, 0,
        (boolean_T)CV_RELATIONAL_EVAL(5U, 5U, 0, *chartInstance->c451_pos,
        chartInstance->c451_crossgate1_right_pos_threshold +
        chartInstance->c451_off_sw_curve, -1, 4U, *chartInstance->c451_pos >
        chartInstance->c451_crossgate1_right_pos_threshold +
        chartInstance->c451_off_sw_curve) != 0U, *chartInstance->c451_sfEvent)
        != 0U)) != 0);
      if (c451_h_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c451_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_is_state_machine = c451_IN_RETURN_RIGHT;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c451_sfEvent);
        *chartInstance->c451_curve = 2.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
        *chartInstance->c451_debug = 6.0F;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 10U,
                     *chartInstance->c451_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, *chartInstance->c451_sfEvent);
      break;

     case c451_IN_THRESHOLD_BL:
      CV_STATE_EVAL(0, 0, c451_IN_THRESHOLD_BL);
      c451_THRESHOLD_BL(chartInstance);
      break;

     case c451_IN_THRESHOLD_BR:
      CV_STATE_EVAL(0, 0, c451_IN_THRESHOLD_BR);
      c451_THRESHOLD_BR(chartInstance);
      break;

     case c451_IN_TRANSITION_PT_BL_RR_PT_BL_RR2:
      CV_STATE_EVAL(0, 0, c451_IN_TRANSITION_PT_BL_RR_PT_BL_RR2);
      c451_TRANSITION_PT_BL_RR_PT_BL_RR2(chartInstance);
      break;

     case c451_IN_TRANSITION_PT_RL_BR2_PT_RL_BR:
      CV_STATE_EVAL(0, 0, c451_IN_TRANSITION_PT_RL_BR2_PT_RL_BR);
      c451_TRANSITION_PT_RL_BR2_PT_RL_BR(chartInstance);
      break;

     default:
      CV_STATE_EVAL(0, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c451_is_state_machine = c451_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c451_sfEvent);
      break;
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c451_sfEvent);
}

static void c451_exit_internal_state_machine
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  switch (*chartInstance->c451_is_state_machine) {
   case c451_IN_BEGIN_LEFT_1:
    CV_STATE_EVAL(0, 1, c451_IN_BEGIN_LEFT_1);
    *chartInstance->c451_is_state_machine = c451_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c451_sfEvent);
    break;

   case c451_IN_BEGIN_LEFT_2:
    CV_STATE_EVAL(0, 1, c451_IN_BEGIN_LEFT_2);
    *chartInstance->c451_is_state_machine = c451_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c451_sfEvent);
    break;

   case c451_IN_BEGIN_RIGHT_1:
    CV_STATE_EVAL(0, 1, c451_IN_BEGIN_RIGHT_1);
    *chartInstance->c451_is_state_machine = c451_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c451_sfEvent);
    break;

   case c451_IN_BEGIN_RIGHT_2:
    CV_STATE_EVAL(0, 1, c451_IN_BEGIN_RIGHT_2);
    *chartInstance->c451_is_state_machine = c451_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c451_sfEvent);
    break;

   case c451_IN_IDLE:
    CV_STATE_EVAL(0, 1, c451_IN_IDLE);
    *chartInstance->c451_is_state_machine = c451_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c451_sfEvent);
    break;

   case c451_IN_INIT:
    CV_STATE_EVAL(0, 1, c451_IN_INIT);
    *chartInstance->c451_is_state_machine = c451_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c451_sfEvent);
    break;

   case c451_IN_RETURN_LEFT:
    CV_STATE_EVAL(0, 1, c451_IN_RETURN_LEFT);
    *chartInstance->c451_is_state_machine = c451_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c451_sfEvent);
    break;

   case c451_IN_RETURN_RIGHT:
    CV_STATE_EVAL(0, 1, c451_IN_RETURN_RIGHT);
    *chartInstance->c451_is_state_machine = c451_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c451_sfEvent);
    break;

   case c451_IN_SWITCH_BL_RL:
    CV_STATE_EVAL(0, 1, c451_IN_SWITCH_BL_RL);
    *chartInstance->c451_is_state_machine = c451_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c451_sfEvent);
    break;

   case c451_IN_SWITCH_BR_RR:
    CV_STATE_EVAL(0, 1, c451_IN_SWITCH_BR_RR);
    *chartInstance->c451_is_state_machine = c451_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c451_sfEvent);
    break;

   case c451_IN_THRESHOLD_BL:
    CV_STATE_EVAL(0, 1, c451_IN_THRESHOLD_BL);
    *chartInstance->c451_is_state_machine = c451_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c451_sfEvent);
    break;

   case c451_IN_THRESHOLD_BR:
    CV_STATE_EVAL(0, 1, c451_IN_THRESHOLD_BR);
    *chartInstance->c451_is_state_machine = c451_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c451_sfEvent);
    break;

   case c451_IN_TRANSITION_PT_BL_RR_PT_BL_RR2:
    CV_STATE_EVAL(0, 1, c451_IN_TRANSITION_PT_BL_RR_PT_BL_RR2);
    *chartInstance->c451_is_state_machine = c451_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c451_sfEvent);
    break;

   case c451_IN_TRANSITION_PT_RL_BR2_PT_RL_BR:
    CV_STATE_EVAL(0, 1, c451_IN_TRANSITION_PT_RL_BR2_PT_RL_BR);
    *chartInstance->c451_is_state_machine = c451_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c451_sfEvent);
    break;

   default:
    CV_STATE_EVAL(0, 1, 0);
    *chartInstance->c451_is_state_machine = c451_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c451_sfEvent);
    break;
  }
}

static void c451_TRANSITION_PT_RL_BR2_PT_RL_BR
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  boolean_T c451_out;
  boolean_T c451_b_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
               *chartInstance->c451_sfEvent);
  c451_out = (CV_TRANSITION_EVAL(10U, (int32_T)(_SFD_CCP_CALL(5U, 10U, 0,
    (boolean_T)CV_RELATIONAL_EVAL(5U, 10U, 0, *chartInstance->c451_pos,
    chartInstance->c451_crossgate1_retleft_begright_stable_pos *
    chartInstance->c451_t_m, -1, 5U, *chartInstance->c451_pos >=
    chartInstance->c451_crossgate1_retleft_begright_stable_pos *
    chartInstance->c451_t_m) != 0U, *chartInstance->c451_sfEvent) != 0U)) != 0);
  if (c451_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c451_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c451_sfEvent);
    *chartInstance->c451_is_state_machine = c451_IN_BEGIN_LEFT_2;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c451_sfEvent);
    *chartInstance->c451_curve = 3.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
    *chartInstance->c451_debug = 10.0F;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                 *chartInstance->c451_sfEvent);
    c451_b_out = (CV_TRANSITION_EVAL(11U, (int32_T)(_SFD_CCP_CALL(5U, 11U, 0,
      (boolean_T)CV_RELATIONAL_EVAL(5U, 11U, 0, *chartInstance->c451_pos,
      chartInstance->c451_crossgate1_retleft_begright_stable_pos, -1, 2U,
      *chartInstance->c451_pos <
      chartInstance->c451_crossgate1_retleft_begright_stable_pos) != 0U,
      *chartInstance->c451_sfEvent) != 0U)) != 0);
    if (c451_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, *chartInstance->c451_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c451_sfEvent);
      *chartInstance->c451_is_state_machine = c451_IN_BEGIN_RIGHT_1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c451_sfEvent);
      *chartInstance->c451_curve = 1.0;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
      *chartInstance->c451_debug = 3.0F;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 14U,
                   *chartInstance->c451_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 14U, *chartInstance->c451_sfEvent);
}

static void c451_TRANSITION_PT_BL_RR_PT_BL_RR2
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  boolean_T c451_out;
  boolean_T c451_b_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
               *chartInstance->c451_sfEvent);
  c451_out = (CV_TRANSITION_EVAL(3U, (int32_T)(_SFD_CCP_CALL(5U, 3U, 0,
    (boolean_T)CV_RELATIONAL_EVAL(5U, 3U, 0, *chartInstance->c451_pos,
    chartInstance->c451_crossgate1_begleft_retright_stable_pos *
    chartInstance->c451_t_m, -1, 3U, *chartInstance->c451_pos <=
    chartInstance->c451_crossgate1_begleft_retright_stable_pos *
    chartInstance->c451_t_m) != 0U, *chartInstance->c451_sfEvent) != 0U)) != 0);
  if (c451_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c451_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c451_sfEvent);
    *chartInstance->c451_is_state_machine = c451_IN_BEGIN_RIGHT_2;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c451_sfEvent);
    *chartInstance->c451_curve = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
    *chartInstance->c451_debug = 4.0F;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                 *chartInstance->c451_sfEvent);
    c451_b_out = (CV_TRANSITION_EVAL(7U, (int32_T)(_SFD_CCP_CALL(5U, 7U, 0,
      (boolean_T)CV_RELATIONAL_EVAL(5U, 7U, 0, *chartInstance->c451_pos,
      chartInstance->c451_crossgate1_begleft_retright_stable_pos, -1, 4U,
      *chartInstance->c451_pos >
      chartInstance->c451_crossgate1_begleft_retright_stable_pos) != 0U,
      *chartInstance->c451_sfEvent) != 0U)) != 0);
    if (c451_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c451_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c451_sfEvent);
      *chartInstance->c451_is_state_machine = c451_IN_BEGIN_LEFT_1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c451_sfEvent);
      *chartInstance->c451_curve = 3.0;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
      *chartInstance->c451_debug = 9.0F;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 13U,
                   *chartInstance->c451_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 13U, *chartInstance->c451_sfEvent);
}

static void c451_THRESHOLD_BL(SFc451_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance)
{
  boolean_T c451_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 21U,
               *chartInstance->c451_sfEvent);
  c451_out = (CV_TRANSITION_EVAL(21U, (int32_T)(_SFD_CCP_CALL(5U, 21U, 0,
    (boolean_T)CV_RELATIONAL_EVAL(5U, 21U, 0, *chartInstance->c451_pos,
    chartInstance->c451_crossgate1_left_pos_threshold, -1, 2U,
    *chartInstance->c451_pos < chartInstance->c451_crossgate1_left_pos_threshold)
    != 0U, *chartInstance->c451_sfEvent) != 0U)) != 0);
  if (c451_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 21U, *chartInstance->c451_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c451_sfEvent);
    *chartInstance->c451_is_state_machine = c451_IN_SWITCH_BL_RL;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c451_sfEvent);
    *chartInstance->c451_curve = 8.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
    *chartInstance->c451_debug = 14.0F;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 11U,
                 *chartInstance->c451_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, *chartInstance->c451_sfEvent);
}

static void c451_THRESHOLD_BR(SFc451_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance)
{
  boolean_T c451_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 22U,
               *chartInstance->c451_sfEvent);
  c451_out = (CV_TRANSITION_EVAL(22U, (int32_T)(_SFD_CCP_CALL(5U, 22U, 0,
    (boolean_T)CV_RELATIONAL_EVAL(5U, 22U, 0, *chartInstance->c451_pos,
    chartInstance->c451_crossgate1_right_pos_threshold, -1, 4U,
    *chartInstance->c451_pos >
    chartInstance->c451_crossgate1_right_pos_threshold) != 0U,
    *chartInstance->c451_sfEvent) != 0U)) != 0);
  if (c451_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 22U, *chartInstance->c451_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c451_sfEvent);
    *chartInstance->c451_is_state_machine = c451_IN_SWITCH_BR_RR;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c451_sfEvent);
    *chartInstance->c451_curve = 9.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c451_curve, 2U);
    *chartInstance->c451_debug = 15.0F;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c451_debug, 3U);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 12U,
                 *chartInstance->c451_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12U, *chartInstance->c451_sfEvent);
}

static void init_script_number_translation(uint32_T c451_machineNumber, uint32_T
  c451_chartNumber, uint32_T c451_instanceNumber)
{
  (void)(c451_machineNumber);
  (void)(c451_chartNumber);
  (void)(c451_instanceNumber);
}

const mxArray
  *sf_c451_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info(void)
{
  const mxArray *c451_nameCaptureInfo = NULL;
  c451_nameCaptureInfo = NULL;
  sf_mex_assign(&c451_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c451_nameCaptureInfo;
}

static const mxArray *c451_sf_marshallOut(void *chartInstanceVoid, void
  *c451_inData)
{
  const mxArray *c451_mxArrayOutData;
  int32_T c451_u;
  const mxArray *c451_y = NULL;
  SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc451_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c451_mxArrayOutData = NULL;
  c451_mxArrayOutData = NULL;
  c451_u = *(int32_T *)c451_inData;
  c451_y = NULL;
  sf_mex_assign(&c451_y, sf_mex_create("y", &c451_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c451_mxArrayOutData, c451_y, false);
  return c451_mxArrayOutData;
}

static int32_T c451_emlrt_marshallIn
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_u, const emlrtMsgIdentifier *c451_parentId)
{
  int32_T c451_y;
  int32_T c451_i0;
  (void)chartInstance;
  sf_mex_import(c451_parentId, sf_mex_dup(c451_u), &c451_i0, 1, 6, 0U, 0, 0U, 0);
  c451_y = c451_i0;
  sf_mex_destroy(&c451_u);
  return c451_y;
}

static void c451_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c451_mxArrayInData, const char_T *c451_varName, void *c451_outData)
{
  const mxArray *c451_b_sfEvent;
  emlrtMsgIdentifier c451_thisId;
  int32_T c451_y;
  SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc451_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c451_b_sfEvent = sf_mex_dup(c451_mxArrayInData);
  c451_thisId.fIdentifier = (const char *)c451_varName;
  c451_thisId.fParent = NULL;
  c451_thisId.bParentIsCell = false;
  c451_y = c451_emlrt_marshallIn(chartInstance, sf_mex_dup(c451_b_sfEvent),
    &c451_thisId);
  sf_mex_destroy(&c451_b_sfEvent);
  *(int32_T *)c451_outData = c451_y;
  sf_mex_destroy(&c451_mxArrayInData);
}

static const mxArray *c451_b_sf_marshallOut(void *chartInstanceVoid, void
  *c451_inData)
{
  const mxArray *c451_mxArrayOutData;
  uint8_T c451_u;
  const mxArray *c451_y = NULL;
  SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc451_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c451_mxArrayOutData = NULL;
  c451_mxArrayOutData = NULL;
  c451_u = *(uint8_T *)c451_inData;
  c451_y = NULL;
  sf_mex_assign(&c451_y, sf_mex_create("y", &c451_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c451_mxArrayOutData, c451_y, false);
  return c451_mxArrayOutData;
}

static uint8_T c451_b_emlrt_marshallIn
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_b_is_state_machine, const char_T *c451_identifier)
{
  uint8_T c451_y;
  emlrtMsgIdentifier c451_thisId;
  c451_thisId.fIdentifier = (const char *)c451_identifier;
  c451_thisId.fParent = NULL;
  c451_thisId.bParentIsCell = false;
  c451_y = c451_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c451_b_is_state_machine), &c451_thisId);
  sf_mex_destroy(&c451_b_is_state_machine);
  return c451_y;
}

static uint8_T c451_c_emlrt_marshallIn
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_u, const emlrtMsgIdentifier *c451_parentId)
{
  uint8_T c451_y;
  uint8_T c451_u0;
  (void)chartInstance;
  sf_mex_import(c451_parentId, sf_mex_dup(c451_u), &c451_u0, 1, 3, 0U, 0, 0U, 0);
  c451_y = c451_u0;
  sf_mex_destroy(&c451_u);
  return c451_y;
}

static void c451_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c451_mxArrayInData, const char_T *c451_varName, void *c451_outData)
{
  const mxArray *c451_b_is_state_machine;
  emlrtMsgIdentifier c451_thisId;
  uint8_T c451_y;
  SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc451_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c451_b_is_state_machine = sf_mex_dup(c451_mxArrayInData);
  c451_thisId.fIdentifier = (const char *)c451_varName;
  c451_thisId.fParent = NULL;
  c451_thisId.bParentIsCell = false;
  c451_y = c451_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c451_b_is_state_machine), &c451_thisId);
  sf_mex_destroy(&c451_b_is_state_machine);
  *(uint8_T *)c451_outData = c451_y;
  sf_mex_destroy(&c451_mxArrayInData);
}

static const mxArray *c451_c_sf_marshallOut(void *chartInstanceVoid, void
  *c451_inData)
{
  const mxArray *c451_mxArrayOutData;
  real_T c451_u;
  const mxArray *c451_y = NULL;
  SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc451_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c451_mxArrayOutData = NULL;
  c451_mxArrayOutData = NULL;
  c451_u = *(real_T *)c451_inData;
  c451_y = NULL;
  sf_mex_assign(&c451_y, sf_mex_create("y", &c451_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c451_mxArrayOutData, c451_y, false);
  return c451_mxArrayOutData;
}

static real_T c451_d_emlrt_marshallIn
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_b_curve, const char_T *c451_identifier)
{
  real_T c451_y;
  emlrtMsgIdentifier c451_thisId;
  c451_thisId.fIdentifier = (const char *)c451_identifier;
  c451_thisId.fParent = NULL;
  c451_thisId.bParentIsCell = false;
  c451_y = c451_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c451_b_curve),
    &c451_thisId);
  sf_mex_destroy(&c451_b_curve);
  return c451_y;
}

static real_T c451_e_emlrt_marshallIn
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_u, const emlrtMsgIdentifier *c451_parentId)
{
  real_T c451_y;
  real_T c451_d6;
  (void)chartInstance;
  sf_mex_import(c451_parentId, sf_mex_dup(c451_u), &c451_d6, 1, 0, 0U, 0, 0U, 0);
  c451_y = c451_d6;
  sf_mex_destroy(&c451_u);
  return c451_y;
}

static void c451_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c451_mxArrayInData, const char_T *c451_varName, void *c451_outData)
{
  const mxArray *c451_b_curve;
  emlrtMsgIdentifier c451_thisId;
  real_T c451_y;
  SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc451_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c451_b_curve = sf_mex_dup(c451_mxArrayInData);
  c451_thisId.fIdentifier = (const char *)c451_varName;
  c451_thisId.fParent = NULL;
  c451_thisId.bParentIsCell = false;
  c451_y = c451_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c451_b_curve),
    &c451_thisId);
  sf_mex_destroy(&c451_b_curve);
  *(real_T *)c451_outData = c451_y;
  sf_mex_destroy(&c451_mxArrayInData);
}

static const mxArray *c451_d_sf_marshallOut(void *chartInstanceVoid, void
  *c451_inData)
{
  const mxArray *c451_mxArrayOutData;
  real32_T c451_u;
  const mxArray *c451_y = NULL;
  SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc451_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c451_mxArrayOutData = NULL;
  c451_mxArrayOutData = NULL;
  c451_u = *(real32_T *)c451_inData;
  c451_y = NULL;
  sf_mex_assign(&c451_y, sf_mex_create("y", &c451_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c451_mxArrayOutData, c451_y, false);
  return c451_mxArrayOutData;
}

static real32_T c451_f_emlrt_marshallIn
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_b_debug, const char_T *c451_identifier)
{
  real32_T c451_y;
  emlrtMsgIdentifier c451_thisId;
  c451_thisId.fIdentifier = (const char *)c451_identifier;
  c451_thisId.fParent = NULL;
  c451_thisId.bParentIsCell = false;
  c451_y = c451_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c451_b_debug),
    &c451_thisId);
  sf_mex_destroy(&c451_b_debug);
  return c451_y;
}

static real32_T c451_g_emlrt_marshallIn
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_u, const emlrtMsgIdentifier *c451_parentId)
{
  real32_T c451_y;
  real32_T c451_f0;
  (void)chartInstance;
  sf_mex_import(c451_parentId, sf_mex_dup(c451_u), &c451_f0, 1, 1, 0U, 0, 0U, 0);
  c451_y = c451_f0;
  sf_mex_destroy(&c451_u);
  return c451_y;
}

static void c451_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c451_mxArrayInData, const char_T *c451_varName, void *c451_outData)
{
  const mxArray *c451_b_debug;
  emlrtMsgIdentifier c451_thisId;
  real32_T c451_y;
  SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc451_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c451_b_debug = sf_mex_dup(c451_mxArrayInData);
  c451_thisId.fIdentifier = (const char *)c451_varName;
  c451_thisId.fParent = NULL;
  c451_thisId.bParentIsCell = false;
  c451_y = c451_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c451_b_debug),
    &c451_thisId);
  sf_mex_destroy(&c451_b_debug);
  *(real32_T *)c451_outData = c451_y;
  sf_mex_destroy(&c451_mxArrayInData);
}

static const mxArray *c451_h_emlrt_marshallIn
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_b_setSimStateSideEffectsInfo, const char_T *c451_identifier)
{
  const mxArray *c451_y = NULL;
  emlrtMsgIdentifier c451_thisId;
  c451_y = NULL;
  c451_thisId.fIdentifier = (const char *)c451_identifier;
  c451_thisId.fParent = NULL;
  c451_thisId.bParentIsCell = false;
  sf_mex_assign(&c451_y, c451_i_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c451_b_setSimStateSideEffectsInfo), &c451_thisId), false);
  sf_mex_destroy(&c451_b_setSimStateSideEffectsInfo);
  return c451_y;
}

static const mxArray *c451_i_emlrt_marshallIn
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c451_u, const emlrtMsgIdentifier *c451_parentId)
{
  const mxArray *c451_y = NULL;
  (void)chartInstance;
  (void)c451_parentId;
  c451_y = NULL;
  sf_mex_assign(&c451_y, sf_mex_duplicatearraysafe(&c451_u), false);
  sf_mex_destroy(&c451_u);
  return c451_y;
}

static const mxArray *sf_get_hover_data_for_msg
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance, int32_T
   c451_ssid)
{
  (void)chartInstance;
  (void)c451_ssid;
  return NULL;
}

static void c451_init_sf_message_store_memory
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  chartInstance->c451_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c451_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S,
    0);
  chartInstance->c451_is_active_c451_modello_2017b_levaRetro_acc = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 1);
  chartInstance->c451_is_c451_modello_2017b_levaRetro_acc = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 2);
  chartInstance->c451_is_state_machine = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 3);
  chartInstance->c451_pos = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c451_curve = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c451_init = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c451_debug = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

static uint32_T* sf_get_sfun_dwork_checksum(void);
void sf_c451_modello_2017b_levaRetro_acc_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4218015937U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(105716014U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(604627153U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1091033837U);
}

mxArray* sf_c451_modello_2017b_levaRetro_acc_get_post_codegen_info(void);
mxArray *sf_c451_modello_2017b_levaRetro_acc_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("b5XaH9MM9W9G9tV4BmBUG");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,6,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxData);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo =
      sf_c451_modello_2017b_levaRetro_acc_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c451_modello_2017b_levaRetro_acc_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c451_modello_2017b_levaRetro_acc_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("early");
  mxArray *fallbackReason = mxCreateString("ext_mode");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c451_modello_2017b_levaRetro_acc_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c451_modello_2017b_levaRetro_acc_get_post_codegen_info(void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray *sf_get_sim_state_info_c451_modello_2017b_levaRetro_acc
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x5'type','srcId','name','auxInfo'{{M[1],M[2],T\"curve\",},{M[1],M[75],T\"debug\",},{M[8],M[0],T\"is_active_c451_modello_2017b_levaRetro_acc\",},{M[9],M[0],T\"is_c451_modello_2017b_levaRetro_acc\",},{M[9],M[82],T\"is_state_machine\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 5, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c451_modello_2017b_levaRetro_acc_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg
    ( (SFc451_modello_2017b_levaRetro_accInstanceStruct *) chartInstance,
     msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance =
      (SFc451_modello_2017b_levaRetro_accInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _modello_2017b_levaRetro_accMachineNumber_,
           451,
           15,
           23,
           0,
           11,
           0,
           0,
           0,
           0,
           0,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation
          (_modello_2017b_levaRetro_accMachineNumber_,chartInstance->chartNumber,
           chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,
             _modello_2017b_levaRetro_accMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _modello_2017b_levaRetro_accMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"pos");
          _SFD_SET_DATA_PROPS(1,1,1,0,"init");
          _SFD_SET_DATA_PROPS(2,2,0,1,"curve");
          _SFD_SET_DATA_PROPS(3,2,0,1,"debug");
          _SFD_SET_DATA_PROPS(4,7,0,0,"eps");
          _SFD_SET_DATA_PROPS(5,10,0,0,"crossgate1_begleft_retright_stable_pos");
          _SFD_SET_DATA_PROPS(6,10,0,0,"crossgate1_left_pos_threshold");
          _SFD_SET_DATA_PROPS(7,10,0,0,"crossgate1_retleft_begright_stable_pos");
          _SFD_SET_DATA_PROPS(8,10,0,0,"crossgate1_right_pos_threshold");
          _SFD_SET_DATA_PROPS(9,10,0,0,"off_sw_curve");
          _SFD_SET_DATA_PROPS(10,10,0,0,"t_m");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_STATE_INFO(8,0,0);
          _SFD_STATE_INFO(9,0,0);
          _SFD_STATE_INFO(10,0,0);
          _SFD_STATE_INFO(11,0,0);
          _SFD_STATE_INFO(12,0,0);
          _SFD_STATE_INFO(13,0,0);
          _SFD_STATE_INFO(14,0,0);
          _SFD_CH_SUBSTATE_COUNT(1);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_ST_SUBSTATE_COUNT(0,14);
          _SFD_ST_SUBSTATE_INDEX(0,0,1);
          _SFD_ST_SUBSTATE_INDEX(0,1,2);
          _SFD_ST_SUBSTATE_INDEX(0,2,3);
          _SFD_ST_SUBSTATE_INDEX(0,3,4);
          _SFD_ST_SUBSTATE_INDEX(0,4,5);
          _SFD_ST_SUBSTATE_INDEX(0,5,6);
          _SFD_ST_SUBSTATE_INDEX(0,6,7);
          _SFD_ST_SUBSTATE_INDEX(0,7,8);
          _SFD_ST_SUBSTATE_INDEX(0,8,9);
          _SFD_ST_SUBSTATE_INDEX(0,9,10);
          _SFD_ST_SUBSTATE_INDEX(0,10,11);
          _SFD_ST_SUBSTATE_INDEX(0,11,12);
          _SFD_ST_SUBSTATE_INDEX(0,12,13);
          _SFD_ST_SUBSTATE_INDEX(0,13,14);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
          _SFD_ST_SUBSTATE_COUNT(9,0);
          _SFD_ST_SUBSTATE_COUNT(10,0);
          _SFD_ST_SUBSTATE_COUNT(11,0);
          _SFD_ST_SUBSTATE_COUNT(12,0);
          _SFD_ST_SUBSTATE_COUNT(13,0);
          _SFD_ST_SUBSTATE_COUNT(14,0);
        }

        _SFD_CV_INIT_CHART(1,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,14,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(4,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(6,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(8,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(9,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(10,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(11,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(12,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(13,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(14,0,0,0,0,0,NULL,NULL);
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(20,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 8 };

          static int sRelationalopEps[] = { -3 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(20,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(19,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 8 };

          static int sRelationalopEps[] = { -3 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(19,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 55 };

          static unsigned int sEndGuardMap[] = { 47, 101 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(15,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 55 };

          static unsigned int sEndRelationalopMap[] = { 47, 101 };

          static int sRelationalopEps[] = { -1, -1 };

          static int sRelationalopType[] = { 4, 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(15,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 48 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 48 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 3 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(1,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 43 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(11,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 43 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(11,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 44 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(12,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 44 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(12,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 35 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 35 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(4,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 50 };

          static unsigned int sEndGuardMap[] = { 44, 97 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(16,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 50 };

          static unsigned int sEndRelationalopMap[] = { 44, 97 };

          static int sRelationalopEps[] = { -1, -1 };

          static int sRelationalopType[] = { 3, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(16,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 48 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 48 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(10,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 47 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 47 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(9,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 47 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 47 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(2,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 48 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 48 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 3 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(3,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 47 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(14,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 47 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(14,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 50 };

          static unsigned int sEndGuardMap[] = { 44, 97 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(17,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 50 };

          static unsigned int sEndRelationalopMap[] = { 44, 97 };

          static int sRelationalopEps[] = { -1, -1 };

          static int sRelationalopType[] = { 5, 3 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(17,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 44 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(18,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 44 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 3 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(18,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 43 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 43 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(7,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 34 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(13,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 34 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(13,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 48 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 48 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(8,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 34 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(21,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 34 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(21,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 35 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(22,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 35 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(22,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 55 };

          static unsigned int sEndGuardMap[] = { 47, 101 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(6,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 55 };

          static unsigned int sEndRelationalopMap[] = { 47, 101 };

          static int sRelationalopEps[] = { -1, -1 };

          static int sRelationalopType[] = { 4, 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(6,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 48 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 48 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(5,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c451_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c451_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c451_c_sf_marshallOut,(MexInFcnForType)
          c451_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c451_d_sf_marshallOut,(MexInFcnForType)
          c451_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c451_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c451_c_sf_marshallOut,(MexInFcnForType)
          c451_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c451_c_sf_marshallOut,(MexInFcnForType)
          c451_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c451_c_sf_marshallOut,(MexInFcnForType)
          c451_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c451_c_sf_marshallOut,(MexInFcnForType)
          c451_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c451_c_sf_marshallOut,(MexInFcnForType)
          c451_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c451_c_sf_marshallOut,(MexInFcnForType)
          c451_c_sf_marshallIn);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _modello_2017b_levaRetro_accMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance =
      (SFc451_modello_2017b_levaRetro_accInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, (void *)chartInstance->c451_pos);
        _SFD_SET_DATA_VALUE_PTR(2U, (void *)chartInstance->c451_curve);
        _SFD_SET_DATA_VALUE_PTR(4U, (void *)&chartInstance->c451_eps);
        _SFD_SET_DATA_VALUE_PTR(5U, (void *)
          &chartInstance->c451_crossgate1_begleft_retright_stable_pos);
        _SFD_SET_DATA_VALUE_PTR(7U, (void *)
          &chartInstance->c451_crossgate1_retleft_begright_stable_pos);
        _SFD_SET_DATA_VALUE_PTR(10U, (void *)&chartInstance->c451_t_m);
        _SFD_SET_DATA_VALUE_PTR(1U, (void *)chartInstance->c451_init);
        _SFD_SET_DATA_VALUE_PTR(3U, (void *)chartInstance->c451_debug);
        _SFD_SET_DATA_VALUE_PTR(6U, (void *)
          &chartInstance->c451_crossgate1_left_pos_threshold);
        _SFD_SET_DATA_VALUE_PTR(8U, (void *)
          &chartInstance->c451_crossgate1_right_pos_threshold);
        _SFD_SET_DATA_VALUE_PTR(9U, (void *)&chartInstance->c451_off_sw_curve);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sSM7BGCsF4Knvab9kXArrGB";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_modello_2017b_levaRetro_acc_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 451, "dworkChecksum");
    if (mxRTWDWorkChecksum != NULL) {
      double *pr = mxGetPr(mxRTWDWorkChecksum);
      if ((uint32_T)pr[0] != sfunDWorkChecksum[0] ||
          (uint32_T)pr[1] != sfunDWorkChecksum[1] ||
          (uint32_T)pr[2] != sfunDWorkChecksum[2] ||
          (uint32_T)pr[3] != sfunDWorkChecksum[3]) {
        sf_mex_error_message("Code generation and simulation targets registered different sets of persistent variables for the block. "
                             "External or Rapid Accelerator mode simulation requires code generation and simulation targets to "
                             "register the same set of persistent variables for this block. "
                             "This discrepancy is typically caused by MATLAB functions that have different code paths for "
                             "simulation and code generation targets where these code paths define different sets of persistent variables. "
                             "Please identify these code paths in the offending block and rewrite the MATLAB code so that "
                             "the set of persistent variables is the same between simulation and code generation.");
      }
    }
  }
}

static void sf_opaque_initialize_c451_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc451_modello_2017b_levaRetro_accInstanceStruct*)
    chartInstanceVar)->S);
  chart_debug_initialization(((SFc451_modello_2017b_levaRetro_accInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c451_modello_2017b_levaRetro_acc
    ((SFc451_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
  initialize_c451_modello_2017b_levaRetro_acc
    ((SFc451_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c451_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  enable_c451_modello_2017b_levaRetro_acc
    ((SFc451_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c451_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  disable_c451_modello_2017b_levaRetro_acc
    ((SFc451_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c451_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  sf_gateway_c451_modello_2017b_levaRetro_acc
    ((SFc451_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c451_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  ext_mode_exec_c451_modello_2017b_levaRetro_acc
    ((SFc451_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c451_modello_2017b_levaRetro_acc
  (SimStruct* S)
{
  return get_sim_state_c451_modello_2017b_levaRetro_acc
    ((SFc451_modello_2017b_levaRetro_accInstanceStruct *)
     sf_get_chart_instance_ptr(S));    /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c451_modello_2017b_levaRetro_acc(SimStruct*
  S, const mxArray *st)
{
  set_sim_state_c451_modello_2017b_levaRetro_acc
    ((SFc451_modello_2017b_levaRetro_accInstanceStruct*)
     sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c451_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc451_modello_2017b_levaRetro_accInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_modello_2017b_levaRetro_acc_optimization_info();
    }

    finalize_c451_modello_2017b_levaRetro_acc
      ((SFc451_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc451_modello_2017b_levaRetro_acc
    ((SFc451_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c451_modello_2017b_levaRetro_acc(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c451_modello_2017b_levaRetro_acc
      ((SFc451_modello_2017b_levaRetro_accInstanceStruct*)
       sf_get_chart_instance_ptr(S));
  }
}

mxArray *sf_c451_modello_2017b_levaRetro_acc_get_testpoint_info(void)
{
  const char *infoEncStr[] = {
    "100 S1x3'varName','path'{{T\"is_active_c451_modello_2017b_levaRetro_acc\",T\"is_active_c451_modello_2017b_levaRetro_acc\"},{T\"is_c451_modello_2017b_levaRetro_acc\",T\"is_c451_modello_2017b_levaRetro_acc\"},{T\"is_state_machine\",T\"state_machine.is_state_machine\"}}"
  };

  mxArray *mxTpInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  return mxTpInfo;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x4'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id'{{T\"int32\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 4, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 1472888356U, 2369636135U, 3226009194U,
    1581452992U };

  return checksum;
}

static void mdlSetWorkWidths_c451_modello_2017b_levaRetro_acc(SimStruct *S)
{
  /* Actual parameters from chart:
     crossgate1_begleft_retright_stable_pos crossgate1_left_pos_threshold crossgate1_retleft_begright_stable_pos crossgate1_right_pos_threshold off_sw_curve t_m
   */
  const char_T *rtParamNames[] = { "crossgate1_begleft_retright_stable_pos",
    "crossgate1_left_pos_threshold", "crossgate1_retleft_begright_stable_pos",
    "crossgate1_right_pos_threshold", "off_sw_curve", "t_m" };

  ssSetNumRunTimeParams(S,ssGetSFcnParamsCount(S));

  /* registration for crossgate1_begleft_retright_stable_pos*/
  ssRegDlgParamAsRunTimeParam(S, 0, 0, rtParamNames[0], SS_DOUBLE);

  /* registration for crossgate1_left_pos_threshold*/
  ssRegDlgParamAsRunTimeParam(S, 1, 1, rtParamNames[1], SS_DOUBLE);

  /* registration for crossgate1_retleft_begright_stable_pos*/
  ssRegDlgParamAsRunTimeParam(S, 2, 2, rtParamNames[2], SS_DOUBLE);

  /* registration for crossgate1_right_pos_threshold*/
  ssRegDlgParamAsRunTimeParam(S, 3, 3, rtParamNames[3], SS_DOUBLE);

  /* registration for off_sw_curve*/
  ssRegDlgParamAsRunTimeParam(S, 4, 4, rtParamNames[4], SS_DOUBLE);

  /* registration for t_m*/
  ssRegDlgParamAsRunTimeParam(S, 5, 5, rtParamNames[5], SS_DOUBLE);
  ssSetInputPortDirectFeedThrough(S, 0, 1);
  ssSetInputPortDirectFeedThrough(S, 1, 1);
  ssSetStatesModifiedOnlyInUpdate(S, 0);
  ssSetBlockIsPurelyCombinatorial_wrapper(S, 0);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_modello_2017b_levaRetro_acc_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      451);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,451,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 451);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,451);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,451,2);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,451,2);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=2; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 2; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,451);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1044378232U));
  ssSetChecksum1(S,(1023455037U));
  ssSetChecksum2(S,(1521623981U));
  ssSetChecksum3(S,(3657978358U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c451_modello_2017b_levaRetro_acc(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c451_modello_2017b_levaRetro_acc(SimStruct *S)
{
  SFc451_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc451_modello_2017b_levaRetro_accInstanceStruct *)utMalloc
    (sizeof(SFc451_modello_2017b_levaRetro_accInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof
         (SFc451_modello_2017b_levaRetro_accInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c451_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c451_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c451_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c451_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c451_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c451_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c451_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c451_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c451_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.mdlStart = mdlStart_c451_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c451_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec =
    sf_opaque_ext_mode_exec_c451_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  chart_debug_initialization(S,1);
  mdl_start_c451_modello_2017b_levaRetro_acc(chartInstance);
}

void c451_modello_2017b_levaRetro_acc_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c451_modello_2017b_levaRetro_acc(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c451_modello_2017b_levaRetro_acc(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c451_modello_2017b_levaRetro_acc(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c451_modello_2017b_levaRetro_acc_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
