/* Include files */

#include "modello_2017b_levaRetro_acc_sfun.h"
#include "c3_modello_2017b_levaRetro_acc.h"
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
#define c3_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c3_IN_DS402StateMachine        ((uint8_T)1U)
#define c3_IN_dispatcher               ((uint8_T)1U)
#define c3_IN_fault                    ((uint8_T)2U)
#define c3_IN_fault_reaction_active    ((uint8_T)3U)
#define c3_IN_not_ready_to_switch_on   ((uint8_T)4U)
#define c3_IN_operation_enabled        ((uint8_T)5U)
#define c3_IN_quick_stop_active        ((uint8_T)6U)
#define c3_IN_ready_to_switch_on       ((uint8_T)7U)
#define c3_IN_reset_fault_logic        ((uint8_T)8U)
#define c3_IN_switch_on_disabled       ((uint8_T)9U)
#define c3_IN_switched_on              ((uint8_T)10U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c3_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_b_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_c_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_d_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_e_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_f_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_g_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_h_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_i_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_j_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_k_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_l_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_m_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_n_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_o_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_p_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_q_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_r_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_s_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_t_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_u_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_v_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_w_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_x_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_y_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_ab_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_bb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_cb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_db_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_eb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_fb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_gb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_hb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_ib_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_jb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_kb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_lb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_mb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_nb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_ob_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_pb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_qb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_rb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_sb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_tb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_ub_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

/* Function Declarations */
static void initialize_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void initialize_params_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void enable_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void disable_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c3_update_debugger_state_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void ext_mode_exec_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void set_sim_state_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray *
   c3_st);
static void c3_set_sim_state_side_effects_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void finalize_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void sf_gateway_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void mdl_start_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void initSimStructsc3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c3_DS402StateMachine(SFc3_modello_2017b_levaRetro_accInstanceStruct *
  chartInstance);
static void c3_exit_internal_DS402StateMachine
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c3_enter_atomic_fault_reaction_active
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c3_enter_atomic_fault(SFc3_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance);
static void c3_reset_fault_logic(SFc3_modello_2017b_levaRetro_accInstanceStruct *
  chartInstance);
static void c3_not_ready_to_switch_on
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c3_enter_atomic_switch_on_disabled
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c3_switch_on_disabled(SFc3_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance);
static void c3_enter_atomic_ready_to_switch_on
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c3_ready_to_switch_on(SFc3_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance);
static void c3_enter_atomic_quick_stop_active
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c3_quick_stop_active(SFc3_modello_2017b_levaRetro_accInstanceStruct *
  chartInstance);
static void c3_enter_atomic_switched_on
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c3_switched_on(SFc3_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance);
static void c3_enter_atomic_operation_enabled
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c3_operation_enabled(SFc3_modello_2017b_levaRetro_accInstanceStruct *
  chartInstance);
static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber, uint32_T c3_instanceNumber);
static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData);
static real_T c3_emlrt_marshallIn(SFc3_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance, const mxArray *c3_nargout, const char_T *c3_identifier);
static real_T c3_b_emlrt_marshallIn
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static boolean_T c3_c_emlrt_marshallIn
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static int32_T c3_d_emlrt_marshallIn
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_d_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static uint8_T c3_e_emlrt_marshallIn
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray *
   c3_b_is_DS402StateMachine, const char_T *c3_identifier);
static uint8_T c3_f_emlrt_marshallIn
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_e_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static const mxArray *c3_f_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static void c3_g_emlrt_marshallIn(SFc3_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance, const mxArray *c3_b_dataWrittenToVector, const char_T
  *c3_identifier, boolean_T c3_y[4]);
static void c3_h_emlrt_marshallIn(SFc3_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId,
  boolean_T c3_y[4]);
static const mxArray *c3_i_emlrt_marshallIn
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray *
   c3_b_setSimStateSideEffectsInfo, const char_T *c3_identifier);
static const mxArray *c3_j_emlrt_marshallIn
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId);
static const mxArray *sf_get_hover_data_for_msg
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance, int32_T
   c3_ssid);
static void c3_init_sf_message_store_memory
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void init_dsm_address_info(SFc3_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance);
static void init_simulink_io_address
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc3_modello_2017b_levaRetro_acc(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c3_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c3_doSetSimStateSideEffects = 0U;
  chartInstance->c3_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c3_is_DS402StateMachine = c3_IN_NO_ACTIVE_CHILD;
  *chartInstance->c3_is_active_c3_modello_2017b_levaRetro_acc = 0U;
  *chartInstance->c3_is_c3_modello_2017b_levaRetro_acc = c3_IN_NO_ACTIVE_CHILD;
}

static void initialize_params_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c3_update_debugger_state_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  uint32_T c3_prevAniVal;
  c3_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c3_is_active_c3_modello_2017b_levaRetro_acc == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_c3_modello_2017b_levaRetro_acc ==
      c3_IN_DS402StateMachine) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_DS402StateMachine == c3_IN_fault_reaction_active) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_DS402StateMachine == c3_IN_dispatcher) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_DS402StateMachine == c3_IN_fault) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_DS402StateMachine == c3_IN_reset_fault_logic) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_DS402StateMachine == c3_IN_not_ready_to_switch_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_DS402StateMachine == c3_IN_switch_on_disabled) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_DS402StateMachine == c3_IN_ready_to_switch_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_DS402StateMachine == c3_IN_quick_stop_active) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_DS402StateMachine == c3_IN_switched_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_DS402StateMachine == c3_IN_operation_enabled) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
  }

  _SFD_SET_ANIMATION(c3_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  c3_update_debugger_state_c3_modello_2017b_levaRetro_acc(chartInstance);
}

static const mxArray *get_sim_state_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  const mxArray *c3_st;
  const mxArray *c3_y = NULL;
  real_T c3_hoistedGlobal;
  const mxArray *c3_b_y = NULL;
  real_T c3_b_hoistedGlobal;
  const mxArray *c3_c_y = NULL;
  real_T c3_c_hoistedGlobal;
  const mxArray *c3_d_y = NULL;
  real_T c3_d_hoistedGlobal;
  const mxArray *c3_e_y = NULL;
  uint8_T c3_e_hoistedGlobal;
  const mxArray *c3_f_y = NULL;
  uint8_T c3_f_hoistedGlobal;
  const mxArray *c3_g_y = NULL;
  uint8_T c3_g_hoistedGlobal;
  const mxArray *c3_h_y = NULL;
  const mxArray *c3_i_y = NULL;
  c3_st = NULL;
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellmatrix(8, 1), false);
  c3_hoistedGlobal = *chartInstance->c3_controlword;
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_hoistedGlobal, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_b_hoistedGlobal = *chartInstance->c3_drive_enabled;
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", &c3_b_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 1, c3_c_y);
  c3_c_hoistedGlobal = *chartInstance->c3_drive_ready;
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", &c3_c_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 2, c3_d_y);
  c3_d_hoistedGlobal = *chartInstance->c3_fault_detected;
  c3_e_y = NULL;
  sf_mex_assign(&c3_e_y, sf_mex_create("y", &c3_d_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 3, c3_e_y);
  c3_e_hoistedGlobal =
    *chartInstance->c3_is_active_c3_modello_2017b_levaRetro_acc;
  c3_f_y = NULL;
  sf_mex_assign(&c3_f_y, sf_mex_create("y", &c3_e_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 4, c3_f_y);
  c3_f_hoistedGlobal = *chartInstance->c3_is_c3_modello_2017b_levaRetro_acc;
  c3_g_y = NULL;
  sf_mex_assign(&c3_g_y, sf_mex_create("y", &c3_f_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 5, c3_g_y);
  c3_g_hoistedGlobal = *chartInstance->c3_is_DS402StateMachine;
  c3_h_y = NULL;
  sf_mex_assign(&c3_h_y, sf_mex_create("y", &c3_g_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 6, c3_h_y);
  c3_i_y = NULL;
  sf_mex_assign(&c3_i_y, sf_mex_create("y",
    chartInstance->c3_dataWrittenToVector, 11, 0U, 1U, 0U, 1, 4), false);
  sf_mex_setcell(c3_y, 7, c3_i_y);
  sf_mex_assign(&c3_st, c3_y, false);
  return c3_st;
}

static void set_sim_state_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray *
   c3_st)
{
  const mxArray *c3_u;
  boolean_T c3_bv0[4];
  int32_T c3_i0;
  c3_u = sf_mex_dup(c3_st);
  *chartInstance->c3_controlword = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 0)), "controlword");
  *chartInstance->c3_drive_enabled = c3_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 1)), "drive_enabled");
  *chartInstance->c3_drive_ready = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 2)), "drive_ready");
  *chartInstance->c3_fault_detected = c3_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 3)), "fault_detected");
  *chartInstance->c3_is_active_c3_modello_2017b_levaRetro_acc =
    c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 4)),
    "is_active_c3_modello_2017b_levaRetro_acc");
  *chartInstance->c3_is_c3_modello_2017b_levaRetro_acc = c3_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 5)),
     "is_c3_modello_2017b_levaRetro_acc");
  *chartInstance->c3_is_DS402StateMachine = c3_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 6)), "is_DS402StateMachine");
  c3_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 7)),
                        "dataWrittenToVector", c3_bv0);
  for (c3_i0 = 0; c3_i0 < 4; c3_i0++) {
    chartInstance->c3_dataWrittenToVector[c3_i0] = c3_bv0[c3_i0];
  }

  sf_mex_assign(&chartInstance->c3_setSimStateSideEffectsInfo,
                c3_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c3_u, 8)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c3_u);
  chartInstance->c3_doSetSimStateSideEffects = 1U;
  c3_update_debugger_state_c3_modello_2017b_levaRetro_acc(chartInstance);
  sf_mex_destroy(&c3_st);
}

