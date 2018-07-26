/* Include files */

#include "modello_2017b_levaRetro_acc_sfun.h"
#include "c27_modello_2017b_levaRetro_acc.h"
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
#define c27_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define c27_IN_ACTIVATE_DRIVES         ((uint8_T)1U)
#define c27_IN_DRIVES_ACTIVE           ((uint8_T)2U)
#define c27_IN_ETHERCAT_STARTED        ((uint8_T)3U)
#define c27_IN_IDLE                    ((uint8_T)4U)
#define c27_IN_RESET_ENCODER           ((uint8_T)5U)
#define c27_IN_START_ETHERCAT          ((uint8_T)6U)
#define c27_IN_SWITCH_OFF_DRIVES       ((uint8_T)7U)
#define c27_IN_SWITCH_OFF_ETH          ((uint8_T)8U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c27_debug_family_names[2] = { "nargin", "nargout" };

static const char * c27_b_debug_family_names[2] = { "nargin", "nargout" };

static const char * c27_c_debug_family_names[2] = { "nargin", "nargout" };

static const char * c27_d_debug_family_names[2] = { "nargin", "nargout" };

static const char * c27_e_debug_family_names[2] = { "nargin", "nargout" };

static const char * c27_f_debug_family_names[2] = { "nargin", "nargout" };

static const char * c27_g_debug_family_names[2] = { "nargin", "nargout" };

static const char * c27_h_debug_family_names[2] = { "nargin", "nargout" };

static const char * c27_i_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c27_j_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c27_k_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c27_l_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c27_m_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c27_n_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c27_o_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c27_p_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

/* Function Declarations */
static void initialize_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void initialize_params_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void enable_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void disable_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c27_update_debugger_state_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void ext_mode_exec_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void set_sim_state_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_st);
static void c27_set_sim_state_side_effects_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void finalize_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void sf_gateway_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void mdl_start_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c27_chartstep_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void initSimStructsc27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c27_DRIVES_ACTIVE(SFc27_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance);
static void c27_ACTIVATE_DRIVES(SFc27_modello_2017b_levaRetro_accInstanceStruct *
  chartInstance);
static void init_script_number_translation(uint32_T c27_machineNumber, uint32_T
  c27_chartNumber, uint32_T c27_instanceNumber);
static const mxArray *c27_sf_marshallOut(void *chartInstanceVoid, void
  *c27_inData);
static real_T c27_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_nargout, const char_T *c27_identifier);
static real_T c27_b_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_u, const emlrtMsgIdentifier *c27_parentId);
static void c27_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c27_mxArrayInData, const char_T *c27_varName, void *c27_outData);
static const mxArray *c27_b_sf_marshallOut(void *chartInstanceVoid, void
  *c27_inData);
static boolean_T c27_c_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_u, const emlrtMsgIdentifier *c27_parentId);
static void c27_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c27_mxArrayInData, const char_T *c27_varName, void *c27_outData);
static const mxArray *c27_c_sf_marshallOut(void *chartInstanceVoid, void
  *c27_inData);
static int32_T c27_d_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_u, const emlrtMsgIdentifier *c27_parentId);
static void c27_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c27_mxArrayInData, const char_T *c27_varName, void *c27_outData);
static const mxArray *c27_d_sf_marshallOut(void *chartInstanceVoid, void
  *c27_inData);
static uint8_T c27_e_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_b_is_active_c27_modello_2017b_levaRetro_acc, const char_T
   *c27_identifier);
static uint8_T c27_f_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_u, const emlrtMsgIdentifier *c27_parentId);
static void c27_g_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_b_dataWrittenToVector, const char_T *c27_identifier, boolean_T c27_y[6]);
static void c27_h_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_u, const emlrtMsgIdentifier *c27_parentId, boolean_T c27_y[6]);
static const mxArray *c27_i_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_b_setSimStateSideEffectsInfo, const char_T *c27_identifier);
static const mxArray *c27_j_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_u, const emlrtMsgIdentifier *c27_parentId);
static const mxArray *sf_get_hover_data_for_msg
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, int32_T
   c27_ssid);
static void c27_init_sf_message_store_memory
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void init_dsm_address_info
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void init_simulink_io_address
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc27_modello_2017b_levaRetro_acc(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c27_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c27_doSetSimStateSideEffects = 0U;
  chartInstance->c27_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c27_is_active_c27_modello_2017b_levaRetro_acc = 0U;
  *chartInstance->c27_is_c27_modello_2017b_levaRetro_acc =
    c27_IN_NO_ACTIVE_CHILD;
}

static void initialize_params_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c27_update_debugger_state_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  uint32_T c27_prevAniVal;
  c27_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c27_is_active_c27_modello_2017b_levaRetro_acc == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 6U, *chartInstance->c27_sfEvent);
  }

  if (*chartInstance->c27_is_c27_modello_2017b_levaRetro_acc ==
      c27_IN_SWITCH_OFF_ETH) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c27_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c27_sfEvent);
  }

  if (*chartInstance->c27_is_c27_modello_2017b_levaRetro_acc ==
      c27_IN_SWITCH_OFF_DRIVES) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c27_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c27_sfEvent);
  }

  if (*chartInstance->c27_is_c27_modello_2017b_levaRetro_acc == c27_IN_IDLE) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c27_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c27_sfEvent);
  }

  if (*chartInstance->c27_is_c27_modello_2017b_levaRetro_acc ==
      c27_IN_START_ETHERCAT) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c27_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c27_sfEvent);
  }

  if (*chartInstance->c27_is_c27_modello_2017b_levaRetro_acc ==
      c27_IN_DRIVES_ACTIVE) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c27_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c27_sfEvent);
  }

  if (*chartInstance->c27_is_c27_modello_2017b_levaRetro_acc ==
      c27_IN_RESET_ENCODER) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c27_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c27_sfEvent);
  }

  if (*chartInstance->c27_is_c27_modello_2017b_levaRetro_acc ==
      c27_IN_ACTIVATE_DRIVES) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c27_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c27_sfEvent);
  }

  if (*chartInstance->c27_is_c27_modello_2017b_levaRetro_acc ==
      c27_IN_ETHERCAT_STARTED) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c27_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c27_sfEvent);
  }

  _SFD_SET_ANIMATION(c27_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  c27_update_debugger_state_c27_modello_2017b_levaRetro_acc(chartInstance);
}

