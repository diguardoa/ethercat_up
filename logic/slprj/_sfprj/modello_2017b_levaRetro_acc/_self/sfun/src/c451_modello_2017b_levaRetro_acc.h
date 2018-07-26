#ifndef __c451_modello_2017b_levaRetro_acc_h__
#define __c451_modello_2017b_levaRetro_acc_h__

/* Type Definitions */
#ifndef typedef_SFc451_modello_2017b_levaRetro_accInstanceStruct
#define typedef_SFc451_modello_2017b_levaRetro_accInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  real_T c451_eps;
  real_T c451_crossgate1_begleft_retright_stable_pos;
  real_T c451_crossgate1_retleft_begright_stable_pos;
  real_T c451_t_m;
  real_T c451_crossgate1_left_pos_threshold;
  real_T c451_crossgate1_right_pos_threshold;
  real_T c451_off_sw_curve;
  uint8_T c451_doSetSimStateSideEffects;
  const mxArray *c451_setSimStateSideEffectsInfo;
  void *c451_fEmlrtCtx;
  int32_T *c451_sfEvent;
  uint8_T *c451_is_active_c451_modello_2017b_levaRetro_acc;
  uint8_T *c451_is_c451_modello_2017b_levaRetro_acc;
  uint8_T *c451_is_state_machine;
  real_T *c451_pos;
  real_T *c451_curve;
  real32_T *c451_init;
  real32_T *c451_debug;
} SFc451_modello_2017b_levaRetro_accInstanceStruct;

#endif                                 /*typedef_SFc451_modello_2017b_levaRetro_accInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c451_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c451_modello_2017b_levaRetro_acc_get_check_sum(mxArray *plhs[]);
extern void c451_modello_2017b_levaRetro_acc_method_dispatcher(SimStruct *S,
  int_T method, void *data);

#endif
