/* Include files */

#include "modello_2017b_levaRetro_acc_sfun.h"
#include "c152_modello_2017b_levaRetro_acc.h"
#include "mwmathutil.h"
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
#define c152_IN_NO_ACTIVE_CHILD        ((uint8_T)0U)
#define c152_IN_IDLE                   ((uint8_T)1U)
#define c152_IN_curva_andata           ((uint8_T)2U)
#define c152_IN_curva_ritorno          ((uint8_T)3U)
#define c152_IN_forza_crossgate        ((uint8_T)4U)
#define c152_IN_marcia_innestata       ((uint8_T)5U)
#define c152_IN_muro_selezione_x       ((uint8_T)6U)
#define c152_IN_muro_x                 ((uint8_T)7U)
#define c152_IN_rigidezza_finale       ((uint8_T)8U)
#define c152_IN_logic                  ((uint8_T)2U)
#define c152_const_offset_pf           (0.0F)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c152_debug_family_names[5] = { "nargin", "nargout",
  "sel_gear", "field", "val" };

/* Function Declarations */
static void initialize_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void initialize_params_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void enable_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void disable_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c152_update_debugger_state_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void ext_mode_exec_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void set_sim_state_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_st);
static void c152_set_sim_state_side_effects_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void finalize_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void sf_gateway_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void mdl_start_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c152_chartstep_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void initSimStructsc152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c152_asse_x(SFc152_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance);
static void c152_exit_internal_asse_x
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c152_muro_selezione_x
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void c152_rigidezza_finale
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c152_machineNumber, uint32_T
  c152_chartNumber, uint32_T c152_instanceNumber);
static const mxArray *c152_sf_marshallOut(void *chartInstanceVoid, void
  *c152_inData);
static real_T c152_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_val, const char_T *c152_identifier);
static real_T c152_b_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_u, const emlrtMsgIdentifier *c152_parentId);
static void c152_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c152_mxArrayInData, const char_T *c152_varName, void *c152_outData);
static real_T c152_gearshift_grid_r
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, real_T
   c152_sel_gear, real_T c152_field);
static const mxArray *c152_b_sf_marshallOut(void *chartInstanceVoid, void
  *c152_inData);
static int32_T c152_c_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_u, const emlrtMsgIdentifier *c152_parentId);
static void c152_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c152_mxArrayInData, const char_T *c152_varName, void *c152_outData);
static const mxArray *c152_c_sf_marshallOut(void *chartInstanceVoid, void
  *c152_inData);
static uint8_T c152_d_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_b_is_asse_x, const char_T *c152_identifier);
static uint8_T c152_e_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_u, const emlrtMsgIdentifier *c152_parentId);
static void c152_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c152_mxArrayInData, const char_T *c152_varName, void *c152_outData);
static const mxArray *c152_d_sf_marshallOut(void *chartInstanceVoid, void
  *c152_inData);
static real32_T c152_f_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_b_statex, const char_T *c152_identifier);
static real32_T c152_g_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_u, const emlrtMsgIdentifier *c152_parentId);
static void c152_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c152_mxArrayInData, const char_T *c152_varName, void *c152_outData);
static const mxArray *c152_e_sf_marshallOut(void *chartInstanceVoid, void
  *c152_inData);
static void c152_h_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_u, const emlrtMsgIdentifier *c152_parentId, real_T c152_y[42]);
static void c152_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c152_mxArrayInData, const char_T *c152_varName, void *c152_outData);
static const mxArray *c152_i_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_b_setSimStateSideEffectsInfo, const char_T *c152_identifier);
static const mxArray *c152_j_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_u, const emlrtMsgIdentifier *c152_parentId);
static const mxArray *sf_get_hover_data_for_msg
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, int32_T
   c152_ssid);
static void c152_init_sf_message_store_memory
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void init_dsm_address_info
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);
static void init_simulink_io_address
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc152_modello_2017b_levaRetro_acc(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c152_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c152_doSetSimStateSideEffects = 0U;
  chartInstance->c152_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c152_is_active_asse_x = 0U;
  *chartInstance->c152_is_asse_x = c152_IN_NO_ACTIVE_CHILD;
  *chartInstance->c152_is_active_asse_y = 0U;
  *chartInstance->c152_is_asse_y = c152_IN_NO_ACTIVE_CHILD;
  *chartInstance->c152_is_active_c152_modello_2017b_levaRetro_acc = 0U;
  *chartInstance->c152_muro_dx = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c152_muro_dx, 1U);
  *chartInstance->c152_muro_sx = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c152_muro_sx, 2U);
  *chartInstance->c152_corsa_marcia_x = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c152_corsa_marcia_x, 0U);
  *chartInstance->c152_punto_marcia_innestata = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c152_punto_marcia_innestata, 3U);
  *chartInstance->c152_up_gear = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c152_up_gear, 4U);
  chartInstance->c152_offset_pf = 0.0F;
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c152_offset_pf, 12U);
  if (!(sf_get_output_port_reusable(chartInstance->S, 1) != 0)) {
    *chartInstance->c152_statex = 0.0F;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 2) != 0)) {
    *chartInstance->c152_statey = 0.0F;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statey, 11U);
  }
}

static void initialize_params_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  real_T c152_dv0[42];
  int32_T c152_i0;
  real_T c152_d0;
  real_T c152_d1;
  real_T c152_d2;
  real_T c152_d3;
  real_T c152_d4;
  real_T c152_d5;
  real_T c152_dv1[42];
  int32_T c152_i1;
  sf_mex_import_named("gearshift_grid", sf_mex_get_sfun_param(chartInstance->S,
    0, 0), c152_dv0, 0, 0, 0U, 1, 0U, 1, 42);
  for (c152_i0 = 0; c152_i0 < 42; c152_i0++) {
    chartInstance->c152_gearshift_grid[c152_i0] = c152_dv0[c152_i0];
  }

  sf_mex_import_named("selection_x_neg", sf_mex_get_sfun_param(chartInstance->S,
    6, 0), &c152_d0, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c152_selection_x_neg = c152_d0;
  sf_mex_import_named("selection_x_pos", sf_mex_get_sfun_param(chartInstance->S,
    7, 0), &c152_d1, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c152_selection_x_pos = c152_d1;
  sf_mex_import_named("selection1_y_neg", sf_mex_get_sfun_param(chartInstance->S,
    2, 0), &c152_d2, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c152_selection1_y_neg = c152_d2;
  sf_mex_import_named("selection1_y_pos", sf_mex_get_sfun_param(chartInstance->S,
    3, 0), &c152_d3, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c152_selection1_y_pos = c152_d3;
  sf_mex_import_named("selection2_y_neg", sf_mex_get_sfun_param(chartInstance->S,
    4, 0), &c152_d4, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c152_selection2_y_neg = c152_d4;
  sf_mex_import_named("selection2_y_pos", sf_mex_get_sfun_param(chartInstance->S,
    5, 0), &c152_d5, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c152_selection2_y_pos = c152_d5;
  sf_mex_import_named("gearshift_grid_dyn", sf_mex_get_sfun_param
                      (chartInstance->S, 1, 0), c152_dv1, 0, 0, 0U, 1, 0U, 1, 42);
  for (c152_i1 = 0; c152_i1 < 42; c152_i1++) {
    chartInstance->c152_gearshift_grid_dyn[c152_i1] = c152_dv1[c152_i1];
  }
}

static void enable_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c152_update_debugger_state_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  uint32_T c152_prevAniVal;
  c152_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c152_is_active_c152_modello_2017b_levaRetro_acc == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 30U, *chartInstance->c152_sfEvent);
  }

  if (*chartInstance->c152_is_active_asse_x == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c152_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c152_sfEvent);
  }

  if (*chartInstance->c152_is_asse_x == c152_IN_IDLE) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c152_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c152_sfEvent);
  }

  if (*chartInstance->c152_is_asse_x == c152_IN_forza_crossgate) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c152_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c152_sfEvent);
  }

  if (*chartInstance->c152_is_asse_x == c152_IN_muro_selezione_x) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c152_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c152_sfEvent);
  }

  if (*chartInstance->c152_is_asse_x == c152_IN_curva_andata) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c152_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c152_sfEvent);
  }

  if (*chartInstance->c152_is_asse_x == c152_IN_curva_ritorno) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c152_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c152_sfEvent);
  }

  if (*chartInstance->c152_is_asse_x == c152_IN_rigidezza_finale) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c152_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c152_sfEvent);
  }

  if (*chartInstance->c152_is_asse_x == c152_IN_muro_x) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c152_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c152_sfEvent);
  }

  if (*chartInstance->c152_is_asse_x == c152_IN_marcia_innestata) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c152_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c152_sfEvent);
  }

  if (*chartInstance->c152_is_active_asse_y == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c152_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c152_sfEvent);
  }

  if (*chartInstance->c152_is_asse_y == c152_IN_IDLE) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c152_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c152_sfEvent);
  }

  if (*chartInstance->c152_is_asse_y == c152_IN_logic) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c152_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c152_sfEvent);
  }

  _SFD_SET_ANIMATION(c152_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  c152_update_debugger_state_c152_modello_2017b_levaRetro_acc(chartInstance);
}

static const mxArray *get_sim_state_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  const mxArray *c152_st;
  const mxArray *c152_y = NULL;
  real32_T c152_hoistedGlobal;
  const mxArray *c152_b_y = NULL;
  real32_T c152_b_hoistedGlobal;
  const mxArray *c152_c_y = NULL;
  real_T c152_c_hoistedGlobal;
  const mxArray *c152_d_y = NULL;
  real_T c152_d_hoistedGlobal;
  const mxArray *c152_e_y = NULL;
  real_T c152_e_hoistedGlobal;
  const mxArray *c152_f_y = NULL;
  real_T c152_f_hoistedGlobal;
  const mxArray *c152_g_y = NULL;
  real_T c152_g_hoistedGlobal;
  const mxArray *c152_h_y = NULL;
  uint8_T c152_h_hoistedGlobal;
  const mxArray *c152_i_y = NULL;
  uint8_T c152_i_hoistedGlobal;
  const mxArray *c152_j_y = NULL;
  uint8_T c152_j_hoistedGlobal;
  const mxArray *c152_k_y = NULL;
  uint8_T c152_k_hoistedGlobal;
  const mxArray *c152_l_y = NULL;
  uint8_T c152_l_hoistedGlobal;
  const mxArray *c152_m_y = NULL;
  c152_st = NULL;
  c152_st = NULL;
  c152_y = NULL;
  sf_mex_assign(&c152_y, sf_mex_createcellmatrix(12, 1), false);
  c152_hoistedGlobal = *chartInstance->c152_statex;
  c152_b_y = NULL;
  sf_mex_assign(&c152_b_y, sf_mex_create("y", &c152_hoistedGlobal, 1, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c152_y, 0, c152_b_y);
  c152_b_hoistedGlobal = *chartInstance->c152_statey;
  c152_c_y = NULL;
  sf_mex_assign(&c152_c_y, sf_mex_create("y", &c152_b_hoistedGlobal, 1, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c152_y, 1, c152_c_y);
  c152_c_hoistedGlobal = *chartInstance->c152_corsa_marcia_x;
  c152_d_y = NULL;
  sf_mex_assign(&c152_d_y, sf_mex_create("y", &c152_c_hoistedGlobal, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c152_y, 2, c152_d_y);
  c152_d_hoistedGlobal = *chartInstance->c152_muro_dx;
  c152_e_y = NULL;
  sf_mex_assign(&c152_e_y, sf_mex_create("y", &c152_d_hoistedGlobal, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c152_y, 3, c152_e_y);
  c152_e_hoistedGlobal = *chartInstance->c152_muro_sx;
  c152_f_y = NULL;
  sf_mex_assign(&c152_f_y, sf_mex_create("y", &c152_e_hoistedGlobal, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c152_y, 4, c152_f_y);
  c152_f_hoistedGlobal = *chartInstance->c152_punto_marcia_innestata;
  c152_g_y = NULL;
  sf_mex_assign(&c152_g_y, sf_mex_create("y", &c152_f_hoistedGlobal, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c152_y, 5, c152_g_y);
  c152_g_hoistedGlobal = *chartInstance->c152_up_gear;
  c152_h_y = NULL;
  sf_mex_assign(&c152_h_y, sf_mex_create("y", &c152_g_hoistedGlobal, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c152_y, 6, c152_h_y);
  c152_h_hoistedGlobal =
    *chartInstance->c152_is_active_c152_modello_2017b_levaRetro_acc;
  c152_i_y = NULL;
  sf_mex_assign(&c152_i_y, sf_mex_create("y", &c152_h_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c152_y, 7, c152_i_y);
  c152_i_hoistedGlobal = *chartInstance->c152_is_active_asse_x;
  c152_j_y = NULL;
  sf_mex_assign(&c152_j_y, sf_mex_create("y", &c152_i_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c152_y, 8, c152_j_y);
  c152_j_hoistedGlobal = *chartInstance->c152_is_active_asse_y;
  c152_k_y = NULL;
  sf_mex_assign(&c152_k_y, sf_mex_create("y", &c152_j_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c152_y, 9, c152_k_y);
  c152_k_hoistedGlobal = *chartInstance->c152_is_asse_x;
  c152_l_y = NULL;
  sf_mex_assign(&c152_l_y, sf_mex_create("y", &c152_k_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c152_y, 10, c152_l_y);
  c152_l_hoistedGlobal = *chartInstance->c152_is_asse_y;
  c152_m_y = NULL;
  sf_mex_assign(&c152_m_y, sf_mex_create("y", &c152_l_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c152_y, 11, c152_m_y);
  sf_mex_assign(&c152_st, c152_y, false);
  return c152_st;
}

static void set_sim_state_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_st)
{
  const mxArray *c152_u;
  c152_u = sf_mex_dup(c152_st);
  *chartInstance->c152_statex = c152_f_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c152_u, 0)), "statex");
  *chartInstance->c152_statey = c152_f_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c152_u, 1)), "statey");
  *chartInstance->c152_corsa_marcia_x = c152_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c152_u, 2)), "corsa_marcia_x");
  *chartInstance->c152_muro_dx = c152_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c152_u, 3)), "muro_dx");
  *chartInstance->c152_muro_sx = c152_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c152_u, 4)), "muro_sx");
  *chartInstance->c152_punto_marcia_innestata = c152_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c152_u, 5)),
     "punto_marcia_innestata");
  *chartInstance->c152_up_gear = c152_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c152_u, 6)), "up_gear");
  *chartInstance->c152_is_active_c152_modello_2017b_levaRetro_acc =
    c152_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c152_u, 7)),
    "is_active_c152_modello_2017b_levaRetro_acc");
  *chartInstance->c152_is_active_asse_x = c152_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c152_u, 8)), "is_active_asse_x");
  *chartInstance->c152_is_active_asse_y = c152_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c152_u, 9)), "is_active_asse_y");
  *chartInstance->c152_is_asse_x = c152_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c152_u, 10)), "is_asse_x");
  *chartInstance->c152_is_asse_y = c152_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c152_u, 11)), "is_asse_y");
  sf_mex_assign(&chartInstance->c152_setSimStateSideEffectsInfo,
                c152_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c152_u, 12)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c152_u);
  chartInstance->c152_doSetSimStateSideEffects = 1U;
  c152_update_debugger_state_c152_modello_2017b_levaRetro_acc(chartInstance);
  sf_mex_destroy(&c152_st);
}

