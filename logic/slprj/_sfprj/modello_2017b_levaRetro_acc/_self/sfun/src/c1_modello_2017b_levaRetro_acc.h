#ifndef __c1_modello_2017b_levaRetro_acc_h__
#define __c1_modello_2017b_levaRetro_acc_h__

/* Type Definitions */
#ifndef typedef_SFc1_modello_2017b_levaRetro_accInstanceStruct
#define typedef_SFc1_modello_2017b_levaRetro_accInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c1_dataWrittenToVector[4];
  uint8_T c1_doSetSimStateSideEffects;
  const mxArray *c1_setSimStateSideEffectsInfo;
  void *c1_fEmlrtCtx;
  int32_T *c1_sfEvent;
  uint8_T *c1_is_active_c1_modello_2017b_levaRetro_acc;
  uint8_T *c1_is_c1_modello_2017b_levaRetro_acc;
  uint8_T *c1_is_DS402StateMachine;
  uint16_T *c1_statusword;
  real32_T *c1_enable_drive;
  real32_T *c1_reset_fault;
  real_T *c1_controlword;
  real_T *c1_drive_enabled;
  real_T *c1_fault_detected;
  real_T *c1_drive_ready;
  real32_T *c1_quick_stop;
} SFc1_modello_2017b_levaRetro_accInstanceStruct;

#endif                                 /*typedef_SFc1_modello_2017b_levaRetro_accInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c1_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c1_modello_2017b_levaRetro_acc_get_check_sum(mxArray *plhs[]);
extern void c1_modello_2017b_levaRetro_acc_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