static const mxArray *get_sim_state_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  const mxArray *c27_st;
  const mxArray *c27_y = NULL;
  real_T c27_hoistedGlobal;
  const mxArray *c27_b_y = NULL;
  real_T c27_b_hoistedGlobal;
  const mxArray *c27_c_y = NULL;
  real_T c27_c_hoistedGlobal;
  const mxArray *c27_d_y = NULL;
  real_T c27_d_hoistedGlobal;
  const mxArray *c27_e_y = NULL;
  real_T c27_e_hoistedGlobal;
  const mxArray *c27_f_y = NULL;
  real_T c27_f_hoistedGlobal;
  const mxArray *c27_g_y = NULL;
  uint8_T c27_g_hoistedGlobal;
  const mxArray *c27_h_y = NULL;
  uint8_T c27_h_hoistedGlobal;
  const mxArray *c27_i_y = NULL;
  const mxArray *c27_j_y = NULL;
  c27_st = NULL;
  c27_st = NULL;
  c27_y = NULL;
  sf_mex_assign(&c27_y, sf_mex_createcellmatrix(9, 1), false);
  c27_hoistedGlobal = *chartInstance->c27_enable_drives;
  c27_b_y = NULL;
  sf_mex_assign(&c27_b_y, sf_mex_create("y", &c27_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c27_y, 0, c27_b_y);
  c27_b_hoistedGlobal = *chartInstance->c27_enable_ethercat;
  c27_c_y = NULL;
  sf_mex_assign(&c27_c_y, sf_mex_create("y", &c27_b_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c27_y, 1, c27_c_y);
  c27_c_hoistedGlobal = *chartInstance->c27_enable_forces;
  c27_d_y = NULL;
  sf_mex_assign(&c27_d_y, sf_mex_create("y", &c27_c_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c27_y, 2, c27_d_y);
  c27_d_hoistedGlobal = *chartInstance->c27_x_axis_reset;
  c27_e_y = NULL;
  sf_mex_assign(&c27_e_y, sf_mex_create("y", &c27_d_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c27_y, 3, c27_e_y);
  c27_e_hoistedGlobal = *chartInstance->c27_y_axis_reset;
  c27_f_y = NULL;
  sf_mex_assign(&c27_f_y, sf_mex_create("y", &c27_e_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c27_y, 4, c27_f_y);
  c27_f_hoistedGlobal = *chartInstance->c27_timenow;
  c27_g_y = NULL;
  sf_mex_assign(&c27_g_y, sf_mex_create("y", &c27_f_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c27_y, 5, c27_g_y);
  c27_g_hoistedGlobal =
    *chartInstance->c27_is_active_c27_modello_2017b_levaRetro_acc;
  c27_h_y = NULL;
  sf_mex_assign(&c27_h_y, sf_mex_create("y", &c27_g_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c27_y, 6, c27_h_y);
  c27_h_hoistedGlobal = *chartInstance->c27_is_c27_modello_2017b_levaRetro_acc;
  c27_i_y = NULL;
  sf_mex_assign(&c27_i_y, sf_mex_create("y", &c27_h_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c27_y, 7, c27_i_y);
  c27_j_y = NULL;
  sf_mex_assign(&c27_j_y, sf_mex_create("y",
    chartInstance->c27_dataWrittenToVector, 11, 0U, 1U, 0U, 1, 6), false);
  sf_mex_setcell(c27_y, 8, c27_j_y);
  sf_mex_assign(&c27_st, c27_y, false);
  return c27_st;
}

static void set_sim_state_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_st)
{
  const mxArray *c27_u;
  boolean_T c27_bv0[6];
  int32_T c27_i0;
  c27_u = sf_mex_dup(c27_st);
  *chartInstance->c27_enable_drives = c27_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c27_u, 0)), "enable_drives");
  *chartInstance->c27_enable_ethercat = c27_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c27_u, 1)), "enable_ethercat");
  *chartInstance->c27_enable_forces = c27_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c27_u, 2)), "enable_forces");
  *chartInstance->c27_x_axis_reset = c27_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c27_u, 3)), "x_axis_reset");
  *chartInstance->c27_y_axis_reset = c27_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c27_u, 4)), "y_axis_reset");
  *chartInstance->c27_timenow = c27_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c27_u, 5)), "timenow");
  *chartInstance->c27_is_active_c27_modello_2017b_levaRetro_acc =
    c27_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c27_u, 6)),
    "is_active_c27_modello_2017b_levaRetro_acc");
  *chartInstance->c27_is_c27_modello_2017b_levaRetro_acc =
    c27_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c27_u, 7)),
    "is_c27_modello_2017b_levaRetro_acc");
  c27_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c27_u, 8)),
    "dataWrittenToVector", c27_bv0);
  for (c27_i0 = 0; c27_i0 < 6; c27_i0++) {
    chartInstance->c27_dataWrittenToVector[c27_i0] = c27_bv0[c27_i0];
  }

  sf_mex_assign(&chartInstance->c27_setSimStateSideEffectsInfo,
                c27_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c27_u, 9)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c27_u);
  chartInstance->c27_doSetSimStateSideEffects = 1U;
  c27_update_debugger_state_c27_modello_2017b_levaRetro_acc(chartInstance);
  sf_mex_destroy(&c27_st);
}

static void c27_set_sim_state_side_effects_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  if (chartInstance->c27_doSetSimStateSideEffects != 0) {
    chartInstance->c27_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c27_setSimStateSideEffectsInfo);
}

static void sf_gateway_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  c27_set_sim_state_side_effects_c27_modello_2017b_levaRetro_acc(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 6U, *chartInstance->c27_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c27_y_axis_drive_en, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c27_x_axis_drive_en, 4U);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c27_time, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c27_eth_ready, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c27_start, 1U);
  *chartInstance->c27_sfEvent = CALL_EVENT;
  c27_chartstep_c27_modello_2017b_levaRetro_acc(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_modello_2017b_levaRetro_accMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  c27_init_sf_message_store_memory(chartInstance);
  sim_mode_is_external(chartInstance->S);
}