static void c152_set_sim_state_side_effects_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  if (chartInstance->c152_doSetSimStateSideEffects != 0) {
    chartInstance->c152_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c152_setSimStateSideEffectsInfo);
}

static void sf_gateway_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  c152_set_sim_state_side_effects_c152_modello_2017b_levaRetro_acc(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 30U, *chartInstance->c152_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_init, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_retro_button, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_selected_gear, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_posy, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_posx, 5U);
  *chartInstance->c152_sfEvent = CALL_EVENT;
  c152_chartstep_c152_modello_2017b_levaRetro_acc(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_modello_2017b_levaRetro_accMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  c152_init_sf_message_store_memory(chartInstance);
  sim_mode_is_external(chartInstance->S);
}

static void c152_chartstep_c152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  boolean_T c152_out;
  boolean_T c152_b_out;
  boolean_T c152_c_out;
  boolean_T c152_temp;
  boolean_T c152_d_out;
  boolean_T c152_b_temp;
  boolean_T c152_e_out;
  boolean_T c152_f_out;
  boolean_T c152_g_out;
  boolean_T c152_c_temp;
  boolean_T c152_d_temp;
  boolean_T c152_h_out;
  boolean_T c152_e_temp;
  boolean_T c152_f_temp;
  boolean_T c152_i_out;
  boolean_T guard1 = false;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 30U,
               *chartInstance->c152_sfEvent);
  if (*chartInstance->c152_is_active_c152_modello_2017b_levaRetro_acc == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 30U,
                 *chartInstance->c152_sfEvent);
    *chartInstance->c152_is_active_c152_modello_2017b_levaRetro_acc = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 30U, *chartInstance->c152_sfEvent);
    *chartInstance->c152_is_active_asse_x = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c152_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c152_sfEvent);
    *chartInstance->c152_statex = 8.0F;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
    *chartInstance->c152_is_asse_x = c152_IN_IDLE;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c152_sfEvent);
    *chartInstance->c152_statex = 8.0F;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
    *chartInstance->c152_is_active_asse_y = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c152_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 18U, *chartInstance->c152_sfEvent);
    *chartInstance->c152_statey = 5.0F;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statey, 11U);
    *chartInstance->c152_is_asse_y = c152_IN_IDLE;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c152_sfEvent);
    *chartInstance->c152_statey = 5.0F;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statey, 11U);
  } else {
    c152_asse_x(chartInstance);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 9U,
                 *chartInstance->c152_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 28U,
                 *chartInstance->c152_sfEvent);
    c152_out = (CV_TRANSITION_EVAL(28U, (int32_T)(_SFD_CCP_CALL(5U, 28U, 0,
      (boolean_T)CV_RELATIONAL_EVAL(5U, 28U, 0, (real_T)
      *chartInstance->c152_init, 0.0, -3, 0U, *chartInstance->c152_init == 0.0F)
      != 0U, *chartInstance->c152_sfEvent) != 0U)) != 0);
    if (c152_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 28U, *chartInstance->c152_sfEvent);
      switch (*chartInstance->c152_is_asse_y) {
       case c152_IN_IDLE:
        CV_STATE_EVAL(9, 1, c152_IN_IDLE);
        *chartInstance->c152_is_asse_y = c152_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c152_sfEvent);
        break;

       case c152_IN_logic:
        CV_STATE_EVAL(9, 1, c152_IN_logic);
        *chartInstance->c152_is_asse_y = c152_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c152_sfEvent);
        break;

       default:
        CV_STATE_EVAL(9, 1, 0);
        *chartInstance->c152_is_asse_y = c152_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c152_sfEvent);
        break;
      }

      *chartInstance->c152_is_asse_y = c152_IN_IDLE;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c152_sfEvent);
      *chartInstance->c152_statey = 5.0F;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statey, 11U);
    } else {
      switch (*chartInstance->c152_is_asse_y) {
       case c152_IN_IDLE:
        CV_STATE_EVAL(9, 0, c152_IN_IDLE);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 27U,
                     *chartInstance->c152_sfEvent);
        c152_b_out = (CV_TRANSITION_EVAL(27U, (int32_T)(_SFD_CCP_CALL(5U, 27U, 0,
          (boolean_T)CV_RELATIONAL_EVAL(5U, 27U, 0, (real_T)
          *chartInstance->c152_init, 1.0, -3, 0U, *chartInstance->c152_init ==
          1.0F) != 0U, *chartInstance->c152_sfEvent) != 0U)) != 0);
        if (c152_b_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 27U, *chartInstance->c152_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c152_sfEvent);
          *chartInstance->c152_is_asse_y = c152_IN_logic;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c152_sfEvent);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 10U,
                       *chartInstance->c152_sfEvent);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, *chartInstance->c152_sfEvent);
        break;

       case c152_IN_logic:
        CV_STATE_EVAL(9, 0, c152_IN_logic);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 19U,
                     *chartInstance->c152_sfEvent);
        c152_c_out = (CV_TRANSITION_EVAL(19U, (int32_T)(_SFD_CCP_CALL(5U, 19U, 0,
          (boolean_T)CV_RELATIONAL_EVAL(5U, 19U, 0, (real_T)
          *chartInstance->c152_selected_gear, 8.0, -3, 1U,
          *chartInstance->c152_selected_gear != 8.0F) != 0U,
          *chartInstance->c152_sfEvent) != 0U)) != 0);
        guard1 = false;
        if (c152_c_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 19U, *chartInstance->c152_sfEvent);
          *chartInstance->c152_muro_dx = c152_gearshift_grid_r(chartInstance,
            (real_T)*chartInstance->c152_selected_gear, 2.0);
          _SFD_DATA_RANGE_CHECK(*chartInstance->c152_muro_dx, 1U);
          *chartInstance->c152_muro_sx = c152_gearshift_grid_r(chartInstance,
            (real_T)*chartInstance->c152_selected_gear, 3.0);
          _SFD_DATA_RANGE_CHECK(*chartInstance->c152_muro_sx, 2U);
          guard1 = true;
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 20U,
                       *chartInstance->c152_sfEvent);
          c152_temp = (_SFD_CCP_CALL(5U, 20U, 0, (boolean_T)CV_RELATIONAL_EVAL
            (5U, 20U, 0, (real_T)*chartInstance->c152_selected_gear, 8.0, -3, 0U,
             *chartInstance->c152_selected_gear == 8.0F) != 0U,
            *chartInstance->c152_sfEvent) != 0U);
          if (c152_temp) {
            c152_temp = (_SFD_CCP_CALL(5U, 20U, 1, (boolean_T)CV_RELATIONAL_EVAL
              (5U, 20U, 1, (real_T)*chartInstance->c152_retro_button, 0.0, -3,
               0U, *chartInstance->c152_retro_button == 0.0F) != 0U,
              *chartInstance->c152_sfEvent) != 0U);
          }

          c152_d_out = (CV_TRANSITION_EVAL(20U, (int32_T)c152_temp) != 0);
          if (c152_d_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 20U,
                         *chartInstance->c152_sfEvent);
            *chartInstance->c152_muro_dx = chartInstance->c152_selection1_y_neg;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c152_muro_dx, 1U);
            *chartInstance->c152_muro_sx = chartInstance->c152_selection1_y_pos;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c152_muro_sx, 2U);
            guard1 = true;
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 23U,
                         *chartInstance->c152_sfEvent);
            c152_b_temp = (_SFD_CCP_CALL(5U, 23U, 0, (boolean_T)
              CV_RELATIONAL_EVAL(5U, 23U, 0, (real_T)
                                 *chartInstance->c152_selected_gear, 8.0, -3, 0U,
                                 *chartInstance->c152_selected_gear == 8.0F) !=
              0U, *chartInstance->c152_sfEvent) != 0U);
            if (c152_b_temp) {
              c152_b_temp = (_SFD_CCP_CALL(5U, 23U, 1, (boolean_T)
                CV_RELATIONAL_EVAL(5U, 23U, 1, (real_T)
                                   *chartInstance->c152_retro_button, 1.0, -3,
                                   0U, *chartInstance->c152_retro_button == 1.0F)
                != 0U, *chartInstance->c152_sfEvent) != 0U);
            }

            c152_f_out = (CV_TRANSITION_EVAL(23U, (int32_T)c152_b_temp) != 0);
            if (c152_f_out) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 23U,
                           *chartInstance->c152_sfEvent);
              *chartInstance->c152_muro_dx =
                chartInstance->c152_selection2_y_neg;
              _SFD_DATA_RANGE_CHECK(*chartInstance->c152_muro_dx, 1U);
              *chartInstance->c152_muro_sx =
                chartInstance->c152_selection2_y_pos;
              _SFD_DATA_RANGE_CHECK(*chartInstance->c152_muro_sx, 2U);
              guard1 = true;
            } else {
              _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 11U,
                           *chartInstance->c152_sfEvent);
            }
          }
        }

        if (guard1) {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 22U,
                       *chartInstance->c152_sfEvent);
          c152_e_out = (CV_TRANSITION_EVAL(22U, (int32_T)(_SFD_CCP_CALL(5U, 22U,
            0, (boolean_T)CV_RELATIONAL_EVAL(5U, 22U, 0, (real_T)
            *chartInstance->c152_posy, *chartInstance->c152_muro_dx, -1, 3U,
            (real_T)*chartInstance->c152_posy <= *chartInstance->c152_muro_dx)
            != 0U, *chartInstance->c152_sfEvent) != 0U)) != 0);
          if (c152_e_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 22U,
                         *chartInstance->c152_sfEvent);
            *chartInstance->c152_statey = 1.0F;
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statey, 11U);
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 17U,
                         *chartInstance->c152_sfEvent);
            c152_g_out = (CV_TRANSITION_EVAL(17U, (int32_T)(_SFD_CCP_CALL(5U,
              17U, 0, (boolean_T)CV_RELATIONAL_EVAL(5U, 17U, 0, (real_T)
              *chartInstance->c152_posy, *chartInstance->c152_muro_sx, -1, 5U,
              (real_T)*chartInstance->c152_posy >= *chartInstance->c152_muro_sx)
              != 0U, *chartInstance->c152_sfEvent) != 0U)) != 0);
            if (c152_g_out) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17U,
                           *chartInstance->c152_sfEvent);
              *chartInstance->c152_statey = 2.0F;
              _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statey, 11U);
            } else {
              _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 21U,
                           *chartInstance->c152_sfEvent);
              c152_c_temp = (_SFD_CCP_CALL(5U, 21U, 0, (boolean_T)
                CV_RELATIONAL_EVAL(5U, 21U, 0, (real_T)
                                   *chartInstance->c152_selected_gear, 8.0, -3,
                                   0U, *chartInstance->c152_selected_gear ==
                                   8.0F) != 0U, *chartInstance->c152_sfEvent) !=
                             0U);
              if (c152_c_temp) {
                c152_c_temp = (_SFD_CCP_CALL(5U, 21U, 1, (boolean_T)
                  CV_RELATIONAL_EVAL(5U, 21U, 1, (real_T)
                                     *chartInstance->c152_posy,
                                     *chartInstance->c152_muro_dx, -1, 4U,
                                     (real_T)*chartInstance->c152_posy >
                                     *chartInstance->c152_muro_dx) != 0U,
                  *chartInstance->c152_sfEvent) != 0U);
              }

              c152_d_temp = c152_c_temp;
              if (c152_c_temp) {
                c152_d_temp = (_SFD_CCP_CALL(5U, 21U, 2, (boolean_T)
                  CV_RELATIONAL_EVAL(5U, 21U, 2, (real_T)
                                     *chartInstance->c152_posy,
                                     *chartInstance->c152_muro_sx, -1, 2U,
                                     (real_T)*chartInstance->c152_posy <
                                     *chartInstance->c152_muro_sx) != 0U,
                  *chartInstance->c152_sfEvent) != 0U);
              }

              c152_h_out = (CV_TRANSITION_EVAL(21U, (int32_T)c152_d_temp) != 0);
              if (c152_h_out) {
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 21U,
                             *chartInstance->c152_sfEvent);
                *chartInstance->c152_statey = 3.0F;
                _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statey, 11U);
              } else {
                _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 16U,
                             *chartInstance->c152_sfEvent);
                c152_e_temp = (_SFD_CCP_CALL(5U, 16U, 0, (boolean_T)
                  CV_RELATIONAL_EVAL(5U, 16U, 0, (real_T)
                                     *chartInstance->c152_selected_gear, 8.0, -3,
                                     1U, *chartInstance->c152_selected_gear !=
                                     8.0F) != 0U, *chartInstance->c152_sfEvent)
                               != 0U);
                if (c152_e_temp) {
                  c152_e_temp = (_SFD_CCP_CALL(5U, 16U, 1, (boolean_T)
                    CV_RELATIONAL_EVAL(5U, 16U, 1, (real_T)
                                       *chartInstance->c152_posy,
                                       *chartInstance->c152_muro_dx, -1, 4U,
                                       (real_T)*chartInstance->c152_posy >
                                       *chartInstance->c152_muro_dx) != 0U,
                    *chartInstance->c152_sfEvent) != 0U);
                }

                c152_f_temp = c152_e_temp;
                if (c152_e_temp) {
                  c152_f_temp = (_SFD_CCP_CALL(5U, 16U, 2, (boolean_T)
                    CV_RELATIONAL_EVAL(5U, 16U, 2, (real_T)
                                       *chartInstance->c152_posy,
                                       *chartInstance->c152_muro_sx, -1, 2U,
                                       (real_T)*chartInstance->c152_posy <
                                       *chartInstance->c152_muro_sx) != 0U,
                    *chartInstance->c152_sfEvent) != 0U);
                }

                c152_i_out = (CV_TRANSITION_EVAL(16U, (int32_T)c152_f_temp) != 0);
                if (c152_i_out) {
                  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U,
                               *chartInstance->c152_sfEvent);
                  *chartInstance->c152_statey = 4.0F;
                  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statey, 11U);
                } else {
                  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 24U,
                               *chartInstance->c152_sfEvent);
                }
              }
            }
          }

          _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c152_sfEvent);
          *chartInstance->c152_is_asse_y = c152_IN_logic;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c152_sfEvent);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, *chartInstance->c152_sfEvent);
        break;

       default:
        CV_STATE_EVAL(9, 0, 0);

        /* Unreachable state, for coverage only */
        *chartInstance->c152_is_asse_y = c152_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c152_sfEvent);
        break;
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, *chartInstance->c152_sfEvent);
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 30U, *chartInstance->c152_sfEvent);
}