static void c3_set_sim_state_side_effects_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  if (chartInstance->c3_doSetSimStateSideEffects != 0) {
    chartInstance->c3_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c3_setSimStateSideEffectsInfo);
}

static void sf_gateway_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[2];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 0.0;
  c3_set_sim_state_side_effects_c3_modello_2017b_levaRetro_acc(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 2U, *chartInstance->c3_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_quick_stop, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_reset_fault, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_enable_drive, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_statusword, 0U);
  *chartInstance->c3_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 2U, *chartInstance->c3_sfEvent);
  if (*chartInstance->c3_is_active_c3_modello_2017b_levaRetro_acc == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 2U, *chartInstance->c3_sfEvent);
    *chartInstance->c3_is_active_c3_modello_2017b_levaRetro_acc = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c3_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 19U, *chartInstance->c3_sfEvent);
    *chartInstance->c3_is_c3_modello_2017b_levaRetro_acc =
      c3_IN_DS402StateMachine;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c3_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, *chartInstance->c3_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_ib_debug_family_names,
      c3_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    *chartInstance->c3_controlword = 0.0;
    chartInstance->c3_dataWrittenToVector[0U] = true;
    chartInstance->c3_dataWrittenToVector[0U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c3_controlword, 4U);
    *chartInstance->c3_drive_enabled = 0.0;
    chartInstance->c3_dataWrittenToVector[1U] = true;
    chartInstance->c3_dataWrittenToVector[1U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c3_drive_enabled, 5U);
    *chartInstance->c3_fault_detected = 0.0;
    chartInstance->c3_dataWrittenToVector[2U] = true;
    chartInstance->c3_dataWrittenToVector[2U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c3_fault_detected, 6U);
    *chartInstance->c3_drive_ready = 0.0;
    chartInstance->c3_dataWrittenToVector[3U] = true;
    chartInstance->c3_dataWrittenToVector[3U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c3_drive_ready, 7U);
    _SFD_SYMBOL_SCOPE_POP();
    *chartInstance->c3_is_DS402StateMachine = c3_IN_dispatcher;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
  } else {
    c3_DS402StateMachine(chartInstance);
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c3_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_modello_2017b_levaRetro_accMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  c3_init_sf_message_store_memory(chartInstance);
  sim_mode_is_external(chartInstance->S);
}