static void c27_chartstep_c27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  uint32_T c27_debug_family_var_map[3];
  real_T c27_nargin = 0.0;
  real_T c27_b_nargin = 0.0;
  real_T c27_c_nargin = 0.0;
  real_T c27_d_nargin = 0.0;
  real_T c27_e_nargin = 0.0;
  real_T c27_f_nargin = 0.0;
  uint32_T c27_b_debug_family_var_map[2];
  real_T c27_nargout = 1.0;
  real_T c27_b_nargout = 1.0;
  real_T c27_c_nargout = 1.0;
  real_T c27_d_nargout = 1.0;
  real_T c27_e_nargout = 1.0;
  real_T c27_f_nargout = 1.0;
  real_T c27_g_nargin = 0.0;
  boolean_T c27_out;
  boolean_T c27_b_out;
  boolean_T c27_c_out;
  boolean_T c27_d_out;
  boolean_T c27_e_out;
  boolean_T c27_f_out;
  real_T c27_g_nargout = 0.0;
  real_T c27_h_nargin = 0.0;
  real_T c27_i_nargin = 0.0;
  real_T c27_h_nargout = 0.0;
  real_T c27_i_nargout = 0.0;
  real_T c27_j_nargin = 0.0;
  real_T c27_k_nargin = 0.0;
  real_T c27_j_nargout = 0.0;
  real_T c27_k_nargout = 0.0;
  real_T c27_l_nargin = 0.0;
  real_T c27_l_nargout = 0.0;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 6U, *chartInstance->c27_sfEvent);
  if (*chartInstance->c27_is_active_c27_modello_2017b_levaRetro_acc == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 6U, *chartInstance->c27_sfEvent);
    *chartInstance->c27_is_active_c27_modello_2017b_levaRetro_acc = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c27_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c27_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c27_h_debug_family_names,
      c27_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_g_nargin, 0U, c27_sf_marshallOut,
      c27_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_g_nargout, 1U, c27_sf_marshallOut,
      c27_sf_marshallIn);
    *chartInstance->c27_x_axis_reset = 0.0;
    chartInstance->c27_dataWrittenToVector[0U] = true;
    chartInstance->c27_dataWrittenToVector[0U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c27_x_axis_reset, 6U);
    *chartInstance->c27_y_axis_reset = 0.0;
    chartInstance->c27_dataWrittenToVector[1U] = true;
    chartInstance->c27_dataWrittenToVector[1U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c27_y_axis_reset, 7U);
    *chartInstance->c27_enable_drives = 0.0;
    chartInstance->c27_dataWrittenToVector[2U] = true;
    chartInstance->c27_dataWrittenToVector[2U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c27_enable_drives, 8U);
    *chartInstance->c27_enable_forces = 0.0;
    chartInstance->c27_dataWrittenToVector[4U] = true;
    chartInstance->c27_dataWrittenToVector[4U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c27_enable_forces, 9U);
    *chartInstance->c27_enable_ethercat = 0.0;
    chartInstance->c27_dataWrittenToVector[5U] = true;
    chartInstance->c27_dataWrittenToVector[5U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c27_enable_ethercat, 10U);
    _SFD_SYMBOL_SCOPE_POP();
    *chartInstance->c27_is_c27_modello_2017b_levaRetro_acc = c27_IN_IDLE;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c27_sfEvent);
  } else {
    switch (*chartInstance->c27_is_c27_modello_2017b_levaRetro_acc) {
     case c27_IN_ACTIVATE_DRIVES:
      CV_CHART_EVAL(6, 0, c27_IN_ACTIVATE_DRIVES);
      c27_ACTIVATE_DRIVES(chartInstance);
      break;

     case c27_IN_DRIVES_ACTIVE:
      CV_CHART_EVAL(6, 0, c27_IN_DRIVES_ACTIVE);
      c27_DRIVES_ACTIVE(chartInstance);
      break;

     case c27_IN_ETHERCAT_STARTED:
      CV_CHART_EVAL(6, 0, c27_IN_ETHERCAT_STARTED);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   *chartInstance->c27_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c27_o_debug_family_names,
        c27_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_nargin, 0U, c27_sf_marshallOut,
        c27_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_nargout, 1U, c27_sf_marshallOut,
        c27_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_out, 2U, c27_b_sf_marshallOut,
        c27_b_sf_marshallIn);
      if (!chartInstance->c27_dataWrittenToVector[3U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(0U);
      }

      if (!chartInstance->c27_dataWrittenToVector[3U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(0U);
      }

      c27_out = CV_EML_IF(3, 0, 0, CV_RELATIONAL_EVAL(5U, 3U, 0,
        *chartInstance->c27_time - *chartInstance->c27_timenow, 1000.0, -1, 4U, *
        chartInstance->c27_time - *chartInstance->c27_timenow > 1000.0));
      _SFD_SYMBOL_SCOPE_POP();
      if (c27_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c27_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c27_sfEvent);
        *chartInstance->c27_is_c27_modello_2017b_levaRetro_acc =
          c27_IN_RESET_ENCODER;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c27_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c27_e_debug_family_names,
          c27_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_j_nargin, 0U,
          c27_sf_marshallOut, c27_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_j_nargout, 1U,
          c27_sf_marshallOut, c27_sf_marshallIn);
        *chartInstance->c27_x_axis_reset = 0.0;
        chartInstance->c27_dataWrittenToVector[0U] = true;
        chartInstance->c27_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c27_x_axis_reset, 6U);
        *chartInstance->c27_y_axis_reset = 0.0;
        chartInstance->c27_dataWrittenToVector[1U] = true;
        chartInstance->c27_dataWrittenToVector[1U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c27_y_axis_reset, 7U);
        *chartInstance->c27_timenow = *chartInstance->c27_time;
        chartInstance->c27_dataWrittenToVector[3U] = true;
        chartInstance->c27_dataWrittenToVector[3U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c27_timenow, 0U);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                     *chartInstance->c27_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c27_sfEvent);
      break;

     case c27_IN_IDLE:
      CV_CHART_EVAL(6, 0, c27_IN_IDLE);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   *chartInstance->c27_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c27_l_debug_family_names,
        c27_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_b_nargin, 0U, c27_sf_marshallOut,
        c27_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_b_nargout, 1U,
        c27_sf_marshallOut, c27_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_b_out, 2U, c27_b_sf_marshallOut,
        c27_b_sf_marshallIn);
      c27_b_out = CV_EML_IF(1, 0, 0, CV_RELATIONAL_EVAL(5U, 1U, 0, (real_T)
        *chartInstance->c27_start, 1.0, -1, 0U, *chartInstance->c27_start ==
        1.0F));
      _SFD_SYMBOL_SCOPE_POP();
      if (c27_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c27_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c27_sfEvent);
        *chartInstance->c27_is_c27_modello_2017b_levaRetro_acc =
          c27_IN_START_ETHERCAT;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c27_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c27_c_debug_family_names,
          c27_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_h_nargin, 0U,
          c27_sf_marshallOut, c27_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_h_nargout, 1U,
          c27_sf_marshallOut, c27_sf_marshallIn);
        *chartInstance->c27_enable_ethercat = 1.0;
        chartInstance->c27_dataWrittenToVector[5U] = true;
        chartInstance->c27_dataWrittenToVector[5U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c27_enable_ethercat, 10U);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                     *chartInstance->c27_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c27_sfEvent);
      break;

     case c27_IN_RESET_ENCODER:
      CV_CHART_EVAL(6, 0, c27_IN_RESET_ENCODER);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   *chartInstance->c27_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c27_p_debug_family_names,
        c27_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_c_nargin, 0U, c27_sf_marshallOut,
        c27_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_c_nargout, 1U,
        c27_sf_marshallOut, c27_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_c_out, 2U, c27_b_sf_marshallOut,
        c27_b_sf_marshallIn);
      if (!chartInstance->c27_dataWrittenToVector[3U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(0U);
      }

      if (!chartInstance->c27_dataWrittenToVector[3U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(0U);
      }

      c27_c_out = CV_EML_IF(4, 0, 0, CV_RELATIONAL_EVAL(5U, 4U, 0,
        *chartInstance->c27_time - *chartInstance->c27_timenow, 1000.0, -1, 4U, *
        chartInstance->c27_time - *chartInstance->c27_timenow > 1000.0));
      _SFD_SYMBOL_SCOPE_POP();
      if (c27_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c27_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c27_sfEvent);
        *chartInstance->c27_is_c27_modello_2017b_levaRetro_acc =
          c27_IN_ACTIVATE_DRIVES;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c27_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c27_f_debug_family_names,
          c27_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_k_nargin, 0U,
          c27_sf_marshallOut, c27_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_k_nargout, 1U,
          c27_sf_marshallOut, c27_sf_marshallIn);
        *chartInstance->c27_enable_drives = 1.0;
        chartInstance->c27_dataWrittenToVector[2U] = true;
        chartInstance->c27_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c27_enable_drives, 8U);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                     *chartInstance->c27_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c27_sfEvent);
      break;

     case c27_IN_START_ETHERCAT:
      CV_CHART_EVAL(6, 0, c27_IN_START_ETHERCAT);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   *chartInstance->c27_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c27_m_debug_family_names,
        c27_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_d_nargin, 0U, c27_sf_marshallOut,
        c27_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_d_nargout, 1U,
        c27_sf_marshallOut, c27_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_d_out, 2U, c27_b_sf_marshallOut,
        c27_b_sf_marshallIn);
      c27_d_out = CV_EML_IF(2, 0, 0, CV_RELATIONAL_EVAL(5U, 2U, 0, (real_T)
        *chartInstance->c27_eth_ready, 1.0, -1, 0U,
        *chartInstance->c27_eth_ready == 1.0F));
      _SFD_SYMBOL_SCOPE_POP();
      if (c27_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c27_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c27_sfEvent);
        *chartInstance->c27_is_c27_modello_2017b_levaRetro_acc =
          c27_IN_ETHERCAT_STARTED;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c27_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c27_g_debug_family_names,
          c27_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_i_nargin, 0U,
          c27_sf_marshallOut, c27_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_i_nargout, 1U,
          c27_sf_marshallOut, c27_sf_marshallIn);
        *chartInstance->c27_x_axis_reset = 1.0;
        chartInstance->c27_dataWrittenToVector[0U] = true;
        chartInstance->c27_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c27_x_axis_reset, 6U);
        *chartInstance->c27_y_axis_reset = 1.0;
        chartInstance->c27_dataWrittenToVector[1U] = true;
        chartInstance->c27_dataWrittenToVector[1U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c27_y_axis_reset, 7U);
        *chartInstance->c27_timenow = *chartInstance->c27_time;
        chartInstance->c27_dataWrittenToVector[3U] = true;
        chartInstance->c27_dataWrittenToVector[3U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c27_timenow, 0U);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                     *chartInstance->c27_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c27_sfEvent);
      break;

     case c27_IN_SWITCH_OFF_DRIVES:
      CV_CHART_EVAL(6, 0, c27_IN_SWITCH_OFF_DRIVES);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   *chartInstance->c27_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c27_j_debug_family_names,
        c27_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_e_nargin, 0U, c27_sf_marshallOut,
        c27_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_e_nargout, 1U,
        c27_sf_marshallOut, c27_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_e_out, 2U, c27_b_sf_marshallOut,
        c27_b_sf_marshallIn);
      if (CV_EML_COND(7, 0, 0, CV_RELATIONAL_EVAL(5U, 7U, 0, (real_T)
            *chartInstance->c27_x_axis_drive_en, 0.0, -1, 0U,
            *chartInstance->c27_x_axis_drive_en == 0.0F)) && CV_EML_COND(7, 0, 1,
           CV_RELATIONAL_EVAL(5U, 7U, 1, (real_T)
                              *chartInstance->c27_x_axis_drive_en, 0.0, -1, 0U, *
                              chartInstance->c27_x_axis_drive_en == 0.0F))) {
        CV_EML_MCDC(7, 0, 0, true);
        CV_EML_IF(7, 0, 0, true);
        c27_e_out = true;
      } else {
        CV_EML_MCDC(7, 0, 0, false);
        CV_EML_IF(7, 0, 0, false);
        c27_e_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c27_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c27_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c27_sfEvent);
        *chartInstance->c27_is_c27_modello_2017b_levaRetro_acc =
          c27_IN_SWITCH_OFF_ETH;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c27_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c27_debug_family_names,
          c27_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_l_nargin, 0U,
          c27_sf_marshallOut, c27_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_l_nargout, 1U,
          c27_sf_marshallOut, c27_sf_marshallIn);
        *chartInstance->c27_enable_ethercat = 0.0;
        chartInstance->c27_dataWrittenToVector[5U] = true;
        chartInstance->c27_dataWrittenToVector[5U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c27_enable_ethercat, 10U);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                     *chartInstance->c27_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c27_sfEvent);
      break;

     case c27_IN_SWITCH_OFF_ETH:
      CV_CHART_EVAL(6, 0, c27_IN_SWITCH_OFF_ETH);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                   *chartInstance->c27_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c27_k_debug_family_names,
        c27_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_f_nargin, 0U, c27_sf_marshallOut,
        c27_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_f_nargout, 1U,
        c27_sf_marshallOut, c27_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_f_out, 2U, c27_b_sf_marshallOut,
        c27_b_sf_marshallIn);
      c27_f_out = CV_EML_IF(8, 0, 0, CV_RELATIONAL_EVAL(5U, 8U, 0, (real_T)
        *chartInstance->c27_eth_ready, 0.0, -1, 0U,
        *chartInstance->c27_eth_ready == 0.0F));
      _SFD_SYMBOL_SCOPE_POP();
      if (c27_f_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c27_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c27_sfEvent);
        *chartInstance->c27_is_c27_modello_2017b_levaRetro_acc = c27_IN_IDLE;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c27_sfEvent);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                     *chartInstance->c27_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c27_sfEvent);
      break;

     default:
      CV_CHART_EVAL(6, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c27_is_c27_modello_2017b_levaRetro_acc =
        c27_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c27_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c27_sfEvent);
}