static void initSimStructsc152_modello_2017b_levaRetro_acc
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c152_asse_x(SFc152_modello_2017b_levaRetro_accInstanceStruct
  *chartInstance)
{
  boolean_T c152_out;
  boolean_T c152_b_out;
  boolean_T c152_c_out;
  boolean_T c152_d_out;
  boolean_T c152_temp;
  boolean_T c152_b_temp;
  boolean_T c152_c_temp;
  boolean_T c152_d_temp;
  boolean_T c152_e_temp;
  boolean_T c152_f_temp;
  boolean_T c152_e_out;
  boolean_T c152_g_temp;
  boolean_T c152_h_temp;
  boolean_T c152_i_temp;
  boolean_T c152_j_temp;
  boolean_T c152_k_temp;
  boolean_T c152_l_temp;
  boolean_T c152_m_temp;
  boolean_T c152_f_out;
  boolean_T c152_g_out;
  boolean_T c152_n_temp;
  boolean_T c152_o_temp;
  boolean_T c152_p_temp;
  boolean_T c152_h_out;
  boolean_T c152_i_out;
  boolean_T c152_j_out;
  boolean_T c152_q_temp;
  boolean_T c152_r_temp;
  boolean_T c152_s_temp;
  boolean_T c152_k_out;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, *chartInstance->c152_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 26U,
               *chartInstance->c152_sfEvent);
  c152_out = (CV_TRANSITION_EVAL(26U, (int32_T)(_SFD_CCP_CALL(5U, 26U, 0,
    (boolean_T)CV_RELATIONAL_EVAL(5U, 26U, 0, (real_T)*chartInstance->c152_init,
    0.0, -3, 0U, *chartInstance->c152_init == 0.0F) != 0U,
    *chartInstance->c152_sfEvent) != 0U)) != 0);
  if (c152_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 26U, *chartInstance->c152_sfEvent);
    c152_exit_internal_asse_x(chartInstance);
    *chartInstance->c152_is_asse_x = c152_IN_IDLE;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c152_sfEvent);
    *chartInstance->c152_statex = 8.0F;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
  } else {
    switch (*chartInstance->c152_is_asse_x) {
     case c152_IN_IDLE:
      CV_STATE_EVAL(0, 0, c152_IN_IDLE);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 25U,
                   *chartInstance->c152_sfEvent);
      c152_b_out = (CV_TRANSITION_EVAL(25U, (int32_T)(_SFD_CCP_CALL(5U, 25U, 0,
        (boolean_T)CV_RELATIONAL_EVAL(5U, 25U, 0, (real_T)
        *chartInstance->c152_init, 1.0, -3, 0U, *chartInstance->c152_init ==
        1.0F) != 0U, *chartInstance->c152_sfEvent) != 0U)) != 0);
      if (c152_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 25U, *chartInstance->c152_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c152_sfEvent);
        *chartInstance->c152_is_asse_x = c152_IN_forza_crossgate;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c152_sfEvent);
        *chartInstance->c152_statex = 7.0F;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                     *chartInstance->c152_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c152_sfEvent);
      break;

     case c152_IN_curva_andata:
      CV_STATE_EVAL(0, 0, c152_IN_curva_andata);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   *chartInstance->c152_sfEvent);
      c152_c_out = (CV_TRANSITION_EVAL(6U, (int32_T)(_SFD_CCP_CALL(5U, 6U, 0,
        (boolean_T)CV_RELATIONAL_EVAL(5U, 6U, 0, (real_T)
        *chartInstance->c152_selected_gear, 8.0, -3, 0U,
        *chartInstance->c152_selected_gear == 8.0F) != 0U,
        *chartInstance->c152_sfEvent) != 0U)) != 0);
      if (c152_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c152_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c152_sfEvent);
        *chartInstance->c152_is_asse_x = c152_IN_forza_crossgate;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c152_sfEvent);
        *chartInstance->c152_statex = 7.0F;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                     *chartInstance->c152_sfEvent);
        c152_e_temp = (_SFD_CCP_CALL(5U, 10U, 0, (boolean_T)CV_RELATIONAL_EVAL
          (5U, 10U, 0, *chartInstance->c152_up_gear, 1.0, -1, 0U,
           *chartInstance->c152_up_gear == 1.0) != 0U,
          *chartInstance->c152_sfEvent) != 0U);
        if (c152_e_temp) {
          c152_e_temp = (_SFD_CCP_CALL(5U, 10U, 1, (boolean_T)CV_RELATIONAL_EVAL
            (5U, 10U, 1, muDoubleScalarAbs((real_T)*chartInstance->c152_posx -
            chartInstance->c152_selection_x_pos),
             *chartInstance->c152_punto_marcia_innestata, -1, 5U,
             muDoubleScalarAbs((real_T)*chartInstance->c152_posx -
                               chartInstance->c152_selection_x_pos) >=
             *chartInstance->c152_punto_marcia_innestata) != 0U,
            *chartInstance->c152_sfEvent) != 0U);
        }

        c152_k_temp = c152_e_temp;
        if (!c152_e_temp) {
          c152_n_temp = (_SFD_CCP_CALL(5U, 10U, 2, (boolean_T)CV_RELATIONAL_EVAL
            (5U, 10U, 2, *chartInstance->c152_up_gear, 0.0, -1, 0U,
             *chartInstance->c152_up_gear == 0.0) != 0U,
            *chartInstance->c152_sfEvent) != 0U);
          if (c152_n_temp) {
            c152_n_temp = (_SFD_CCP_CALL(5U, 10U, 3, (boolean_T)
              CV_RELATIONAL_EVAL(5U, 10U, 3, muDoubleScalarAbs((real_T)
              *chartInstance->c152_posx - chartInstance->c152_selection_x_neg), *
                                 chartInstance->c152_punto_marcia_innestata, -1,
                                 5U, muDoubleScalarAbs((real_T)
              *chartInstance->c152_posx - chartInstance->c152_selection_x_neg) >=
                                 *chartInstance->c152_punto_marcia_innestata) !=
              0U, *chartInstance->c152_sfEvent) != 0U);
          }

          c152_k_temp = c152_n_temp;
        }

        c152_h_out = (CV_TRANSITION_EVAL(10U, (int32_T)c152_k_temp) != 0);
        if (c152_h_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c152_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c152_sfEvent);
          *chartInstance->c152_is_asse_x = c152_IN_marcia_innestata;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c152_sfEvent);
          *chartInstance->c152_statex = 7.0F;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                       *chartInstance->c152_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c152_sfEvent);
      break;

     case c152_IN_curva_ritorno:
      CV_STATE_EVAL(0, 0, c152_IN_curva_ritorno);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12U,
                   *chartInstance->c152_sfEvent);
      c152_d_out = (CV_TRANSITION_EVAL(12U, (int32_T)(_SFD_CCP_CALL(5U, 12U, 0,
        (boolean_T)CV_RELATIONAL_EVAL(5U, 12U, 0, (real_T)
        *chartInstance->c152_selected_gear, 8.0, -3, 0U,
        *chartInstance->c152_selected_gear == 8.0F) != 0U,
        *chartInstance->c152_sfEvent) != 0U)) != 0);
      if (c152_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, *chartInstance->c152_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c152_sfEvent);
        *chartInstance->c152_is_asse_x = c152_IN_forza_crossgate;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c152_sfEvent);
        *chartInstance->c152_statex = 7.0F;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                     *chartInstance->c152_sfEvent);
        c152_f_temp = (_SFD_CCP_CALL(5U, 13U, 0, (boolean_T)CV_RELATIONAL_EVAL
          (5U, 13U, 0, *chartInstance->c152_up_gear, 1.0, -1, 0U,
           *chartInstance->c152_up_gear == 1.0) != 0U,
          *chartInstance->c152_sfEvent) != 0U);
        if (c152_f_temp) {
          c152_f_temp = (_SFD_CCP_CALL(5U, 13U, 1, (boolean_T)CV_RELATIONAL_EVAL
            (5U, 13U, 1, muDoubleScalarAbs((real_T)*chartInstance->c152_posx -
            chartInstance->c152_selection_x_pos),
             *chartInstance->c152_punto_marcia_innestata, -1, 5U,
             muDoubleScalarAbs((real_T)*chartInstance->c152_posx -
                               chartInstance->c152_selection_x_pos) >=
             *chartInstance->c152_punto_marcia_innestata) != 0U,
            *chartInstance->c152_sfEvent) != 0U);
        }

        c152_l_temp = c152_f_temp;
        if (!c152_f_temp) {
          c152_o_temp = (_SFD_CCP_CALL(5U, 13U, 2, (boolean_T)CV_RELATIONAL_EVAL
            (5U, 13U, 2, *chartInstance->c152_up_gear, 0.0, -1, 0U,
             *chartInstance->c152_up_gear == 0.0) != 0U,
            *chartInstance->c152_sfEvent) != 0U);
          if (c152_o_temp) {
            c152_o_temp = (_SFD_CCP_CALL(5U, 13U, 3, (boolean_T)
              CV_RELATIONAL_EVAL(5U, 13U, 3, muDoubleScalarAbs((real_T)
              *chartInstance->c152_posx - chartInstance->c152_selection_x_neg), *
                                 chartInstance->c152_punto_marcia_innestata, -1,
                                 5U, muDoubleScalarAbs((real_T)
              *chartInstance->c152_posx - chartInstance->c152_selection_x_neg) >=
                                 *chartInstance->c152_punto_marcia_innestata) !=
              0U, *chartInstance->c152_sfEvent) != 0U);
          }

          c152_l_temp = c152_o_temp;
        }

        c152_i_out = (CV_TRANSITION_EVAL(13U, (int32_T)c152_l_temp) != 0);
        if (c152_i_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, *chartInstance->c152_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c152_sfEvent);
          *chartInstance->c152_is_asse_x = c152_IN_marcia_innestata;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c152_sfEvent);
          *chartInstance->c152_statex = 7.0F;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                       *chartInstance->c152_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c152_sfEvent);
      break;

     case c152_IN_forza_crossgate:
      CV_STATE_EVAL(0, 0, c152_IN_forza_crossgate);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   *chartInstance->c152_sfEvent);
      c152_temp = (_SFD_CCP_CALL(5U, 3U, 0, (boolean_T)CV_RELATIONAL_EVAL(5U, 3U,
        0, (real_T)*chartInstance->c152_selected_gear, 8.0, -3, 0U,
        *chartInstance->c152_selected_gear == 8.0F) != 0U,
        *chartInstance->c152_sfEvent) != 0U);
      if (c152_temp) {
        c152_d_temp = (_SFD_CCP_CALL(5U, 3U, 1, (boolean_T)CV_RELATIONAL_EVAL(5U,
          3U, 1, (real_T)*chartInstance->c152_posx,
          chartInstance->c152_selection_x_pos, -1, 5U, (real_T)
          *chartInstance->c152_posx >= chartInstance->c152_selection_x_pos) !=
          0U, *chartInstance->c152_sfEvent) != 0U);
        if (!c152_d_temp) {
          c152_d_temp = (_SFD_CCP_CALL(5U, 3U, 2, (boolean_T)CV_RELATIONAL_EVAL
            (5U, 3U, 2, (real_T)*chartInstance->c152_posx,
             chartInstance->c152_selection_x_neg, -1, 3U, (real_T)
             *chartInstance->c152_posx <= chartInstance->c152_selection_x_neg)
            != 0U, *chartInstance->c152_sfEvent) != 0U);
        }

        c152_temp = c152_d_temp;
      }

      c152_e_out = (CV_TRANSITION_EVAL(3U, (int32_T)c152_temp) != 0);
      if (c152_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c152_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c152_sfEvent);
        *chartInstance->c152_is_asse_x = c152_IN_muro_selezione_x;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c152_sfEvent);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                     *chartInstance->c152_sfEvent);
        c152_m_temp = (_SFD_CCP_CALL(5U, 5U, 0, (boolean_T)CV_RELATIONAL_EVAL(5U,
          5U, 0, (real_T)*chartInstance->c152_selected_gear, 8.0, -3, 1U,
          *chartInstance->c152_selected_gear != 8.0F) != 0U,
          *chartInstance->c152_sfEvent) != 0U);
        if (c152_m_temp) {
          c152_p_temp = (_SFD_CCP_CALL(5U, 5U, 1, (boolean_T)CV_RELATIONAL_EVAL
            (5U, 5U, 1, (real_T)*chartInstance->c152_posx,
             chartInstance->c152_selection_x_pos, -1, 5U, (real_T)
             *chartInstance->c152_posx >= chartInstance->c152_selection_x_pos)
            != 0U, *chartInstance->c152_sfEvent) != 0U);
          if (!c152_p_temp) {
            c152_p_temp = (_SFD_CCP_CALL(5U, 5U, 2, (boolean_T)
              CV_RELATIONAL_EVAL(5U, 5U, 2, (real_T)*chartInstance->c152_posx,
                                 chartInstance->c152_selection_x_neg, -1, 3U,
                                 (real_T)*chartInstance->c152_posx <=
                                 chartInstance->c152_selection_x_neg) != 0U,
              *chartInstance->c152_sfEvent) != 0U);
          }

          c152_m_temp = c152_p_temp;
        }

        c152_j_out = (CV_TRANSITION_EVAL(5U, (int32_T)c152_m_temp) != 0);
        if (c152_j_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c152_sfEvent);
          *chartInstance->c152_corsa_marcia_x = muDoubleScalarAbs
            (c152_gearshift_grid_r(chartInstance, (real_T)
              *chartInstance->c152_selected_gear, 1.0));
          _SFD_DATA_RANGE_CHECK(*chartInstance->c152_corsa_marcia_x, 0U);
          *chartInstance->c152_punto_marcia_innestata = muDoubleScalarAbs
            (c152_gearshift_grid_r(chartInstance, (real_T)
              *chartInstance->c152_selected_gear, 6.0));
          _SFD_DATA_RANGE_CHECK(*chartInstance->c152_punto_marcia_innestata, 3U);
          *chartInstance->c152_up_gear = c152_gearshift_grid_r(chartInstance,
            (real_T)*chartInstance->c152_selected_gear, 5.0);
          _SFD_DATA_RANGE_CHECK(*chartInstance->c152_up_gear, 4U);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c152_sfEvent);
          *chartInstance->c152_is_asse_x = c152_IN_curva_andata;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c152_sfEvent);
          *chartInstance->c152_statex = 1.0F;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                       *chartInstance->c152_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c152_sfEvent);
      break;

     case c152_IN_marcia_innestata:
      CV_STATE_EVAL(0, 0, c152_IN_marcia_innestata);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                   *chartInstance->c152_sfEvent);
      c152_b_temp = (_SFD_CCP_CALL(5U, 11U, 0, (boolean_T)CV_RELATIONAL_EVAL(5U,
        11U, 0, *chartInstance->c152_up_gear, 1.0, -1, 0U,
        *chartInstance->c152_up_gear == 1.0) != 0U, *chartInstance->c152_sfEvent)
                     != 0U);
      if (c152_b_temp) {
        c152_b_temp = (_SFD_CCP_CALL(5U, 11U, 1, (boolean_T)CV_RELATIONAL_EVAL
          (5U, 11U, 1, muDoubleScalarAbs((real_T)*chartInstance->c152_posx -
          chartInstance->c152_selection_x_pos),
           *chartInstance->c152_punto_marcia_innestata, -1, 2U,
           muDoubleScalarAbs((real_T)*chartInstance->c152_posx -
                             chartInstance->c152_selection_x_pos) <
           *chartInstance->c152_punto_marcia_innestata) != 0U,
          *chartInstance->c152_sfEvent) != 0U);
      }

      c152_g_temp = c152_b_temp;
      if (!c152_b_temp) {
        c152_i_temp = (_SFD_CCP_CALL(5U, 11U, 2, (boolean_T)CV_RELATIONAL_EVAL
          (5U, 11U, 2, *chartInstance->c152_up_gear, 0.0, -1, 0U,
           *chartInstance->c152_up_gear == 0.0) != 0U,
          *chartInstance->c152_sfEvent) != 0U);
        if (c152_i_temp) {
          c152_i_temp = (_SFD_CCP_CALL(5U, 11U, 3, (boolean_T)CV_RELATIONAL_EVAL
            (5U, 11U, 3, muDoubleScalarAbs((real_T)*chartInstance->c152_posx -
            chartInstance->c152_selection_x_neg),
             *chartInstance->c152_punto_marcia_innestata, -1, 2U,
             muDoubleScalarAbs((real_T)*chartInstance->c152_posx -
                               chartInstance->c152_selection_x_neg) <
             *chartInstance->c152_punto_marcia_innestata) != 0U,
            *chartInstance->c152_sfEvent) != 0U);
        }

        c152_g_temp = c152_i_temp;
      }

      c152_f_out = (CV_TRANSITION_EVAL(11U, (int32_T)c152_g_temp) != 0);
      if (c152_f_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, *chartInstance->c152_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c152_sfEvent);
        *chartInstance->c152_is_asse_x = c152_IN_curva_ritorno;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c152_sfEvent);
        *chartInstance->c152_statex = 2.0F;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                     *chartInstance->c152_sfEvent);
        c152_q_temp = (_SFD_CCP_CALL(5U, 14U, 0, (boolean_T)CV_RELATIONAL_EVAL
          (5U, 14U, 0, *chartInstance->c152_up_gear, 1.0, -1, 0U,
           *chartInstance->c152_up_gear == 1.0) != 0U,
          *chartInstance->c152_sfEvent) != 0U);
        if (c152_q_temp) {
          c152_q_temp = (_SFD_CCP_CALL(5U, 14U, 1, (boolean_T)CV_RELATIONAL_EVAL
            (5U, 14U, 1, muDoubleScalarAbs((real_T)*chartInstance->c152_posx -
            chartInstance->c152_selection_x_pos),
             *chartInstance->c152_punto_marcia_innestata, -1, 5U,
             muDoubleScalarAbs((real_T)*chartInstance->c152_posx -
                               chartInstance->c152_selection_x_pos) >=
             *chartInstance->c152_punto_marcia_innestata) != 0U,
            *chartInstance->c152_sfEvent) != 0U);
        }

        c152_r_temp = c152_q_temp;
        if (!c152_q_temp) {
          c152_s_temp = (_SFD_CCP_CALL(5U, 14U, 2, (boolean_T)CV_RELATIONAL_EVAL
            (5U, 14U, 2, *chartInstance->c152_up_gear, 0.0, -1, 0U,
             *chartInstance->c152_up_gear == 0.0) != 0U,
            *chartInstance->c152_sfEvent) != 0U);
          if (c152_s_temp) {
            c152_s_temp = (_SFD_CCP_CALL(5U, 14U, 3, (boolean_T)
              CV_RELATIONAL_EVAL(5U, 14U, 3, muDoubleScalarAbs((real_T)
              *chartInstance->c152_posx - chartInstance->c152_selection_x_neg), *
                                 chartInstance->c152_punto_marcia_innestata, -1,
                                 5U, muDoubleScalarAbs((real_T)
              *chartInstance->c152_posx - chartInstance->c152_selection_x_neg) >=
                                 *chartInstance->c152_punto_marcia_innestata) !=
              0U, *chartInstance->c152_sfEvent) != 0U);
          }

          c152_r_temp = c152_s_temp;
        }

        c152_k_out = (CV_TRANSITION_EVAL(14U, (int32_T)c152_r_temp) != 0);
        if (c152_k_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, *chartInstance->c152_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c152_sfEvent);
          *chartInstance->c152_is_asse_x = c152_IN_rigidezza_finale;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c152_sfEvent);
          *chartInstance->c152_statex = 3.0F;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                       *chartInstance->c152_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c152_sfEvent);
      break;

     case c152_IN_muro_selezione_x:
      CV_STATE_EVAL(0, 0, c152_IN_muro_selezione_x);
      c152_muro_selezione_x(chartInstance);
      break;

     case c152_IN_muro_x:
      CV_STATE_EVAL(0, 0, c152_IN_muro_x);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                   *chartInstance->c152_sfEvent);
      c152_c_temp = (_SFD_CCP_CALL(5U, 8U, 0, (boolean_T)CV_RELATIONAL_EVAL(5U,
        8U, 0, *chartInstance->c152_up_gear, 1.0, -1, 0U,
        *chartInstance->c152_up_gear == 1.0) != 0U, *chartInstance->c152_sfEvent)
                     != 0U);
      if (c152_c_temp) {
        c152_c_temp = (_SFD_CCP_CALL(5U, 8U, 1, (boolean_T)CV_RELATIONAL_EVAL(5U,
          8U, 1, muDoubleScalarAbs((real_T)*chartInstance->c152_posx -
          chartInstance->c152_selection_x_pos),
          *chartInstance->c152_corsa_marcia_x, -1, 2U, muDoubleScalarAbs((real_T)*
          chartInstance->c152_posx - chartInstance->c152_selection_x_pos) <
          *chartInstance->c152_corsa_marcia_x) != 0U,
          *chartInstance->c152_sfEvent) != 0U);
      }

      c152_h_temp = c152_c_temp;
      if (!c152_c_temp) {
        c152_j_temp = (_SFD_CCP_CALL(5U, 8U, 2, (boolean_T)CV_RELATIONAL_EVAL(5U,
          8U, 2, *chartInstance->c152_up_gear, 0.0, -1, 0U,
          *chartInstance->c152_up_gear == 0.0) != 0U,
          *chartInstance->c152_sfEvent) != 0U);
        if (c152_j_temp) {
          c152_j_temp = (_SFD_CCP_CALL(5U, 8U, 3, (boolean_T)CV_RELATIONAL_EVAL
            (5U, 8U, 3, muDoubleScalarAbs((real_T)*chartInstance->c152_posx -
            chartInstance->c152_selection_x_neg),
             *chartInstance->c152_corsa_marcia_x, -1, 2U, muDoubleScalarAbs
             ((real_T)*chartInstance->c152_posx -
              chartInstance->c152_selection_x_neg) <
             *chartInstance->c152_corsa_marcia_x) != 0U,
            *chartInstance->c152_sfEvent) != 0U);
        }

        c152_h_temp = c152_j_temp;
      }

      c152_g_out = (CV_TRANSITION_EVAL(8U, (int32_T)c152_h_temp) != 0);
      if (c152_g_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c152_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c152_sfEvent);
        *chartInstance->c152_is_asse_x = c152_IN_rigidezza_finale;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c152_sfEvent);
        *chartInstance->c152_statex = 3.0F;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                     *chartInstance->c152_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c152_sfEvent);
      break;

     case c152_IN_rigidezza_finale:
      CV_STATE_EVAL(0, 0, c152_IN_rigidezza_finale);
      c152_rigidezza_finale(chartInstance);
      break;

     default:
      CV_STATE_EVAL(0, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c152_is_asse_x = c152_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c152_sfEvent);
      break;
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c152_sfEvent);
}

