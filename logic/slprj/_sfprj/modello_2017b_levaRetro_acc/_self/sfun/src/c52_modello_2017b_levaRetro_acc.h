#ifndef __c52_modello_2017b_levaRetro_acc_h__
#define __c52_modello_2017b_levaRetro_acc_h__

/* Type Definitions */
#ifndef typedef_SFc52_modello_2017b_levaRetro_accInstanceStruct
#define typedef_SFc52_modello_2017b_levaRetro_accInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  real_T c52_gearshift_grid[42];
  real_T c52_selection_x_neg;
  real_T c52_selection_x_pos;
  real_T c52_selection1_y_neg;
  real_T c52_selection1_y_pos;
  real_T c52_selection2_y_neg;
  real_T c52_selection2_y_pos;
  real32_T c52_offset_pf;
  real_T c52_gearshift_grid_dyn[42];
  uint8_T c52_doSetSimStateSideEffects;
  const mxArray *c52_setSimStateSideEffectsInfo;
  void *c52_fEmlrtCtx;
  int32_T *c52_sfEvent;
  uint8_T *c52_is_active_c52_modello_2017b_levaRetro_acc;
  uint8_T *c52_is_asse_x_dyn;
  uint8_T *c52_is_active_asse_x_dyn;
  real32_T *c52_posx;
  real32_T *c52_posy;
  real32_T *c52_selected_gear;
  real32_T *c52_retro_button;
  real_T *c52_muro_dx;
  real_T *c52_muro_sx;
  real_T *c52_corsa_marcia_x;
  real_T *c52_punto_marcia_innestata;
  real_T *c52_up_gear;
  real32_T *c52_init;
  real_T *c52_statex;
} SFc52_modello_2017b_levaRetro_accInstanceStruct;

#endif                                 /*typedef_SFc52_modello_2017b_levaRetro_accInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c52_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c52_modello_2017b_levaRetro_acc_get_check_sum(mxArray *plhs[]);
extern void c52_modello_2017b_levaRetro_acc_method_dispatcher(SimStruct *S,
  int_T method, void *data);

#endif