static void initSimStructsc27_modello_2017b_levaRetro_acc
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c27_DRIVES_ACTIVE(SFc27_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance)
{
  uint32_T c27_debug_family_var_map[3];
  real_T c27_nargin = 0.0;
  real_T c27_nargout = 1.0;
  boolean_T c27_out;
  uint32_T c27_b_debug_family_var_map[2];
  real_T c27_b_nargin = 0.0;
  real_T c27_b_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U, *chartInstance->c27_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c27_i_debug_family_names,
    c27_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_nargin, 0U, c27_sf_marshallOut,
    c27_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_nargout, 1U, c27_sf_marshallOut,
    c27_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_out, 2U, c27_b_sf_marshallOut,
    c27_b_sf_marshallIn);
  c27_out = CV_EML_IF(6, 0, 0, CV_RELATIONAL_EVAL(5U, 6U, 0, (real_T)
    *chartInstance->c27_start, 0.0, -1, 0U, *chartInstance->c27_start == 0.0F));
  _SFD_SYMBOL_SCOPE_POP();
  if (c27_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c27_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c27_sfEvent);
    *chartInstance->c27_is_c27_modello_2017b_levaRetro_acc =
      c27_IN_SWITCH_OFF_DRIVES;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c27_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c27_b_debug_family_names,
      c27_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_b_nargin, 0U, c27_sf_marshallOut,
      c27_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_b_nargout, 1U, c27_sf_marshallOut,
      c27_sf_marshallIn);
    *chartInstance->c27_enable_forces = 0.0;
    chartInstance->c27_dataWrittenToVector[4U] = true;
    chartInstance->c27_dataWrittenToVector[4U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c27_enable_forces, 9U);
    *chartInstance->c27_enable_drives = 0.0;
    chartInstance->c27_dataWrittenToVector[2U] = true;
    chartInstance->c27_dataWrittenToVector[2U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c27_enable_drives, 8U);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                 *chartInstance->c27_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c27_sfEvent);
}