static void initSimStructsc3_modello_2017b_levaRetro_acc
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c3_DS402StateMachine(SFc3_modello_2017b_levaRetro_accInstanceStruct *
  chartInstance)
{
  uint32_T c3_debug_family_var_map[3];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 1.0;
  boolean_T c3_out;
  real_T c3_b_nargin = 0.0;
  real_T c3_b_nargout = 1.0;
  boolean_T c3_b_out;
  real_T c3_c_nargin = 0.0;
  real_T c3_c_nargout = 1.0;
  boolean_T c3_c_out;
  real_T c3_d_nargin = 0.0;
  real_T c3_e_nargin = 0.0;
  real_T c3_d_nargout = 1.0;
  real_T c3_e_nargout = 1.0;
  boolean_T c3_d_out;
  boolean_T c3_e_out;
  real_T c3_f_nargin = 0.0;
  real_T c3_f_nargout = 1.0;
  boolean_T c3_f_out;
  uint32_T c3_b_debug_family_var_map[2];
  real_T c3_g_nargin = 0.0;
  real_T c3_g_nargout = 0.0;
  real_T c3_h_nargin = 0.0;
  real_T c3_h_nargout = 1.0;
  boolean_T c3_g_out;
  real_T c3_i_nargin = 0.0;
  real_T c3_i_nargout = 1.0;
  boolean_T c3_h_out;
  real_T c3_j_nargin = 0.0;
  real_T c3_j_nargout = 1.0;
  boolean_T c3_i_out;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U, *chartInstance->c3_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_db_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_out, 2U, c3_b_sf_marshallOut,
    c3_b_sf_marshallIn);
  if ((CV_EML_COND(2, 0, 0, CV_RELATIONAL_EVAL(5U, 2U, 0, (real_T)
         *chartInstance->c3_statusword, 15.0, -1, 0U, (real_T)
         *chartInstance->c3_statusword == 15.0)) || CV_EML_COND(2, 0, 1,
        CV_RELATIONAL_EVAL(5U, 2U, 1, (real_T)*chartInstance->c3_statusword,
         47.0, -1, 0U, (real_T)*chartInstance->c3_statusword == 47.0))) &&
      (!CV_EML_COND(2, 0, 2, *chartInstance->c3_is_DS402StateMachine ==
                    c3_IN_fault_reaction_active))) {
    CV_EML_MCDC(2, 0, 0, true);
    CV_EML_IF(2, 0, 0, true);
    c3_out = true;
  } else {
    CV_EML_MCDC(2, 0, 0, false);
    CV_EML_IF(2, 0, 0, false);
    c3_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c3_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
    c3_exit_internal_DS402StateMachine(chartInstance);
    *chartInstance->c3_is_DS402StateMachine = c3_IN_fault_reaction_active;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c3_sfEvent);
    c3_enter_atomic_fault_reaction_active(chartInstance);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                 *chartInstance->c3_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_eb_debug_family_names,
      c3_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargin, 0U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargout, 1U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_out, 2U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    if ((CV_EML_COND(0, 0, 0, CV_RELATIONAL_EVAL(5U, 0U, 0, (real_T)
           *chartInstance->c3_statusword, 8.0, -1, 0U, (real_T)
           *chartInstance->c3_statusword == 8.0)) || CV_EML_COND(0, 0, 1,
          CV_RELATIONAL_EVAL(5U, 0U, 1, (real_T)*chartInstance->c3_statusword,
           40.0, -1, 0U, (real_T)*chartInstance->c3_statusword == 40.0))) &&
        (!CV_EML_COND(0, 0, 2, *chartInstance->c3_is_DS402StateMachine ==
                      c3_IN_reset_fault_logic)) && (!CV_EML_COND(0, 0, 3,
          *chartInstance->c3_is_DS402StateMachine == c3_IN_fault))) {
      CV_EML_MCDC(0, 0, 0, true);
      CV_EML_IF(0, 0, 0, true);
      c3_b_out = true;
    } else {
      CV_EML_MCDC(0, 0, 0, false);
      CV_EML_IF(0, 0, 0, false);
      c3_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c3_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c3_sfEvent);
      c3_exit_internal_DS402StateMachine(chartInstance);
      *chartInstance->c3_is_DS402StateMachine = c3_IN_fault;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
      c3_enter_atomic_fault(chartInstance);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 28U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_nb_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      if ((CV_EML_COND(28, 0, 0, CV_RELATIONAL_EVAL(5U, 28U, 0, (real_T)
             *chartInstance->c3_statusword, 64.0, -1, 0U, (real_T)
             *chartInstance->c3_statusword == 64.0)) || CV_EML_COND(28, 0, 1,
            CV_RELATIONAL_EVAL(5U, 28U, 1, (real_T)*chartInstance->c3_statusword,
             96.0, -1, 0U, (real_T)*chartInstance->c3_statusword == 96.0))) && (
           !CV_EML_COND(28, 0, 2, *chartInstance->c3_is_DS402StateMachine ==
                        c3_IN_switch_on_disabled))) {
        CV_EML_MCDC(28, 0, 0, true);
        CV_EML_IF(28, 0, 0, true);
        c3_c_out = true;
      } else {
        CV_EML_MCDC(28, 0, 0, false);
        CV_EML_IF(28, 0, 0, false);
        c3_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c3_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 28U, *chartInstance->c3_sfEvent);
        c3_exit_internal_DS402StateMachine(chartInstance);
        *chartInstance->c3_is_DS402StateMachine = c3_IN_switch_on_disabled;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c3_sfEvent);
        c3_enter_atomic_switch_on_disabled(chartInstance);
      } else {
        switch (*chartInstance->c3_is_DS402StateMachine) {
         case c3_IN_dispatcher:
          CV_STATE_EVAL(0, 0, c3_IN_dispatcher);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                       *chartInstance->c3_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_lb_debug_family_names,
            c3_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargin, 0U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargout, 1U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_out, 2U,
            c3_b_sf_marshallOut, c3_b_sf_marshallIn);
          if (CV_EML_COND(11, 0, 0, CV_RELATIONAL_EVAL(5U, 11U, 0, (real_T)
                *chartInstance->c3_statusword, 0.0, -1, 0U, (real_T)
                *chartInstance->c3_statusword == 0.0)) || CV_EML_COND(11, 0, 1,
               CV_RELATIONAL_EVAL(5U, 11U, 1, (real_T)
                                  *chartInstance->c3_statusword, 32.0, -1, 0U,
                                  (real_T)*chartInstance->c3_statusword == 32.0)))
          {
            CV_EML_MCDC(11, 0, 0, true);
            CV_EML_IF(11, 0, 0, true);
            c3_d_out = true;
          } else {
            CV_EML_MCDC(11, 0, 0, false);
            CV_EML_IF(11, 0, 0, false);
            c3_d_out = false;
          }

          _SFD_SYMBOL_SCOPE_POP();
          if (c3_d_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, *chartInstance->c3_sfEvent);
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
            *chartInstance->c3_is_DS402StateMachine =
              c3_IN_not_ready_to_switch_on;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c3_sfEvent);
            _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_c_debug_family_names,
              c3_b_debug_family_var_map);
            _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_g_nargin, 0U,
              c3_sf_marshallOut, c3_sf_marshallIn);
            _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_g_nargout, 1U,
              c3_sf_marshallOut, c3_sf_marshallIn);
            *chartInstance->c3_drive_enabled = 0.0;
            chartInstance->c3_dataWrittenToVector[1U] = true;
            chartInstance->c3_dataWrittenToVector[1U] = true;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c3_drive_enabled, 5U);
            *chartInstance->c3_fault_detected = 0.0;
            chartInstance->c3_dataWrittenToVector[2U] = true;
            chartInstance->c3_dataWrittenToVector[2U] = true;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c3_fault_detected, 6U);
            *chartInstance->c3_drive_ready = 0.0;
            chartInstance->c3_dataWrittenToVector[3U] = true;
            chartInstance->c3_dataWrittenToVector[3U] = true;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c3_drive_ready, 7U);
            _SFD_SYMBOL_SCOPE_POP();
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 18U,
                         *chartInstance->c3_sfEvent);
            _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_fb_debug_family_names,
              c3_debug_family_var_map);
            _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargin, 0U,
              c3_sf_marshallOut, c3_sf_marshallIn);
            _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargout, 1U,
              c3_sf_marshallOut, c3_sf_marshallIn);
            _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_out, 2U,
              c3_b_sf_marshallOut, c3_b_sf_marshallIn);
            c3_f_out = CV_EML_IF(18, 0, 0, CV_RELATIONAL_EVAL(5U, 18U, 0,
              (real_T)*chartInstance->c3_statusword, 7.0, -1, 0U, (real_T)
              *chartInstance->c3_statusword == 7.0));
            _SFD_SYMBOL_SCOPE_POP();
            if (c3_f_out) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 18U,
                           *chartInstance->c3_sfEvent);
              _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
              *chartInstance->c3_is_DS402StateMachine = c3_IN_quick_stop_active;
              _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c3_sfEvent);
              c3_enter_atomic_quick_stop_active(chartInstance);
            } else {
              _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                           *chartInstance->c3_sfEvent);
              _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_gb_debug_family_names,
                c3_debug_family_var_map);
              _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_h_nargin, 0U,
                c3_sf_marshallOut, c3_sf_marshallIn);
              _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_h_nargout, 1U,
                c3_sf_marshallOut, c3_sf_marshallIn);
              _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_g_out, 2U,
                c3_b_sf_marshallOut, c3_b_sf_marshallIn);
              c3_g_out = CV_EML_IF(1, 0, 0, CV_RELATIONAL_EVAL(5U, 1U, 0,
                (real_T)*chartInstance->c3_statusword, 39.0, -1, 0U, (real_T)
                *chartInstance->c3_statusword == 39.0));
              _SFD_SYMBOL_SCOPE_POP();
              if (c3_g_out) {
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U,
                             *chartInstance->c3_sfEvent);
                _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
                *chartInstance->c3_is_DS402StateMachine =
                  c3_IN_operation_enabled;
                _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
                c3_enter_atomic_operation_enabled(chartInstance);
              } else {
                _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 16U,
                             *chartInstance->c3_sfEvent);
                _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_hb_debug_family_names,
                  c3_debug_family_var_map);
                _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_i_nargin, 0U,
                  c3_sf_marshallOut, c3_sf_marshallIn);
                _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_i_nargout, 1U,
                  c3_sf_marshallOut, c3_sf_marshallIn);
                _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_h_out, 2U,
                  c3_b_sf_marshallOut, c3_b_sf_marshallIn);
                c3_h_out = CV_EML_IF(16, 0, 0, CV_RELATIONAL_EVAL(5U, 16U, 0,
                  (real_T)*chartInstance->c3_statusword, 35.0, -1, 0U, (real_T)
                  *chartInstance->c3_statusword == 35.0));
                _SFD_SYMBOL_SCOPE_POP();
                if (c3_h_out) {
                  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U,
                               *chartInstance->c3_sfEvent);
                  _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U,
                               *chartInstance->c3_sfEvent);
                  *chartInstance->c3_is_DS402StateMachine = c3_IN_switched_on;
                  _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c3_sfEvent);
                  c3_enter_atomic_switched_on(chartInstance);
                } else {
                  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                               *chartInstance->c3_sfEvent);
                  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U,
                    c3_jb_debug_family_names, c3_debug_family_var_map);
                  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_j_nargin, 0U,
                    c3_sf_marshallOut, c3_sf_marshallIn);
                  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_j_nargout, 1U,
                    c3_sf_marshallOut, c3_sf_marshallIn);
                  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_i_out, 2U,
                    c3_b_sf_marshallOut, c3_b_sf_marshallIn);
                  c3_i_out = CV_EML_IF(7, 0, 0, CV_RELATIONAL_EVAL(5U, 7U, 0,
                    (real_T)*chartInstance->c3_statusword, 33.0, -1, 0U, (real_T)*
                    chartInstance->c3_statusword == 33.0));
                  _SFD_SYMBOL_SCOPE_POP();
                  if (c3_i_out) {
                    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U,
                                 *chartInstance->c3_sfEvent);
                    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U,
                                 *chartInstance->c3_sfEvent);
                    *chartInstance->c3_is_DS402StateMachine =
                      c3_IN_ready_to_switch_on;
                    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U,
                                 *chartInstance->c3_sfEvent);
                    c3_enter_atomic_ready_to_switch_on(chartInstance);
                  } else {
                    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                                 *chartInstance->c3_sfEvent);
                  }
                }
              }
            }
          }

          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c3_sfEvent);
          break;

         case c3_IN_fault:
          CV_STATE_EVAL(0, 0, c3_IN_fault);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                       *chartInstance->c3_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_kb_debug_family_names,
            c3_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargin, 0U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargout, 1U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_out, 2U,
            c3_b_sf_marshallOut, c3_b_sf_marshallIn);
          c3_e_out = CV_EML_IF(8, 0, 0, CV_RELATIONAL_EVAL(5U, 8U, 0, (real_T)
            *chartInstance->c3_reset_fault, 1.0, -1, 0U,
            *chartInstance->c3_reset_fault == 1.0F));
          _SFD_SYMBOL_SCOPE_POP();
          if (c3_e_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c3_sfEvent);
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
            *chartInstance->c3_is_DS402StateMachine = c3_IN_reset_fault_logic;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c3_sfEvent);
          } else {
            _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                         *chartInstance->c3_sfEvent);
          }

          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c3_sfEvent);
          break;

         case c3_IN_fault_reaction_active:
          CV_STATE_EVAL(0, 0, c3_IN_fault_reaction_active);
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                       *chartInstance->c3_sfEvent);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c3_sfEvent);
          break;

         case c3_IN_not_ready_to_switch_on:
          CV_STATE_EVAL(0, 0, c3_IN_not_ready_to_switch_on);
          c3_not_ready_to_switch_on(chartInstance);
          break;

         case c3_IN_operation_enabled:
          CV_STATE_EVAL(0, 0, c3_IN_operation_enabled);
          c3_operation_enabled(chartInstance);
          break;

         case c3_IN_quick_stop_active:
          CV_STATE_EVAL(0, 0, c3_IN_quick_stop_active);
          c3_quick_stop_active(chartInstance);
          break;

         case c3_IN_ready_to_switch_on:
          CV_STATE_EVAL(0, 0, c3_IN_ready_to_switch_on);
          c3_ready_to_switch_on(chartInstance);
          break;

         case c3_IN_reset_fault_logic:
          CV_STATE_EVAL(0, 0, c3_IN_reset_fault_logic);
          c3_reset_fault_logic(chartInstance);
          break;

         case c3_IN_switch_on_disabled:
          CV_STATE_EVAL(0, 0, c3_IN_switch_on_disabled);
          c3_switch_on_disabled(chartInstance);
          break;

         case c3_IN_switched_on:
          CV_STATE_EVAL(0, 0, c3_IN_switched_on);
          c3_switched_on(chartInstance);
          break;

         default:
          CV_STATE_EVAL(0, 0, 0);

          /* Unreachable state, for coverage only */
          *chartInstance->c3_is_DS402StateMachine = c3_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
          break;
        }
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
}