static void c152_exit_internal_asse_x
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  switch (*chartInstance->c152_is_asse_x) {
   case c152_IN_IDLE:
    CV_STATE_EVAL(0, 1, c152_IN_IDLE);
    *chartInstance->c152_is_asse_x = c152_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c152_sfEvent);
    break;

   case c152_IN_curva_andata:
    CV_STATE_EVAL(0, 1, c152_IN_curva_andata);
    *chartInstance->c152_is_asse_x = c152_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c152_sfEvent);
    break;

   case c152_IN_curva_ritorno:
    CV_STATE_EVAL(0, 1, c152_IN_curva_ritorno);
    *chartInstance->c152_is_asse_x = c152_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c152_sfEvent);
    break;

   case c152_IN_forza_crossgate:
    CV_STATE_EVAL(0, 1, c152_IN_forza_crossgate);
    *chartInstance->c152_is_asse_x = c152_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c152_sfEvent);
    break;

   case c152_IN_marcia_innestata:
    CV_STATE_EVAL(0, 1, c152_IN_marcia_innestata);
    *chartInstance->c152_is_asse_x = c152_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c152_sfEvent);
    break;

   case c152_IN_muro_selezione_x:
    CV_STATE_EVAL(0, 1, c152_IN_muro_selezione_x);
    *chartInstance->c152_is_asse_x = c152_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c152_sfEvent);
    break;

   case c152_IN_muro_x:
    CV_STATE_EVAL(0, 1, c152_IN_muro_x);
    *chartInstance->c152_is_asse_x = c152_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c152_sfEvent);
    break;

   case c152_IN_rigidezza_finale:
    CV_STATE_EVAL(0, 1, c152_IN_rigidezza_finale);
    *chartInstance->c152_is_asse_x = c152_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c152_sfEvent);
    break;

   default:
    CV_STATE_EVAL(0, 1, 0);
    *chartInstance->c152_is_asse_x = c152_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c152_sfEvent);
    break;
  }
}