static void c27_ACTIVATE_DRIVES(SFc27_modello_2017b_levaRetro_accInstanceStruct *
  chartInstance)
{
  uint32_T c27_debug_family_var_map[3];
  real_T c27_nargin = 0.0;
  real_T c27_nargout = 1.0;
  boolean_T c27_out;
  uint32_T c27_b_debug_family_var_map[2];
  real_T c27_b_nargin = 0.0;
  real_T c27_b_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U, *chartInstance->c27_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c27_n_debug_family_names,
    c27_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_nargin, 0U, c27_sf_marshallOut,
    c27_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_nargout, 1U, c27_sf_marshallOut,
    c27_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_out, 2U, c27_b_sf_marshallOut,
    c27_b_sf_marshallIn);
  if (CV_EML_COND(5, 0, 0, CV_RELATIONAL_EVAL(5U, 5U, 0, (real_T)
        *chartInstance->c27_x_axis_drive_en, 1.0, -1, 0U,
        *chartInstance->c27_x_axis_drive_en == 1.0F)) && CV_EML_COND(5, 0, 1,
       CV_RELATIONAL_EVAL(5U, 5U, 1, (real_T)*chartInstance->c27_x_axis_drive_en,
        1.0, -1, 0U, *chartInstance->c27_x_axis_drive_en == 1.0F))) {
    CV_EML_MCDC(5, 0, 0, true);
    CV_EML_IF(5, 0, 0, true);
    c27_out = true;
  } else {
    CV_EML_MCDC(5, 0, 0, false);
    CV_EML_IF(5, 0, 0, false);
    c27_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c27_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c27_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c27_sfEvent);
    *chartInstance->c27_is_c27_modello_2017b_levaRetro_acc =
      c27_IN_DRIVES_ACTIVE;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c27_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c27_d_debug_family_names,
      c27_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_b_nargin, 0U, c27_sf_marshallOut,
      c27_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c27_b_nargout, 1U, c27_sf_marshallOut,
      c27_sf_marshallIn);
    *chartInstance->c27_enable_forces = 1.0;
    chartInstance->c27_dataWrittenToVector[4U] = true;
    chartInstance->c27_dataWrittenToVector[4U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c27_enable_forces, 9U);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                 *chartInstance->c27_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c27_sfEvent);
}

static void init_script_number_translation(uint32_T c27_machineNumber, uint32_T
  c27_chartNumber, uint32_T c27_instanceNumber)
{
  (void)(c27_machineNumber);
  (void)(c27_chartNumber);
  (void)(c27_instanceNumber);
}

static const mxArray *c27_sf_marshallOut(void *chartInstanceVoid, void
  *c27_inData)
{
  const mxArray *c27_mxArrayOutData;
  real_T c27_u;
  const mxArray *c27_y = NULL;
  SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc27_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c27_mxArrayOutData = NULL;
  c27_mxArrayOutData = NULL;
  c27_u = *(real_T *)c27_inData;
  c27_y = NULL;
  sf_mex_assign(&c27_y, sf_mex_create("y", &c27_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c27_mxArrayOutData, c27_y, false);
  return c27_mxArrayOutData;
}

static real_T c27_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_nargout, const char_T *c27_identifier)
{
  real_T c27_y;
  emlrtMsgIdentifier c27_thisId;
  c27_thisId.fIdentifier = (const char *)c27_identifier;
  c27_thisId.fParent = NULL;
  c27_thisId.bParentIsCell = false;
  c27_y = c27_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c27_nargout),
    &c27_thisId);
  sf_mex_destroy(&c27_nargout);
  return c27_y;
}

static real_T c27_b_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_u, const emlrtMsgIdentifier *c27_parentId)
{
  real_T c27_y;
  real_T c27_d0;
  (void)chartInstance;
  sf_mex_import(c27_parentId, sf_mex_dup(c27_u), &c27_d0, 1, 0, 0U, 0, 0U, 0);
  c27_y = c27_d0;
  sf_mex_destroy(&c27_u);
  return c27_y;
}