static void c3_exit_internal_DS402StateMachine
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  switch (*chartInstance->c3_is_DS402StateMachine) {
   case c3_IN_dispatcher:
    CV_STATE_EVAL(0, 1, c3_IN_dispatcher);
    *chartInstance->c3_is_DS402StateMachine = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_fault:
    CV_STATE_EVAL(0, 1, c3_IN_fault);
    *chartInstance->c3_is_DS402StateMachine = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_fault_reaction_active:
    CV_STATE_EVAL(0, 1, c3_IN_fault_reaction_active);
    *chartInstance->c3_is_DS402StateMachine = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_not_ready_to_switch_on:
    CV_STATE_EVAL(0, 1, c3_IN_not_ready_to_switch_on);
    *chartInstance->c3_is_DS402StateMachine = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_operation_enabled:
    CV_STATE_EVAL(0, 1, c3_IN_operation_enabled);
    *chartInstance->c3_is_DS402StateMachine = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_quick_stop_active:
    CV_STATE_EVAL(0, 1, c3_IN_quick_stop_active);
    *chartInstance->c3_is_DS402StateMachine = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_ready_to_switch_on:
    CV_STATE_EVAL(0, 1, c3_IN_ready_to_switch_on);
    *chartInstance->c3_is_DS402StateMachine = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_reset_fault_logic:
    CV_STATE_EVAL(0, 1, c3_IN_reset_fault_logic);
    *chartInstance->c3_is_DS402StateMachine = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_switch_on_disabled:
    CV_STATE_EVAL(0, 1, c3_IN_switch_on_disabled);
    *chartInstance->c3_is_DS402StateMachine = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_switched_on:
    CV_STATE_EVAL(0, 1, c3_IN_switched_on);
    *chartInstance->c3_is_DS402StateMachine = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c3_sfEvent);
    break;

   default:
    CV_STATE_EVAL(0, 1, 0);
    *chartInstance->c3_is_DS402StateMachine = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
    break;
  }
}

static void c3_enter_atomic_fault_reaction_active
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[2];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  *chartInstance->c3_controlword = 0.0;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_controlword, 4U);
  *chartInstance->c3_drive_enabled = 0.0;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_drive_enabled, 5U);
  *chartInstance->c3_fault_detected = 1.0;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_fault_detected, 6U);
  *chartInstance->c3_drive_ready = 0.0;
  chartInstance->c3_dataWrittenToVector[3U] = true;
  chartInstance->c3_dataWrittenToVector[3U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_drive_ready, 7U);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_enter_atomic_fault(SFc3_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance)
{
  uint32_T c3_debug_family_var_map[2];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_b_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  *chartInstance->c3_controlword = 0.0;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_controlword, 4U);
  *chartInstance->c3_drive_enabled = 0.0;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_drive_enabled, 5U);
  *chartInstance->c3_fault_detected = 1.0;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_fault_detected, 6U);
  *chartInstance->c3_drive_ready = 0.0;
  chartInstance->c3_dataWrittenToVector[3U] = true;
  chartInstance->c3_dataWrittenToVector[3U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_drive_ready, 7U);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_reset_fault_logic(SFc3_modello_2017b_levaRetro_accInstanceStruct *
  chartInstance)
{
  uint32_T c3_debug_family_var_map[3];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 1.0;
  boolean_T c3_out;
  uint32_T c3_b_debug_family_var_map[2];
  real_T c3_b_nargin = 0.0;
  real_T c3_b_nargout = 0.0;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8U, *chartInstance->c3_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U, *chartInstance->c3_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_i_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_out, 2U, c3_b_sf_marshallOut,
    c3_b_sf_marshallIn);
  c3_out = CV_EML_IF(9, 0, 0, CV_RELATIONAL_EVAL(5U, 9U, 0, (real_T)
    *chartInstance->c3_reset_fault, 0.0, -1, 0U, *chartInstance->c3_reset_fault ==
    0.0F));
  _SFD_SYMBOL_SCOPE_POP();
  if (c3_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c3_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_j_debug_family_names,
      c3_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargin, 0U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargout, 1U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    *chartInstance->c3_controlword = 128.0;
    chartInstance->c3_dataWrittenToVector[0U] = true;
    chartInstance->c3_dataWrittenToVector[0U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c3_controlword, 4U);
    _SFD_SYMBOL_SCOPE_POP();
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, *chartInstance->c3_sfEvent);
}

static void c3_not_ready_to_switch_on
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[3];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 1.0;
  boolean_T c3_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U, *chartInstance->c3_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_mb_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_out, 2U, c3_b_sf_marshallOut,
    c3_b_sf_marshallIn);
  if (CV_EML_COND(13, 0, 0, CV_RELATIONAL_EVAL(5U, 13U, 0, (real_T)
        *chartInstance->c3_statusword, 64.0, -1, 0U, (real_T)
        *chartInstance->c3_statusword == 64.0)) || CV_EML_COND(13, 0, 1,
       CV_RELATIONAL_EVAL(5U, 13U, 1, (real_T)*chartInstance->c3_statusword,
                          96.0, -1, 0U, (real_T)*chartInstance->c3_statusword ==
        96.0))) {
    CV_EML_MCDC(13, 0, 0, true);
    CV_EML_IF(13, 0, 0, true);
    c3_out = true;
  } else {
    CV_EML_MCDC(13, 0, 0, false);
    CV_EML_IF(13, 0, 0, false);
    c3_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c3_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, *chartInstance->c3_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c3_sfEvent);
    *chartInstance->c3_is_DS402StateMachine = c3_IN_switch_on_disabled;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c3_sfEvent);
    c3_enter_atomic_switch_on_disabled(chartInstance);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U, *chartInstance->c3_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c3_sfEvent);
}

static void c3_enter_atomic_switch_on_disabled
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[2];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_d_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  *chartInstance->c3_drive_enabled = 0.0;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_drive_enabled, 5U);
  *chartInstance->c3_fault_detected = 0.0;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_fault_detected, 6U);
  *chartInstance->c3_drive_ready = 1.0;
  chartInstance->c3_dataWrittenToVector[3U] = true;
  chartInstance->c3_dataWrittenToVector[3U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_drive_ready, 7U);
  *chartInstance->c3_controlword = 0.0;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_controlword, 4U);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_switch_on_disabled(SFc3_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance)
{
  uint32_T c3_debug_family_var_map[3];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 1.0;
  boolean_T c3_out;
  real_T c3_b_nargin = 0.0;
  real_T c3_b_nargout = 1.0;
  boolean_T c3_b_out;
  uint32_T c3_b_debug_family_var_map[2];
  real_T c3_c_nargin = 0.0;
  real_T c3_d_nargin = 0.0;
  real_T c3_c_nargout = 1.0;
  real_T c3_d_nargout = 0.0;
  boolean_T c3_c_out;
  real_T c3_e_nargin = 0.0;
  real_T c3_e_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U, *chartInstance->c3_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_ob_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_out, 2U, c3_b_sf_marshallOut,
    c3_b_sf_marshallIn);
  c3_out = CV_EML_IF(5, 0, 0, CV_RELATIONAL_EVAL(5U, 5U, 0, (real_T)
    *chartInstance->c3_statusword, 33.0, -1, 0U, (real_T)
    *chartInstance->c3_statusword == 33.0));
  _SFD_SYMBOL_SCOPE_POP();
  if (c3_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c3_sfEvent);
    *chartInstance->c3_is_DS402StateMachine = c3_IN_ready_to_switch_on;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c3_sfEvent);
    c3_enter_atomic_ready_to_switch_on(chartInstance);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 9U, *chartInstance->c3_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                 *chartInstance->c3_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_k_debug_family_names,
      c3_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargin, 0U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargout, 1U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_out, 2U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    c3_b_out = CV_EML_IF(6, 0, 0, CV_RELATIONAL_EVAL(5U, 6U, 0, (real_T)
      *chartInstance->c3_enable_drive, 0.0, -1, 0U,
      *chartInstance->c3_enable_drive == 0.0F));
    _SFD_SYMBOL_SCOPE_POP();
    if (c3_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_l_debug_family_names,
        c3_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      *chartInstance->c3_controlword = 0.0;
      chartInstance->c3_dataWrittenToVector[0U] = true;
      chartInstance->c3_dataWrittenToVector[0U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c3_controlword, 4U);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 24U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_m_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      c3_c_out = CV_EML_IF(24, 0, 0, CV_RELATIONAL_EVAL(5U, 24U, 0, (real_T)
        *chartInstance->c3_enable_drive, 1.0, -1, 0U,
        *chartInstance->c3_enable_drive == 1.0F));
      _SFD_SYMBOL_SCOPE_POP();
      if (c3_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 24U, *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_n_debug_family_names,
          c3_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        *chartInstance->c3_controlword = 6.0;
        chartInstance->c3_dataWrittenToVector[0U] = true;
        chartInstance->c3_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c3_controlword, 4U);
        _SFD_SYMBOL_SCOPE_POP();
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, *chartInstance->c3_sfEvent);
}

