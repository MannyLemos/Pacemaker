/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: DCM_SEND.c
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

#include "DCM_SEND.h"

/* Include model header file for global data */
#include "A2_V4.h"
#include "A2_V4_private.h"

/* Forward declaration for local functions */
static void A2_V4_SystemCore_setup(freedomk64f_SCIWrite_A2_V4_T *obj);
static void A2_V4_SystemCore_release(const freedomk64f_SCIWrite_A2_V4_T *obj);
static void A2_V4_SystemCore_delete(const freedomk64f_SCIWrite_A2_V4_T *obj);
static void matlabCodegenHandle_matlabCodeg(freedomk64f_SCIWrite_A2_V4_T *obj);
static void A2_V4_SystemCore_setup(freedomk64f_SCIWrite_A2_V4_T *obj)
{
  uint32_T RxPinLoc;
  uint32_T SCIModuleLoc;
  MW_SCI_StopBits_Type StopBitsValue;
  MW_SCI_Parity_Type ParityValue;
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  RxPinLoc = MW_UNDEFINED_VALUE;
  SCIModuleLoc = 0;
  obj->MW_SCIHANDLE = MW_SCI_Open(&SCIModuleLoc, false, RxPinLoc, 10U);
  MW_SCI_SetBaudrate(obj->MW_SCIHANDLE, 115200U);
  StopBitsValue = MW_SCI_STOPBITS_1;
  ParityValue = MW_SCI_PARITY_NONE;
  MW_SCI_SetFrameFormat(obj->MW_SCIHANDLE, 8, ParityValue, StopBitsValue);
  obj->isSetupComplete = true;
}

static void A2_V4_SystemCore_release(const freedomk64f_SCIWrite_A2_V4_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_SCI_Close(obj->MW_SCIHANDLE);
  }
}

static void A2_V4_SystemCore_delete(const freedomk64f_SCIWrite_A2_V4_T *obj)
{
  A2_V4_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(freedomk64f_SCIWrite_A2_V4_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    A2_V4_SystemCore_delete(obj);
  }
}

/* System initialize for Simulink Function: '<S1>/Function Call' */
void DCM_SEND_Init(void)
{
  /* Start for MATLABSystem: '<S5>/Serial Transmit' */
  A2_V4_DW.obj_l0.isInitialized = 0;
  A2_V4_DW.obj_l0.matlabCodegenIsDeleted = false;
  A2_V4_SystemCore_setup(&A2_V4_DW.obj_l0);
}