static void c27_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c27_mxArrayInData, const char_T *c27_varName, void *c27_outData)
{
  const mxArray *c27_nargout;
  emlrtMsgIdentifier c27_thisId;
  real_T c27_y;
  SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc27_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c27_nargout = sf_mex_dup(c27_mxArrayInData);
  c27_thisId.fIdentifier = (const char *)c27_varName;
  c27_thisId.fParent = NULL;
  c27_thisId.bParentIsCell = false;
  c27_y = c27_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c27_nargout),
    &c27_thisId);
  sf_mex_destroy(&c27_nargout);
  *(real_T *)c27_outData = c27_y;
  sf_mex_destroy(&c27_mxArrayInData);
}

static const mxArray *c27_b_sf_marshallOut(void *chartInstanceVoid, void
  *c27_inData)
{
  const mxArray *c27_mxArrayOutData;
  boolean_T c27_u;
  const mxArray *c27_y = NULL;
  SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc27_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c27_mxArrayOutData = NULL;
  c27_mxArrayOutData = NULL;
  c27_u = *(boolean_T *)c27_inData;
  c27_y = NULL;
  sf_mex_assign(&c27_y, sf_mex_create("y", &c27_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c27_mxArrayOutData, c27_y, false);
  return c27_mxArrayOutData;
}

static boolean_T c27_c_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_u, const emlrtMsgIdentifier *c27_parentId)
{
  boolean_T c27_y;
  boolean_T c27_b0;
  (void)chartInstance;
  sf_mex_import(c27_parentId, sf_mex_dup(c27_u), &c27_b0, 1, 11, 0U, 0, 0U, 0);
  c27_y = c27_b0;
  sf_mex_destroy(&c27_u);
  return c27_y;
}

static void c27_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c27_mxArrayInData, const char_T *c27_varName, void *c27_outData)
{
  const mxArray *c27_sf_internal_predicateOutput;
  emlrtMsgIdentifier c27_thisId;
  boolean_T c27_y;
  SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc27_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c27_sf_internal_predicateOutput = sf_mex_dup(c27_mxArrayInData);
  c27_thisId.fIdentifier = (const char *)c27_varName;
  c27_thisId.fParent = NULL;
  c27_thisId.bParentIsCell = false;
  c27_y = c27_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c27_sf_internal_predicateOutput), &c27_thisId);
  sf_mex_destroy(&c27_sf_internal_predicateOutput);
  *(boolean_T *)c27_outData = c27_y;
  sf_mex_destroy(&c27_mxArrayInData);
}

const mxArray
  *sf_c27_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info(void)
{
  const mxArray *c27_nameCaptureInfo = NULL;
  c27_nameCaptureInfo = NULL;
  sf_mex_assign(&c27_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c27_nameCaptureInfo;
}

static const mxArray *c27_c_sf_marshallOut(void *chartInstanceVoid, void
  *c27_inData)
{
  const mxArray *c27_mxArrayOutData;
  int32_T c27_u;
  const mxArray *c27_y = NULL;
  SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc27_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c27_mxArrayOutData = NULL;
  c27_mxArrayOutData = NULL;
  c27_u = *(int32_T *)c27_inData;
  c27_y = NULL;
  sf_mex_assign(&c27_y, sf_mex_create("y", &c27_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c27_mxArrayOutData, c27_y, false);
  return c27_mxArrayOutData;
}

static int32_T c27_d_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_u, const emlrtMsgIdentifier *c27_parentId)
{
  int32_T c27_y;
  int32_T c27_i1;
  (void)chartInstance;
  sf_mex_import(c27_parentId, sf_mex_dup(c27_u), &c27_i1, 1, 6, 0U, 0, 0U, 0);
  c27_y = c27_i1;
  sf_mex_destroy(&c27_u);
  return c27_y;
}

static void c27_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c27_mxArrayInData, const char_T *c27_varName, void *c27_outData)
{
  const mxArray *c27_b_sfEvent;
  emlrtMsgIdentifier c27_thisId;
  int32_T c27_y;
  SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc27_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c27_b_sfEvent = sf_mex_dup(c27_mxArrayInData);
  c27_thisId.fIdentifier = (const char *)c27_varName;
  c27_thisId.fParent = NULL;
  c27_thisId.bParentIsCell = false;
  c27_y = c27_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c27_b_sfEvent),
    &c27_thisId);
  sf_mex_destroy(&c27_b_sfEvent);
  *(int32_T *)c27_outData = c27_y;
  sf_mex_destroy(&c27_mxArrayInData);
}

static const mxArray *c27_d_sf_marshallOut(void *chartInstanceVoid, void
  *c27_inData)
{
  const mxArray *c27_mxArrayOutData;
  real32_T c27_u;
  const mxArray *c27_y = NULL;
  SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc27_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c27_mxArrayOutData = NULL;
  c27_mxArrayOutData = NULL;
  c27_u = *(real32_T *)c27_inData;
  c27_y = NULL;
  sf_mex_assign(&c27_y, sf_mex_create("y", &c27_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c27_mxArrayOutData, c27_y, false);
  return c27_mxArrayOutData;
}

static uint8_T c27_e_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_b_is_active_c27_modello_2017b_levaRetro_acc, const char_T
   *c27_identifier)
{
  uint8_T c27_y;
  emlrtMsgIdentifier c27_thisId;
  c27_thisId.fIdentifier = (const char *)c27_identifier;
  c27_thisId.fParent = NULL;
  c27_thisId.bParentIsCell = false;
  c27_y = c27_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c27_b_is_active_c27_modello_2017b_levaRetro_acc), &c27_thisId);
  sf_mex_destroy(&c27_b_is_active_c27_modello_2017b_levaRetro_acc);
  return c27_y;
}

static uint8_T c27_f_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_u, const emlrtMsgIdentifier *c27_parentId)
{
  uint8_T c27_y;
  uint8_T c27_u0;
  (void)chartInstance;
  sf_mex_import(c27_parentId, sf_mex_dup(c27_u), &c27_u0, 1, 3, 0U, 0, 0U, 0);
  c27_y = c27_u0;
  sf_mex_destroy(&c27_u);
  return c27_y;
}

static void c27_g_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_b_dataWrittenToVector, const char_T *c27_identifier, boolean_T c27_y[6])
{
  emlrtMsgIdentifier c27_thisId;
  c27_thisId.fIdentifier = (const char *)c27_identifier;
  c27_thisId.fParent = NULL;
  c27_thisId.bParentIsCell = false;
  c27_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c27_b_dataWrittenToVector),
    &c27_thisId, c27_y);
  sf_mex_destroy(&c27_b_dataWrittenToVector);
}