static void c3_enter_atomic_ready_to_switch_on
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[2];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_e_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  *chartInstance->c3_drive_enabled = 0.0;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_drive_enabled, 5U);
  *chartInstance->c3_fault_detected = 0.0;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_fault_detected, 6U);
  *chartInstance->c3_drive_ready = 1.0;
  chartInstance->c3_dataWrittenToVector[3U] = true;
  chartInstance->c3_dataWrittenToVector[3U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_drive_ready, 7U);
  *chartInstance->c3_controlword = 6.0;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_controlword, 4U);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_ready_to_switch_on(SFc3_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance)
{
  uint32_T c3_debug_family_var_map[3];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 1.0;
  boolean_T c3_out;
  real_T c3_b_nargin = 0.0;
  real_T c3_b_nargout = 1.0;
  boolean_T c3_b_out;
  uint32_T c3_b_debug_family_var_map[2];
  real_T c3_c_nargin = 0.0;
  real_T c3_d_nargin = 0.0;
  real_T c3_c_nargout = 1.0;
  real_T c3_d_nargout = 0.0;
  boolean_T c3_c_out;
  real_T c3_e_nargin = 0.0;
  real_T c3_e_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U, *chartInstance->c3_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_qb_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_out, 2U, c3_b_sf_marshallOut,
    c3_b_sf_marshallIn);
  c3_out = CV_EML_IF(14, 0, 0, CV_RELATIONAL_EVAL(5U, 14U, 0, (real_T)
    *chartInstance->c3_statusword, 35.0, -1, 0U, (real_T)
    *chartInstance->c3_statusword == 35.0));
  _SFD_SYMBOL_SCOPE_POP();
  if (c3_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, *chartInstance->c3_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c3_sfEvent);
    *chartInstance->c3_is_DS402StateMachine = c3_IN_switched_on;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c3_sfEvent);
    c3_enter_atomic_switched_on(chartInstance);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U, *chartInstance->c3_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 20U,
                 *chartInstance->c3_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_q_debug_family_names,
      c3_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargin, 0U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargout, 1U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_out, 2U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    c3_b_out = CV_EML_IF(20, 0, 0, CV_RELATIONAL_EVAL(5U, 20U, 0, (real_T)
      *chartInstance->c3_enable_drive, 0.0, -1, 0U,
      *chartInstance->c3_enable_drive == 0.0F));
    _SFD_SYMBOL_SCOPE_POP();
    if (c3_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 20U, *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_r_debug_family_names,
        c3_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      *chartInstance->c3_controlword = 6.0;
      chartInstance->c3_dataWrittenToVector[0U] = true;
      chartInstance->c3_dataWrittenToVector[0U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c3_controlword, 4U);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 21U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_o_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      c3_c_out = CV_EML_IF(21, 0, 0, CV_RELATIONAL_EVAL(5U, 21U, 0, (real_T)
        *chartInstance->c3_enable_drive, 1.0, -1, 0U,
        *chartInstance->c3_enable_drive == 1.0F));
      _SFD_SYMBOL_SCOPE_POP();
      if (c3_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 21U, *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_p_debug_family_names,
          c3_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        *chartInstance->c3_controlword = 7.0;
        chartInstance->c3_dataWrittenToVector[0U] = true;
        chartInstance->c3_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c3_controlword, 4U);
        _SFD_SYMBOL_SCOPE_POP();
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c3_sfEvent);
}

static void c3_enter_atomic_quick_stop_active
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[2];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_f_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  *chartInstance->c3_drive_enabled = 0.0;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_drive_enabled, 5U);
  *chartInstance->c3_fault_detected = 0.0;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_fault_detected, 6U);
  *chartInstance->c3_drive_ready = 1.0;
  chartInstance->c3_dataWrittenToVector[3U] = true;
  chartInstance->c3_dataWrittenToVector[3U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_drive_ready, 7U);
  *chartInstance->c3_controlword = 2.0;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_controlword, 4U);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_quick_stop_active(SFc3_modello_2017b_levaRetro_accInstanceStruct *
  chartInstance)
{
  uint32_T c3_debug_family_var_map[3];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 1.0;
  boolean_T c3_out;
  real_T c3_b_nargin = 0.0;
  real_T c3_b_nargout = 1.0;
  boolean_T c3_b_out;
  uint32_T c3_b_debug_family_var_map[2];
  real_T c3_c_nargin = 0.0;
  real_T c3_c_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U, *chartInstance->c3_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_tb_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_out, 2U, c3_b_sf_marshallOut,
    c3_b_sf_marshallIn);
  c3_out = CV_EML_IF(4, 0, 0, CV_RELATIONAL_EVAL(5U, 4U, 0, (real_T)
    *chartInstance->c3_statusword, 39.0, -1, 0U, (real_T)
    *chartInstance->c3_statusword == 39.0));
  _SFD_SYMBOL_SCOPE_POP();
  if (c3_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c3_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c3_sfEvent);
    *chartInstance->c3_is_DS402StateMachine = c3_IN_operation_enabled;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
    c3_enter_atomic_operation_enabled(chartInstance);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U, *chartInstance->c3_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 27U,
                 *chartInstance->c3_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_s_debug_family_names,
      c3_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargin, 0U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargout, 1U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_out, 2U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    c3_b_out = CV_EML_IF(27, 0, 0, CV_RELATIONAL_EVAL(5U, 27U, 0, (real_T)
      *chartInstance->c3_quick_stop, 0.0, -1, 0U, *chartInstance->c3_quick_stop ==
      0.0F));
    _SFD_SYMBOL_SCOPE_POP();
    if (c3_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 27U, *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_t_debug_family_names,
        c3_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      *chartInstance->c3_controlword = 0.0;
      chartInstance->c3_dataWrittenToVector[0U] = true;
      chartInstance->c3_dataWrittenToVector[0U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c3_controlword, 4U);
      _SFD_SYMBOL_SCOPE_POP();
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c3_sfEvent);
}

