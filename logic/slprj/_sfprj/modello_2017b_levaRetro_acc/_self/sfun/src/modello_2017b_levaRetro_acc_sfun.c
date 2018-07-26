/* Include files */

#include "modello_2017b_levaRetro_acc_sfun.h"
#include "modello_2017b_levaRetro_acc_sfun_debug_macros.h"
#include "c1_modello_2017b_levaRetro_acc.h"
#include "c2_modello_2017b_levaRetro_acc.h"
#include "c3_modello_2017b_levaRetro_acc.h"
#include "c27_modello_2017b_levaRetro_acc.h"
#include "c52_modello_2017b_levaRetro_acc.h"
#include "c152_modello_2017b_levaRetro_acc.h"
#include "c451_modello_2017b_levaRetro_acc.h"
#include "c463_modello_2017b_levaRetro_acc.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _modello_2017b_levaRetro_accMachineNumber_;

/* Function Declarations */

/* Function Definitions */
void modello_2017b_levaRetro_acc_initializer(void)
{
}

void modello_2017b_levaRetro_acc_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_modello_2017b_levaRetro_acc_method_dispatcher(SimStruct
  *simstructPtr, unsigned int chartFileNumber, const char* specsCksum, int_T
  method, void *data)
{
  if (chartFileNumber==1) {
    c1_modello_2017b_levaRetro_acc_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_modello_2017b_levaRetro_acc_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==3) {
    c3_modello_2017b_levaRetro_acc_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==27) {
    c27_modello_2017b_levaRetro_acc_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==52) {
    c52_modello_2017b_levaRetro_acc_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==152) {
    c152_modello_2017b_levaRetro_acc_method_dispatcher(simstructPtr, method,
      data);
    return 1;
  }

  if (chartFileNumber==451) {
    c451_modello_2017b_levaRetro_acc_method_dispatcher(simstructPtr, method,
      data);
    return 1;
  }

  if (chartFileNumber==463) {
    c463_modello_2017b_levaRetro_acc_method_dispatcher(simstructPtr, method,
      data);
    return 1;
  }

  return 0;
}

