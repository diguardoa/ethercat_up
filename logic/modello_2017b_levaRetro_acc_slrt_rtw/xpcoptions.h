#ifndef __modello_2017b_levaRetro_acc_XPCOPTIONS_H___
#define __modello_2017b_levaRetro_acc_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "modello_2017b_levaRetro_acc.h"
#define XPCMDSSUPPORT                  0
#define MDSTASKSNUM                    0
#define FULLMULTITHREAD                0
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(P_modello_2017b_levaRetro_acc_T))
#define SIMMODE                        0
#define LOGTET                         1
#define LOGBUFSIZE                     4000*(300)*(3+2)
#define PROFILINGFLAG                  1
#define EVENTNUMBER                    50
#define IRQ_NO                         0
#define IO_IRQ                         0
#define WWW_ACCESS_LEVEL               0
#define CPUCLOCK                       0
#define MAXOVERLOAD                    1000000
#define MAXOVERLOADLEN                 1000000
#define XPCMODELSTACKSIZEKB            2048
#define XPCSTARTUPFLAG                 1
#define PTLOADPARAMFLAG                0
#define DOUBLEBUFFERING                0
#define SLRTFTZOFFFLAG                 0

/* Change all stepsize using the newBaseRateStepSize */
void modello_2017b_levaRetro_acc_ChangeStepSize(real_T newBaseRateStepSize,
  RT_MODEL_modello_2017b_levaRetro_acc_T *const modello_2017b_levaRetro_acc_M)
{
  real_T ratio = newBaseRateStepSize / 0.00025;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  modello_2017b_levaRetro_acc_M->Timing.stepSize0 =
    modello_2017b_levaRetro_acc_M->Timing.stepSize0 * ratio;
  modello_2017b_levaRetro_acc_M->Timing.stepSize1 =
    modello_2017b_levaRetro_acc_M->Timing.stepSize1 * ratio;
  modello_2017b_levaRetro_acc_M->Timing.stepSize2 =
    modello_2017b_levaRetro_acc_M->Timing.stepSize2 * ratio;
  modello_2017b_levaRetro_acc_M->Timing.stepSize3 =
    modello_2017b_levaRetro_acc_M->Timing.stepSize3 * ratio;
  modello_2017b_levaRetro_acc_M->Timing.stepSize4 =
    modello_2017b_levaRetro_acc_M->Timing.stepSize4 * ratio;
  modello_2017b_levaRetro_acc_M->Timing.stepSize =
    modello_2017b_levaRetro_acc_M->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  modello_2017b_levaRetro_acc_ChangeStepSize(stepSize,
    modello_2017b_levaRetro_acc_M);
}

void XPCCALLCONV SLRTSetErrorStatus(const char * errMsg)
{
  rtmSetErrorStatus(modello_2017b_levaRetro_acc_M, errMsg);
}

#endif                                 /* __modello_2017b_levaRetro_acc_XPCOPTIONS_H___ */