static void c152_muro_selezione_x
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  boolean_T c152_temp;
  boolean_T c152_out;
  boolean_T c152_b_temp;
  boolean_T c152_c_temp;
  boolean_T c152_b_out;
  boolean_T c152_d_temp;
  boolean_T c152_c_out;
  boolean_T c152_e_temp;
  boolean_T c152_d_out;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
               *chartInstance->c152_sfEvent);
  c152_temp = (_SFD_CCP_CALL(5U, 4U, 0, (boolean_T)CV_RELATIONAL_EVAL(5U, 4U, 0,
    (real_T)*chartInstance->c152_posx, chartInstance->c152_selection_x_pos, -1,
    2U, (real_T)*chartInstance->c152_posx < chartInstance->c152_selection_x_pos)
    != 0U, *chartInstance->c152_sfEvent) != 0U);
  if (c152_temp) {
    c152_temp = (_SFD_CCP_CALL(5U, 4U, 1, (boolean_T)CV_RELATIONAL_EVAL(5U, 4U,
      1, (real_T)*chartInstance->c152_posx, chartInstance->c152_selection_x_neg,
      -1, 4U, (real_T)*chartInstance->c152_posx >
      chartInstance->c152_selection_x_neg) != 0U, *chartInstance->c152_sfEvent)
                 != 0U);
  }

  c152_out = (CV_TRANSITION_EVAL(4U, (int32_T)c152_temp) != 0);
  if (c152_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c152_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c152_sfEvent);
    *chartInstance->c152_is_asse_x = c152_IN_forza_crossgate;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c152_sfEvent);
    *chartInstance->c152_statex = 7.0F;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                 *chartInstance->c152_sfEvent);
    c152_b_temp = (_SFD_CCP_CALL(5U, 9U, 0, (boolean_T)CV_RELATIONAL_EVAL(5U, 9U,
      0, (real_T)*chartInstance->c152_selected_gear, 8.0, -3, 1U,
      *chartInstance->c152_selected_gear != 8.0F) != 0U,
      *chartInstance->c152_sfEvent) != 0U);
    if (c152_b_temp) {
      c152_c_temp = (_SFD_CCP_CALL(5U, 9U, 1, (boolean_T)CV_RELATIONAL_EVAL(5U,
        9U, 1, (real_T)*chartInstance->c152_posx,
        chartInstance->c152_selection_x_pos, -1, 5U, (real_T)
        *chartInstance->c152_posx >= chartInstance->c152_selection_x_pos) != 0U,
        *chartInstance->c152_sfEvent) != 0U);
      if (!c152_c_temp) {
        c152_c_temp = (_SFD_CCP_CALL(5U, 9U, 2, (boolean_T)CV_RELATIONAL_EVAL(5U,
          9U, 2, (real_T)*chartInstance->c152_posx,
          chartInstance->c152_selection_x_neg, -1, 3U, (real_T)
          *chartInstance->c152_posx <= chartInstance->c152_selection_x_neg) !=
          0U, *chartInstance->c152_sfEvent) != 0U);
      }

      c152_b_temp = c152_c_temp;
    }

    c152_b_out = (CV_TRANSITION_EVAL(9U, (int32_T)c152_b_temp) != 0);
    if (c152_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c152_sfEvent);
      *chartInstance->c152_corsa_marcia_x = muDoubleScalarAbs
        (c152_gearshift_grid_r(chartInstance, (real_T)
          *chartInstance->c152_selected_gear, 1.0));
      _SFD_DATA_RANGE_CHECK(*chartInstance->c152_corsa_marcia_x, 0U);
      *chartInstance->c152_punto_marcia_innestata = muDoubleScalarAbs
        (c152_gearshift_grid_r(chartInstance, (real_T)
          *chartInstance->c152_selected_gear, 6.0));
      _SFD_DATA_RANGE_CHECK(*chartInstance->c152_punto_marcia_innestata, 3U);
      *chartInstance->c152_up_gear = c152_gearshift_grid_r(chartInstance,
        (real_T)*chartInstance->c152_selected_gear, 5.0);
      _SFD_DATA_RANGE_CHECK(*chartInstance->c152_up_gear, 4U);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c152_sfEvent);
      *chartInstance->c152_is_asse_x = c152_IN_curva_andata;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c152_sfEvent);
      *chartInstance->c152_statex = 1.0F;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   *chartInstance->c152_sfEvent);
      c152_d_temp = (_SFD_CCP_CALL(5U, 1U, 0, (boolean_T)CV_RELATIONAL_EVAL(5U,
        1U, 0, (real_T)*chartInstance->c152_selected_gear, 8.0, -3, 0U,
        *chartInstance->c152_selected_gear == 8.0F) != 0U,
        *chartInstance->c152_sfEvent) != 0U);
      if (c152_d_temp) {
        c152_d_temp = (_SFD_CCP_CALL(5U, 1U, 1, (boolean_T)CV_RELATIONAL_EVAL(5U,
          1U, 1, (real_T)*chartInstance->c152_posx,
          chartInstance->c152_selection_x_pos, -1, 5U, (real_T)
          *chartInstance->c152_posx >= chartInstance->c152_selection_x_pos) !=
          0U, *chartInstance->c152_sfEvent) != 0U);
      }

      c152_c_out = (CV_TRANSITION_EVAL(1U, (int32_T)c152_d_temp) != 0);
      guard1 = false;
      if (c152_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c152_sfEvent);
        *chartInstance->c152_statex = 5.0F;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
        guard1 = true;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                     *chartInstance->c152_sfEvent);
        c152_e_temp = (_SFD_CCP_CALL(5U, 2U, 0, (boolean_T)CV_RELATIONAL_EVAL(5U,
          2U, 0, (real_T)*chartInstance->c152_selected_gear, 8.0, -3, 0U,
          *chartInstance->c152_selected_gear == 8.0F) != 0U,
          *chartInstance->c152_sfEvent) != 0U);
        if (c152_e_temp) {
          c152_e_temp = (_SFD_CCP_CALL(5U, 2U, 1, (boolean_T)CV_RELATIONAL_EVAL
            (5U, 2U, 1, (real_T)*chartInstance->c152_posx,
             chartInstance->c152_selection_x_neg, -1, 3U, (real_T)
             *chartInstance->c152_posx <= chartInstance->c152_selection_x_neg)
            != 0U, *chartInstance->c152_sfEvent) != 0U);
        }

        c152_d_out = (CV_TRANSITION_EVAL(2U, (int32_T)c152_e_temp) != 0);
        if (c152_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c152_sfEvent);
          *chartInstance->c152_statex = 6.0F;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
          guard1 = true;
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                       *chartInstance->c152_sfEvent);
        }
      }

      if (guard1) {
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c152_sfEvent);
        *chartInstance->c152_is_asse_x = c152_IN_muro_selezione_x;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c152_sfEvent);
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c152_sfEvent);
}

static void c152_rigidezza_finale
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  boolean_T c152_temp;
  boolean_T c152_b_temp;
  boolean_T c152_c_temp;
  boolean_T c152_out;
  boolean_T c152_d_temp;
  boolean_T c152_e_temp;
  boolean_T c152_f_temp;
  boolean_T c152_b_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
               *chartInstance->c152_sfEvent);
  c152_temp = (_SFD_CCP_CALL(5U, 7U, 0, (boolean_T)CV_RELATIONAL_EVAL(5U, 7U, 0,
    *chartInstance->c152_up_gear, 1.0, -1, 0U, *chartInstance->c152_up_gear ==
    1.0) != 0U, *chartInstance->c152_sfEvent) != 0U);
  if (c152_temp) {
    c152_temp = (_SFD_CCP_CALL(5U, 7U, 1, (boolean_T)CV_RELATIONAL_EVAL(5U, 7U,
      1, muDoubleScalarAbs((real_T)*chartInstance->c152_posx -
      chartInstance->c152_selection_x_pos), *chartInstance->c152_corsa_marcia_x,
      -1, 5U, muDoubleScalarAbs((real_T)*chartInstance->c152_posx -
      chartInstance->c152_selection_x_pos) >=
      *chartInstance->c152_corsa_marcia_x) != 0U, *chartInstance->c152_sfEvent)
                 != 0U);
  }

  c152_b_temp = c152_temp;
  if (!c152_temp) {
    c152_c_temp = (_SFD_CCP_CALL(5U, 7U, 2, (boolean_T)CV_RELATIONAL_EVAL(5U, 7U,
      2, *chartInstance->c152_up_gear, 0.0, -1, 0U, *chartInstance->c152_up_gear
      == 0.0) != 0U, *chartInstance->c152_sfEvent) != 0U);
    if (c152_c_temp) {
      c152_c_temp = (_SFD_CCP_CALL(5U, 7U, 3, (boolean_T)CV_RELATIONAL_EVAL(5U,
        7U, 3, muDoubleScalarAbs((real_T)*chartInstance->c152_posx -
        chartInstance->c152_selection_x_neg),
        *chartInstance->c152_corsa_marcia_x, -1, 5U, muDoubleScalarAbs((real_T)
        *chartInstance->c152_posx - chartInstance->c152_selection_x_neg) >=
        *chartInstance->c152_corsa_marcia_x) != 0U, *chartInstance->c152_sfEvent)
                     != 0U);
    }

    c152_b_temp = c152_c_temp;
  }

  c152_out = (CV_TRANSITION_EVAL(7U, (int32_T)c152_b_temp) != 0);
  if (c152_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c152_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c152_sfEvent);
    *chartInstance->c152_is_asse_x = c152_IN_muro_x;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c152_sfEvent);
    *chartInstance->c152_statex = 4.0F;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 15U,
                 *chartInstance->c152_sfEvent);
    c152_d_temp = (_SFD_CCP_CALL(5U, 15U, 0, (boolean_T)CV_RELATIONAL_EVAL(5U,
      15U, 0, *chartInstance->c152_up_gear, 1.0, -1, 0U,
      *chartInstance->c152_up_gear == 1.0) != 0U, *chartInstance->c152_sfEvent)
                   != 0U);
    if (c152_d_temp) {
      c152_d_temp = (_SFD_CCP_CALL(5U, 15U, 1, (boolean_T)CV_RELATIONAL_EVAL(5U,
        15U, 1, muDoubleScalarAbs((real_T)*chartInstance->c152_posx -
        chartInstance->c152_selection_x_pos),
        *chartInstance->c152_punto_marcia_innestata, -1, 2U, muDoubleScalarAbs
        ((real_T)*chartInstance->c152_posx - chartInstance->c152_selection_x_pos)
        < *chartInstance->c152_punto_marcia_innestata) != 0U,
        *chartInstance->c152_sfEvent) != 0U);
    }

    c152_e_temp = c152_d_temp;
    if (!c152_d_temp) {
      c152_f_temp = (_SFD_CCP_CALL(5U, 15U, 2, (boolean_T)CV_RELATIONAL_EVAL(5U,
        15U, 2, *chartInstance->c152_up_gear, 0.0, -1, 0U,
        *chartInstance->c152_up_gear == 0.0) != 0U, *chartInstance->c152_sfEvent)
                     != 0U);
      if (c152_f_temp) {
        c152_f_temp = (_SFD_CCP_CALL(5U, 15U, 3, (boolean_T)CV_RELATIONAL_EVAL
          (5U, 15U, 3, muDoubleScalarAbs((real_T)*chartInstance->c152_posx -
          chartInstance->c152_selection_x_neg),
           *chartInstance->c152_punto_marcia_innestata, -1, 2U,
           muDoubleScalarAbs((real_T)*chartInstance->c152_posx -
                             chartInstance->c152_selection_x_neg) <
           *chartInstance->c152_punto_marcia_innestata) != 0U,
          *chartInstance->c152_sfEvent) != 0U);
      }

      c152_e_temp = c152_f_temp;
    }

    c152_b_out = (CV_TRANSITION_EVAL(15U, (int32_T)c152_e_temp) != 0);
    if (c152_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, *chartInstance->c152_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c152_sfEvent);
      *chartInstance->c152_is_asse_x = c152_IN_marcia_innestata;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c152_sfEvent);
      *chartInstance->c152_statex = 7.0F;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c152_statex, 10U);
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8U,
                   *chartInstance->c152_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, *chartInstance->c152_sfEvent);
}

