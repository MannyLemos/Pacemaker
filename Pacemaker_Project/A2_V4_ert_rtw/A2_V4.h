/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: A2_V4.h
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

#ifndef RTW_HEADER_A2_V4_h_
#define RTW_HEADER_A2_V4_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef A2_V4_COMMON_INCLUDES_
# define A2_V4_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "MW_digitalIO.h"
#include "MW_AnalogIn.h"
#include "MW_SCI.h"
#include "MW_PWM.h"
#include "MW_I2C.h"
#endif                                 /* A2_V4_COMMON_INCLUDES_ */

#include "A2_V4_types.h"

/* Child system includes */
#include "DCM_SEND_private.h"
#include "DCM_SEND.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T reverseSamples[128];
  real_T reverseT[128];
  real_T reverseS[128];
  uint8_T TxDataLocChar[98];
  uint8_T TmpSignalConversionAtSerial[98];
  uint8_T RxData[84];
  uint8_T RxDataLocChar[84];
  MW_AnalogIn_TriggerSource_Type trigger_val;
  uint32_T TxPinLoc;
  uint32_T SCIModuleLoc;
  MW_SCI_StopBits_Type StopBitsValue;
  MW_SCI_Parity_Type ParityValue;
  MW_I2C_Mode_Type ModeType;
  uint32_T i2cname;
  real_T Divide;                       /* '<S3>/Divide' */
  real_T Multiply;                     /* '<S7>/Multiply' */
  real_T Multiply_i;                   /* '<S8>/Multiply' */
  real_T Divide1;                      /* '<S13>/Divide1' */
  real_T MovingStandardDeviation;      /* '<S15>/Moving Standard Deviation' */
  real_T PACING_REF_PWM;               /* '<S3>/Chart' */
  real_T ACTIVITY_THRESH;
  real_T ATR_AMP;
  real_T ATR_THRESH;
  real_T ATR_SENSE;
  real_T VENT_AMP;
  real_T VENT_THRESH;
  real_T VENT_SENSE;
  real_T ATR_SIGNAL;
  real_T VENT_SIGNAL;
  real_T ACTIVITY_THRESH_j;            /* '<S1>/From DCM' */
  real_T ATR_AMP_k;                    /* '<S1>/From DCM' */
  real_T ATR_THRESH_c;                 /* '<S1>/From DCM' */
  real_T ATR_SENSE_f;                  /* '<S1>/From DCM' */
  real_T VENT_AMP_m;                   /* '<S1>/From DCM' */
  real_T VENT_THRESH_b;                /* '<S1>/From DCM' */
  real_T VENT_SENSE_a;                 /* '<S1>/From DCM' */
  real_T ATR_SIGNAL_f;                 /* '<S1>/ATR_SIGNAL' */
  real_T VENT_SIGNAL_c;                /* '<S1>/VENT_SIGNAL' */
  real_T T;
  real_T S;
  real_T M;
  real_T rtb_FXOS87006AxesSensor1_idx_0;
  real_T rtb_FXOS87006AxesSensor1_idx_1;
  real_T rtb_FXOS87006AxesSensor1_idx_2;
  int32_T i;
  uint16_T ADAPTED_RATE;               /* '<S3>/Chart1' */
  uint16_T LOWER_RATE_LIMIT;
  uint16_T UPPER_RATE_LIMIT;
  uint16_T PVARP;
  uint16_T MODE;
  uint16_T AV_DELAY;
  uint16_T REACT_TIME;
  uint16_T RESP_FACTOR;
  uint16_T RCVR_TIME;
  uint16_T MAX_SENSE;
  uint16_T ATR_PW;
  uint16_T ARP;
  uint16_T VENT_PW;
  uint16_T VRP;
  uint16_T LOWER_RATE_LIMIT_n;         /* '<S1>/From DCM' */
  uint16_T UPPER_RATE_LIMIT_j;         /* '<S1>/From DCM' */
  uint16_T PVARP_p;                    /* '<S1>/From DCM' */
  uint16_T MODE_a;                     /* '<S1>/From DCM' */
  uint16_T AV_DELAY_a;                 /* '<S1>/From DCM' */
  uint16_T REACT_TIME_f;               /* '<S1>/From DCM' */
  uint16_T RESP_FACTOR_o;              /* '<S1>/From DCM' */
  uint16_T RCVR_TIME_b;                /* '<S1>/From DCM' */
  uint16_T MAX_SENSE_m;                /* '<S1>/From DCM' */
  uint16_T ATR_PW_a;                   /* '<S1>/From DCM' */
  uint16_T ARP_o;                      /* '<S1>/From DCM' */
  uint16_T VENT_PW_c;                  /* '<S1>/From DCM' */
  uint16_T VRP_g;                      /* '<S1>/From DCM' */
  uint8_T BytePack26[2];               /* '<S5>/Byte Pack26' */
  uint8_T BytePack1[2];                /* '<S5>/Byte Pack 1' */
  uint8_T BytePack2[2];                /* '<S5>/Byte Pack 2' */
  uint8_T BytePack3[2];                /* '<S5>/Byte Pack 3' */
  uint8_T BytePack27[2];               /* '<S5>/Byte Pack27' */
  uint8_T BytePack28[2];               /* '<S5>/Byte Pack28' */
  uint8_T BytePack29[2];               /* '<S5>/Byte Pack29' */
  uint8_T BytePack30[8];               /* '<S5>/Byte Pack30' */
  uint8_T BytePack31[2];               /* '<S5>/Byte Pack31' */
  uint8_T BytePack32[2];               /* '<S5>/Byte Pack32' */
  uint8_T BytePack34[8];               /* '<S5>/Byte Pack34' */
  uint8_T BytePack35[2];               /* '<S5>/Byte Pack35' */
  uint8_T BytePack36[2];               /* '<S5>/Byte Pack36' */
  uint8_T BytePack37[8];               /* '<S5>/Byte Pack37' */
  uint8_T BytePack38[8];               /* '<S5>/Byte Pack38' */
  uint8_T BytePack39[8];               /* '<S5>/Byte Pack39' */
  uint8_T BytePack40[2];               /* '<S5>/Byte Pack40' */
  uint8_T BytePack41[2];               /* '<S5>/Byte Pack41' */
  uint8_T BytePack42[8];               /* '<S5>/Byte Pack42' */
  uint8_T BytePack43[8];               /* '<S5>/Byte Pack43' */
  uint8_T BytePack44[8];               /* '<S5>/Byte Pack44' */
  uint8_T BytePack45[8];               /* '<S5>/Byte Pack45' */
  uint8_T b_SwappedDataBytes[2];
  uint8_T b_RegisterValue;
  uint8_T status;
  boolean_T OR3;                       /* '<S1>/OR3' */
  boolean_T ATR_PACE_CTRL;             /* '<S3>/Chart' */
  boolean_T ATR_GND_CTRL;              /* '<S3>/Chart' */
  boolean_T Z_ATR_CTRL;                /* '<S3>/Chart' */
  boolean_T VENT_PACE_CTRL;            /* '<S3>/Chart' */
  boolean_T VENT_GND_CTRL;             /* '<S3>/Chart' */
  boolean_T Z_VENT_CTRL;               /* '<S3>/Chart' */
  boolean_T PACE_GND_CTRL;             /* '<S3>/Chart' */
  boolean_T PACE_CHARGE_CTRL;          /* '<S3>/Chart' */
  boolean_T FRONTEND_CTRL;             /* '<S3>/Chart' */
  boolean_T DigitalRead;               /* '<S1>/Digital Read' */
} B_A2_V4_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  g_dsp_private_SlidingWindowVa_T gobj_1;/* '<S15>/Moving Standard Deviation' */
  g_dsp_private_SlidingWindowVa_T gobj_2;/* '<S15>/Moving Standard Deviation' */
  dsp_simulink_MovingStandardDe_T obj; /* '<S15>/Moving Standard Deviation' */
  freedomk64f_fxos8700_A2_V4_T obj_p;  /* '<S15>/FXOS8700 6-Axes Sensor1' */
  freedomk64f_AnalogInput_A2_V4_T obj_l;/* '<S1>/ATR_SIGNAL' */
  freedomk64f_AnalogInput_A2_V4_T obj_o;/* '<S1>/VENT_SIGNAL' */
  freedomk64f_DigitalRead_A2_V4_T obj_m;/* '<S1>/Digital Read' */
  freedomk64f_DigitalRead_A2_V4_T obj_h;/* '<S1>/Digital Read3' */
  freedomk64f_PushButton_A2_V4_T obj_e;/* '<S1>/Push Button' */
  freedomk64f_SCIRead_A2_V4_T obj_ob;  /* '<S1>/Serial Receive' */
  freedomk64f_SCIWrite_A2_V4_T obj_l0; /* '<S5>/Serial Transmit' */
  freedomk64f_DigitalWrite_A2_V_T obj_pu;/* '<S6>/Digital Write 1' */
  freedomk64f_DigitalWrite_A2_V_T obj_hi;/* '<S6>/Digital Write 2' */
  freedomk64f_DigitalWrite_A2_V_T obj_o1;/* '<S6>/Digital Write 3' */
  freedomk64f_DigitalWrite_A2_V_T obj_og;/* '<S6>/Digital Write 4' */
  freedomk64f_DigitalWrite_A2_V_T obj_pq;/* '<S6>/Digital Write 5' */
  freedomk64f_DigitalWrite_A2_V_T obj_n;/* '<S6>/Digital Write 6' */
  freedomk64f_DigitalWrite_A2_V_T obj_lb;/* '<S6>/Digital Write 7' */
  freedomk64f_DigitalWrite_A2_V_T obj_el;/* '<S6>/Digital Write 9' */
  freedomk64f_DigitalWrite_A2_V_T obj_eh;/* '<S6>/Digital Write 12' */
  freedomk64f_PWMOutput_A2_V4_T obj_pd;/* '<S6>/Digital Write 8' */
  freedomk64f_PWMOutput_A2_V4_T obj_i; /* '<S6>/Digital Write 10' */
  freedomk64f_PWMOutput_A2_V4_T obj_ni;/* '<S6>/Digital Write 11' */
  uint32_T temporalCounter_i1;         /* '<S3>/Chart' */
  uint16_T step_up;                    /* '<S3>/Chart1' */
  uint16_T step_down;                  /* '<S3>/Chart1' */
  uint16_T temporalCounter_i1_n;       /* '<S3>/Chart1' */
  uint8_T is_active_c4_A2_V4;          /* '<S3>/Chart1' */
  uint8_T is_c4_A2_V4;                 /* '<S3>/Chart1' */
  uint8_T is_active_c3_A2_V4;          /* '<S3>/Chart' */
  uint8_T is_c3_A2_V4;                 /* '<S3>/Chart' */
  uint8_T is_active_c1_A2_V4;          /* '<S1>/From DCM' */
  uint8_T is_c1_A2_V4;                 /* '<S1>/From DCM' */
  boolean_T objisempty;                /* '<S15>/FXOS8700 6-Axes Sensor1' */
  boolean_T objisempty_c;              /* '<S15>/Moving Standard Deviation' */
  boolean_T HIGH;                      /* '<S3>/Chart' */
  boolean_T LOW;                       /* '<S3>/Chart' */
  boolean_T objisempty_p;              /* '<S6>/Digital Write 1' */
  boolean_T objisempty_f;              /* '<S6>/Digital Write 2' */
  boolean_T objisempty_ck;             /* '<S6>/Digital Write 3' */
  boolean_T objisempty_i;              /* '<S6>/Digital Write 4' */
  boolean_T objisempty_if;             /* '<S6>/Digital Write 5' */
  boolean_T objisempty_n;              /* '<S6>/Digital Write 6' */
  boolean_T objisempty_j;              /* '<S6>/Digital Write 7' */
  boolean_T objisempty_d;              /* '<S6>/Digital Write 8' */
  boolean_T objisempty_g;              /* '<S6>/Digital Write 9' */
  boolean_T objisempty_o;              /* '<S6>/Digital Write 12' */
  boolean_T objisempty_k;              /* '<S6>/Digital Write 10' */
  boolean_T objisempty_l;              /* '<S6>/Digital Write 11' */
  boolean_T objisempty_os;             /* '<S1>/Serial Receive' */
  boolean_T objisempty_ng;             /* '<S1>/ATR_SIGNAL' */
  boolean_T objisempty_o0;             /* '<S1>/VENT_SIGNAL' */
  boolean_T objisempty_le;             /* '<S1>/Digital Read' */
  boolean_T objisempty_ckf;            /* '<S1>/Digital Read3' */
  boolean_T objisempty_h;              /* '<S1>/Push Button' */
} DW_A2_V4_T;

