#ifndef __c152_modello_2017b_levaRetro_acc_h__
#define __c152_modello_2017b_levaRetro_acc_h__

/* Type Definitions */
#ifndef typedef_SFc152_modello_2017b_levaRetro_accInstanceStruct
#define typedef_SFc152_modello_2017b_levaRetro_accInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  real_T c152_gearshift_grid[42];
  real_T c152_selection_x_neg;
  real_T c152_selection_x_pos;
  real_T c152_selection1_y_neg;
  real_T c152_selection1_y_pos;
  real_T c152_selection2_y_neg;
  real_T c152_selection2_y_pos;
  real32_T c152_offset_pf;
  real_T c152_gearshift_grid_dyn[42];
  uint8_T c152_doSetSimStateSideEffects;
  const mxArray *c152_setSimStateSideEffectsInfo;
  void *c152_fEmlrtCtx;
  int32_T *c152_sfEvent;
  uint8_T *c152_is_active_c152_modello_2017b_levaRetro_acc;
  uint8_T *c152_is_asse_x;
  uint8_T *c152_is_active_asse_x;
  uint8_T *c152_is_asse_y;
  uint8_T *c152_is_active_asse_y;
  real32_T *c152_posx;
  real32_T *c152_posy;
  real32_T *c152_statex;
  real32_T *c152_statey;
  real32_T *c152_selected_gear;
  real32_T *c152_retro_button;
  real_T *c152_muro_dx;
  real_T *c152_muro_sx;
  real_T *c152_corsa_marcia_x;
  real_T *c152_punto_marcia_innestata;
  real_T *c152_up_gear;
  real32_T *c152_init;
} SFc152_modello_2017b_levaRetro_accInstanceStruct;

#endif                                 /*typedef_SFc152_modello_2017b_levaRetro_accInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c152_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c152_modello_2017b_levaRetro_acc_get_check_sum(mxArray *plhs[]);
extern void c152_modello_2017b_levaRetro_acc_method_dispatcher(SimStruct *S,
  int_T method, void *data);

#endif
