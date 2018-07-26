#ifndef __c463_modello_2017b_levaRetro_acc_h__
#define __c463_modello_2017b_levaRetro_acc_h__

/* Type Definitions */
#ifndef typedef_SFc463_modello_2017b_levaRetro_accInstanceStruct
#define typedef_SFc463_modello_2017b_levaRetro_accInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  real_T c463_eps;
  real_T c463_t_m;
  real_T c463_off_sw_curve;
  real_T c463_crossgate2_begleft_retright_stable_pos;
  real_T c463_crossgate2_left_pos_threshold;
  real_T c463_crossgate2_retleft_begright_stable_pos;
  real_T c463_crossgate2_right_pos_threshold;
  uint8_T c463_doSetSimStateSideEffects;
  const mxArray *c463_setSimStateSideEffectsInfo;
  void *c463_fEmlrtCtx;
  int32_T *c463_sfEvent;
  uint8_T *c463_is_active_c463_modello_2017b_levaRetro_acc;
  uint8_T *c463_is_c463_modello_2017b_levaRetro_acc;
  uint8_T *c463_is_state_machine;
  real_T *c463_pos;
  real_T *c463_curve;
  real32_T *c463_init;
  real32_T *c463_debug;
} SFc463_modello_2017b_levaRetro_accInstanceStruct;

#endif                                 /*typedef_SFc463_modello_2017b_levaRetro_accInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c463_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c463_modello_2017b_levaRetro_acc_get_check_sum(mxArray *plhs[]);
extern void c463_modello_2017b_levaRetro_acc_method_dispatcher(SimStruct *S,
  int_T method, void *data);

#endif