static void c3_enter_atomic_switched_on
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[2];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_g_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  *chartInstance->c3_drive_enabled = 0.0;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_drive_enabled, 5U);
  *chartInstance->c3_fault_detected = 0.0;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_fault_detected, 6U);
  *chartInstance->c3_drive_ready = 1.0;
  chartInstance->c3_dataWrittenToVector[3U] = true;
  chartInstance->c3_dataWrittenToVector[3U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_drive_ready, 7U);
  *chartInstance->c3_controlword = 7.0;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_controlword, 4U);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_switched_on(SFc3_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance)
{
  uint32_T c3_debug_family_var_map[3];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 1.0;
  boolean_T c3_out;
  real_T c3_b_nargin = 0.0;
  real_T c3_b_nargout = 1.0;
  boolean_T c3_b_out;
  real_T c3_c_nargin = 0.0;
  real_T c3_c_nargout = 1.0;
  boolean_T c3_c_out;
  uint32_T c3_b_debug_family_var_map[2];
  real_T c3_d_nargin = 0.0;
  real_T c3_e_nargin = 0.0;
  real_T c3_d_nargout = 1.0;
  real_T c3_e_nargout = 0.0;
  boolean_T c3_d_out;
  real_T c3_f_nargin = 0.0;
  real_T c3_f_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U, *chartInstance->c3_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_sb_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_out, 2U, c3_b_sf_marshallOut,
    c3_b_sf_marshallIn);
  c3_out = CV_EML_IF(10, 0, 0, CV_RELATIONAL_EVAL(5U, 10U, 0, (real_T)
    *chartInstance->c3_statusword, 39.0, -1, 0U, (real_T)
    *chartInstance->c3_statusword == 39.0));
  _SFD_SYMBOL_SCOPE_POP();
  if (c3_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c3_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c3_sfEvent);
    *chartInstance->c3_is_DS402StateMachine = c3_IN_operation_enabled;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
    c3_enter_atomic_operation_enabled(chartInstance);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                 *chartInstance->c3_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_pb_debug_family_names,
      c3_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargin, 0U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargout, 1U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_out, 2U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    c3_b_out = CV_EML_IF(3, 0, 0, CV_RELATIONAL_EVAL(5U, 3U, 0, (real_T)
      *chartInstance->c3_statusword, 33.0, -1, 0U, (real_T)
      *chartInstance->c3_statusword == 33.0));
    _SFD_SYMBOL_SCOPE_POP();
    if (c3_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c3_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c3_sfEvent);
      *chartInstance->c3_is_DS402StateMachine = c3_IN_ready_to_switch_on;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c3_sfEvent);
      c3_enter_atomic_ready_to_switch_on(chartInstance);
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 10U,
                   *chartInstance->c3_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 22U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_w_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      c3_c_out = CV_EML_IF(22, 0, 0, CV_RELATIONAL_EVAL(5U, 22U, 0, (real_T)
        *chartInstance->c3_enable_drive, 0.0, -1, 0U,
        *chartInstance->c3_enable_drive == 0.0F));
      _SFD_SYMBOL_SCOPE_POP();
      if (c3_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 22U, *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_x_debug_family_names,
          c3_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        *chartInstance->c3_controlword = 6.0;
        chartInstance->c3_dataWrittenToVector[0U] = true;
        chartInstance->c3_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c3_controlword, 4U);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 23U,
                     *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_u_debug_family_names,
          c3_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_out, 2U, c3_b_sf_marshallOut,
          c3_b_sf_marshallIn);
        c3_d_out = CV_EML_IF(23, 0, 0, CV_RELATIONAL_EVAL(5U, 23U, 0, (real_T)
          *chartInstance->c3_enable_drive, 1.0, -1, 0U,
          *chartInstance->c3_enable_drive == 1.0F));
        _SFD_SYMBOL_SCOPE_POP();
        if (c3_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 23U, *chartInstance->c3_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_v_debug_family_names,
            c3_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargin, 0U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargout, 1U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          *chartInstance->c3_controlword = 15.0;
          chartInstance->c3_dataWrittenToVector[0U] = true;
          chartInstance->c3_dataWrittenToVector[0U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c3_controlword, 4U);
          _SFD_SYMBOL_SCOPE_POP();
        }
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, *chartInstance->c3_sfEvent);
}

static void c3_enter_atomic_operation_enabled
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[2];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_h_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  *chartInstance->c3_drive_enabled = 1.0;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_drive_enabled, 5U);
  *chartInstance->c3_fault_detected = 0.0;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_fault_detected, 6U);
  *chartInstance->c3_drive_ready = 1.0;
  chartInstance->c3_dataWrittenToVector[3U] = true;
  chartInstance->c3_dataWrittenToVector[3U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_drive_ready, 7U);
  *chartInstance->c3_controlword = 15.0;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_controlword, 4U);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_operation_enabled(SFc3_modello_2017b_levaRetro_accInstanceStruct *
  chartInstance)
{
  uint32_T c3_debug_family_var_map[3];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 1.0;
  boolean_T c3_out;
  real_T c3_b_nargin = 0.0;
  real_T c3_b_nargout = 1.0;
  boolean_T c3_b_out;
  real_T c3_c_nargin = 0.0;
  real_T c3_c_nargout = 1.0;
  boolean_T c3_c_out;
  uint32_T c3_b_debug_family_var_map[2];
  real_T c3_d_nargin = 0.0;
  real_T c3_e_nargin = 0.0;
  real_T c3_d_nargout = 1.0;
  real_T c3_e_nargout = 0.0;
  boolean_T c3_d_out;
  real_T c3_f_nargin = 0.0;
  real_T c3_f_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 17U, *chartInstance->c3_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_rb_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_out, 2U, c3_b_sf_marshallOut,
    c3_b_sf_marshallIn);
  c3_out = CV_EML_IF(17, 0, 0, CV_RELATIONAL_EVAL(5U, 17U, 0, (real_T)
    *chartInstance->c3_statusword, 7.0, -1, 0U, (real_T)
    *chartInstance->c3_statusword == 7.0));
  _SFD_SYMBOL_SCOPE_POP();
  if (c3_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17U, *chartInstance->c3_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
    *chartInstance->c3_is_DS402StateMachine = c3_IN_quick_stop_active;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c3_sfEvent);
    c3_enter_atomic_quick_stop_active(chartInstance);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 15U,
                 *chartInstance->c3_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_ub_debug_family_names,
      c3_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargin, 0U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargout, 1U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_out, 2U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    c3_b_out = CV_EML_IF(15, 0, 0, CV_RELATIONAL_EVAL(5U, 15U, 0, (real_T)
      *chartInstance->c3_statusword, 35.0, -1, 0U, (real_T)
      *chartInstance->c3_statusword == 35.0));
    _SFD_SYMBOL_SCOPE_POP();
    if (c3_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, *chartInstance->c3_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
      *chartInstance->c3_is_DS402StateMachine = c3_IN_switched_on;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c3_sfEvent);
      c3_enter_atomic_switched_on(chartInstance);
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                   *chartInstance->c3_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 25U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_bb_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      c3_c_out = CV_EML_IF(25, 0, 0, CV_RELATIONAL_EVAL(5U, 25U, 0, (real_T)
        *chartInstance->c3_enable_drive, 0.0, -1, 0U,
        *chartInstance->c3_enable_drive == 0.0F));
      _SFD_SYMBOL_SCOPE_POP();
      if (c3_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 25U, *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_cb_debug_family_names,
          c3_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        *chartInstance->c3_controlword = 7.0;
        chartInstance->c3_dataWrittenToVector[0U] = true;
        chartInstance->c3_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c3_controlword, 4U);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 26U,
                     *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_y_debug_family_names,
          c3_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_out, 2U, c3_b_sf_marshallOut,
          c3_b_sf_marshallIn);
        c3_d_out = CV_EML_IF(26, 0, 0, CV_RELATIONAL_EVAL(5U, 26U, 0, (real_T)
          *chartInstance->c3_quick_stop, 1.0, -1, 0U,
          *chartInstance->c3_quick_stop == 1.0F));
        _SFD_SYMBOL_SCOPE_POP();
        if (c3_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 26U, *chartInstance->c3_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_ab_debug_family_names,
            c3_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargin, 0U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargout, 1U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          *chartInstance->c3_controlword = 2.0;
          chartInstance->c3_dataWrittenToVector[0U] = true;
          chartInstance->c3_dataWrittenToVector[0U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c3_controlword, 4U);
          _SFD_SYMBOL_SCOPE_POP();
        }
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c3_sfEvent);
}

static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber, uint32_T c3_instanceNumber)
{
  (void)(c3_machineNumber);
  (void)(c3_chartNumber);
  (void)(c3_instanceNumber);
}

static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  real_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc3_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_u = *(real_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static real_T c3_emlrt_marshallIn(SFc3_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance, const mxArray *c3_nargout, const char_T *c3_identifier)
{
  real_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = (const char *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_nargout), &c3_thisId);
  sf_mex_destroy(&c3_nargout);
  return c3_y;
}

static real_T c3_b_emlrt_marshallIn
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  real_T c3_y;
  real_T c3_d0;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_d0, 1, 0, 0U, 0, 0U, 0);
  c3_y = c3_d0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_nargout;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y;
  SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc3_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c3_nargout = sf_mex_dup(c3_mxArrayInData);
  c3_thisId.fIdentifier = (const char *)c3_varName;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_nargout), &c3_thisId);
  sf_mex_destroy(&c3_nargout);
  *(real_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  boolean_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc3_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_u = *(boolean_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static boolean_T c3_c_emlrt_marshallIn
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  boolean_T c3_y;
  boolean_T c3_b0;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_b0, 1, 11, 0U, 0, 0U, 0);
  c3_y = c3_b0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_sf_internal_predicateOutput;
  emlrtMsgIdentifier c3_thisId;
  boolean_T c3_y;
  SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc3_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c3_sf_internal_predicateOutput = sf_mex_dup(c3_mxArrayInData);
  c3_thisId.fIdentifier = (const char *)c3_varName;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_sf_internal_predicateOutput), &c3_thisId);
  sf_mex_destroy(&c3_sf_internal_predicateOutput);
  *(boolean_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

const mxArray *sf_c3_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  sf_mex_assign(&c3_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c3_nameCaptureInfo;
}

static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc3_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_u = *(int32_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static int32_T c3_d_emlrt_marshallIn
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  int32_T c3_y;
  int32_T c3_i1;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_i1, 1, 6, 0U, 0, 0U, 0);
  c3_y = c3_i1;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_sfEvent;
  emlrtMsgIdentifier c3_thisId;
  int32_T c3_y;
  SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc3_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c3_b_sfEvent = sf_mex_dup(c3_mxArrayInData);
  c3_thisId.fIdentifier = (const char *)c3_varName;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_sfEvent),
    &c3_thisId);
  sf_mex_destroy(&c3_b_sfEvent);
  *(int32_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_d_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  uint8_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc3_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_u = *(uint8_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static uint8_T c3_e_emlrt_marshallIn
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray *
   c3_b_is_DS402StateMachine, const char_T *c3_identifier)
{
  uint8_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = (const char *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_b_is_DS402StateMachine), &c3_thisId);
  sf_mex_destroy(&c3_b_is_DS402StateMachine);
  return c3_y;
}