unsigned int sf_modello_2017b_levaRetro_acc_process_testpoint_info_call( int
  nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char machineName[128];
  if (nrhs < 3 || !mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;

  /* Possible call to get testpoint info. */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_testpoint_info"))
    return 0;
  mxGetString(prhs[1], machineName, sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (!strcmp(machineName, "modello_2017b_levaRetro_acc")) {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
    switch (chartFileNumber) {
     case 1:
      {
        extern mxArray *sf_c1_modello_2017b_levaRetro_acc_get_testpoint_info
          (void);
        plhs[0] = sf_c1_modello_2017b_levaRetro_acc_get_testpoint_info();
        break;
      }

     case 2:
      {
        extern mxArray *sf_c2_modello_2017b_levaRetro_acc_get_testpoint_info
          (void);
        plhs[0] = sf_c2_modello_2017b_levaRetro_acc_get_testpoint_info();
        break;
      }

     case 3:
      {
        extern mxArray *sf_c3_modello_2017b_levaRetro_acc_get_testpoint_info
          (void);
        plhs[0] = sf_c3_modello_2017b_levaRetro_acc_get_testpoint_info();
        break;
      }

     case 27:
      {
        extern mxArray *sf_c27_modello_2017b_levaRetro_acc_get_testpoint_info
          (void);
        plhs[0] = sf_c27_modello_2017b_levaRetro_acc_get_testpoint_info();
        break;
      }

     case 52:
      {
        extern mxArray *sf_c52_modello_2017b_levaRetro_acc_get_testpoint_info
          (void);
        plhs[0] = sf_c52_modello_2017b_levaRetro_acc_get_testpoint_info();
        break;
      }

     case 152:
      {
        extern mxArray *sf_c152_modello_2017b_levaRetro_acc_get_testpoint_info
          (void);
        plhs[0] = sf_c152_modello_2017b_levaRetro_acc_get_testpoint_info();
        break;
      }

     case 451:
      {
        extern mxArray *sf_c451_modello_2017b_levaRetro_acc_get_testpoint_info
          (void);
        plhs[0] = sf_c451_modello_2017b_levaRetro_acc_get_testpoint_info();
        break;
      }

     case 463:
      {
        extern mxArray *sf_c463_modello_2017b_levaRetro_acc_get_testpoint_info
          (void);
        plhs[0] = sf_c463_modello_2017b_levaRetro_acc_get_testpoint_info();
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }

    return 1;
  }

  return 0;

#else

  return 0;

#endif

}

unsigned int sf_modello_2017b_levaRetro_acc_process_check_sum_call( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4213095796U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3632783336U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3301974101U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2056926552U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_modello_2017b_levaRetro_acc_get_check_sum(mxArray
            *plhs[]);
          sf_c1_modello_2017b_levaRetro_acc_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_modello_2017b_levaRetro_acc_get_check_sum(mxArray
            *plhs[]);
          sf_c2_modello_2017b_levaRetro_acc_get_check_sum(plhs);
          break;
        }

       case 3:
        {
          extern void sf_c3_modello_2017b_levaRetro_acc_get_check_sum(mxArray
            *plhs[]);
          sf_c3_modello_2017b_levaRetro_acc_get_check_sum(plhs);
          break;
        }

       case 27:
        {
          extern void sf_c27_modello_2017b_levaRetro_acc_get_check_sum(mxArray
            *plhs[]);
          sf_c27_modello_2017b_levaRetro_acc_get_check_sum(plhs);
          break;
        }

       case 52:
        {
          extern void sf_c52_modello_2017b_levaRetro_acc_get_check_sum(mxArray
            *plhs[]);
          sf_c52_modello_2017b_levaRetro_acc_get_check_sum(plhs);
          break;
        }

       case 152:
        {
          extern void sf_c152_modello_2017b_levaRetro_acc_get_check_sum(mxArray *
            plhs[]);
          sf_c152_modello_2017b_levaRetro_acc_get_check_sum(plhs);
          break;
        }

       case 451:
        {
          extern void sf_c451_modello_2017b_levaRetro_acc_get_check_sum(mxArray *
            plhs[]);
          sf_c451_modello_2017b_levaRetro_acc_get_check_sum(plhs);
          break;
        }

       case 463:
        {
          extern void sf_c463_modello_2017b_levaRetro_acc_get_check_sum(mxArray *
            plhs[]);
          sf_c463_modello_2017b_levaRetro_acc_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1238147374U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(843837258U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1469954465U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(617214549U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(9200802U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2529874048U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3277035223U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3867684921U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_modello_2017b_levaRetro_acc_autoinheritance_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char aiChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[2], aiChksum,sizeof(aiChksum)/sizeof(char));
  aiChksum[(sizeof(aiChksum)/sizeof(char)-1)] = '\0';

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(aiChksum, "INC8xUk6zxwBmWTkYHlCDD") == 0) {
          extern mxArray
            *sf_c1_modello_2017b_levaRetro_acc_get_autoinheritance_info(void);
          plhs[0] = sf_c1_modello_2017b_levaRetro_acc_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 2:
      {
        if (strcmp(aiChksum, "Hlx2HsZKwEzOxtBXgP4BDF") == 0) {
          extern mxArray
            *sf_c2_modello_2017b_levaRetro_acc_get_autoinheritance_info(void);
          plhs[0] = sf_c2_modello_2017b_levaRetro_acc_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 3:
      {
        if (strcmp(aiChksum, "INC8xUk6zxwBmWTkYHlCDD") == 0) {
          extern mxArray
            *sf_c3_modello_2017b_levaRetro_acc_get_autoinheritance_info(void);
          plhs[0] = sf_c3_modello_2017b_levaRetro_acc_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 27:
      {
        if (strcmp(aiChksum, "LAh3ABNNIFQlrx7v2rVruH") == 0) {
          extern mxArray
            *sf_c27_modello_2017b_levaRetro_acc_get_autoinheritance_info(void);
          plhs[0] = sf_c27_modello_2017b_levaRetro_acc_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 52:
      {
        if (strcmp(aiChksum, "WLZY3NHFFqg9MypKPWZ62G") == 0) {
          extern mxArray
            *sf_c52_modello_2017b_levaRetro_acc_get_autoinheritance_info(void);
          plhs[0] = sf_c52_modello_2017b_levaRetro_acc_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 152:
      {
        if (strcmp(aiChksum, "1nIrZttZEskfxWHOTx2B0F") == 0) {
          extern mxArray
            *sf_c152_modello_2017b_levaRetro_acc_get_autoinheritance_info(void);
          plhs[0] = sf_c152_modello_2017b_levaRetro_acc_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 451:
      {
        if (strcmp(aiChksum, "b5XaH9MM9W9G9tV4BmBUG") == 0) {
          extern mxArray
            *sf_c451_modello_2017b_levaRetro_acc_get_autoinheritance_info(void);
          plhs[0] = sf_c451_modello_2017b_levaRetro_acc_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 463:
      {
        if (strcmp(aiChksum, "QbdMYaFhldBRrzYS02wz5G") == 0) {
          extern mxArray
            *sf_c463_modello_2017b_levaRetro_acc_get_autoinheritance_info(void);
          plhs[0] = sf_c463_modello_2017b_levaRetro_acc_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info( int
  nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  char instanceChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    mxGetString(prhs[2], instanceChksum,sizeof(instanceChksum)/sizeof(char));
    instanceChksum[(sizeof(instanceChksum)/sizeof(char)-1)] = '\0';
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(instanceChksum, "smnQtd9lNWbnLFQrc523Q2") == 0) {
          extern const mxArray
            *sf_c1_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c1_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 2:
      {
        if (strcmp(instanceChksum, "s1DHf08QMVJO4dKCRO8FlSB") == 0) {
          extern const mxArray
            *sf_c2_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c2_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 3:
      {
        if (strcmp(instanceChksum, "smnQtd9lNWbnLFQrc523Q2") == 0) {
          extern const mxArray
            *sf_c3_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c3_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 27:
      {
        if (strcmp(instanceChksum, "sQEptMnNBUPwHCw1eYoyvuF") == 0) {
          extern const mxArray
            *sf_c27_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c27_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 52:
      {
        if (strcmp(instanceChksum, "steNKPNSUQf4vQNVObwfHQ") == 0) {
          extern const mxArray
            *sf_c52_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c52_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 152:
      {
        if (strcmp(instanceChksum, "samRfI632KlLbs3HElNH3bE") == 0) {
          extern const mxArray
            *sf_c152_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c152_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 451:
      {
        if (strcmp(instanceChksum, "sSM7BGCsF4Knvab9kXArrGB") == 0) {
          extern const mxArray
            *sf_c451_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c451_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 463:
      {
        if (strcmp(instanceChksum, "s0WvxjbeSVsD0VsWiAkQHK") == 0) {
          extern const mxArray
            *sf_c463_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info
            (void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c463_modello_2017b_levaRetro_acc_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_modello_2017b_levaRetro_acc_third_party_uses_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the third_party_uses_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "smnQtd9lNWbnLFQrc523Q2") == 0) {
          extern mxArray
            *sf_c1_modello_2017b_levaRetro_acc_third_party_uses_info(void);
          plhs[0] = sf_c1_modello_2017b_levaRetro_acc_third_party_uses_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "s1DHf08QMVJO4dKCRO8FlSB") == 0) {
          extern mxArray
            *sf_c2_modello_2017b_levaRetro_acc_third_party_uses_info(void);
          plhs[0] = sf_c2_modello_2017b_levaRetro_acc_third_party_uses_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "smnQtd9lNWbnLFQrc523Q2") == 0) {
          extern mxArray
            *sf_c3_modello_2017b_levaRetro_acc_third_party_uses_info(void);
          plhs[0] = sf_c3_modello_2017b_levaRetro_acc_third_party_uses_info();
          break;
        }
      }

     case 27:
      {
        if (strcmp(tpChksum, "sQEptMnNBUPwHCw1eYoyvuF") == 0) {
          extern mxArray
            *sf_c27_modello_2017b_levaRetro_acc_third_party_uses_info(void);
          plhs[0] = sf_c27_modello_2017b_levaRetro_acc_third_party_uses_info();
          break;
        }
      }

     case 52:
      {
        if (strcmp(tpChksum, "steNKPNSUQf4vQNVObwfHQ") == 0) {
          extern mxArray
            *sf_c52_modello_2017b_levaRetro_acc_third_party_uses_info(void);
          plhs[0] = sf_c52_modello_2017b_levaRetro_acc_third_party_uses_info();
          break;
        }
      }

     case 152:
      {
        if (strcmp(tpChksum, "samRfI632KlLbs3HElNH3bE") == 0) {
          extern mxArray
            *sf_c152_modello_2017b_levaRetro_acc_third_party_uses_info(void);
          plhs[0] = sf_c152_modello_2017b_levaRetro_acc_third_party_uses_info();
          break;
        }
      }

     case 451:
      {
        if (strcmp(tpChksum, "sSM7BGCsF4Knvab9kXArrGB") == 0) {
          extern mxArray
            *sf_c451_modello_2017b_levaRetro_acc_third_party_uses_info(void);
          plhs[0] = sf_c451_modello_2017b_levaRetro_acc_third_party_uses_info();
          break;
        }
      }

     case 463:
      {
        if (strcmp(tpChksum, "s0WvxjbeSVsD0VsWiAkQHK") == 0) {
          extern mxArray
            *sf_c463_modello_2017b_levaRetro_acc_third_party_uses_info(void);
          plhs[0] = sf_c463_modello_2017b_levaRetro_acc_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_modello_2017b_levaRetro_acc_jit_fallback_info( int nlhs, mxArray
  * plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the jit_fallback_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_jit_fallback_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "smnQtd9lNWbnLFQrc523Q2") == 0) {
          extern mxArray *sf_c1_modello_2017b_levaRetro_acc_jit_fallback_info
            (void);
          plhs[0] = sf_c1_modello_2017b_levaRetro_acc_jit_fallback_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "s1DHf08QMVJO4dKCRO8FlSB") == 0) {
          extern mxArray *sf_c2_modello_2017b_levaRetro_acc_jit_fallback_info
            (void);
          plhs[0] = sf_c2_modello_2017b_levaRetro_acc_jit_fallback_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "smnQtd9lNWbnLFQrc523Q2") == 0) {
          extern mxArray *sf_c3_modello_2017b_levaRetro_acc_jit_fallback_info
            (void);
          plhs[0] = sf_c3_modello_2017b_levaRetro_acc_jit_fallback_info();
          break;
        }
      }

     case 27:
      {
        if (strcmp(tpChksum, "sQEptMnNBUPwHCw1eYoyvuF") == 0) {
          extern mxArray *sf_c27_modello_2017b_levaRetro_acc_jit_fallback_info
            (void);
          plhs[0] = sf_c27_modello_2017b_levaRetro_acc_jit_fallback_info();
          break;
        }
      }

     case 52:
      {
        if (strcmp(tpChksum, "steNKPNSUQf4vQNVObwfHQ") == 0) {
          extern mxArray *sf_c52_modello_2017b_levaRetro_acc_jit_fallback_info
            (void);
          plhs[0] = sf_c52_modello_2017b_levaRetro_acc_jit_fallback_info();
          break;
        }
      }

     case 152:
      {
        if (strcmp(tpChksum, "samRfI632KlLbs3HElNH3bE") == 0) {
          extern mxArray *sf_c152_modello_2017b_levaRetro_acc_jit_fallback_info
            (void);
          plhs[0] = sf_c152_modello_2017b_levaRetro_acc_jit_fallback_info();
          break;
        }
      }

     case 451:
      {
        if (strcmp(tpChksum, "sSM7BGCsF4Knvab9kXArrGB") == 0) {
          extern mxArray *sf_c451_modello_2017b_levaRetro_acc_jit_fallback_info
            (void);
          plhs[0] = sf_c451_modello_2017b_levaRetro_acc_jit_fallback_info();
          break;
        }
      }

     case 463:
      {
        if (strcmp(tpChksum, "s0WvxjbeSVsD0VsWiAkQHK") == 0) {
          extern mxArray *sf_c463_modello_2017b_levaRetro_acc_jit_fallback_info
            (void);
          plhs[0] = sf_c463_modello_2017b_levaRetro_acc_jit_fallback_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_modello_2017b_levaRetro_acc_updateBuildInfo_args_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the updateBuildInfo_args_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "smnQtd9lNWbnLFQrc523Q2") == 0) {
          extern mxArray
            *sf_c1_modello_2017b_levaRetro_acc_updateBuildInfo_args_info(void);
          plhs[0] = sf_c1_modello_2017b_levaRetro_acc_updateBuildInfo_args_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "s1DHf08QMVJO4dKCRO8FlSB") == 0) {
          extern mxArray
            *sf_c2_modello_2017b_levaRetro_acc_updateBuildInfo_args_info(void);
          plhs[0] = sf_c2_modello_2017b_levaRetro_acc_updateBuildInfo_args_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "smnQtd9lNWbnLFQrc523Q2") == 0) {
          extern mxArray
            *sf_c3_modello_2017b_levaRetro_acc_updateBuildInfo_args_info(void);
          plhs[0] = sf_c3_modello_2017b_levaRetro_acc_updateBuildInfo_args_info();
          break;
        }
      }

     case 27:
      {
        if (strcmp(tpChksum, "sQEptMnNBUPwHCw1eYoyvuF") == 0) {
          extern mxArray
            *sf_c27_modello_2017b_levaRetro_acc_updateBuildInfo_args_info(void);
          plhs[0] = sf_c27_modello_2017b_levaRetro_acc_updateBuildInfo_args_info
            ();
          break;
        }
      }

     case 52:
      {
        if (strcmp(tpChksum, "steNKPNSUQf4vQNVObwfHQ") == 0) {
          extern mxArray
            *sf_c52_modello_2017b_levaRetro_acc_updateBuildInfo_args_info(void);
          plhs[0] = sf_c52_modello_2017b_levaRetro_acc_updateBuildInfo_args_info
            ();
          break;
        }
      }

     case 152:
      {
        if (strcmp(tpChksum, "samRfI632KlLbs3HElNH3bE") == 0) {
          extern mxArray
            *sf_c152_modello_2017b_levaRetro_acc_updateBuildInfo_args_info(void);
          plhs[0] =
            sf_c152_modello_2017b_levaRetro_acc_updateBuildInfo_args_info();
          break;
        }
      }

     case 451:
      {
        if (strcmp(tpChksum, "sSM7BGCsF4Knvab9kXArrGB") == 0) {
          extern mxArray
            *sf_c451_modello_2017b_levaRetro_acc_updateBuildInfo_args_info(void);
          plhs[0] =
            sf_c451_modello_2017b_levaRetro_acc_updateBuildInfo_args_info();
          break;
        }
      }

     case 463:
      {
        if (strcmp(tpChksum, "s0WvxjbeSVsD0VsWiAkQHK") == 0) {
          extern mxArray
            *sf_c463_modello_2017b_levaRetro_acc_updateBuildInfo_args_info(void);
          plhs[0] =
            sf_c463_modello_2017b_levaRetro_acc_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void modello_2017b_levaRetro_acc_debug_initialize(struct SfDebugInstanceStruct*
  debugInstance)
{
  _modello_2017b_levaRetro_accMachineNumber_ = sf_debug_initialize_machine
    (debugInstance,"modello_2017b_levaRetro_acc","sfun",0,50,0,0,0);
  sf_debug_set_machine_event_thresholds(debugInstance,
    _modello_2017b_levaRetro_accMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(debugInstance,
    _modello_2017b_levaRetro_accMachineNumber_,0);
}

void modello_2017b_levaRetro_acc_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
typedef struct SfOptimizationInfoFlagsTag {
  boolean_T isRtwGen;
  boolean_T isModelRef;
  boolean_T isExternal;
} SfOptimizationInfoFlags;

static SfOptimizationInfoFlags sOptimizationInfoFlags;
void unload_modello_2017b_levaRetro_acc_optimization_info(void);
mxArray* load_modello_2017b_levaRetro_acc_optimization_info(boolean_T isRtwGen,
  boolean_T isModelRef, boolean_T isExternal)
{
  if (sOptimizationInfoFlags.isRtwGen != isRtwGen ||
      sOptimizationInfoFlags.isModelRef != isModelRef ||
      sOptimizationInfoFlags.isExternal != isExternal) {
    unload_modello_2017b_levaRetro_acc_optimization_info();
  }

  sOptimizationInfoFlags.isRtwGen = isRtwGen;
  sOptimizationInfoFlags.isModelRef = isModelRef;
  sOptimizationInfoFlags.isExternal = isExternal;
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info(
      "modello_2017b_levaRetro_acc", "modello_2017b_levaRetro_acc");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_modello_2017b_levaRetro_acc_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