static void c27_h_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_u, const emlrtMsgIdentifier *c27_parentId, boolean_T c27_y[6])
{
  boolean_T c27_bv1[6];
  int32_T c27_i2;
  (void)chartInstance;
  sf_mex_import(c27_parentId, sf_mex_dup(c27_u), c27_bv1, 1, 11, 0U, 1, 0U, 1, 6);
  for (c27_i2 = 0; c27_i2 < 6; c27_i2++) {
    c27_y[c27_i2] = c27_bv1[c27_i2];
  }

  sf_mex_destroy(&c27_u);
}

static const mxArray *c27_i_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_b_setSimStateSideEffectsInfo, const char_T *c27_identifier)
{
  const mxArray *c27_y = NULL;
  emlrtMsgIdentifier c27_thisId;
  c27_y = NULL;
  c27_thisId.fIdentifier = (const char *)c27_identifier;
  c27_thisId.fParent = NULL;
  c27_thisId.bParentIsCell = false;
  sf_mex_assign(&c27_y, c27_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c27_b_setSimStateSideEffectsInfo), &c27_thisId), false);
  sf_mex_destroy(&c27_b_setSimStateSideEffectsInfo);
  return c27_y;
}

static const mxArray *c27_j_emlrt_marshallIn
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray
   *c27_u, const emlrtMsgIdentifier *c27_parentId)
{
  const mxArray *c27_y = NULL;
  (void)chartInstance;
  (void)c27_parentId;
  c27_y = NULL;
  sf_mex_assign(&c27_y, sf_mex_duplicatearraysafe(&c27_u), false);
  sf_mex_destroy(&c27_u);
  return c27_y;
}

static const mxArray *sf_get_hover_data_for_msg
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance, int32_T
   c27_ssid)
{
  (void)chartInstance;
  (void)c27_ssid;
  return NULL;
}

static void c27_init_sf_message_store_memory
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  chartInstance->c27_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c27_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c27_is_active_c27_modello_2017b_levaRetro_acc = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 1);
  chartInstance->c27_is_c27_modello_2017b_levaRetro_acc = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 2);
  chartInstance->c27_start = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c27_eth_ready = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c27_x_axis_reset = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c27_y_axis_reset = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c27_enable_drives = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c27_timenow = (real_T *)ssGetDWork_wrapper(chartInstance->S, 3);
  chartInstance->c27_time = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c27_enable_forces = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c27_enable_ethercat = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c27_x_axis_drive_en = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c27_y_axis_drive_en = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
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
void sf_c27_modello_2017b_levaRetro_acc_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(432350931U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3064671397U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2702524961U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1362964948U);
}

