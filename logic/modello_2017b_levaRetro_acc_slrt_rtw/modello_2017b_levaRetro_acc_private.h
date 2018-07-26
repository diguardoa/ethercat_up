/*
 * modello_2017b_levaRetro_acc_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "modello_2017b_levaRetro_acc".
 *
 * Model version              : 1.2140
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Thu Jul 26 13:47:06 2018
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_modello_2017b_levaRetro_acc_private_h_
#define RTW_HEADER_modello_2017b_levaRetro_acc_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "modello_2017b_levaRetro_acc.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if 0

/* Skip this size verification because of preprocessor limitation */
#if ( ULLONG_MAX != (0xFFFFFFFFFFFFFFFFULL) ) || ( LLONG_MAX != (0x7FFFFFFFFFFFFFFFLL) )
#error Code was generated for compiler with different sized ulong_long/long_long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif
#endif

extern unsigned int xmlecatArr_0_count;
extern unsigned char xmlecatArr_0[];
extern int_T slrtEcatDCM[8];           // From master shift controller
int32_T dcmHwSetIntTimestamp( void );
void dcmCtlExecJob();                  // Master shift control job
extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern real_T rt_modd_snf(real_T u0, real_T u1);
extern const char *getRefMdlPath(const char *refMdl);
extern int getRefMdlSignalNumber(const char *mdlBlock, const char *signalName);
extern real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern real32_T look1_iflf_binlxpw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern void xpcethercatpdorx(SimStruct *rts);
extern void xpcethercatpdotx(SimStruct *rts);
extern void xpcethercatgetstate(SimStruct *rts);
extern void slrtUDPSend(SimStruct *rts);
extern void xpcethercatsetstate(SimStruct *rts);
extern void slrtUDPReceive(SimStruct *rts);
extern void modell_DS402_state_machine_Init(DW_DS402_state_machine_modell_T
  *localDW);
extern void modello_201_DS402_state_machine(uint16_T rtu_statusword, real32_T
  rtu_enable_drive, real32_T rtu_reset_fault, real32_T rtu_quick_stop,
  B_DS402_state_machine_modello_T *localB, DW_DS402_state_machine_modell_T
  *localDW);
extern void modello_2017b_le_AntiSpike_Init(DW_AntiSpike_modello_2017b_le_T
  *localDW);
extern void modello_2017b_levaRet_AntiSpike(real_T rtu_vel_in,
  B_AntiSpike_modello_2017b_lev_T *localB, DW_AntiSpike_modello_2017b_le_T
  *localDW);
extern void demultiplexer_enable_gear_subsi(real32_T rtu_index,
  B_demultiplexer_enable_gear_s_T *localB);
extern void modello_2017b_leva_Render_wall1(real_T rtu_pos, real_T rtu_offset,
  real_T rtu_k_stiffness, real_T rtu_force_offset,
  B_Render_wall1_modello_2017b__T *localB);
extern void crossgate_selection1_begin_left(real_T rtu_Enable, real_T rtu_posy,
  B_crossgate_selection1_begin__T *localB, DW_crossgate_selection1_begin_T
  *localDW, P_crossgate_selection1_begin__T *localP);
extern void demultiplexer_enable_subsistems(real_T rtu_index,
  B_demultiplexer_enable_subsis_T *localB);
extern void modello_2017b_transition1_bl_rl(real_T rtu_Enable, real_T rtu_posy,
  B_transition1_bl_rl_modello_2_T *localB, DW_transition1_bl_rl_modello__T
  *localDW, P_transition1_bl_rl_modello_2_T *localP);

#endif                                 /* RTW_HEADER_modello_2017b_levaRetro_acc_private_h_ */
