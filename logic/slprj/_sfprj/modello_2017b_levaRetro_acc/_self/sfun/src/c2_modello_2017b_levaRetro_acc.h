#ifndef __c2_modello_2017b_levaRetro_acc_h__
#define __c2_modello_2017b_levaRetro_acc_h__

/* Type Definitions */
#ifndef typedef_SFc2_modello_2017b_levaRetro_accInstanceStruct
#define typedef_SFc2_modello_2017b_levaRetro_accInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c2_dataWrittenToVector[2];
  uint8_T c2_doSetSimStateSideEffects;
  const mxArray *c2_setSimStateSideEffectsInfo;
  void *c2_fEmlrtCtx;
  int32_T *c2_sfEvent;
  uint8_T *c2_is_active_c2_modello_2017b_levaRetro_acc;
  uint8_T *c2_is_c2_modello_2017b_levaRetro_acc;
  int32_T *c2_status;
  real32_T *c2_master_enable;
  real_T *c2_master_ready;
  real_T *c2_command;
} SFc2_modello_2017b_levaRetro_accInstanceStruct;

#endif                                 /*typedef_SFc2_modello_2017b_levaRetro_accInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c2_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_modello_2017b_levaRetro_acc_get_check_sum(mxArray *plhs[]);
extern void c2_modello_2017b_levaRetro_acc_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