/* Parameters (default storage) */
struct P_A2_V4_T_ {
  uint16_T CompareToConstant_const;   /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S11>/Constant'
                                       */
  uint16_T CompareToConstant1_const; /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S12>/Constant'
                                      */
  real_T PushButton_SampleTime;        /* Expression: SampleTime1
                                        * Referenced by: '<S1>/Push Button'
                                        */
  real_T DigitalRead3_SampleTime;      /* Expression: SampleTime
                                        * Referenced by: '<S1>/Digital Read3'
                                        */
  real_T DigitalRead_SampleTime;       /* Expression: SampleTime
                                        * Referenced by: '<S1>/Digital Read'
                                        */
  real_T VENT_SIGNAL_SampleTime;       /* Expression: SampleTime
                                        * Referenced by: '<S1>/VENT_SIGNAL'
                                        */
  real_T ATR_SIGNAL_SampleTime;        /* Expression: SampleTime
                                        * Referenced by: '<S1>/ATR_SIGNAL'
                                        */
  real_T SerialReceive_SampleTime;     /* Expression: -1
                                        * Referenced by: '<S1>/Serial Receive'
                                        */
  real_T FXOS87006AxesSensor1_SampleTime;/* Expression: -1
                                          * Referenced by: '<S15>/FXOS8700 6-Axes Sensor1'
                                          */
  real_T Activity_Y0;                  /* Computed Parameter: Activity_Y0
                                        * Referenced by: '<S15>/Activity'
                                        */
  real_T msecmin_Value;                /* Expression: 60000
                                        * Referenced by: '<S3>/msec//min'
                                        */
  real_T Constant1_Value;              /* Expression: 5
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T Multiply_Gain;                /* Expression: 100
                                        * Referenced by: '<S7>/Multiply'
                                        */
  real_T Multiply_Gain_l;              /* Expression: 100
                                        * Referenced by: '<S8>/Multiply'
                                        */
  real_T Constant_Value;               /* Expression: 16
                                        * Referenced by: '<S14>/Constant'
                                        */
  real_T Constant2_Value;              /* Expression: 30000
                                        * Referenced by: '<S13>/Constant2'
                                        */
  real_T Constant_Value_i;             /* Expression: 3.3
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T Gain1_Gain;                   /* Expression: 100
                                        * Referenced by: '<S3>/Gain1'
                                        */
  real_T Gain_Gain;                    /* Expression: 100
                                        * Referenced by: '<S3>/Gain'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_A2_V4_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_A2_V4_T A2_V4_P;

/* Block signals (default storage) */
extern B_A2_V4_T A2_V4_B;

/* Block states (default storage) */
extern DW_A2_V4_T A2_V4_DW;

/* Model entry point functions */
extern void A2_V4_initialize(void);
extern void A2_V4_step(void);
extern void A2_V4_terminate(void);

/* Real-time Model object */
extern RT_MODEL_A2_V4_T *const A2_V4_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'A2_V4'
 * '<S1>'   : 'A2_V4/Monitored'
 * '<S2>'   : 'A2_V4/Output'
 * '<S3>'   : 'A2_V4/Stateflow'
 * '<S4>'   : 'A2_V4/Monitored/From DCM'
 * '<S5>'   : 'A2_V4/Monitored/Function Call'
 * '<S6>'   : 'A2_V4/Output/Digital Write Blocks'
 * '<S7>'   : 'A2_V4/Stateflow/Achieving ATR_DUTY_CYCLE'
 * '<S8>'   : 'A2_V4/Stateflow/Achieving VENT_DUTY_CYCLE'
 * '<S9>'   : 'A2_V4/Stateflow/Chart'
 * '<S10>'  : 'A2_V4/Stateflow/Chart1'
 * '<S11>'  : 'A2_V4/Stateflow/Compare To Constant'
 * '<S12>'  : 'A2_V4/Stateflow/Compare To Constant1'
 * '<S13>'  : 'A2_V4/Stateflow/Subsystem'
 * '<S14>'  : 'A2_V4/Stateflow/Subsystem1'
 * '<S15>'  : 'A2_V4/Stateflow/Subsystem2'
 * '<S16>'  : 'A2_V4/Stateflow/Subsystem1/Multiply-Add'
 */
#endif                                 /* RTW_HEADER_A2_V4_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