static uint8_T c3_f_emlrt_marshallIn
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_y;
  uint8_T c3_u0;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_u0, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_u0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_is_DS402StateMachine;
  emlrtMsgIdentifier c3_thisId;
  uint8_T c3_y;
  SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc3_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c3_b_is_DS402StateMachine = sf_mex_dup(c3_mxArrayInData);
  c3_thisId.fIdentifier = (const char *)c3_varName;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_b_is_DS402StateMachine), &c3_thisId);
  sf_mex_destroy(&c3_b_is_DS402StateMachine);
  *(uint8_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_e_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  uint16_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc3_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_u = *(uint16_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 5, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static const mxArray *c3_f_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  real32_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc3_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_u = *(real32_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static void c3_g_emlrt_marshallIn(SFc3_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance, const mxArray *c3_b_dataWrittenToVector, const char_T
  *c3_identifier, boolean_T c3_y[4])
{
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = (const char *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_dataWrittenToVector),
                        &c3_thisId, c3_y);
  sf_mex_destroy(&c3_b_dataWrittenToVector);
}

static void c3_h_emlrt_marshallIn(SFc3_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId,
  boolean_T c3_y[4])
{
  boolean_T c3_bv1[4];
  int32_T c3_i2;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), c3_bv1, 1, 11, 0U, 1, 0U, 1, 4);
  for (c3_i2 = 0; c3_i2 < 4; c3_i2++) {
    c3_y[c3_i2] = c3_bv1[c3_i2];
  }

  sf_mex_destroy(&c3_u);
}

static const mxArray *c3_i_emlrt_marshallIn
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray *
   c3_b_setSimStateSideEffectsInfo, const char_T *c3_identifier)
{
  const mxArray *c3_y = NULL;
  emlrtMsgIdentifier c3_thisId;
  c3_y = NULL;
  c3_thisId.fIdentifier = (const char *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  sf_mex_assign(&c3_y, c3_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_b_setSimStateSideEffectsInfo), &c3_thisId), false);
  sf_mex_destroy(&c3_b_setSimStateSideEffectsInfo);
  return c3_y;
}

static const mxArray *c3_j_emlrt_marshallIn
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const mxArray *
   c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  const mxArray *c3_y = NULL;
  (void)chartInstance;
  (void)c3_parentId;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_duplicatearraysafe(&c3_u), false);
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static const mxArray *sf_get_hover_data_for_msg
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance, int32_T
   c3_ssid)
{
  (void)chartInstance;
  (void)c3_ssid;
  return NULL;
}

static void c3_init_sf_message_store_memory
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info(SFc3_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  chartInstance->c3_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c3_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c3_is_active_c3_modello_2017b_levaRetro_acc = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 1);
  chartInstance->c3_is_c3_modello_2017b_levaRetro_acc = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 2);
  chartInstance->c3_is_DS402StateMachine = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 3);
  chartInstance->c3_statusword = (uint16_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c3_enable_drive = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c3_reset_fault = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c3_controlword = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c3_drive_enabled = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c3_fault_detected = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c3_drive_ready = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c3_quick_stop = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
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
void sf_c3_modello_2017b_levaRetro_acc_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1910623953U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3384653059U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1863734901U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1842829894U);
}

mxArray* sf_c3_modello_2017b_levaRetro_acc_get_post_codegen_info(void);
mxArray *sf_c3_modello_2017b_levaRetro_acc_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("INC8xUk6zxwBmWTkYHlCDD");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
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
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo =
      sf_c3_modello_2017b_levaRetro_acc_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c3_modello_2017b_levaRetro_acc_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c3_modello_2017b_levaRetro_acc_jit_fallback_info(void)
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

