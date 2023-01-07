/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: DCM_SEND_private.h
 *
 * Code generated for Simulink model 'A2_V4'.
 *
 * Model version                  : 1.182
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Mon Nov 30 15:23:47 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DCM_SEND_private_h_
#define RTW_HEADER_DCM_SEND_private_h_
#include <string.h>
#ifndef A2_V4_COMMON_INCLUDES_
# define A2_V4_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "MW_digitalIO.h"
#include "MW_AnalogIn.h"
#include "MW_SCI.h"
#include "MW_PWM.h"
#include "MW_I2C.h"
#endif                                 /* A2_V4_COMMON_INCLUDES_ */

extern void DCM_SEND_Init(void);
extern void DCM_SEND_Term(void);

#endif                                 /* RTW_HEADER_DCM_SEND_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
