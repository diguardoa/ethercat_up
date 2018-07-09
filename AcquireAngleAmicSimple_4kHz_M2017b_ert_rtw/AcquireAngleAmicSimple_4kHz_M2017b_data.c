/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: AcquireAngleAmicSimple_4kHz_M2017b_data.c
 *
 * Code generated for Simulink model 'AcquireAngleAmicSimple_4kHz_M2017b'.
 *
 * Model version                  : 1.1049
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Mon Jul  9 16:26:15 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AcquireAngleAmicSimple_4kHz_M2017b.h"
#include "AcquireAngleAmicSimple_4kHz_M2017b_private.h"

/* Constant parameters (auto storage) */
const ConstP_AcquireAngleAmicSimple_4kHz_M2017b_T
  AcquireAngleAmicSimple_4kHz_M2017b_ConstP = {
  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S4>/EtherCAT Get State  '
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 1'
   *   '<S7>/EtherCAT PDO Transmit 10'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   *   '<S8>/EtherCAT Set State 1'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S4>/EtherCAT Get State  '
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 1'
   *   '<S7>/EtherCAT PDO Transmit 10'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   *   '<S8>/EtherCAT Set State 1'
   */
  0.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S4>/EtherCAT Get State  '
   *   '<S4>/xPC Target  Time '
   *   '<S8>/EtherCAT Set State 1'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S4>/EtherCAT Get State  '
   *   '<S4>/xPC Target  Time '
   *   '<S8>/EtherCAT Set State 1'
   */
  -1.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S4>/xPC Target  Time '
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   *   '<S7>/xPC Target  Time '
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S4>/xPC Target  Time '
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   *   '<S7>/xPC Target  Time '
   */
  2.0,

  /* Computed Parameter: EtherCATPDOReceive19_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive19'
   */
  { 1.0, 41.0 },

  /* Computed Parameter: EtherCATPDOReceive19_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive19'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 82.0,
    101.0, 102.0, 101.0, 114.0, 101.0, 110.0, 99.0, 101.0, 115.0, 32.0, 50.0,
    46.0, 81.0, 117.0, 97.0, 100.0, 114.0, 97.0, 116.0, 117.0, 114.0, 101.0,
    32.0, 67.0, 111.0, 117.0, 110.0, 116.0, 115.0 },

  /* Computed Parameter: EtherCATPDOReceive19_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive19'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive19'
   */
  1192.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Transmit 1'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Expression: sig_type)
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Transmit 1'
   */
  7.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 1'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Expression: type_size)
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 1'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   */
  32.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 1'
   *   '<S7>/EtherCAT PDO Transmit 10'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Expression: sig_dim)
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 1'
   *   '<S7>/EtherCAT PDO Transmit 10'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   */
  1.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 1'
   *   '<S7>/EtherCAT PDO Transmit 10'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Expression: sample_time)
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive1'
   *   '<S7>/EtherCAT PDO Receive10'
   *   '<S7>/EtherCAT PDO Receive11'
   *   '<S7>/EtherCAT PDO Receive12'
   *   '<S7>/EtherCAT PDO Receive13'
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive15'
   *   '<S7>/EtherCAT PDO Receive16'
   *   '<S7>/EtherCAT PDO Receive17'
   *   '<S7>/EtherCAT PDO Receive18'
   *   '<S7>/EtherCAT PDO Receive19'
   *   '<S7>/EtherCAT PDO Receive2'
   *   '<S7>/EtherCAT PDO Receive20'
   *   '<S7>/EtherCAT PDO Receive21'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Receive4'
   *   '<S7>/EtherCAT PDO Receive5'
   *   '<S7>/EtherCAT PDO Receive6'
   *   '<S7>/EtherCAT PDO Receive7'
   *   '<S7>/EtherCAT PDO Receive8'
   *   '<S7>/EtherCAT PDO Receive9'
   *   '<S7>/EtherCAT PDO Transmit 1'
   *   '<S7>/EtherCAT PDO Transmit 10'
   *   '<S7>/EtherCAT PDO Transmit 11'
   *   '<S7>/EtherCAT PDO Transmit 12'
   *   '<S7>/EtherCAT PDO Transmit 13'
   *   '<S7>/EtherCAT PDO Transmit 14'
   *   '<S7>/EtherCAT PDO Transmit 2'
   *   '<S7>/EtherCAT PDO Transmit 3'
   *   '<S7>/EtherCAT PDO Transmit 4'
   *   '<S7>/EtherCAT PDO Transmit 5'
   *   '<S7>/EtherCAT PDO Transmit 6'
   *   '<S7>/EtherCAT PDO Transmit 7'
   *   '<S7>/EtherCAT PDO Transmit 8'
   *   '<S7>/EtherCAT PDO Transmit 9'
   */
  0.0005,

  /* Computed Parameter: EtherCATPDOReceive14_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive14'
   */
  { 1.0, 32.0 },

  /* Computed Parameter: EtherCATPDOReceive14_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive14'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 67.0,
    111.0, 109.0, 109.0, 97.0, 110.0, 100.0, 115.0, 32.0, 68.0, 111.0, 110.0,
    101.0, 46.0, 67.0, 111.0, 109.0, 109.0, 97.0, 110.0, 100.0 },

  /* Computed Parameter: EtherCATPDOReceive14_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive14'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive14'
   */
  840.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Transmit 10'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Expression: sig_type)
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Transmit 10'
   */
  6.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Transmit 10'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Expression: type_size)
   * Referenced by:
   *   '<S7>/EtherCAT PDO Receive14'
   *   '<S7>/EtherCAT PDO Receive3'
   *   '<S7>/EtherCAT PDO Transmit 10'
   */
  16.0,

  /* Computed Parameter: EtherCATPDOReceive12_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive12'
   */
  { 1.0, 33.0 },

  /* Computed Parameter: EtherCATPDOReceive12_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive12'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 65.0, 68.0,
    67.0, 32.0, 67.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 115.0, 46.0, 67.0,
    104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0, 49.0 },

  /* Computed Parameter: EtherCATPDOReceive12_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive12'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive12'
   */
  1288.0,

  /* Computed Parameter: EtherCATPDOReceive13_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive13'
   */
  { 1.0, 33.0 },

  /* Computed Parameter: EtherCATPDOReceive13_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive13'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 65.0, 68.0,
    67.0, 32.0, 67.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 115.0, 46.0, 67.0,
    104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0, 50.0 },

  /* Computed Parameter: EtherCATPDOReceive13_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive13'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive13'
   */
  1320.0,

  /* Computed Parameter: EtherCATPDOReceive15_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive15'
   */
  { 1.0, 33.0 },

  /* Computed Parameter: EtherCATPDOReceive15_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive15'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 65.0, 68.0,
    67.0, 32.0, 67.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 115.0, 46.0, 67.0,
    104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0, 51.0 },

  /* Computed Parameter: EtherCATPDOReceive15_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive15'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive15'
   */
  1352.0,

  /* Computed Parameter: EtherCATPDOReceive16_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive16'
   */
  { 1.0, 33.0 },

  /* Computed Parameter: EtherCATPDOReceive16_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive16'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 65.0, 68.0,
    67.0, 32.0, 67.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 115.0, 46.0, 67.0,
    104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0, 52.0 },

  /* Computed Parameter: EtherCATPDOReceive16_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive16'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive16'
   */
  1384.0,

  /* Computed Parameter: EtherCATPDOReceive17_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive17'
   */
  { 1.0, 33.0 },

  /* Computed Parameter: EtherCATPDOReceive17_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive17'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 65.0, 68.0,
    67.0, 32.0, 67.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 115.0, 46.0, 67.0,
    104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0, 53.0 },

  /* Computed Parameter: EtherCATPDOReceive17_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive17'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive17'
   */
  1416.0,

  /* Computed Parameter: EtherCATPDOReceive18_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive18'
   */
  { 1.0, 33.0 },

  /* Computed Parameter: EtherCATPDOReceive18_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive18'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 65.0, 68.0,
    67.0, 32.0, 67.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 115.0, 46.0, 67.0,
    104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0, 54.0 },

  /* Computed Parameter: EtherCATPDOReceive18_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive18'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive18'
   */
  1448.0,

  /* Computed Parameter: EtherCATPDOReceive5_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive5'
   */
  { 1.0, 38.0 },

  /* Computed Parameter: EtherCATPDOReceive5_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive5'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 82.0,
    101.0, 102.0, 101.0, 114.0, 101.0, 110.0, 99.0, 101.0, 115.0, 32.0, 49.0,
    46.0, 79.0, 117.0, 116.0, 112.0, 117.0, 116.0, 32.0, 86.0, 111.0, 108.0,
    116.0, 97.0, 103.0, 101.0 },

  /* Computed Parameter: EtherCATPDOReceive5_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive5'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive5'
   */
  856.0,

  /* Computed Parameter: EtherCATPDOReceive6_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive6'
   */
  { 1.0, 41.0 },

  /* Computed Parameter: EtherCATPDOReceive6_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive6'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 82.0,
    101.0, 102.0, 101.0, 114.0, 101.0, 110.0, 99.0, 101.0, 115.0, 32.0, 49.0,
    46.0, 81.0, 117.0, 97.0, 100.0, 114.0, 97.0, 116.0, 117.0, 114.0, 101.0,
    32.0, 67.0, 111.0, 117.0, 110.0, 116.0, 115.0 },

  /* Computed Parameter: EtherCATPDOReceive6_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive6'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive6'
   */
  888.0,

  /* Computed Parameter: EtherCATPDOReceive7_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive7'
   */
  { 1.0, 40.0 },

  /* Computed Parameter: EtherCATPDOReceive7_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive7'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 82.0,
    101.0, 102.0, 101.0, 114.0, 101.0, 110.0, 99.0, 101.0, 115.0, 32.0, 49.0,
    46.0, 82.0, 97.0, 100.0, 105.0, 97.0, 110.0, 116.0, 32.0, 80.0, 111.0, 115.0,
    105.0, 116.0, 105.0, 111.0, 110.0 },

  /* Computed Parameter: EtherCATPDOReceive7_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive7'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive7'
   */
  920.0,

  /* Computed Parameter: EtherCATPDOReceive8_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive8'
   */
  { 1.0, 49.0 },

  /* Computed Parameter: EtherCATPDOReceive8_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive8'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 82.0,
    101.0, 102.0, 101.0, 114.0, 101.0, 110.0, 99.0, 101.0, 115.0, 32.0, 49.0,
    46.0, 81.0, 117.0, 97.0, 100.0, 114.0, 97.0, 116.0, 117.0, 114.0, 101.0,
    32.0, 67.0, 111.0, 117.0, 110.0, 116.0, 115.0, 32.0, 112.0, 101.0, 114.0,
    32.0, 115.0, 101.0, 99.0 },

  /* Computed Parameter: EtherCATPDOReceive8_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive8'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive8'
   */
  952.0,

  /* Computed Parameter: EtherCATPDOReceive9_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive9'
   */
  { 1.0, 37.0 },

  /* Computed Parameter: EtherCATPDOReceive9_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive9'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 82.0,
    101.0, 102.0, 101.0, 114.0, 101.0, 110.0, 99.0, 101.0, 115.0, 32.0, 49.0,
    46.0, 82.0, 97.0, 100.0, 105.0, 97.0, 110.0, 116.0, 32.0, 83.0, 112.0, 101.0,
    101.0, 100.0 },

  /* Computed Parameter: EtherCATPDOReceive9_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive9'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive9'
   */
  984.0,

  /* Computed Parameter: EtherCATPDOReceive10_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive10'
   */
  { 1.0, 56.0 },

  /* Computed Parameter: EtherCATPDOReceive10_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive10'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 82.0,
    101.0, 102.0, 101.0, 114.0, 101.0, 110.0, 99.0, 101.0, 115.0, 32.0, 49.0,
    46.0, 81.0, 117.0, 97.0, 100.0, 114.0, 97.0, 116.0, 117.0, 114.0, 101.0,
    32.0, 67.0, 111.0, 117.0, 110.0, 116.0, 115.0, 32.0, 112.0, 101.0, 114.0,
    32.0, 115.0, 113.0, 117.0, 97.0, 114.0, 101.0, 32.0, 115.0, 101.0, 99.0 },

  /* Computed Parameter: EtherCATPDOReceive10_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive10'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive10'
   */
  1016.0,

  /* Computed Parameter: EtherCATPDOReceive11_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive11'
   */
  { 1.0, 44.0 },

  /* Computed Parameter: EtherCATPDOReceive11_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive11'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 82.0,
    101.0, 102.0, 101.0, 114.0, 101.0, 110.0, 99.0, 101.0, 115.0, 32.0, 49.0,
    46.0, 82.0, 97.0, 100.0, 105.0, 97.0, 110.0, 116.0, 32.0, 65.0, 99.0, 99.0,
    101.0, 108.0, 101.0, 114.0, 97.0, 116.0, 105.0, 111.0, 110.0 },

  /* Computed Parameter: EtherCATPDOReceive11_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive11'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive11'
   */
  1048.0,

  /* Computed Parameter: EtherCATPDOReceive20_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive20'
   */
  { 1.0, 49.0 },

  /* Computed Parameter: EtherCATPDOReceive20_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive20'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 82.0,
    101.0, 102.0, 101.0, 114.0, 101.0, 110.0, 99.0, 101.0, 115.0, 32.0, 50.0,
    46.0, 81.0, 117.0, 97.0, 100.0, 114.0, 97.0, 116.0, 117.0, 114.0, 101.0,
    32.0, 67.0, 111.0, 117.0, 110.0, 116.0, 115.0, 32.0, 112.0, 101.0, 114.0,
    32.0, 115.0, 101.0, 99.0 },

  /* Computed Parameter: EtherCATPDOReceive20_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive20'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive20'
   */
  1224.0,

  /* Computed Parameter: EtherCATPDOReceive21_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive21'
   */
  { 1.0, 56.0 },

  /* Computed Parameter: EtherCATPDOReceive21_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive21'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 82.0,
    101.0, 102.0, 101.0, 114.0, 101.0, 110.0, 99.0, 101.0, 115.0, 32.0, 50.0,
    46.0, 81.0, 117.0, 97.0, 100.0, 114.0, 97.0, 116.0, 117.0, 114.0, 101.0,
    32.0, 67.0, 111.0, 117.0, 110.0, 116.0, 115.0, 32.0, 112.0, 101.0, 114.0,
    32.0, 115.0, 113.0, 117.0, 97.0, 114.0, 101.0, 32.0, 115.0, 101.0, 99.0 },

  /* Computed Parameter: EtherCATPDOReceive21_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive21'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive21'
   */
  1256.0,

  /* Computed Parameter: EtherCATPDOReceive1_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive1'
   */
  { 1.0, 29.0 },

  /* Computed Parameter: EtherCATPDOReceive1_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive1'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 83.0,
    116.0, 97.0, 116.0, 117.0, 115.0, 46.0, 80.0, 97.0, 99.0, 107.0, 32.0, 78.0,
    117.0, 109.0, 98.0, 101.0, 114.0 },

  /* Computed Parameter: EtherCATPDOReceive1_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive1'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive1'
   */
  1080.0,

  /* Computed Parameter: EtherCATPDOReceive2_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive2'
   */
  { 1.0, 28.0 },

  /* Computed Parameter: EtherCATPDOReceive2_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive2'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 83.0,
    116.0, 97.0, 116.0, 117.0, 115.0, 46.0, 84.0, 105.0, 109.0, 101.0, 32.0,
    83.0, 116.0, 97.0, 109.0, 112.0 },

  /* Computed Parameter: EtherCATPDOReceive2_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive2'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive2'
   */
  1112.0,

  /* Computed Parameter: EtherCATPDOReceive3_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive3'
   */
  { 1.0, 32.0 },

  /* Computed Parameter: EtherCATPDOReceive3_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive3'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 83.0,
    116.0, 97.0, 116.0, 117.0, 115.0, 46.0, 73.0, 110.0, 116.0, 101.0, 114.0,
    110.0, 97.0, 108.0, 32.0, 83.0, 116.0, 97.0, 116.0, 101.0 },

  /* Computed Parameter: EtherCATPDOReceive3_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive3'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive3'
   */
  1144.0,

  /* Computed Parameter: EtherCATPDOReceive4_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive4'
   */
  { 1.0, 30.0 },

  /* Computed Parameter: EtherCATPDOReceive4_P1
   * Referenced by: '<S7>/EtherCAT PDO Receive4'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 83.0,
    116.0, 97.0, 116.0, 117.0, 115.0, 46.0, 82.0, 120.0, 32.0, 70.0, 114.0,
    101.0, 113.0, 117.0, 101.0, 110.0, 99.0, 121.0 },

  /* Computed Parameter: EtherCATPDOReceive4_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Receive4'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Receive4'
   */
  1160.0,

  /* Computed Parameter: EtherCATPDOTransmit10_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 10'
   */
  { 1.0, 27.0 },

  /* Computed Parameter: EtherCATPDOTransmit10_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 10'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 67.0,
    111.0, 109.0, 109.0, 97.0, 110.0, 100.0, 115.0, 46.0, 67.0, 111.0, 109.0,
    109.0, 97.0, 110.0, 100.0 },

  /* Computed Parameter: EtherCATPDOTransmit10_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 10'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 10'
   */
  312.0,

  /* Computed Parameter: EtherCATPDOTransmit1_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 1'
   */
  { 1.0, 31.0 },

  /* Computed Parameter: EtherCATPDOTransmit1_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 1'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 67.0,
    111.0, 109.0, 109.0, 97.0, 110.0, 100.0, 115.0, 46.0, 80.0, 97.0, 99.0,
    107.0, 32.0, 78.0, 117.0, 109.0, 98.0, 101.0, 114.0 },

  /* Computed Parameter: EtherCATPDOTransmit1_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 1'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 1'
   */
  328.0,

  /* Computed Parameter: EtherCATPDOTransmit2_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 2'
   */
  { 1.0, 30.0 },

  /* Computed Parameter: EtherCATPDOTransmit2_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 2'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 67.0,
    111.0, 109.0, 109.0, 97.0, 110.0, 100.0, 115.0, 46.0, 84.0, 105.0, 109.0,
    101.0, 32.0, 83.0, 116.0, 97.0, 109.0, 112.0 },

  /* Computed Parameter: EtherCATPDOTransmit2_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 2'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 2'
   */
  360.0,

  /* Computed Parameter: EtherCATPDOTransmit3_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 3'
   */
  { 1.0, 38.0 },

  /* Computed Parameter: EtherCATPDOTransmit3_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 3'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 70.0,
    105.0, 108.0, 116.0, 101.0, 114.0, 32.0, 80.0, 97.0, 114.0, 97.0, 109.0,
    101.0, 116.0, 101.0, 114.0, 115.0, 46.0, 65.0, 68.0, 67.0, 102.0, 105.0,
    108.0, 116.0, 101.0, 114.0 },

  /* Computed Parameter: EtherCATPDOTransmit3_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 3'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 3'
   */
  392.0,

  /* Computed Parameter: EtherCATPDOTransmit4_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 4'
   */
  { 1.0, 42.0 },

  /* Computed Parameter: EtherCATPDOTransmit4_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 4'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 70.0,
    105.0, 108.0, 116.0, 101.0, 114.0, 32.0, 80.0, 97.0, 114.0, 97.0, 109.0,
    101.0, 116.0, 101.0, 114.0, 115.0, 46.0, 83.0, 112.0, 101.0, 101.0, 100.0,
    70.0, 105.0, 108.0, 116.0, 101.0, 114.0, 32.0, 49.0 },

  /* Computed Parameter: EtherCATPDOTransmit4_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 4'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 4'
   */
  424.0,

  /* Computed Parameter: EtherCATPDOTransmit5_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 5'
   */
  { 1.0, 40.0 },

  /* Computed Parameter: EtherCATPDOTransmit5_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 5'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 70.0,
    105.0, 108.0, 116.0, 101.0, 114.0, 32.0, 80.0, 97.0, 114.0, 97.0, 109.0,
    101.0, 116.0, 101.0, 114.0, 115.0, 46.0, 65.0, 99.0, 99.0, 70.0, 105.0,
    108.0, 116.0, 101.0, 114.0, 32.0, 49.0 },

  /* Computed Parameter: EtherCATPDOTransmit5_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 5'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 5'
   */
  456.0,

  /* Computed Parameter: EtherCATPDOTransmit6_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 6'
   */
  { 1.0, 42.0 },

  /* Computed Parameter: EtherCATPDOTransmit6_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 6'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 70.0,
    105.0, 108.0, 116.0, 101.0, 114.0, 32.0, 80.0, 97.0, 114.0, 97.0, 109.0,
    101.0, 116.0, 101.0, 114.0, 115.0, 46.0, 83.0, 112.0, 101.0, 101.0, 100.0,
    70.0, 105.0, 108.0, 116.0, 101.0, 114.0, 32.0, 50.0 },

  /* Computed Parameter: EtherCATPDOTransmit6_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 6'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 6'
   */
  488.0,

  /* Computed Parameter: EtherCATPDOTransmit7_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
   */
  { 1.0, 40.0 },

  /* Computed Parameter: EtherCATPDOTransmit7_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 70.0,
    105.0, 108.0, 116.0, 101.0, 114.0, 32.0, 80.0, 97.0, 114.0, 97.0, 109.0,
    101.0, 116.0, 101.0, 114.0, 115.0, 46.0, 65.0, 99.0, 99.0, 70.0, 105.0,
    108.0, 116.0, 101.0, 114.0, 32.0, 50.0 },

  /* Computed Parameter: EtherCATPDOTransmit7_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
   */
  520.0,

  /* Computed Parameter: EtherCATPDOTransmit8_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 8'
   */
  { 1.0, 36.0 },

  /* Computed Parameter: EtherCATPDOTransmit8_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 8'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 82.0,
    101.0, 102.0, 101.0, 114.0, 101.0, 110.0, 99.0, 101.0, 115.0, 46.0, 68.0,
    101.0, 115.0, 105.0, 114.0, 101.0, 100.0, 32.0, 84.0, 111.0, 114.0, 113.0,
    117.0, 101.0 },

  /* Computed Parameter: EtherCATPDOTransmit8_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 8'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 8'
   */
  616.0,

  /* Computed Parameter: EtherCATPDOTransmit9_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 9'
   */
  { 1.0, 31.0 },

  /* Computed Parameter: EtherCATPDOTransmit9_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 9'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 82.0,
    101.0, 102.0, 101.0, 114.0, 101.0, 110.0, 99.0, 101.0, 115.0, 46.0, 71.0,
    114.0, 97.0, 118.0, 105.0, 116.0, 121.0, 32.0, 49.0 },

  /* Computed Parameter: EtherCATPDOTransmit9_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 9'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 9'
   */
  680.0,

  /* Computed Parameter: EtherCATPDOTransmit11_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 11'
   */
  { 1.0, 31.0 },

  /* Computed Parameter: EtherCATPDOTransmit11_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 11'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 82.0,
    101.0, 102.0, 101.0, 114.0, 101.0, 110.0, 99.0, 101.0, 115.0, 46.0, 71.0,
    114.0, 97.0, 118.0, 105.0, 116.0, 121.0, 32.0, 50.0 },

  /* Computed Parameter: EtherCATPDOTransmit11_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 11'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 11'
   */
  712.0,

  /* Computed Parameter: EtherCATPDOTransmit12_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 12'
   */
  { 1.0, 37.0 },

  /* Computed Parameter: EtherCATPDOTransmit12_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 12'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 82.0,
    101.0, 102.0, 101.0, 114.0, 101.0, 110.0, 99.0, 101.0, 115.0, 46.0, 77.0,
    101.0, 97.0, 115.0, 117.0, 114.0, 101.0, 100.0, 32.0, 84.0, 111.0, 114.0,
    113.0, 117.0, 101.0 },

  /* Computed Parameter: EtherCATPDOTransmit12_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 12'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 12'
   */
  648.0,

  /* Computed Parameter: EtherCATPDOTransmit13_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 13'
   */
  { 1.0, 31.0 },

  /* Computed Parameter: EtherCATPDOTransmit13_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 13'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 82.0,
    101.0, 102.0, 101.0, 114.0, 101.0, 110.0, 99.0, 101.0, 115.0, 46.0, 80.0,
    73.0, 68.0, 32.0, 65.0, 110.0, 103.0, 108.0, 101.0 },

  /* Computed Parameter: EtherCATPDOTransmit13_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 13'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 13'
   */
  552.0,

  /* Computed Parameter: EtherCATPDOTransmit14_P1_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 14'
   */
  { 1.0, 29.0 },

  /* Computed Parameter: EtherCATPDOTransmit14_P1
   * Referenced by: '<S7>/EtherCAT PDO Transmit 14'
   */
  { 74.0, 51.0, 32.0, 83.0, 45.0, 48.0, 48.0, 49.0, 46.0, 51.0, 46.0, 82.0,
    101.0, 102.0, 101.0, 114.0, 101.0, 110.0, 99.0, 101.0, 115.0, 46.0, 86.0,
    111.0, 108.0, 116.0, 97.0, 103.0, 101.0 },

  /* Computed Parameter: EtherCATPDOTransmit14_P2_Size
   * Referenced by: '<S7>/EtherCAT PDO Transmit 14'
   */
  { 1.0, 1.0 },

  /* Expression: sig_offset
   * Referenced by: '<S7>/EtherCAT PDO Transmit 14'
   */
  584.0,

  /* Computed Parameter: xPCTargetTime_P2_Size
   * Referenced by: '<S7>/xPC Target  Time '
   */
  { 1.0, 1.0 },

  /* Expression: ts
   * Referenced by: '<S7>/xPC Target  Time '
   */
  0.00025,

  /* Computed Parameter: ADCLPFilter3_Value
   * Referenced by: '<S3>/ADC LP Filter 3'
   */
  0.25F,

  /* Pooled Parameter (Expression: 2*pi*40)
   * Referenced by:
   *   '<S3>/Acceleration LP Filter 3'
   *   '<S3>/Acceleration LP Filter 5'
   */
  251.327408F,

  /* Computed Parameter: DistributedControlJ3_Value
   * Referenced by: '<S3>/Distributed Control J3'
   */
  0.0F,

  /* Pooled Parameter (Expression: 2*pi*100)
   * Referenced by:
   *   '<S3>/Speed LP Filter 3'
   *   '<S3>/Speed LP Filter 5'
   */
  628.318542F,

  /* Computed Parameter: ADCLPFilter1_Value
   * Referenced by: '<S3>/ADC LP Filter 1'
   */
  0U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