static void init_script_number_translation(uint32_T c152_machineNumber, uint32_T
  c152_chartNumber, uint32_T c152_instanceNumber)
{
  (void)(c152_machineNumber);
  (void)(c152_chartNumber);
  (void)(c152_instanceNumber);
}

static const mxArray *c152_sf_marshallOut(void *chartInstanceVoid, void
  *c152_inData)
{
  const mxArray *c152_mxArrayOutData;
  real_T c152_u;
  const mxArray *c152_y = NULL;
  SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc152_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c152_mxArrayOutData = NULL;
  c152_mxArrayOutData = NULL;
  c152_u = *(real_T *)c152_inData;
  c152_y = NULL;
  sf_mex_assign(&c152_y, sf_mex_create("y", &c152_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c152_mxArrayOutData, c152_y, false);
  return c152_mxArrayOutData;
}

static real_T c152_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_val, const char_T *c152_identifier)
{
  real_T c152_y;
  emlrtMsgIdentifier c152_thisId;
  c152_thisId.fIdentifier = (const char *)c152_identifier;
  c152_thisId.fParent = NULL;
  c152_thisId.bParentIsCell = false;
  c152_y = c152_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c152_val),
    &c152_thisId);
  sf_mex_destroy(&c152_val);
  return c152_y;
}

static real_T c152_b_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_u, const emlrtMsgIdentifier *c152_parentId)
{
  real_T c152_y;
  real_T c152_d6;
  (void)chartInstance;
  sf_mex_import(c152_parentId, sf_mex_dup(c152_u), &c152_d6, 1, 0, 0U, 0, 0U, 0);
  c152_y = c152_d6;
  sf_mex_destroy(&c152_u);
  return c152_y;
}

static void c152_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c152_mxArrayInData, const char_T *c152_varName, void *c152_outData)
{
  const mxArray *c152_val;
  emlrtMsgIdentifier c152_thisId;
  real_T c152_y;
  SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc152_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c152_val = sf_mex_dup(c152_mxArrayInData);
  c152_thisId.fIdentifier = (const char *)c152_varName;
  c152_thisId.fParent = NULL;
  c152_thisId.bParentIsCell = false;
  c152_y = c152_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c152_val),
    &c152_thisId);
  sf_mex_destroy(&c152_val);
  *(real_T *)c152_outData = c152_y;
  sf_mex_destroy(&c152_mxArrayInData);
}

const mxArray
  *sf_c152_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info(void)
{
  const mxArray *c152_nameCaptureInfo = NULL;
  c152_nameCaptureInfo = NULL;
  sf_mex_assign(&c152_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c152_nameCaptureInfo;
}

static real_T c152_gearshift_grid_r
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, real_T
   c152_sel_gear, real_T c152_field)
{
  real_T c152_val;
  uint32_T c152_debug_family_var_map[5];
  real_T c152_nargin = 2.0;
  real_T c152_nargout = 1.0;
  _SFD_DATA_RANGE_CHECK(c152_field, 14U);
  _SFD_DATA_RANGE_CHECK(c152_sel_gear, 13U);
  _SFD_SET_DATA_VALUE_PTR(15U, &c152_val);
  _SFD_SET_DATA_VALUE_PTR(14U, &c152_field);
  _SFD_SET_DATA_VALUE_PTR(13U, &c152_sel_gear);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 5U, 5U, c152_debug_family_names,
    c152_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c152_nargin, 0U, c152_sf_marshallOut,
    c152_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c152_nargout, 1U, c152_sf_marshallOut,
    c152_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c152_sel_gear, 2U, c152_sf_marshallOut,
    c152_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c152_field, 3U, c152_sf_marshallOut,
    c152_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c152_val, 4U, c152_sf_marshallOut,
    c152_sf_marshallIn);
  CV_EML_FCN(12, 0);
  _SFD_EML_CALL(12U, *chartInstance->c152_sfEvent, 2);
  c152_val = chartInstance->c152_gearshift_grid[sf_eml_array_bounds_check
    (sfGlobalDebugInstanceStruct, chartInstance->S, 148U, 57, 40, 16U, (int32_T)
     sf_integer_check(chartInstance->S, 148U, 57U, 40U, c152_sel_gear * 6.0 -
                      (6.0 - c152_field)), 1, 42) - 1];
  _SFD_DATA_RANGE_CHECK(c152_val, 15U);
  _SFD_EML_CALL(12U, *chartInstance->c152_sfEvent, -2);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_UNSET_DATA_VALUE_PTR(15U);
  _SFD_UNSET_DATA_VALUE_PTR(14U);
  _SFD_UNSET_DATA_VALUE_PTR(13U);
  return c152_val;
}

static const mxArray *c152_b_sf_marshallOut(void *chartInstanceVoid, void
  *c152_inData)
{
  const mxArray *c152_mxArrayOutData;
  int32_T c152_u;
  const mxArray *c152_y = NULL;
  SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc152_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c152_mxArrayOutData = NULL;
  c152_mxArrayOutData = NULL;
  c152_u = *(int32_T *)c152_inData;
  c152_y = NULL;
  sf_mex_assign(&c152_y, sf_mex_create("y", &c152_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c152_mxArrayOutData, c152_y, false);
  return c152_mxArrayOutData;
}

static int32_T c152_c_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_u, const emlrtMsgIdentifier *c152_parentId)
{
  int32_T c152_y;
  int32_T c152_i2;
  (void)chartInstance;
  sf_mex_import(c152_parentId, sf_mex_dup(c152_u), &c152_i2, 1, 6, 0U, 0, 0U, 0);
  c152_y = c152_i2;
  sf_mex_destroy(&c152_u);
  return c152_y;
}

static void c152_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c152_mxArrayInData, const char_T *c152_varName, void *c152_outData)
{
  const mxArray *c152_b_sfEvent;
  emlrtMsgIdentifier c152_thisId;
  int32_T c152_y;
  SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc152_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c152_b_sfEvent = sf_mex_dup(c152_mxArrayInData);
  c152_thisId.fIdentifier = (const char *)c152_varName;
  c152_thisId.fParent = NULL;
  c152_thisId.bParentIsCell = false;
  c152_y = c152_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c152_b_sfEvent),
    &c152_thisId);
  sf_mex_destroy(&c152_b_sfEvent);
  *(int32_T *)c152_outData = c152_y;
  sf_mex_destroy(&c152_mxArrayInData);
}

static const mxArray *c152_c_sf_marshallOut(void *chartInstanceVoid, void
  *c152_inData)
{
  const mxArray *c152_mxArrayOutData;
  uint8_T c152_u;
  const mxArray *c152_y = NULL;
  SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc152_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c152_mxArrayOutData = NULL;
  c152_mxArrayOutData = NULL;
  c152_u = *(uint8_T *)c152_inData;
  c152_y = NULL;
  sf_mex_assign(&c152_y, sf_mex_create("y", &c152_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c152_mxArrayOutData, c152_y, false);
  return c152_mxArrayOutData;
}

static uint8_T c152_d_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_b_is_asse_x, const char_T *c152_identifier)
{
  uint8_T c152_y;
  emlrtMsgIdentifier c152_thisId;
  c152_thisId.fIdentifier = (const char *)c152_identifier;
  c152_thisId.fParent = NULL;
  c152_thisId.bParentIsCell = false;
  c152_y = c152_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c152_b_is_asse_x),
    &c152_thisId);
  sf_mex_destroy(&c152_b_is_asse_x);
  return c152_y;
}

static uint8_T c152_e_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_u, const emlrtMsgIdentifier *c152_parentId)
{
  uint8_T c152_y;
  uint8_T c152_u0;
  (void)chartInstance;
  sf_mex_import(c152_parentId, sf_mex_dup(c152_u), &c152_u0, 1, 3, 0U, 0, 0U, 0);
  c152_y = c152_u0;
  sf_mex_destroy(&c152_u);
  return c152_y;
}

static void c152_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c152_mxArrayInData, const char_T *c152_varName, void *c152_outData)
{
  const mxArray *c152_b_is_asse_x;
  emlrtMsgIdentifier c152_thisId;
  uint8_T c152_y;
  SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc152_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c152_b_is_asse_x = sf_mex_dup(c152_mxArrayInData);
  c152_thisId.fIdentifier = (const char *)c152_varName;
  c152_thisId.fParent = NULL;
  c152_thisId.bParentIsCell = false;
  c152_y = c152_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c152_b_is_asse_x),
    &c152_thisId);
  sf_mex_destroy(&c152_b_is_asse_x);
  *(uint8_T *)c152_outData = c152_y;
  sf_mex_destroy(&c152_mxArrayInData);
}

static const mxArray *c152_d_sf_marshallOut(void *chartInstanceVoid, void
  *c152_inData)
{
  const mxArray *c152_mxArrayOutData;
  real32_T c152_u;
  const mxArray *c152_y = NULL;
  SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc152_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c152_mxArrayOutData = NULL;
  c152_mxArrayOutData = NULL;
  c152_u = *(real32_T *)c152_inData;
  c152_y = NULL;
  sf_mex_assign(&c152_y, sf_mex_create("y", &c152_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c152_mxArrayOutData, c152_y, false);
  return c152_mxArrayOutData;
}

static real32_T c152_f_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_b_statex, const char_T *c152_identifier)
{
  real32_T c152_y;
  emlrtMsgIdentifier c152_thisId;
  c152_thisId.fIdentifier = (const char *)c152_identifier;
  c152_thisId.fParent = NULL;
  c152_thisId.bParentIsCell = false;
  c152_y = c152_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c152_b_statex),
    &c152_thisId);
  sf_mex_destroy(&c152_b_statex);
  return c152_y;
}

static real32_T c152_g_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_u, const emlrtMsgIdentifier *c152_parentId)
{
  real32_T c152_y;
  real32_T c152_f0;
  (void)chartInstance;
  sf_mex_import(c152_parentId, sf_mex_dup(c152_u), &c152_f0, 1, 1, 0U, 0, 0U, 0);
  c152_y = c152_f0;
  sf_mex_destroy(&c152_u);
  return c152_y;
}

static void c152_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c152_mxArrayInData, const char_T *c152_varName, void *c152_outData)
{
  const mxArray *c152_b_statex;
  emlrtMsgIdentifier c152_thisId;
  real32_T c152_y;
  SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc152_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c152_b_statex = sf_mex_dup(c152_mxArrayInData);
  c152_thisId.fIdentifier = (const char *)c152_varName;
  c152_thisId.fParent = NULL;
  c152_thisId.bParentIsCell = false;
  c152_y = c152_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c152_b_statex),
    &c152_thisId);
  sf_mex_destroy(&c152_b_statex);
  *(real32_T *)c152_outData = c152_y;
  sf_mex_destroy(&c152_mxArrayInData);
}

static const mxArray *c152_e_sf_marshallOut(void *chartInstanceVoid, void
  *c152_inData)
{
  const mxArray *c152_mxArrayOutData;
  int32_T c152_i3;
  const mxArray *c152_y = NULL;
  real_T c152_u[42];
  SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc152_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c152_mxArrayOutData = NULL;
  c152_mxArrayOutData = NULL;
  for (c152_i3 = 0; c152_i3 < 42; c152_i3++) {
    c152_u[c152_i3] = (*(real_T (*)[42])c152_inData)[c152_i3];
  }

  c152_y = NULL;
  sf_mex_assign(&c152_y, sf_mex_create("y", c152_u, 0, 0U, 1U, 0U, 1, 42), false);
  sf_mex_assign(&c152_mxArrayOutData, c152_y, false);
  return c152_mxArrayOutData;
}

static void c152_h_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_u, const emlrtMsgIdentifier *c152_parentId, real_T c152_y[42])
{
  real_T c152_dv2[42];
  int32_T c152_i4;
  (void)chartInstance;
  sf_mex_import(c152_parentId, sf_mex_dup(c152_u), c152_dv2, 1, 0, 0U, 1, 0U, 1,
                42);
  for (c152_i4 = 0; c152_i4 < 42; c152_i4++) {
    c152_y[c152_i4] = c152_dv2[c152_i4];
  }

  sf_mex_destroy(&c152_u);
}

static void c152_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c152_mxArrayInData, const char_T *c152_varName, void *c152_outData)
{
  const mxArray *c152_b_gearshift_grid;
  emlrtMsgIdentifier c152_thisId;
  real_T c152_y[42];
  int32_T c152_i5;
  SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc152_modello_2017b_levaRetro_accInstanceStruct *)
    chartInstanceVoid;
  c152_b_gearshift_grid = sf_mex_dup(c152_mxArrayInData);
  c152_thisId.fIdentifier = (const char *)c152_varName;
  c152_thisId.fParent = NULL;
  c152_thisId.bParentIsCell = false;
  c152_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c152_b_gearshift_grid),
    &c152_thisId, c152_y);
  sf_mex_destroy(&c152_b_gearshift_grid);
  for (c152_i5 = 0; c152_i5 < 42; c152_i5++) {
    (*(real_T (*)[42])c152_outData)[c152_i5] = c152_y[c152_i5];
  }

  sf_mex_destroy(&c152_mxArrayInData);
}