mxArray* sf_c27_modello_2017b_levaRetro_acc_get_post_codegen_info(void);
mxArray *sf_c27_modello_2017b_levaRetro_acc_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("LAh3ABNNIFQlrx7v2rVruH");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,5,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,5,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxData);
  }

  {
    mxArray* mxPostCodegenInfo =
      sf_c27_modello_2017b_levaRetro_acc_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c27_modello_2017b_levaRetro_acc_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c27_modello_2017b_levaRetro_acc_jit_fallback_info(void)
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

mxArray *sf_c27_modello_2017b_levaRetro_acc_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c27_modello_2017b_levaRetro_acc_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c27_modello_2017b_levaRetro_acc(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x9'type','srcId','name','auxInfo'{{M[1],M[5],T\"enable_drives\",},{M[1],M[12],T\"enable_ethercat\",},{M[1],M[8],T\"enable_forces\",},{M[1],M[3],T\"x_axis_reset\",},{M[1],M[4],T\"y_axis_reset\",},{M[3],M[6],T\"timenow\",},{M[8],M[0],T\"is_active_c27_modello_2017b_levaRetro_acc\",},{M[9],M[0],T\"is_c27_modello_2017b_levaRetro_acc\",},{M[15],M[0],T\"dataWrittenToVector\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 9, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c27_modello_2017b_levaRetro_acc_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg
    ( (SFc27_modello_2017b_levaRetro_accInstanceStruct *) chartInstance, msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance =
      (SFc27_modello_2017b_levaRetro_accInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _modello_2017b_levaRetro_accMachineNumber_,
           27,
           8,
           9,
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
          _SFD_SET_DATA_PROPS(0,0,0,0,"timenow");
          _SFD_SET_DATA_PROPS(1,1,1,0,"start");
          _SFD_SET_DATA_PROPS(2,1,1,0,"eth_ready");
          _SFD_SET_DATA_PROPS(3,1,1,0,"time");
          _SFD_SET_DATA_PROPS(4,1,1,0,"x_axis_drive_en");
          _SFD_SET_DATA_PROPS(5,1,1,0,"y_axis_drive_en");
          _SFD_SET_DATA_PROPS(6,2,0,1,"x_axis_reset");
          _SFD_SET_DATA_PROPS(7,2,0,1,"y_axis_reset");
          _SFD_SET_DATA_PROPS(8,2,0,1,"enable_drives");
          _SFD_SET_DATA_PROPS(9,2,0,1,"enable_forces");
          _SFD_SET_DATA_PROPS(10,2,0,1,"enable_ethercat");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_CH_SUBSTATE_COUNT(8);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,5);
          _SFD_CH_SUBSTATE_INDEX(6,6);
          _SFD_CH_SUBSTATE_INDEX(7,7);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
        }

        _SFD_CV_INIT_CHART(8,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
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

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(7,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(8,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(5,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(7,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(6,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(5,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(1,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(4,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(0,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(2,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(0,0,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(6,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(6,0,0,1,9,1,9);
        _SFD_CV_INIT_EML_RELATIONAL(6,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML(7,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(7,0,0,1,41,1,41);

        {
          static int condStart[] = { 1, 23 };

          static int condEnd[] = { 19, 41 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(7,0,0,1,41,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(7,0,0,1,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(7,0,1,23,41,-1,0);
        _SFD_CV_INIT_EML(8,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(8,0,0,1,13,1,13);
        _SFD_CV_INIT_EML_RELATIONAL(8,0,0,1,13,-1,0);
        _SFD_CV_INIT_EML(1,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(1,0,0,1,9,1,9);
        _SFD_CV_INIT_EML_RELATIONAL(1,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML(2,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(2,0,0,1,13,1,13);
        _SFD_CV_INIT_EML_RELATIONAL(2,0,0,1,13,-1,0);
        _SFD_CV_INIT_EML(5,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(5,0,0,1,41,1,41);

        {
          static int condStart[] = { 1, 23 };

          static int condEnd[] = { 19, 41 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(5,0,0,1,41,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(5,0,0,1,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(5,0,1,23,41,-1,0);
        _SFD_CV_INIT_EML(3,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(3,0,0,1,22,1,22);
        _SFD_CV_INIT_EML_RELATIONAL(3,0,0,1,22,-1,4);
        _SFD_CV_INIT_EML(4,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(4,0,0,1,22,1,22);
        _SFD_CV_INIT_EML_RELATIONAL(4,0,0,1,22,-1,4);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c27_sf_marshallOut,(MexInFcnForType)c27_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c27_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c27_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c27_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c27_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c27_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c27_sf_marshallOut,(MexInFcnForType)c27_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c27_sf_marshallOut,(MexInFcnForType)c27_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c27_sf_marshallOut,(MexInFcnForType)c27_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c27_sf_marshallOut,(MexInFcnForType)c27_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c27_sf_marshallOut,(MexInFcnForType)c27_sf_marshallIn);
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
    SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance =
      (SFc27_modello_2017b_levaRetro_accInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(1U, (void *)chartInstance->c27_start);
        _SFD_SET_DATA_VALUE_PTR(2U, (void *)chartInstance->c27_eth_ready);
        _SFD_SET_DATA_VALUE_PTR(6U, (void *)chartInstance->c27_x_axis_reset);
        _SFD_SET_DATA_VALUE_PTR(7U, (void *)chartInstance->c27_y_axis_reset);
        _SFD_SET_DATA_VALUE_PTR(8U, (void *)chartInstance->c27_enable_drives);
        _SFD_SET_DATA_VALUE_PTR(0U, (void *)chartInstance->c27_timenow);
        _SFD_SET_DATA_VALUE_PTR(3U, (void *)chartInstance->c27_time);
        _SFD_SET_DATA_VALUE_PTR(9U, (void *)chartInstance->c27_enable_forces);
        _SFD_SET_DATA_VALUE_PTR(10U, (void *)chartInstance->c27_enable_ethercat);
        _SFD_SET_DATA_VALUE_PTR(4U, (void *)chartInstance->c27_x_axis_drive_en);
        _SFD_SET_DATA_VALUE_PTR(5U, (void *)chartInstance->c27_y_axis_drive_en);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sQEptMnNBUPwHCw1eYoyvuF";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_modello_2017b_levaRetro_acc_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 27, "dworkChecksum");
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

static void sf_opaque_initialize_c27_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc27_modello_2017b_levaRetro_accInstanceStruct*)
    chartInstanceVar)->S);
  chart_debug_initialization(((SFc27_modello_2017b_levaRetro_accInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c27_modello_2017b_levaRetro_acc
    ((SFc27_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
  initialize_c27_modello_2017b_levaRetro_acc
    ((SFc27_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c27_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  enable_c27_modello_2017b_levaRetro_acc
    ((SFc27_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c27_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  disable_c27_modello_2017b_levaRetro_acc
    ((SFc27_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c27_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  sf_gateway_c27_modello_2017b_levaRetro_acc
    ((SFc27_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c27_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  ext_mode_exec_c27_modello_2017b_levaRetro_acc
    ((SFc27_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c27_modello_2017b_levaRetro_acc
  (SimStruct* S)
{
  return get_sim_state_c27_modello_2017b_levaRetro_acc
    ((SFc27_modello_2017b_levaRetro_accInstanceStruct *)
     sf_get_chart_instance_ptr(S));    /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c27_modello_2017b_levaRetro_acc(SimStruct* S,
  const mxArray *st)
{
  set_sim_state_c27_modello_2017b_levaRetro_acc
    ((SFc27_modello_2017b_levaRetro_accInstanceStruct*)sf_get_chart_instance_ptr
     (S), st);
}

static void sf_opaque_terminate_c27_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc27_modello_2017b_levaRetro_accInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_modello_2017b_levaRetro_acc_optimization_info();
    }

    finalize_c27_modello_2017b_levaRetro_acc
      ((SFc27_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc27_modello_2017b_levaRetro_acc
    ((SFc27_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c27_modello_2017b_levaRetro_acc(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c27_modello_2017b_levaRetro_acc
      ((SFc27_modello_2017b_levaRetro_accInstanceStruct*)
       sf_get_chart_instance_ptr(S));
  }
}

mxArray *sf_c27_modello_2017b_levaRetro_acc_get_testpoint_info(void)
{
  const char *infoEncStr[] = {
    "100 S1x2'varName','path'{{T\"is_active_c27_modello_2017b_levaRetro_acc\",T\"is_active_c27_modello_2017b_levaRetro_acc\"},{T\"is_c27_modello_2017b_levaRetro_acc\",T\"is_c27_modello_2017b_levaRetro_acc\"}}"
  };

  mxArray *mxTpInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  return mxTpInfo;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x4'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id'{{T\"int32\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 4, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 294678633U, 1966649742U, 370666469U,
    2105092541U };

  return checksum;
}

static void mdlSetWorkWidths_c27_modello_2017b_levaRetro_acc(SimStruct *S)
{
  ssSetInputPortDirectFeedThrough(S, 0, 1);
  ssSetInputPortDirectFeedThrough(S, 1, 1);
  ssSetInputPortDirectFeedThrough(S, 2, 1);
  ssSetInputPortDirectFeedThrough(S, 3, 1);
  ssSetInputPortDirectFeedThrough(S, 4, 1);
  ssSetStatesModifiedOnlyInUpdate(S, 0);
  ssSetBlockIsPurelyCombinatorial_wrapper(S, 0);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_modello_2017b_levaRetro_acc_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      27);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,27,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 27);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,27);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,27,5);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,27,5);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=5; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 5; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,27);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(520251957U));
  ssSetChecksum1(S,(4226921659U));
  ssSetChecksum2(S,(335958452U));
  ssSetChecksum3(S,(1953518284U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c27_modello_2017b_levaRetro_acc(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c27_modello_2017b_levaRetro_acc(SimStruct *S)
{
  SFc27_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc27_modello_2017b_levaRetro_accInstanceStruct *)utMalloc
    (sizeof(SFc27_modello_2017b_levaRetro_accInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof
         (SFc27_modello_2017b_levaRetro_accInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c27_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c27_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c27_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c27_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c27_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c27_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c27_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c27_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c27_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.mdlStart = mdlStart_c27_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c27_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec =
    sf_opaque_ext_mode_exec_c27_modello_2017b_levaRetro_acc;
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
  mdl_start_c27_modello_2017b_levaRetro_acc(chartInstance);
}

void c27_modello_2017b_levaRetro_acc_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c27_modello_2017b_levaRetro_acc(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c27_modello_2017b_levaRetro_acc(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c27_modello_2017b_levaRetro_acc(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c27_modello_2017b_levaRetro_acc_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
