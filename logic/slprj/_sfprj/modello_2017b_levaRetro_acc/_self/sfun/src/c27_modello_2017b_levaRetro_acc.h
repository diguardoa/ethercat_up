#ifndef __c27_modello_2017b_levaRetro_acc_h__
#define __c27_modello_2017b_levaRetro_acc_h__

/* Type Definitions */
#ifndef typedef_SFc27_modello_2017b_levaRetro_accInstanceStruct
#define typedef_SFc27_modello_2017b_levaRetro_accInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c27_dataWrittenToVector[6];
  uint8_T c27_doSetSimStateSideEffects;
  const mxArray *c27_setSimStateSideEffectsInfo;
  void *c27_fEmlrtCtx;
  int32_T *c27_sfEvent;
  uint8_T *c27_is_active_c27_modello_2017b_levaRetro_acc;
  uint8_T *c27_is_c27_modello_2017b_levaRetro_acc;
  real32_T *c27_start;
  real32_T *c27_eth_ready;
  real_T *c27_x_axis_reset;
  real_T *c27_y_axis_reset;
  real_T *c27_enable_drives;
  real_T *c27_timenow;
  real_T *c27_time;
  real_T *c27_enable_forces;
  real_T *c27_enable_ethercat;
  real32_T *c27_x_axis_drive_en;
  real32_T *c27_y_axis_drive_en;
} SFc27_modello_2017b_levaRetro_accInstanceStruct;

#endif                                 /*typedef_SFc27_modello_2017b_levaRetro_accInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c27_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c27_modello_2017b_levaRetro_acc_get_check_sum(mxArray *plhs[]);
extern void c27_modello_2017b_levaRetro_acc_method_dispatcher(SimStruct *S,
  int_T method, void *data);

#endif
