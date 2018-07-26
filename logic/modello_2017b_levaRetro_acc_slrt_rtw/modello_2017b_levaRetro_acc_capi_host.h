#ifndef RTW_HEADER_modello_2017b_levaRetro_acc_cap_host_h_
#define RTW_HEADER_modello_2017b_levaRetro_acc_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
} modello_2017b_levaRetro_acc_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C" {

#endif

  void modello_2017b_levaRetro_acc_host_InitializeDataMapInfo
    (modello_2017b_levaRetro_acc_host_DataMapInfo_T *dataMap, const char *path);

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif                                 /* RTW_HEADER_modello_2017b_levaRetro_acc_cap_host_h_ */

/* EOF: modello_2017b_levaRetro_acc_capi_host.h */
