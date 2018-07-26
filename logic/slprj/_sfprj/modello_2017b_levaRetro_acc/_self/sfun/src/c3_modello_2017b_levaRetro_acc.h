#ifndef __c3_modello_2017b_levaRetro_acc_h__
#define __c3_modello_2017b_levaRetro_acc_h__

/* Type Definitions */
#ifndef typedef_SFc3_modello_2017b_levaRetro_accInstanceStruct
#define typedef_SFc3_modello_2017b_levaRetro_accInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c3_dataWrittenToVector[4];
  uint8_T c3_doSetSimStateSideEffects;
  const mxArray *c3_setSimStateSideEffectsInfo;
  void *c3_fEmlrtCtx;
  int32_T *c3_sfEvent;
  uint8_T *c3_is_active_c3_modello_2017b_levaRetro_acc;
  uint8_T *c3_is_c3_modello_2017b_levaRetro_acc;
  uint8_T *c3_is_DS402StateMachine;
  uint16_T *c3_statusword;
  real32_T *c3_enable_drive;
  real32_T *c3_reset_fault;
  real_T *c3_controlword;
  real_T *c3_drive_enabled;
  real_T *c3_fault_detected;
  real_T *c3_drive_ready;
  real32_T *c3_quick_stop;
} SFc3_modello_2017b_levaRetro_accInstanceStruct;

#endif                                 /*typedef_SFc3_modello_2017b_levaRetro_accInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c3_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_modello_2017b_levaRetro_acc_get_check_sum(mxArray *plhs[]);
extern void c3_modello_2017b_levaRetro_acc_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