static const mxArray *c152_i_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_b_setSimStateSideEffectsInfo, const char_T *c152_identifier)
{
  const mxArray *c152_y = NULL;
  emlrtMsgIdentifier c152_thisId;
  c152_y = NULL;
  c152_thisId.fIdentifier = (const char *)c152_identifier;
  c152_thisId.fParent = NULL;
  c152_thisId.bParentIsCell = false;
  sf_mex_assign(&c152_y, c152_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c152_b_setSimStateSideEffectsInfo), &c152_thisId), false);
  sf_mex_destroy(&c152_b_setSimStateSideEffectsInfo);
  return c152_y;
}

static const mxArray *c152_j_emlrt_marshallIn
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, const
   mxArray *c152_u, const emlrtMsgIdentifier *c152_parentId)
{
  const mxArray *c152_y = NULL;
  (void)chartInstance;
  (void)c152_parentId;
  c152_y = NULL;
  sf_mex_assign(&c152_y, sf_mex_duplicatearraysafe(&c152_u), false);
  sf_mex_destroy(&c152_u);
  return c152_y;
}

static const mxArray *sf_get_hover_data_for_msg
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance, int32_T
   c152_ssid)
{
  (void)chartInstance;
  (void)c152_ssid;
  return NULL;
}

static void c152_init_sf_message_store_memory
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance)
{
  chartInstance->c152_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c152_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S,
    0);
  chartInstance->c152_is_active_c152_modello_2017b_levaRetro_acc = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 1);
  chartInstance->c152_is_asse_x = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    2);
  chartInstance->c152_is_active_asse_x = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 3);
  chartInstance->c152_is_asse_y = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    4);
  chartInstance->c152_is_active_asse_y = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 5);
  chartInstance->c152_posx = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c152_posy = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c152_statex = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c152_statey = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c152_selected_gear = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c152_retro_button = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c152_muro_dx = (real_T *)ssGetDWork_wrapper(chartInstance->S, 6);
  chartInstance->c152_muro_sx = (real_T *)ssGetDWork_wrapper(chartInstance->S, 7);
  chartInstance->c152_corsa_marcia_x = (real_T *)ssGetDWork_wrapper
    (chartInstance->S, 8);
  chartInstance->c152_punto_marcia_innestata = (real_T *)ssGetDWork_wrapper
    (chartInstance->S, 9);
  chartInstance->c152_up_gear = (real_T *)ssGetDWork_wrapper(chartInstance->S,
    10);
  chartInstance->c152_init = (real32_T *)ssGetInputPortSignal_wrapper
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
void sf_c152_modello_2017b_levaRetro_acc_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1665357333U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3067033749U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2149487732U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(491943890U);
}

mxArray* sf_c152_modello_2017b_levaRetro_acc_get_post_codegen_info(void);
mxArray *sf_c152_modello_2017b_levaRetro_acc_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("1nIrZttZEskfxWHOTx2B0F");
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
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,8,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(42);
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
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(42);
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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,7,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo =
      sf_c152_modello_2017b_levaRetro_acc_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c152_modello_2017b_levaRetro_acc_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c152_modello_2017b_levaRetro_acc_jit_fallback_info(void)
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

