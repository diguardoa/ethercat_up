/*
 * state_machine_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "state_machine".
 *
 * Model version              : 1.111
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Thu Jul 26 17:24:26 2018
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "state_machine.h"
#include "state_machine_private.h"

/* Block parameters (auto storage) */
P_state_machine_T state_machine_P = {
  /* Mask Parameter: UDPReceive_localPort
   * Referenced by: '<S5>/UDP Receive'
   */
  28000,

  /* Mask Parameter: UDPReceive_localPort_f
   * Referenced by: '<S4>/UDP Receive'
   */
  20002,

  /* Mask Parameter: UDPReceive_localPort_o
   * Referenced by: '<S3>/UDP Receive'
   */
  30100,

  /* Mask Parameter: UDPSend2_remotePort
   * Referenced by: '<S6>/UDP Send2'
   */
  29500,

  /* Mask Parameter: UDPSend1_remotePort
   * Referenced by: '<S4>/UDP Send1'
   */
  25001,

  /* Expression: 0
   * Referenced by: '<S3>/Saturation'
   */
  0.0,

  /* Expression: -5
   * Referenced by: '<S3>/Saturation'
   */
  -5.0,

  /* Expression: 5
   * Referenced by: '<S3>/Constant'
   */
  5.0,

  /* Expression: 20
   * Referenced by: '<S3>/Gain'
   */
  20.0,

  /* Expression: 1
   * Referenced by: '<S2>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S2>/Unit Delay'
   */
  0.0,

  /* Computed Parameter: SFunction2_P1_Size
   * Referenced by: '<S7>/S-Function2'
   */
  { 1.0, 1.0 },

  /* Expression: str2num(get_param(bdroot,'FixedStep'))
   * Referenced by: '<S7>/S-Function2'
   */
  5.0E-5,

  /* Computed Parameter: Constant1_Value
   * Referenced by: '<Root>/Constant1'
   */
  0,

  /* Computed Parameter: Constant_Value_o
   * Referenced by: '<Root>/Constant'
   */
  1,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<Root>/Manual Switch'
   */
  1U,

  /* Computed Parameter: length1_Value
   * Referenced by: '<S4>/length1'
   */
  48U
};