/* Output and update for Simulink Function: '<S1>/Function Call' */
void DCM_SEND(void)
{
  uint8_T status;
  int32_T i;

  /* SignalConversion generated from: '<S5>/In1' */
  A2_V4_B.LOWER_RATE_LIMIT = A2_V4_B.LOWER_RATE_LIMIT_n;

  /* SignalConversion generated from: '<S5>/In2' */
  A2_V4_B.UPPER_RATE_LIMIT = A2_V4_B.UPPER_RATE_LIMIT_j;

  /* SignalConversion generated from: '<S5>/In3' */
  A2_V4_B.PVARP = A2_V4_B.PVARP_p;

  /* SignalConversion generated from: '<S5>/In4' */
  A2_V4_B.MODE = A2_V4_B.MODE_a;

  /* SignalConversion generated from: '<S5>/In5' */
  A2_V4_B.AV_DELAY = A2_V4_B.AV_DELAY_a;

  /* SignalConversion generated from: '<S5>/In6' */
  A2_V4_B.REACT_TIME = A2_V4_B.REACT_TIME_f;

  /* SignalConversion generated from: '<S5>/In7' */
  A2_V4_B.RESP_FACTOR = A2_V4_B.RESP_FACTOR_o;

  /* SignalConversion generated from: '<S5>/In8' */
  A2_V4_B.ACTIVITY_THRESH = A2_V4_B.ACTIVITY_THRESH_j;

  /* SignalConversion generated from: '<S5>/In9' */
  A2_V4_B.RCVR_TIME = A2_V4_B.RCVR_TIME_b;

  /* SignalConversion generated from: '<S5>/In10' */
  A2_V4_B.MAX_SENSE = A2_V4_B.MAX_SENSE_m;

  /* SignalConversion generated from: '<S5>/In12' */
  A2_V4_B.ATR_AMP = A2_V4_B.ATR_AMP_k;

  /* SignalConversion generated from: '<S5>/In13' */
  A2_V4_B.ATR_PW = A2_V4_B.ATR_PW_a;

  /* SignalConversion generated from: '<S5>/In14' */
  A2_V4_B.ARP = A2_V4_B.ARP_o;

  /* SignalConversion generated from: '<S5>/In15' */
  A2_V4_B.ATR_THRESH = A2_V4_B.ATR_THRESH_c;

  /* SignalConversion generated from: '<S5>/In16' */
  A2_V4_B.ATR_SENSE = A2_V4_B.ATR_SENSE_f;

  /* SignalConversion generated from: '<S5>/In17' */
  A2_V4_B.VENT_AMP = A2_V4_B.VENT_AMP_m;

  /* SignalConversion generated from: '<S5>/In18' */
  A2_V4_B.VENT_PW = A2_V4_B.VENT_PW_c;

  /* SignalConversion generated from: '<S5>/In19' */
  A2_V4_B.VRP = A2_V4_B.VRP_g;

  /* SignalConversion generated from: '<S5>/In20' */
  A2_V4_B.VENT_THRESH = A2_V4_B.VENT_THRESH_b;

  /* SignalConversion generated from: '<S5>/In21' */
  A2_V4_B.VENT_SENSE = A2_V4_B.VENT_SENSE_a;

  /* SignalConversion generated from: '<S5>/In11' */
  A2_V4_B.ATR_SIGNAL = A2_V4_B.ATR_SIGNAL_f;

  /* SignalConversion generated from: '<S5>/In22' */
  A2_V4_B.VENT_SIGNAL = A2_V4_B.VENT_SIGNAL_c;

  /* S-Function (any2byte): '<S5>/Byte Pack26' */

  /* Pack: <S5>/Byte Pack26 */
  (void) memcpy(&A2_V4_B.BytePack26[0], &A2_V4_B.MODE,
                2);

  /* S-Function (any2byte): '<S5>/Byte Pack 1' */

  /* Pack: <S5>/Byte Pack 1 */
  (void) memcpy(&A2_V4_B.BytePack1[0], &A2_V4_B.LOWER_RATE_LIMIT,
                2);

  /* S-Function (any2byte): '<S5>/Byte Pack 2' */

  /* Pack: <S5>/Byte Pack 2 */
  (void) memcpy(&A2_V4_B.BytePack2[0], &A2_V4_B.UPPER_RATE_LIMIT,
                2);

  /* S-Function (any2byte): '<S5>/Byte Pack 3' */

  /* Pack: <S5>/Byte Pack 3 */
  (void) memcpy(&A2_V4_B.BytePack3[0], &A2_V4_B.PVARP,
                2);

  /* S-Function (any2byte): '<S5>/Byte Pack27' */

  /* Pack: <S5>/Byte Pack27 */
  (void) memcpy(&A2_V4_B.BytePack27[0], &A2_V4_B.AV_DELAY,
                2);

  /* S-Function (any2byte): '<S5>/Byte Pack28' */

  /* Pack: <S5>/Byte Pack28 */
  (void) memcpy(&A2_V4_B.BytePack28[0], &A2_V4_B.REACT_TIME,
                2);

  /* S-Function (any2byte): '<S5>/Byte Pack29' */

  /* Pack: <S5>/Byte Pack29 */
  (void) memcpy(&A2_V4_B.BytePack29[0], &A2_V4_B.RESP_FACTOR,
                2);

  /* S-Function (any2byte): '<S5>/Byte Pack30' */

  /* Pack: <S5>/Byte Pack30 */
  (void) memcpy(&A2_V4_B.BytePack30[0], &A2_V4_B.ACTIVITY_THRESH,
                8);

  /* S-Function (any2byte): '<S5>/Byte Pack31' */

  /* Pack: <S5>/Byte Pack31 */
  (void) memcpy(&A2_V4_B.BytePack31[0], &A2_V4_B.RCVR_TIME,
                2);

  /* S-Function (any2byte): '<S5>/Byte Pack32' */

  /* Pack: <S5>/Byte Pack32 */
  (void) memcpy(&A2_V4_B.BytePack32[0], &A2_V4_B.MAX_SENSE,
                2);

  /* S-Function (any2byte): '<S5>/Byte Pack34' */

  /* Pack: <S5>/Byte Pack34 */
  (void) memcpy(&A2_V4_B.BytePack34[0], &A2_V4_B.ATR_AMP,
                8);

  /* S-Function (any2byte): '<S5>/Byte Pack35' */

  /* Pack: <S5>/Byte Pack35 */
  (void) memcpy(&A2_V4_B.BytePack35[0], &A2_V4_B.ATR_PW,
                2);

  /* S-Function (any2byte): '<S5>/Byte Pack36' */

  /* Pack: <S5>/Byte Pack36 */
  (void) memcpy(&A2_V4_B.BytePack36[0], &A2_V4_B.ARP,
                2);

  /* S-Function (any2byte): '<S5>/Byte Pack37' */

  /* Pack: <S5>/Byte Pack37 */
  (void) memcpy(&A2_V4_B.BytePack37[0], &A2_V4_B.ATR_THRESH,
                8);

  /* S-Function (any2byte): '<S5>/Byte Pack38' */

  /* Pack: <S5>/Byte Pack38 */
  (void) memcpy(&A2_V4_B.BytePack38[0], &A2_V4_B.ATR_SENSE,
                8);

  /* S-Function (any2byte): '<S5>/Byte Pack39' */

  /* Pack: <S5>/Byte Pack39 */
  (void) memcpy(&A2_V4_B.BytePack39[0], &A2_V4_B.VENT_AMP,
                8);

  /* S-Function (any2byte): '<S5>/Byte Pack40' */

  /* Pack: <S5>/Byte Pack40 */
  (void) memcpy(&A2_V4_B.BytePack40[0], &A2_V4_B.VENT_PW,
                2);

  /* S-Function (any2byte): '<S5>/Byte Pack41' */

  /* Pack: <S5>/Byte Pack41 */
  (void) memcpy(&A2_V4_B.BytePack41[0], &A2_V4_B.VRP,
                2);

  /* S-Function (any2byte): '<S5>/Byte Pack42' */

  /* Pack: <S5>/Byte Pack42 */
  (void) memcpy(&A2_V4_B.BytePack42[0], &A2_V4_B.VENT_THRESH,
                8);

  /* S-Function (any2byte): '<S5>/Byte Pack43' */

  /* Pack: <S5>/Byte Pack43 */
  (void) memcpy(&A2_V4_B.BytePack43[0], &A2_V4_B.VENT_SENSE,
                8);

  /* S-Function (any2byte): '<S5>/Byte Pack44' */

  /* Pack: <S5>/Byte Pack44 */
  (void) memcpy(&A2_V4_B.BytePack44[0], &A2_V4_B.ATR_SIGNAL,
                8);

  /* S-Function (any2byte): '<S5>/Byte Pack45' */

  /* Pack: <S5>/Byte Pack45 */
  (void) memcpy(&A2_V4_B.BytePack45[0], &A2_V4_B.VENT_SIGNAL,
                8);

  /* SignalConversion generated from: '<S5>/Serial Transmit' */
  A2_V4_B.TmpSignalConversionAtSerial[0] = A2_V4_B.BytePack26[0];
  A2_V4_B.TmpSignalConversionAtSerial[2] = A2_V4_B.BytePack1[0];
  A2_V4_B.TmpSignalConversionAtSerial[4] = A2_V4_B.BytePack2[0];
  A2_V4_B.TmpSignalConversionAtSerial[6] = A2_V4_B.BytePack3[0];
  A2_V4_B.TmpSignalConversionAtSerial[8] = A2_V4_B.BytePack27[0];
  A2_V4_B.TmpSignalConversionAtSerial[10] = A2_V4_B.BytePack28[0];
  A2_V4_B.TmpSignalConversionAtSerial[12] = A2_V4_B.BytePack29[0];
  A2_V4_B.TmpSignalConversionAtSerial[1] = A2_V4_B.BytePack26[1];
  A2_V4_B.TmpSignalConversionAtSerial[3] = A2_V4_B.BytePack1[1];
  A2_V4_B.TmpSignalConversionAtSerial[5] = A2_V4_B.BytePack2[1];
  A2_V4_B.TmpSignalConversionAtSerial[7] = A2_V4_B.BytePack3[1];
  A2_V4_B.TmpSignalConversionAtSerial[9] = A2_V4_B.BytePack27[1];
  A2_V4_B.TmpSignalConversionAtSerial[11] = A2_V4_B.BytePack28[1];
  A2_V4_B.TmpSignalConversionAtSerial[13] = A2_V4_B.BytePack29[1];
  A2_V4_B.TmpSignalConversionAtSerial[22] = A2_V4_B.BytePack31[0];
  A2_V4_B.TmpSignalConversionAtSerial[24] = A2_V4_B.BytePack32[0];
  A2_V4_B.TmpSignalConversionAtSerial[23] = A2_V4_B.BytePack31[1];
  A2_V4_B.TmpSignalConversionAtSerial[25] = A2_V4_B.BytePack32[1];
  A2_V4_B.TmpSignalConversionAtSerial[34] = A2_V4_B.BytePack35[0];
  A2_V4_B.TmpSignalConversionAtSerial[36] = A2_V4_B.BytePack36[0];
  A2_V4_B.TmpSignalConversionAtSerial[35] = A2_V4_B.BytePack35[1];
  A2_V4_B.TmpSignalConversionAtSerial[37] = A2_V4_B.BytePack36[1];
  A2_V4_B.TmpSignalConversionAtSerial[62] = A2_V4_B.BytePack40[0];
  A2_V4_B.TmpSignalConversionAtSerial[64] = A2_V4_B.BytePack41[0];
  A2_V4_B.TmpSignalConversionAtSerial[63] = A2_V4_B.BytePack40[1];
  A2_V4_B.TmpSignalConversionAtSerial[65] = A2_V4_B.BytePack41[1];
  for (i = 0; i < 8; i++) {
    A2_V4_B.TmpSignalConversionAtSerial[i + 14] = A2_V4_B.BytePack30[i];
    A2_V4_B.TmpSignalConversionAtSerial[i + 26] = A2_V4_B.BytePack34[i];
    A2_V4_B.TmpSignalConversionAtSerial[i + 38] = A2_V4_B.BytePack37[i];
    A2_V4_B.TmpSignalConversionAtSerial[i + 46] = A2_V4_B.BytePack38[i];
    A2_V4_B.TmpSignalConversionAtSerial[i + 54] = A2_V4_B.BytePack39[i];
    A2_V4_B.TmpSignalConversionAtSerial[i + 66] = A2_V4_B.BytePack42[i];
    A2_V4_B.TmpSignalConversionAtSerial[i + 74] = A2_V4_B.BytePack43[i];
    A2_V4_B.TmpSignalConversionAtSerial[i + 82] = A2_V4_B.BytePack44[i];
    A2_V4_B.TmpSignalConversionAtSerial[i + 90] = A2_V4_B.BytePack45[i];
  }

  /* End of SignalConversion generated from: '<S5>/Serial Transmit' */

  /* MATLABSystem: '<S5>/Serial Transmit' */
  status = 1U;
  while (status != 0) {
    memcpy((void *)&A2_V4_B.TxDataLocChar[0], (void *)
           &A2_V4_B.TmpSignalConversionAtSerial[0], (uint32_T)((size_t)98 *
            sizeof(uint8_T)));
    status = MW_SCI_Transmit(A2_V4_DW.obj_l0.MW_SCIHANDLE, A2_V4_B.TxDataLocChar,
      98U);
  }

  /* End of MATLABSystem: '<S5>/Serial Transmit' */
}

/* Termination for Simulink Function: '<S1>/Function Call' */
void DCM_SEND_Term(void)
{
  /* Terminate for MATLABSystem: '<S5>/Serial Transmit' */
  matlabCodegenHandle_matlabCodeg(&A2_V4_DW.obj_l0);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