mxArray *sf_c152_modello_2017b_levaRetro_acc_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c152_modello_2017b_levaRetro_acc_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c152_modello_2017b_levaRetro_acc
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[6],T\"statex\",},{M[1],M[7],T\"statey\",},{M[3],M[149],T\"corsa_marcia_x\",},{M[3],M[119],T\"muro_dx\",},{M[3],M[120],T\"muro_sx\",},{M[3],M[162],T\"punto_marcia_innestata\",},{M[3],M[170],T\"up_gear\",},{M[8],M[0],T\"is_active_c152_modello_2017b_levaRetro_acc\",},{M[8],M[8],T\"is_active_asse_x\",},{M[8],M[9],T\"is_active_asse_y\",}}",
    "100 S1x2'type','srcId','name','auxInfo'{{M[9],M[8],T\"is_asse_x\",},{M[9],M[9],T\"is_asse_y\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 12, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c152_modello_2017b_levaRetro_acc_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg
    ( (SFc152_modello_2017b_levaRetro_accInstanceStruct *) chartInstance,
     msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance =
      (SFc152_modello_2017b_levaRetro_accInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _modello_2017b_levaRetro_accMachineNumber_,
           152,
           13,
           29,
           0,
           24,
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
          _SFD_SET_DATA_PROPS(0,0,0,0,"corsa_marcia_x");
          _SFD_SET_DATA_PROPS(1,0,0,0,"muro_dx");
          _SFD_SET_DATA_PROPS(2,0,0,0,"muro_sx");
          _SFD_SET_DATA_PROPS(3,0,0,0,"punto_marcia_innestata");
          _SFD_SET_DATA_PROPS(4,0,0,0,"up_gear");
          _SFD_SET_DATA_PROPS(5,1,1,0,"posx");
          _SFD_SET_DATA_PROPS(6,1,1,0,"posy");
          _SFD_SET_DATA_PROPS(7,1,1,0,"selected_gear");
          _SFD_SET_DATA_PROPS(8,1,1,0,"retro_button");
          _SFD_SET_DATA_PROPS(9,1,1,0,"init");
          _SFD_SET_DATA_PROPS(10,2,0,1,"statex");
          _SFD_SET_DATA_PROPS(11,2,0,1,"statey");
          _SFD_SET_DATA_PROPS(12,7,0,0,"offset_pf");
          _SFD_SET_DATA_PROPS(13,8,0,0,"");
          _SFD_SET_DATA_PROPS(14,8,0,0,"");
          _SFD_SET_DATA_PROPS(15,9,0,0,"");
          _SFD_SET_DATA_PROPS(16,10,0,0,"gearshift_grid");
          _SFD_SET_DATA_PROPS(17,10,0,0,"gearshift_grid_dyn");
          _SFD_SET_DATA_PROPS(18,10,0,0,"selection1_y_neg");
          _SFD_SET_DATA_PROPS(19,10,0,0,"selection1_y_pos");
          _SFD_SET_DATA_PROPS(20,10,0,0,"selection2_y_neg");
          _SFD_SET_DATA_PROPS(21,10,0,0,"selection2_y_pos");
          _SFD_SET_DATA_PROPS(22,10,0,0,"selection_x_neg");
          _SFD_SET_DATA_PROPS(23,10,0,0,"selection_x_pos");
          _SFD_STATE_INFO(0,0,1);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_STATE_INFO(8,0,0);
          _SFD_STATE_INFO(9,0,1);
          _SFD_STATE_INFO(10,0,0);
          _SFD_STATE_INFO(11,0,0);
          _SFD_STATE_INFO(12,0,2);
          _SFD_CH_SUBSTATE_COUNT(2);
          _SFD_CH_SUBSTATE_DECOMP(1);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,9);
          _SFD_ST_SUBSTATE_COUNT(0,8);
          _SFD_ST_SUBSTATE_INDEX(0,0,1);
          _SFD_ST_SUBSTATE_INDEX(0,1,2);
          _SFD_ST_SUBSTATE_INDEX(0,2,3);
          _SFD_ST_SUBSTATE_INDEX(0,3,4);
          _SFD_ST_SUBSTATE_INDEX(0,4,5);
          _SFD_ST_SUBSTATE_INDEX(0,5,6);
          _SFD_ST_SUBSTATE_INDEX(0,6,7);
          _SFD_ST_SUBSTATE_INDEX(0,7,8);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
          _SFD_ST_SUBSTATE_COUNT(9,2);
          _SFD_ST_SUBSTATE_INDEX(9,0,10);
          _SFD_ST_SUBSTATE_INDEX(9,1,11);
          _SFD_ST_SUBSTATE_COUNT(10,0);
          _SFD_ST_SUBSTATE_COUNT(11,0);
        }

        _SFD_CV_INIT_CHART(2,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,8,1,1,0,0,NULL,NULL);
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
          _SFD_CV_INIT_STATE(9,2,1,1,0,0,NULL,NULL);
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
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(26,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 8 };

          static int sRelationalopEps[] = { -3 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(26,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 2, 27 };

          static unsigned int sEndGuardMap[] = { 18, 48 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(1,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 2, 27 };

          static unsigned int sEndRelationalopMap[] = { 18, 48 };

          static int sRelationalopEps[] = { -3, -1 };

          static int sRelationalopType[] = { 0, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(1,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(25,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 8 };

          static int sRelationalopEps[] = { -3 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(25,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 23, 50 };

          static unsigned int sEndGuardMap[] = { 17, 44, 71 };

          static int sPostFixPredicateTree[] = { 0, 1, 2, -2, -3 };

          _SFD_CV_INIT_TRANS(3,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 23, 50 };

          static unsigned int sEndRelationalopMap[] = { 17, 44, 71 };

          static int sRelationalopEps[] = { -3, -1, -1 };

          static int sRelationalopType[] = { 0, 5, 3 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(3,3,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 26 };

          static unsigned int sEndGuardMap[] = { 22, 46 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(4,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 2, 26 };

          static unsigned int sEndRelationalopMap[] = { 22, 46 };

          static int sRelationalopEps[] = { -1, -1 };

          static int sRelationalopType[] = { 2, 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(4,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(12,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 17 };

          static int sRelationalopEps[] = { -3 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(12,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 29, 60 };

          static unsigned int sEndGuardMap[] = { 18, 50, 81 };

          static int sPostFixPredicateTree[] = { 0, 1, 2, -2, -3 };

          _SFD_CV_INIT_TRANS(9,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 2, 29, 60 };

          static unsigned int sEndRelationalopMap[] = { 18, 50, 81 };

          static int sRelationalopEps[] = { -3, -1, -1 };

          static int sRelationalopType[] = { 1, 5, 3 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(9,3,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 27 };

          static unsigned int sEndGuardMap[] = { 18, 48 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(2,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 2, 27 };

          static unsigned int sEndRelationalopMap[] = { 18, 48 };

          static int sRelationalopEps[] = { -3, -1 };

          static int sRelationalopType[] = { 0, 3 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(2,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 29, 60 };

          static unsigned int sEndGuardMap[] = { 18, 50, 81 };

          static int sPostFixPredicateTree[] = { 0, 1, 2, -2, -3 };

          _SFD_CV_INIT_TRANS(5,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 2, 29, 60 };

          static unsigned int sEndRelationalopMap[] = { 18, 50, 81 };

          static int sRelationalopEps[] = { -3, -1, -1 };

          static int sRelationalopType[] = { 1, 5, 3 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(5,3,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 17 };

          static int sRelationalopEps[] = { -3 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(6,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 16, 85, 99 };

          static unsigned int sEndGuardMap[] = { 12, 75, 95, 158 };

          static int sPostFixPredicateTree[] = { 0, 1, -3, 2, 3, -3, -2 };

          _SFD_CV_INIT_TRANS(10,4,&(sStartGuardMap[0]),&(sEndGuardMap[0]),7,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 2, 16, 85, 99 };

          static unsigned int sEndRelationalopMap[] = { 12, 75, 95, 158 };

          static int sRelationalopEps[] = { -1, -1, -1, -1 };

          static int sRelationalopType[] = { 0, 5, 0, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(10,4,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 16, 85, 99 };

          static unsigned int sEndGuardMap[] = { 12, 75, 95, 158 };

          static int sPostFixPredicateTree[] = { 0, 1, -3, 2, 3, -3, -2 };

          _SFD_CV_INIT_TRANS(13,4,&(sStartGuardMap[0]),&(sEndGuardMap[0]),7,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 2, 16, 85, 99 };

          static unsigned int sEndRelationalopMap[] = { 12, 75, 95, 158 };

          static int sRelationalopEps[] = { -1, -1, -1, -1 };

          static int sRelationalopType[] = { 0, 5, 0, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(13,4,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 16, 84, 98 };

          static unsigned int sEndGuardMap[] = { 12, 74, 94, 156 };

          static int sPostFixPredicateTree[] = { 0, 1, -3, 2, 3, -3, -2 };

          _SFD_CV_INIT_TRANS(11,4,&(sStartGuardMap[0]),&(sEndGuardMap[0]),7,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 2, 16, 84, 98 };

          static unsigned int sEndRelationalopMap[] = { 12, 74, 94, 156 };

          static int sRelationalopEps[] = { -1, -1, -1, -1 };

          static int sRelationalopType[] = { 0, 2, 0, 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(11,4,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 16, 85, 99 };

          static unsigned int sEndGuardMap[] = { 12, 75, 95, 158 };

          static int sPostFixPredicateTree[] = { 0, 1, -3, 2, 3, -3, -2 };

          _SFD_CV_INIT_TRANS(14,4,&(sStartGuardMap[0]),&(sEndGuardMap[0]),7,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 2, 16, 85, 99 };

          static unsigned int sEndRelationalopMap[] = { 12, 75, 95, 158 };

          static int sRelationalopEps[] = { -1, -1, -1, -1 };

          static int sRelationalopType[] = { 0, 5, 0, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(14,4,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 16, 66, 80 };

          static unsigned int sEndGuardMap[] = { 12, 56, 76, 120 };

          static int sPostFixPredicateTree[] = { 0, 1, -3, 2, 3, -3, -2 };

          _SFD_CV_INIT_TRANS(8,4,&(sStartGuardMap[0]),&(sEndGuardMap[0]),7,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 2, 16, 66, 80 };

          static unsigned int sEndRelationalopMap[] = { 12, 56, 76, 120 };

          static int sRelationalopEps[] = { -1, -1, -1, -1 };

          static int sRelationalopType[] = { 0, 2, 0, 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(8,4,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 16, 67, 81 };

          static unsigned int sEndGuardMap[] = { 12, 57, 77, 122 };

          static int sPostFixPredicateTree[] = { 0, 1, -3, 2, 3, -3, -2 };

          _SFD_CV_INIT_TRANS(7,4,&(sStartGuardMap[0]),&(sEndGuardMap[0]),7,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 2, 16, 67, 81 };

          static unsigned int sEndRelationalopMap[] = { 12, 57, 77, 122 };

          static int sRelationalopEps[] = { -1, -1, -1, -1 };

          static int sRelationalopType[] = { 0, 5, 0, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(7,4,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 16, 84, 98 };

          static unsigned int sEndGuardMap[] = { 12, 74, 94, 156 };

          static int sPostFixPredicateTree[] = { 0, 1, -3, 2, 3, -3, -2 };

          _SFD_CV_INIT_TRANS(15,4,&(sStartGuardMap[0]),&(sEndGuardMap[0]),7,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 2, 16, 84, 98 };

          static unsigned int sEndRelationalopMap[] = { 12, 74, 94, 156 };

          static int sRelationalopEps[] = { -1, -1, -1, -1 };

          static int sRelationalopType[] = { 0, 2, 0, 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(15,4,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(18,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(19,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 17 };

          static int sRelationalopEps[] = { -3 };

          static int sRelationalopType[] = { 1 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(19,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 21 };

          static unsigned int sEndGuardMap[] = { 17, 36 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(23,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 21 };

          static unsigned int sEndRelationalopMap[] = { 17, 36 };

          static int sRelationalopEps[] = { -3, -3 };

          static int sRelationalopType[] = { 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(23,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(28,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 8 };

          static int sRelationalopEps[] = { -3 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(28,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 21 };

          static unsigned int sEndGuardMap[] = { 17, 36 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(20,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 21 };

          static unsigned int sEndRelationalopMap[] = { 17, 36 };

          static int sRelationalopEps[] = { -3, -3 };

          static int sRelationalopType[] = { 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(20,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(27,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 8 };

          static int sRelationalopEps[] = { -3 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(27,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(24,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1, 21, 37 };

          static unsigned int sEndGuardMap[] = { 17, 33, 49 };

          static int sPostFixPredicateTree[] = { 0, 1, -3, 2, -3 };

          _SFD_CV_INIT_TRANS(16,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 21, 37 };

          static unsigned int sEndRelationalopMap[] = { 17, 33, 49 };

          static int sRelationalopEps[] = { -3, -1, -1 };

          static int sRelationalopType[] = { 1, 4, 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(16,3,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(22,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 14 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 3 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(22,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(17,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 14 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(17,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 21, 37 };

          static unsigned int sEndGuardMap[] = { 17, 33, 49 };

          static int sPostFixPredicateTree[] = { 0, 1, -3, 2, -3 };

          _SFD_CV_INIT_TRANS(21,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 21, 37 };

          static unsigned int sEndRelationalopMap[] = { 17, 33, 49 };

          static int sRelationalopEps[] = { -3, -1, -1 };

          static int sRelationalopType[] = { 0, 4, 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(21,3,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(12,1,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(12,0,"gearshift_grid_r",0,-1,102);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_sf_marshallOut,(MexInFcnForType)c152_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_sf_marshallOut,(MexInFcnForType)c152_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_sf_marshallOut,(MexInFcnForType)c152_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_sf_marshallOut,(MexInFcnForType)c152_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_sf_marshallOut,(MexInFcnForType)c152_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_d_sf_marshallOut,(MexInFcnForType)
          c152_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_d_sf_marshallOut,(MexInFcnForType)
          c152_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_sf_marshallOut,(MexInFcnForType)c152_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_sf_marshallOut,(MexInFcnForType)c152_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_sf_marshallOut,(MexInFcnForType)c152_sf_marshallIn);

        {
          unsigned int dimVector[1];
          dimVector[0]= 42U;
          _SFD_SET_DATA_COMPILED_PROPS(16,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c152_e_sf_marshallOut,(MexInFcnForType)
            c152_e_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 42U;
          _SFD_SET_DATA_COMPILED_PROPS(17,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c152_e_sf_marshallOut,(MexInFcnForType)
            c152_e_sf_marshallIn);
        }

        _SFD_SET_DATA_COMPILED_PROPS(18,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_sf_marshallOut,(MexInFcnForType)c152_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(19,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_sf_marshallOut,(MexInFcnForType)c152_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(20,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_sf_marshallOut,(MexInFcnForType)c152_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(21,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_sf_marshallOut,(MexInFcnForType)c152_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(22,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_sf_marshallOut,(MexInFcnForType)c152_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(23,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c152_sf_marshallOut,(MexInFcnForType)c152_sf_marshallIn);
        _SFD_SET_DATA_VALUE_PTR(13,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(14,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(15,(void *)(NULL));
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
    SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance =
      (SFc152_modello_2017b_levaRetro_accInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(5U, (void *)chartInstance->c152_posx);
        _SFD_SET_DATA_VALUE_PTR(6U, (void *)chartInstance->c152_posy);
        _SFD_SET_DATA_VALUE_PTR(10U, (void *)chartInstance->c152_statex);
        _SFD_SET_DATA_VALUE_PTR(11U, (void *)chartInstance->c152_statey);
        _SFD_SET_DATA_VALUE_PTR(7U, (void *)chartInstance->c152_selected_gear);
        _SFD_SET_DATA_VALUE_PTR(8U, (void *)chartInstance->c152_retro_button);
        _SFD_SET_DATA_VALUE_PTR(16U, (void *)&chartInstance->c152_gearshift_grid);
        _SFD_SET_DATA_VALUE_PTR(22U, (void *)
          &chartInstance->c152_selection_x_neg);
        _SFD_SET_DATA_VALUE_PTR(23U, (void *)
          &chartInstance->c152_selection_x_pos);
        _SFD_SET_DATA_VALUE_PTR(18U, (void *)
          &chartInstance->c152_selection1_y_neg);
        _SFD_SET_DATA_VALUE_PTR(19U, (void *)
          &chartInstance->c152_selection1_y_pos);
        _SFD_SET_DATA_VALUE_PTR(1U, (void *)chartInstance->c152_muro_dx);
        _SFD_SET_DATA_VALUE_PTR(2U, (void *)chartInstance->c152_muro_sx);
        _SFD_SET_DATA_VALUE_PTR(20U, (void *)
          &chartInstance->c152_selection2_y_neg);
        _SFD_SET_DATA_VALUE_PTR(21U, (void *)
          &chartInstance->c152_selection2_y_pos);
        _SFD_SET_DATA_VALUE_PTR(0U, (void *)chartInstance->c152_corsa_marcia_x);
        _SFD_SET_DATA_VALUE_PTR(3U, (void *)
          chartInstance->c152_punto_marcia_innestata);
        _SFD_SET_DATA_VALUE_PTR(4U, (void *)chartInstance->c152_up_gear);
        _SFD_SET_DATA_VALUE_PTR(12U, (void *)&chartInstance->c152_offset_pf);
        _SFD_SET_DATA_VALUE_PTR(9U, (void *)chartInstance->c152_init);
        _SFD_SET_DATA_VALUE_PTR(17U, (void *)
          &chartInstance->c152_gearshift_grid_dyn);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "samRfI632KlLbs3HElNH3bE";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_modello_2017b_levaRetro_acc_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 152, "dworkChecksum");
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

static void sf_opaque_initialize_c152_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc152_modello_2017b_levaRetro_accInstanceStruct*)
    chartInstanceVar)->S);
  chart_debug_initialization(((SFc152_modello_2017b_levaRetro_accInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c152_modello_2017b_levaRetro_acc
    ((SFc152_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
  initialize_c152_modello_2017b_levaRetro_acc
    ((SFc152_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c152_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  enable_c152_modello_2017b_levaRetro_acc
    ((SFc152_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c152_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  disable_c152_modello_2017b_levaRetro_acc
    ((SFc152_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c152_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  sf_gateway_c152_modello_2017b_levaRetro_acc
    ((SFc152_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c152_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  ext_mode_exec_c152_modello_2017b_levaRetro_acc
    ((SFc152_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c152_modello_2017b_levaRetro_acc
  (SimStruct* S)
{
  return get_sim_state_c152_modello_2017b_levaRetro_acc
    ((SFc152_modello_2017b_levaRetro_accInstanceStruct *)
     sf_get_chart_instance_ptr(S));    /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c152_modello_2017b_levaRetro_acc(SimStruct*
  S, const mxArray *st)
{
  set_sim_state_c152_modello_2017b_levaRetro_acc
    ((SFc152_modello_2017b_levaRetro_accInstanceStruct*)
     sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c152_modello_2017b_levaRetro_acc(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc152_modello_2017b_levaRetro_accInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_modello_2017b_levaRetro_acc_optimization_info();
    }

    finalize_c152_modello_2017b_levaRetro_acc
      ((SFc152_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc152_modello_2017b_levaRetro_acc
    ((SFc152_modello_2017b_levaRetro_accInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c152_modello_2017b_levaRetro_acc(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c152_modello_2017b_levaRetro_acc
      ((SFc152_modello_2017b_levaRetro_accInstanceStruct*)
       sf_get_chart_instance_ptr(S));
  }
}

mxArray *sf_c152_modello_2017b_levaRetro_acc_get_testpoint_info(void)
{
  const char *infoEncStr[] = {
    "100 S1x5'varName','path'{{T\"is_active_c152_modello_2017b_levaRetro_acc\",T\"is_active_c152_modello_2017b_levaRetro_acc\"},{T\"is_asse_x\",T\"asse_x.is_asse_x\"},{T\"is_active_asse_x\",T\"asse_x.is_active_asse_x\"},{T\"is_asse_y\",T\"asse_y.is_asse_y\"},{T\"is_active_asse_y\",T\"asse_y.is_active_asse_y\"}}"
  };

  mxArray *mxTpInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 5, 10);
  return mxTpInfo;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x10'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id'{{T\"int32\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]}}",
    "100 S'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id'{{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 11, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 3442707396U, 3679379781U, 4226586714U,
    4018428806U };

  return checksum;
}

static void mdlSetWorkWidths_c152_modello_2017b_levaRetro_acc(SimStruct *S)
{
  /* Actual parameters from chart:
     gearshift_grid gearshift_grid_dyn selection1_y_neg selection1_y_pos selection2_y_neg selection2_y_pos selection_x_neg selection_x_pos
   */
  const char_T *rtParamNames[] = { "gearshift_grid", "gearshift_grid_dyn",
    "selection1_y_neg", "selection1_y_pos", "selection2_y_neg",
    "selection2_y_pos", "selection_x_neg", "selection_x_pos" };

  ssSetNumRunTimeParams(S,ssGetSFcnParamsCount(S));

  /* registration for gearshift_grid*/
  ssRegDlgParamAsRunTimeParam(S, 0, 0, rtParamNames[0], SS_DOUBLE);

  /* registration for gearshift_grid_dyn*/
  ssRegDlgParamAsRunTimeParam(S, 1, 1, rtParamNames[1], SS_DOUBLE);

  /* registration for selection1_y_neg*/
  ssRegDlgParamAsRunTimeParam(S, 2, 2, rtParamNames[2], SS_DOUBLE);

  /* registration for selection1_y_pos*/
  ssRegDlgParamAsRunTimeParam(S, 3, 3, rtParamNames[3], SS_DOUBLE);

  /* registration for selection2_y_neg*/
  ssRegDlgParamAsRunTimeParam(S, 4, 4, rtParamNames[4], SS_DOUBLE);

  /* registration for selection2_y_pos*/
  ssRegDlgParamAsRunTimeParam(S, 5, 5, rtParamNames[5], SS_DOUBLE);

  /* registration for selection_x_neg*/
  ssRegDlgParamAsRunTimeParam(S, 6, 6, rtParamNames[6], SS_DOUBLE);

  /* registration for selection_x_pos*/
  ssRegDlgParamAsRunTimeParam(S, 7, 7, rtParamNames[7], SS_DOUBLE);
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
      152);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,152,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 152);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,152);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,152,5);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,152,2);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=2; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 5; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,152);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1437882083U));
  ssSetChecksum1(S,(1600505253U));
  ssSetChecksum2(S,(865903414U));
  ssSetChecksum3(S,(1592716429U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c152_modello_2017b_levaRetro_acc(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c152_modello_2017b_levaRetro_acc(SimStruct *S)
{
  SFc152_modello_2017b_levaRetro_accInstanceStruct *chartInstance;
  chartInstance = (SFc152_modello_2017b_levaRetro_accInstanceStruct *)utMalloc
    (sizeof(SFc152_modello_2017b_levaRetro_accInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof
         (SFc152_modello_2017b_levaRetro_accInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c152_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c152_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c152_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c152_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c152_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c152_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c152_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c152_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c152_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.mdlStart = mdlStart_c152_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c152_modello_2017b_levaRetro_acc;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec =
    sf_opaque_ext_mode_exec_c152_modello_2017b_levaRetro_acc;
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
  mdl_start_c152_modello_2017b_levaRetro_acc(chartInstance);
}

void c152_modello_2017b_levaRetro_acc_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c152_modello_2017b_levaRetro_acc(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c152_modello_2017b_levaRetro_acc(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c152_modello_2017b_levaRetro_acc(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c152_modello_2017b_levaRetro_acc_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