mxArray *sf_c3_modello_2017b_levaRetro_acc_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c3_modello_2017b_levaRetro_acc_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c3_modello_2017b_levaRetro_acc(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x8'type','srcId','name','auxInfo'{{M[1],M[4],T\"controlword\",},{M[1],M[5],T\"drive_enabled\",},{M[1],M[8],T\"drive_ready\",},{M[1],M[6],T\"fault_detected\",},{M[8],M[0],T\"is_active_c3_modello_2017b_levaRetro_acc\",},{M[9],M[0],T\"is_c3_modello_2017b_levaRetro_acc\",},{M[9],M[91],T\"is_DS402StateMachine\",},{M[15],M[0],T\"dataWrittenToVector\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 8, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_modello_2017b_levaRetro_acc_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg
    ( (SFc3_modello_2017b_levaRetro_accInstanceStruct *) chartInstance, msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance =
      (SFc3_modello_2017b_levaRetro_accInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _modello_2017b_levaRetro_accMachineNumber_,
           3,
           11,
           29,
           0,
           8,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"statusword");
          _SFD_SET_DATA_PROPS(1,1,1,0,"enable_drive");
          _SFD_SET_DATA_PROPS(2,1,1,0,"reset_fault");
          _SFD_SET_DATA_PROPS(3,1,1,0,"quick_stop");
          _SFD_SET_DATA_PROPS(4,2,0,1,"controlword");
          _SFD_SET_DATA_PROPS(5,2,0,1,"drive_enabled");
          _SFD_SET_DATA_PROPS(6,2,0,1,"fault_detected");
          _SFD_SET_DATA_PROPS(7,2,0,1,"drive_ready");
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
          _SFD_CH_SUBSTATE_COUNT(1);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_ST_SUBSTATE_COUNT(0,10);
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
        }

        _SFD_CV_INIT_CHART(1,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,10,1,1,0,0,NULL,NULL);
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

        _SFD_CV_INIT_TRANS(19,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(18,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(16,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(12,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(7,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(8,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(11,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(13,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(28,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(5,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(14,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(17,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(15,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(9,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(24,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(21,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(20,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(27,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(23,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(22,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(26,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(25,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(3,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(2,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(4,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(9,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(7,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(6,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(10,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(5,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(9,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(9,0,0,1,15,1,15);
        _SFD_CV_INIT_EML_RELATIONAL(9,0,0,1,15,-1,0);
        _SFD_CV_INIT_EML(6,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(6,0,0,1,16,1,16);
        _SFD_CV_INIT_EML_RELATIONAL(6,0,0,1,16,-1,0);
        _SFD_CV_INIT_EML(24,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(24,0,0,1,16,1,16);
        _SFD_CV_INIT_EML_RELATIONAL(24,0,0,1,16,-1,0);
        _SFD_CV_INIT_EML(21,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(21,0,0,1,16,1,16);
        _SFD_CV_INIT_EML_RELATIONAL(21,0,0,1,16,-1,0);
        _SFD_CV_INIT_EML(20,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(20,0,0,1,16,1,16);
        _SFD_CV_INIT_EML_RELATIONAL(20,0,0,1,16,-1,0);
        _SFD_CV_INIT_EML(27,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(27,0,0,1,14,1,14);
        _SFD_CV_INIT_EML_RELATIONAL(27,0,0,1,14,-1,0);
        _SFD_CV_INIT_EML(23,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(23,0,0,1,16,1,16);
        _SFD_CV_INIT_EML_RELATIONAL(23,0,0,1,16,-1,0);
        _SFD_CV_INIT_EML(22,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(22,0,0,1,16,1,16);
        _SFD_CV_INIT_EML_RELATIONAL(22,0,0,1,16,-1,0);
        _SFD_CV_INIT_EML(26,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(26,0,0,1,14,1,14);
        _SFD_CV_INIT_EML_RELATIONAL(26,0,0,1,14,-1,0);
        _SFD_CV_INIT_EML(25,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(25,0,0,1,16,1,16);
        _SFD_CV_INIT_EML_RELATIONAL(25,0,0,1,16,-1,0);
        _SFD_CV_INIT_EML(2,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(2,0,0,1,67,1,48);

        {
          static int condStart[] = { 2, 20, 42 };

          static int condEnd[] = { 16, 34, 67 };

          static int pfixExpr[] = { 0, 1, -2, 2, -1, -3 };

          _SFD_CV_INIT_EML_MCDC(2,0,0,1,67,3,0,&(condStart[0]),&(condEnd[0]),6,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(2,0,0,2,16,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(2,0,1,20,34,-1,0);
        _SFD_CV_INIT_EML(0,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(0,0,0,1,74,1,48);

        {
          static int condStart[] = { 2, 19, 41, 65 };

          static int condEnd[] = { 15, 33, 62, 74 };

          static int pfixExpr[] = { 0, 1, -2, 2, -1, -3, 3, -1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,0,0,1,74,4,0,&(condStart[0]),&(condEnd[0]),9,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(0,0,0,2,15,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(0,0,1,19,33,-1,0);
        _SFD_CV_INIT_EML(18,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(18,0,0,1,14,1,14);
        _SFD_CV_INIT_EML_RELATIONAL(18,0,0,1,14,-1,0);
        _SFD_CV_INIT_EML(1,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(1,0,0,1,15,1,15);
        _SFD_CV_INIT_EML_RELATIONAL(1,0,0,1,15,-1,0);
        _SFD_CV_INIT_EML(16,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(16,0,0,1,15,1,15);
        _SFD_CV_INIT_EML_RELATIONAL(16,0,0,1,15,-1,0);
        _SFD_CV_INIT_EML(12,0,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(7,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(7,0,0,1,15,1,15);
        _SFD_CV_INIT_EML_RELATIONAL(7,0,0,1,15,-1,0);
        _SFD_CV_INIT_EML(8,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(8,0,0,1,15,1,15);
        _SFD_CV_INIT_EML_RELATIONAL(8,0,0,1,15,-1,0);
        _SFD_CV_INIT_EML(11,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(11,0,0,1,32,1,32);

        {
          static int condStart[] = { 1, 18 };

          static int condEnd[] = { 14, 32 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(11,0,0,1,32,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(11,0,0,1,14,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(11,0,1,18,32,-1,0);
        _SFD_CV_INIT_EML(13,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(13,0,0,1,33,1,33);

        {
          static int condStart[] = { 1, 19 };

          static int condEnd[] = { 15, 33 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(13,0,0,1,33,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(13,0,0,1,15,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(13,0,1,19,33,-1,0);
        _SFD_CV_INIT_EML(28,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(28,0,0,1,64,1,48);

        {
          static int condStart[] = { 2, 20, 42 };

          static int condEnd[] = { 16, 34, 64 };

          static int pfixExpr[] = { 0, 1, -2, 2, -1, -3 };

          _SFD_CV_INIT_EML_MCDC(28,0,0,1,64,3,0,&(condStart[0]),&(condEnd[0]),6,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(28,0,0,2,16,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(28,0,1,20,34,-1,0);
        _SFD_CV_INIT_EML(5,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(5,0,0,1,15,1,15);
        _SFD_CV_INIT_EML_RELATIONAL(5,0,0,1,15,-1,0);
        _SFD_CV_INIT_EML(3,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(3,0,0,1,15,1,15);
        _SFD_CV_INIT_EML_RELATIONAL(3,0,0,1,15,-1,0);
        _SFD_CV_INIT_EML(14,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(14,0,0,1,15,1,15);
        _SFD_CV_INIT_EML_RELATIONAL(14,0,0,1,15,-1,0);
        _SFD_CV_INIT_EML(17,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(17,0,0,1,14,1,14);
        _SFD_CV_INIT_EML_RELATIONAL(17,0,0,1,14,-1,0);
        _SFD_CV_INIT_EML(10,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(10,0,0,1,15,1,15);
        _SFD_CV_INIT_EML_RELATIONAL(10,0,0,1,15,-1,0);
        _SFD_CV_INIT_EML(4,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(4,0,0,1,15,1,15);
        _SFD_CV_INIT_EML_RELATIONAL(4,0,0,1,15,-1,0);
        _SFD_CV_INIT_EML(15,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(15,0,0,1,15,1,15);
        _SFD_CV_INIT_EML_RELATIONAL(15,0,0,1,15,-1,0);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_e_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_f_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_f_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_f_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)c3_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)c3_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)c3_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)c3_sf_marshallIn);
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
    SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance =
      (SFc3_modello_2017b_levaRetro_accInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, (void *)chartInstance->c3_statusword);
        _SFD_SET_DATA_VALUE_PTR(1U, (void *)chartInstance->c3_enable_drive);
        _SFD_SET_DATA_VALUE_PTR(2U, (void *)chartInstance->c3_reset_fault);
        _SFD_SET_DATA_VALUE_PTR(4U, (void *)chartInstance->c3_controlword);
        _SFD_SET_DATA_VALUE_PTR(5U, (void *)chartInstance->c3_drive_enabled);
        _SFD_SET_DATA_VALUE_PTR(6U, (void *)chartInstance->c3_fault_detected);
        _SFD_SET_DATA_VALUE_PTR(7U, (void *)chartInstance->c3_drive_ready);
        _SFD_SET_DATA_VALUE_PTR(3U, (void *)chartInstance->c3_quick_stop);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "smnQtd9lNWbnLFQrc523Q2";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_modello_2017b_levaRetro_acc_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 3, "dworkChecksum");
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

static void sf_opaque_initialize_c3_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc3_modello_2017b_levaRetro_accInstanceStruct*)
    chartInstanceVar)->S);
  chart_debug_initialization(((SFc3_modello_2017b_levaRetro_accInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c3_modello_2017b_levaRetro_acc
    ((SFc3_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
  initialize_c3_modello_2017b_levaRetro_acc
    ((SFc3_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c3_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  enable_c3_modello_2017b_levaRetro_acc
    ((SFc3_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c3_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  disable_c3_modello_2017b_levaRetro_acc
    ((SFc3_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c3_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  sf_gateway_c3_modello_2017b_levaRetro_acc
    ((SFc3_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c3_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  ext_mode_exec_c3_modello_2017b_levaRetro_acc
    ((SFc3_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c3_modello_2017b_levaRetro_acc
  (SimStruct* S)
{
  return get_sim_state_c3_modello_2017b_levaRetro_acc
    ((SFc3_modello_2017b_levaRetro_accInstanceStruct *)sf_get_chart_instance_ptr
     (S));                             /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c3_modello_2017b_levaRetro_acc(SimStruct* S,
  const mxArray *st)
{
  set_sim_state_c3_modello_2017b_levaRetro_acc
    ((SFc3_modello_2017b_levaRetro_accInstanceStruct*)sf_get_chart_instance_ptr
     (S), st);
}

static void sf_opaque_terminate_c3_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_modello_2017b_levaRetro_accInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_modello_2017b_levaRetro_acc_optimization_info();
    }

    finalize_c3_modello_2017b_levaRetro_acc
      ((SFc3_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc3_modello_2017b_levaRetro_acc
    ((SFc3_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_modello_2017b_levaRetro_acc(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_modello_2017b_levaRetro_acc
      ((SFc3_modello_2017b_levaRetro_accInstanceStruct*)
       sf_get_chart_instance_ptr(S));
  }
}

mxArray *sf_c3_modello_2017b_levaRetro_acc_get_testpoint_info(void)
{
  const char *infoEncStr[] = {
    "100 S1x3'varName','path'{{T\"is_active_c3_modello_2017b_levaRetro_acc\",T\"is_active_c3_modello_2017b_levaRetro_acc\"},{T\"is_c3_modello_2017b_levaRetro_acc\",T\"is_c3_modello_2017b_levaRetro_acc\"},{T\"is_DS402StateMachine\",T\"DS402StateMachine.is_DS402StateMachine\"}}"
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

static void mdlSetWorkWidths_c3_modello_2017b_levaRetro_acc(SimStruct *S)
{
  ssSetInputPortDirectFeedThrough(S, 0, 1);
  ssSetInputPortDirectFeedThrough(S, 1, 1);
  ssSetInputPortDirectFeedThrough(S, 2, 1);
  ssSetInputPortDirectFeedThrough(S, 3, 1);
  ssSetStatesModifiedOnlyInUpdate(S, 0);
  ssSetBlockIsPurelyCombinatorial_wrapper(S, 0);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_modello_2017b_levaRetro_acc_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,3);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,3,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 3);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,3);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,3,4);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,3,4);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=4; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 4; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,3);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1023790951U));
  ssSetChecksum1(S,(3259111457U));
  ssSetChecksum2(S,(732616923U));
  ssSetChecksum3(S,(1233126054U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c3_modello_2017b_levaRetro_acc(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c3_modello_2017b_levaRetro_acc(SimStruct *S)
{
  SFc3_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc3_modello_2017b_levaRetro_accInstanceStruct *)utMalloc
    (sizeof(SFc3_modello_2017b_levaRetro_accInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc3_modello_2017b_levaRetro_accInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c3_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c3_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c3_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c3_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c3_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c3_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c3_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c3_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.mdlStart = mdlStart_c3_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c3_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec =
    sf_opaque_ext_mode_exec_c3_modello_2017b_levaRetro_acc;
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
  mdl_start_c3_modello_2017b_levaRetro_acc(chartInstance);
}

void c3_modello_2017b_levaRetro_acc_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c3_modello_2017b_levaRetro_acc(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_modello_2017b_levaRetro_acc(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_modello_2017b_levaRetro_acc(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_modello_2017b_levaRetro_acc_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
