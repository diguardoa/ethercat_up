/*
 * modello_2017b_levaRetro_acc.h
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

#ifndef RTW_HEADER_modello_2017b_levaRetro_acc_h_
#define RTW_HEADER_modello_2017b_levaRetro_acc_h_
#include <stddef.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include "rtw_modelmap.h"
#ifndef modello_2017b_levaRetro_acc_COMMON_INCLUDES_
# define modello_2017b_levaRetro_acc_COMMON_INCLUDES_
#include <xpcimports.h>
#include <xpcdatatypes.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "xpcimports.h"
#include "stddef.h"
#include "stdlib.h"
#include "xpcethercatutils.h"
#endif                                 /* modello_2017b_levaRetro_acc_COMMON_INCLUDES_ */

#include "modello_2017b_levaRetro_acc_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
# define rtmGetSelf(rtm)               ()
#endif

#ifndef rtmSetSelf
# define rtmSetSelf(rtm, val)          ()
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ((rtm)->Timing.TaskCounters = (val))
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVDRMdlRefTiming
# define rtmGetVDRMdlRefTiming(rtm)    ()
#endif

#ifndef rtmSetVDRMdlRefTiming
# define rtmSetVDRMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetVDRMdlRefTimingPtr
# define rtmGetVDRMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetVDRMdlRefTimingPtr
# define rtmSetVDRMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetVDRNumTicksToNextHit
# define rtmGetVDRNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetVDRNumTicksToNextHit
# define rtmSetVDRNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
# define rtmGettimingBridge(rtm)       ()
#endif

#ifndef rtmSettimingBridge
# define rtmSettimingBridge(rtm, val)  ()
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) 0
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)
#define rtModel_modello_2017b_levaRetro_acc RT_MODEL_modello_2017b_levaRetro_acc_T

/* Definition for use in the target main file */
#define modello_2017b_levaRetro_acc_rtModel RT_MODEL_modello_2017b_levaRetro_acc_T

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals for system '<S40>/DS402_state_machine' */
typedef struct {
  real_T controlword;                  /* '<S40>/DS402_state_machine' */
  real_T drive_enabled;                /* '<S40>/DS402_state_machine' */
  real_T fault_detected;               /* '<S40>/DS402_state_machine' */
  real_T drive_ready;                  /* '<S40>/DS402_state_machine' */
} B_DS402_state_machine_modello_T;

/* Block states (auto storage) for system '<S40>/DS402_state_machine' */
typedef struct {
  int32_T sfEvent;                     /* '<S40>/DS402_state_machine' */
  uint8_T is_active_c3_modello_2017b_leva;/* '<S40>/DS402_state_machine' */
  uint8_T is_c3_modello_2017b_levaRetro_a;/* '<S40>/DS402_state_machine' */
  uint8_T is_DS402StateMachine;        /* '<S40>/DS402_state_machine' */
} DW_DS402_state_machine_modell_T;

/* Block signals for system '<S23>/AntiSpike' */
typedef struct {
  real_T vel_out;                      /* '<S23>/AntiSpike' */
} B_AntiSpike_modello_2017b_lev_T;

/* Block states (auto storage) for system '<S23>/AntiSpike' */
typedef struct {
  real_T old_samples[3];               /* '<S23>/AntiSpike' */
  real_T samples;                      /* '<S23>/AntiSpike' */
} DW_AntiSpike_modello_2017b_le_T;

/* Block signals for system '<S92>/demultiplexer_enable_gear_subsistems' */
typedef struct {
  real_T out1;                         /* '<S92>/demultiplexer_enable_gear_subsistems' */
  real_T out2;                         /* '<S92>/demultiplexer_enable_gear_subsistems' */
  real_T out3;                         /* '<S92>/demultiplexer_enable_gear_subsistems' */
  real_T out4;                         /* '<S92>/demultiplexer_enable_gear_subsistems' */
  real_T out5;                         /* '<S92>/demultiplexer_enable_gear_subsistems' */
  real_T out6;                         /* '<S92>/demultiplexer_enable_gear_subsistems' */
  real_T out7;                         /* '<S92>/demultiplexer_enable_gear_subsistems' */
  real_T out8;                         /* '<S92>/demultiplexer_enable_gear_subsistems' */
} B_demultiplexer_enable_gear_s_T;

/* Block signals for system '<S94>/Render_wall1' */
typedef struct {
  real_T force;                        /* '<S94>/Render_wall1' */
} B_Render_wall1_modello_2017b__T;

/* Block signals for system '<S181>/crossgate_selection1_begin_left' */
typedef struct {
  real_T uDLookupTable;                /* '<S187>/1-D Lookup Table' */
} B_crossgate_selection1_begin__T;

/* Block states (auto storage) for system '<S181>/crossgate_selection1_begin_left' */
typedef struct {
  int8_T crossgate_selection1_begin_le_e;/* '<S181>/crossgate_selection1_begin_left' */
} DW_crossgate_selection1_begin_T;

/* Block signals for system '<S181>/demultiplexer_enable_subsistems' */
typedef struct {
  real_T out1;                         /* '<S181>/demultiplexer_enable_subsistems' */
  real_T out2;                         /* '<S181>/demultiplexer_enable_subsistems' */
  real_T out3;                         /* '<S181>/demultiplexer_enable_subsistems' */
  real_T out4;                         /* '<S181>/demultiplexer_enable_subsistems' */
  real_T out5;                         /* '<S181>/demultiplexer_enable_subsistems' */
  real_T out6;                         /* '<S181>/demultiplexer_enable_subsistems' */
  real_T out7;                         /* '<S181>/demultiplexer_enable_subsistems' */
  real_T out8;                         /* '<S181>/demultiplexer_enable_subsistems' */
  real_T out9;                         /* '<S181>/demultiplexer_enable_subsistems' */
  real_T out10;                        /* '<S181>/demultiplexer_enable_subsistems' */
} B_demultiplexer_enable_subsis_T;

/* Block signals for system '<S181>/transition1_bl_rl' */
typedef struct {
  real_T uDLookupTable;                /* '<S195>/1-D Lookup Table' */
} B_transition1_bl_rl_modello_2_T;

/* Block states (auto storage) for system '<S181>/transition1_bl_rl' */
typedef struct {
  int8_T transition1_bl_rl_SubsysRanBC;/* '<S181>/transition1_bl_rl' */
} DW_transition1_bl_rl_modello__T;

/* Block signals (auto storage) */
typedef struct {
  real_T Sum1;                         /* '<S23>/Sum1' */
  real_T enc_raw_to_rad1;              /* '<S23>/enc_raw_to_rad1' */
  real_T change_sign4;                 /* '<S7>/change_sign4' */
  real_T Sum1_d;                       /* '<S24>/Sum1' */
  real_T enc_raw_to_rad1_p;            /* '<S24>/enc_raw_to_rad1' */
  real_T change_sign5;                 /* '<S7>/change_sign5' */
  real_T enc_raw_to_rad;               /* '<S23>/enc_raw_to_rad' */
  real_T UnitDelay;                    /* '<S54>/Unit Delay' */
  real_T Sum1_a;                       /* '<S54>/Sum1' */
  real_T length1;                      /* '<S54>/length1' */
  real_T change_sign6;                 /* '<S7>/change_sign6' */
  real_T enc_raw_to_rad_p;             /* '<S24>/enc_raw_to_rad' */
  real_T UnitDelay_c;                  /* '<S56>/Unit Delay' */
  real_T Sum1_j;                       /* '<S56>/Sum1' */
  real_T length1_i;                    /* '<S56>/length1' */
  real_T change_sign7;                 /* '<S7>/change_sign7' */
  real_T ManualSwitch12;               /* '<Root>/Manual Switch12' */
  real_T Memory;                       /* '<S26>/Memory' */
  real_T ManualSwitch11;               /* '<Root>/Manual Switch11' */
  real_T selected_gear[2];             /* '<S92>/selected_gear' */
  real_T selected_gear_b[2];           /* '<S133>/selected_gear' */
  real_T DataTypeConversion;           /* '<S176>/Data Type Conversion' */
  real_T Switch;                       /* '<S176>/Switch' */
  real_T state_y2;                     /* '<S89>/state_y2' */
  real_T zeroforce4;                   /* '<Root>/zero force4' */
  real_T ManualSwitch9;                /* '<Root>/Manual Switch9' */
  real_T ManualSwitch10;               /* '<Root>/Manual Switch10' */
  real_T zeroforce5;                   /* '<Root>/zero force5' */
  real_T change_sign4_p;               /* '<S29>/change_sign4' */
  real_T change_sign5_a;               /* '<S29>/change_sign5' */
  real_T Sum7;                         /* '<Root>/Sum7' */
  real_T b7;                           /* '<Root>/b7' */
  real_T b9;                           /* '<Root>/b9' */
  real_T Sum11;                        /* '<Root>/Sum11' */
  real_T Sum8;                         /* '<Root>/Sum8' */
  real_T b8;                           /* '<Root>/b8' */
  real_T b10;                          /* '<Root>/b10' */
  real_T Sum12;                        /* '<Root>/Sum12' */
  real_T DigitalClock;                 /* '<Root>/Digital Clock' */
  real_T Gain2;                        /* '<Root>/Gain2' */
  real_T DataTypeConversion_l;         /* '<Root>/Data Type Conversion' */
  real_T DataTypeConversion1;          /* '<Root>/Data Type Conversion1' */
  real_T DataTypeConversion10;         /* '<Root>/Data Type Conversion10' */
  real_T DataTypeConversion11;         /* '<Root>/Data Type Conversion11' */
  real_T DataTypeConversion12;         /* '<Root>/Data Type Conversion12' */
  real_T DataTypeConversion13;         /* '<Root>/Data Type Conversion13' */
  real_T DataTypeConversion2;          /* '<Root>/Data Type Conversion2' */
  real_T DataTypeConversion3;          /* '<Root>/Data Type Conversion3' */
  real_T DataTypeConversion4;          /* '<Root>/Data Type Conversion4' */
  real_T DataTypeConversion5;          /* '<Root>/Data Type Conversion5' */
  real_T DataTypeConversion6;          /* '<Root>/Data Type Conversion6' */
  real_T ManualSwitch;                 /* '<Root>/Manual Switch' */
  real_T Gain5;                        /* '<Root>/Gain5' */
  real_T ManualSwitch7;                /* '<Root>/Manual Switch7' */
  real_T Gain8;                        /* '<Root>/Gain8' */
  real_T Sum10;                        /* '<Root>/Sum10' */
  real_T Sum6;                         /* '<Root>/Sum6' */
  real_T DataTypeConversion7;          /* '<Root>/Data Type Conversion7' */
  real_T ManualSwitch2;                /* '<Root>/Manual Switch2' */
  real_T Gain6;                        /* '<Root>/Gain6' */
  real_T ManualSwitch8;                /* '<Root>/Manual Switch8' */
  real_T Gain7;                        /* '<Root>/Gain7' */
  real_T Sum9;                         /* '<Root>/Sum9' */
  real_T Sum1_i;                       /* '<Root>/Sum1' */
  real_T DataTypeConversion8;          /* '<Root>/Data Type Conversion8' */
  real_T DataTypeConversion9;          /* '<Root>/Data Type Conversion9' */
  real_T Memory6;                      /* '<Root>/Memory6' */
  real_T Memory7;                      /* '<Root>/Memory7' */
  real_T Gain;                         /* '<S14>/Gain' */
  real_T Ripplecompensationswitch;     /* '<S14>/Ripple compensation switch' */
  real_T Gain2_b;                      /* '<S14>/Gain2' */
  real_T Gain_l;                       /* '<S15>/Gain' */
  real_T Ripplecompensationswitch_h;   /* '<S15>/Ripple compensation switch' */
  real_T DataTypeConversion1_j;        /* '<S89>/Data Type Conversion1' */
  real_T DataTypeConversion2_m;        /* '<S89>/Data Type Conversion2' */
  real_T Sum1_n;                       /* '<S184>/Sum1' */
  real_T torque_raw_to_torque_nm;      /* '<Root>/torque_raw_to_torque_nm' */
  real_T torque_raw_to_torque_nm1;     /* '<Root>/torque_raw_to_torque_nm1' */
  real_T UDPReceive_o2;                /* '<Root>/UDP Receive' */
  real_T zeroforce6;                   /* '<Root>/zero force6' */
  real_T DataTypeConversion33[4];      /* '<Root>/Data Type Conversion33' */
  real_T fy_offset1;                   /* '<Root>/fy_offset1' */
  real_T fy_offset2;                   /* '<Root>/fy_offset2' */
  real_T x_axis_torque_ref;            /* '<Root>/x_axis_torque_ref' */
  real_T y_axis_torque_ref;            /* '<Root>/y_axis_torque_ref' */
  real_T Switch_n;                     /* '<S177>/Switch' */
  real_T Sum;                          /* '<S177>/Sum' */
  real_T Memory_m;                     /* '<S228>/Memory' */
  real_T Sum1_f;                       /* '<S228>/Sum1' */
  real_T Switch1;                      /* '<S228>/Switch1' */
  real_T stiffdx;                      /* '<S227>/MATLAB Function2' */
  real_T stiffsx;                      /* '<S227>/MATLAB Function2' */
  real_T giocodx;                      /* '<S227>/MATLAB Function1' */
  real_T giocosx;                      /* '<S227>/MATLAB Function1' */
  real_T MultiportSwitch;              /* '<S183>/Multiport Switch' */
  real_T curve;                        /* '<S183>/Chart1' */
  real_T MultiportSwitch_d;            /* '<S181>/Multiport Switch' */
  real_T MultiportSwitch1;             /* '<S181>/Multiport Switch1' */
  real_T out1;                         /* '<S181>/demultiplexer_enable_subsistems1' */
  real_T out2;                         /* '<S181>/demultiplexer_enable_subsistems1' */
  real_T curve_index;                  /* '<S181>/Select curve' */
  real_T curve_f;                      /* '<S181>/Chart1' */
  real_T out1_l;                       /* '<S176>/crossgate_enabler' */
  real_T out2_d;                       /* '<S176>/crossgate_enabler' */
  real_T yout;                         /* '<S89>/MATLAB Function2' */
  real_T stiffdx_k;                    /* '<S89>/MATLAB Function1' */
  real_T stiffsx_e;                    /* '<S89>/MATLAB Function1' */
  real_T muro_dx;                      /* '<S89>/MATLAB Function' */
  real_T muro_sx;                      /* '<S89>/MATLAB Function' */
  real_T stable_point;                 /* '<S89>/MATLAB Function' */
  real_T up_down;                      /* '<S89>/MATLAB Function' */
  real_T inside_gear_path;             /* '<S89>/MATLAB Function' */
  real_T Switch_a;                     /* '<S142>/Switch' */
  real_T Sum_d;                        /* '<S142>/Sum' */
  real_T DataTypeConversion_d;         /* '<S142>/Data Type Conversion' */
  real_T DataTypeConversion1_a;        /* '<S142>/Data Type Conversion1' */
  real_T Memory_d;                     /* '<S142>/Memory' */
  real_T Sum1_c;                       /* '<S142>/Sum1' */
  real_T force_selector[2];            /* '<S142>/force_selector' */
  real_T Switch1_c;                    /* '<S142>/Switch1' */
  real_T uDLookupTable;                /* '<S170>/1-D Lookup Table' */
  real_T uDLookupTable1;               /* '<S170>/1-D Lookup Table1' */
  real_T uDLookupTable_m;              /* '<S171>/1-D Lookup Table' */
  real_T uDLookupTable1_a;             /* '<S171>/1-D Lookup Table1' */
  real_T uDLookupTable_e;              /* '<S172>/1-D Lookup Table' */
  real_T uDLookupTable1_n;             /* '<S172>/1-D Lookup Table1' */
  real_T Switch_c;                     /* '<S141>/Switch' */
  real_T Sum_n;                        /* '<S141>/Sum' */
  real_T DataTypeConversion_e;         /* '<S141>/Data Type Conversion' */
  real_T DataTypeConversion1_b;        /* '<S141>/Data Type Conversion1' */
  real_T Memory_f;                     /* '<S141>/Memory' */
  real_T Sum1_k;                       /* '<S141>/Sum1' */
  real_T force_selector_a[2];          /* '<S141>/force_selector' */
  real_T Switch1_n;                    /* '<S141>/Switch1' */
  real_T uDLookupTable_j;              /* '<S166>/1-D Lookup Table' */
  real_T uDLookupTable1_m;             /* '<S166>/1-D Lookup Table1' */
  real_T uDLookupTable_i;              /* '<S167>/1-D Lookup Table' */
  real_T uDLookupTable1_l;             /* '<S167>/1-D Lookup Table1' */
  real_T uDLookupTable_o;              /* '<S168>/1-D Lookup Table' */
  real_T uDLookupTable1_ml;            /* '<S168>/1-D Lookup Table1' */
  real_T DataTypeConversion1_g;        /* '<S140>/Data Type Conversion1' */
  real_T second_gear1;                 /* '<S140>/second_gear1' */
  real_T second_gear;                  /* '<S140>/second_gear' */
  real_T DataTypeConversion3_j;        /* '<S140>/Data Type Conversion3' */
  real_T uDLookupTable_h;              /* '<S163>/1-D Lookup Table' */
  real_T Switch_n0;                    /* '<S139>/Switch' */
  real_T Sum_p;                        /* '<S139>/Sum' */
  real_T DataTypeConversion_h;         /* '<S139>/Data Type Conversion' */
  real_T DataTypeConversion1_k;        /* '<S139>/Data Type Conversion1' */
  real_T Memory_k;                     /* '<S139>/Memory' */
  real_T Sum1_g;                       /* '<S139>/Sum1' */
  real_T force_selector_l[2];          /* '<S139>/force_selector' */
  real_T Switch1_g;                    /* '<S139>/Switch1' */
  real_T uDLookupTable_a;              /* '<S160>/1-D Lookup Table' */
  real_T uDLookupTable1_b;             /* '<S160>/1-D Lookup Table1' */
  real_T uDLookupTable_h3;             /* '<S161>/1-D Lookup Table' */
  real_T uDLookupTable1_lv;            /* '<S161>/1-D Lookup Table1' */
  real_T uDLookupTable_l;              /* '<S162>/1-D Lookup Table' */
  real_T uDLookupTable1_d;             /* '<S162>/1-D Lookup Table1' */
  real_T Switch_na;                    /* '<S138>/Switch' */
  real_T Sum_o;                        /* '<S138>/Sum' */
  real_T DataTypeConversion_j;         /* '<S138>/Data Type Conversion' */
  real_T DataTypeConversion1_p;        /* '<S138>/Data Type Conversion1' */
  real_T Memory_db;                    /* '<S138>/Memory' */
  real_T Sum1_o;                       /* '<S138>/Sum1' */
  real_T force_selector_p[2];          /* '<S138>/force_selector' */
  real_T Switch1_f;                    /* '<S138>/Switch1' */
  real_T uDLookupTable_ic;             /* '<S156>/1-D Lookup Table' */
  real_T uDLookupTable1_c;             /* '<S156>/1-D Lookup Table1' */
  real_T uDLookupTable_d;              /* '<S157>/1-D Lookup Table' */
  real_T uDLookupTable1_p;             /* '<S157>/1-D Lookup Table1' */
  real_T uDLookupTable_hn;             /* '<S158>/1-D Lookup Table' */
  real_T uDLookupTable1_k;             /* '<S158>/1-D Lookup Table1' */
  real_T Switch_g;                     /* '<S137>/Switch' */
  real_T Sum_nt;                       /* '<S137>/Sum' */
  real_T DataTypeConversion_a;         /* '<S137>/Data Type Conversion' */
  real_T DataTypeConversion1_h;        /* '<S137>/Data Type Conversion1' */
  real_T Memory_fw;                    /* '<S137>/Memory' */
  real_T Sum1_g4;                      /* '<S137>/Sum1' */
  real_T force_selector_i[2];          /* '<S137>/force_selector' */
  real_T Switch1_j;                    /* '<S137>/Switch1' */
  real_T uDLookupTable_b;              /* '<S152>/1-D Lookup Table' */
  real_T uDLookupTable1_pj;            /* '<S152>/1-D Lookup Table1' */
  real_T uDLookupTable_lf;             /* '<S153>/1-D Lookup Table' */
  real_T uDLookupTable1_n3;            /* '<S153>/1-D Lookup Table1' */
  real_T uDLookupTable_i5;             /* '<S154>/1-D Lookup Table' */
  real_T uDLookupTable1_f;             /* '<S154>/1-D Lookup Table1' */
  real_T Switch_l;                     /* '<S136>/Switch' */
  real_T Sum_i;                        /* '<S136>/Sum' */
  real_T DataTypeConversion_er;        /* '<S136>/Data Type Conversion' */
  real_T DataTypeConversion1_p4;       /* '<S136>/Data Type Conversion1' */
  real_T Memory_kp;                    /* '<S136>/Memory' */
  real_T Sum1_ko;                      /* '<S136>/Sum1' */
  real_T force_selector_iy[2];         /* '<S136>/force_selector' */
  real_T Switch1_e;                    /* '<S136>/Switch1' */
  real_T uDLookupTable_g;              /* '<S148>/1-D Lookup Table' */
  real_T uDLookupTable1_o;             /* '<S148>/1-D Lookup Table1' */
  real_T uDLookupTable_p;              /* '<S149>/1-D Lookup Table' */
  real_T uDLookupTable1_pr;            /* '<S149>/1-D Lookup Table1' */
  real_T uDLookupTable_df;             /* '<S150>/1-D Lookup Table' */
  real_T uDLookupTable1_bu;            /* '<S150>/1-D Lookup Table1' */
  real_T Switch_b;                     /* '<S135>/Switch' */
  real_T Sum_c;                        /* '<S135>/Sum' */
  real_T DataTypeConversion_hc;        /* '<S135>/Data Type Conversion' */
  real_T DataTypeConversion1_n;        /* '<S135>/Data Type Conversion1' */
  real_T Memory_e;                     /* '<S135>/Memory' */
  real_T Sum1_gh;                      /* '<S135>/Sum1' */
  real_T force_selector_h[2];          /* '<S135>/force_selector' */
  real_T Switch1_n3;                   /* '<S135>/Switch1' */
  real_T uDLookupTable_eq;             /* '<S144>/1-D Lookup Table' */
  real_T uDLookupTable1_h;             /* '<S144>/1-D Lookup Table1' */
  real_T uDLookupTable_h0;             /* '<S145>/1-D Lookup Table' */
  real_T uDLookupTable1_dz;            /* '<S145>/1-D Lookup Table1' */
  real_T uDLookupTable_du;             /* '<S146>/1-D Lookup Table' */
  real_T uDLookupTable1_j;             /* '<S146>/1-D Lookup Table1' */
  real_T Switch_e;                     /* '<S101>/Switch' */
  real_T Sum_e;                        /* '<S101>/Sum' */
  real_T DataTypeConversion_f;         /* '<S101>/Data Type Conversion' */
  real_T DataTypeConversion1_i;        /* '<S101>/Data Type Conversion1' */
  real_T Memory_i;                     /* '<S101>/Memory' */
  real_T Sum1_ca;                      /* '<S101>/Sum1' */
  real_T force_selector_j[2];          /* '<S101>/force_selector' */
  real_T Switch1_k;                    /* '<S101>/Switch1' */
  real_T uDLookupTable_i5v;            /* '<S130>/1-D Lookup Table' */
  real_T uDLookupTable1_hd;            /* '<S130>/1-D Lookup Table1' */
  real_T uDLookupTable_a0;             /* '<S131>/1-D Lookup Table' */
  real_T uDLookupTable1_as;            /* '<S131>/1-D Lookup Table1' */
  real_T uDLookupTable_ib;             /* '<S132>/1-D Lookup Table' */
  real_T uDLookupTable1_e;             /* '<S132>/1-D Lookup Table1' */
  real_T Switch_j;                     /* '<S100>/Switch' */
  real_T Sum_a;                        /* '<S100>/Sum' */
  real_T DataTypeConversion_o;         /* '<S100>/Data Type Conversion' */
  real_T DataTypeConversion1_gm;       /* '<S100>/Data Type Conversion1' */
  real_T Memory_c;                     /* '<S100>/Memory' */
  real_T Sum1_h;                       /* '<S100>/Sum1' */
  real_T force_selector_m[2];          /* '<S100>/force_selector' */
  real_T Switch1_kc;                   /* '<S100>/Switch1' */
  real_T uDLookupTable_jx;             /* '<S126>/1-D Lookup Table' */
  real_T uDLookupTable1_ky;            /* '<S126>/1-D Lookup Table1' */
  real_T uDLookupTable_k;              /* '<S127>/1-D Lookup Table' */
  real_T uDLookupTable1_hg;            /* '<S127>/1-D Lookup Table1' */
  real_T uDLookupTable_lz;             /* '<S128>/1-D Lookup Table' */
  real_T uDLookupTable1_dt;            /* '<S128>/1-D Lookup Table1' */
  real_T DataTypeConversion1_hk;       /* '<S99>/Data Type Conversion1' */
  real_T Memory_k3;                    /* '<S99>/Memory' */
  real_T DataTypeConversion2_l;        /* '<S99>/Data Type Conversion2' */
  real_T DataTypeConversion3_b;        /* '<S99>/Data Type Conversion3' */
  real_T uDLookupTable_gb;             /* '<S122>/1-D Lookup Table' */
  real_T second_gear1_h;               /* '<S99>/second_gear1' */
  real_T second_gear_n;                /* '<S99>/second_gear' */
  real_T force_offset;                 /* '<S99>/offset' */
  real_T Switch_aj;                    /* '<S98>/Switch' */
  real_T Sum_py;                       /* '<S98>/Sum' */
  real_T DataTypeConversion_o5;        /* '<S98>/Data Type Conversion' */
  real_T DataTypeConversion1_an;       /* '<S98>/Data Type Conversion1' */
  real_T Memory_kx;                    /* '<S98>/Memory' */
  real_T Sum1_b;                       /* '<S98>/Sum1' */
  real_T force_selector_jo[2];         /* '<S98>/force_selector' */
  real_T Switch1_fu;                   /* '<S98>/Switch1' */
  real_T uDLookupTable_id;             /* '<S119>/1-D Lookup Table' */
  real_T uDLookupTable1_ht;            /* '<S119>/1-D Lookup Table1' */
  real_T uDLookupTable_as;             /* '<S120>/1-D Lookup Table' */
  real_T uDLookupTable1_ns;            /* '<S120>/1-D Lookup Table1' */
  real_T uDLookupTable_mg;             /* '<S121>/1-D Lookup Table' */
  real_T uDLookupTable1_p0;            /* '<S121>/1-D Lookup Table1' */
  real_T Switch_m;                     /* '<S97>/Switch' */
  real_T Sum_b;                        /* '<S97>/Sum' */
  real_T DataTypeConversion_n;         /* '<S97>/Data Type Conversion' */
  real_T DataTypeConversion1_k5;       /* '<S97>/Data Type Conversion1' */
  real_T Memory_ir;                    /* '<S97>/Memory' */
  real_T Sum1_l;                       /* '<S97>/Sum1' */
  real_T force_selector_an[2];         /* '<S97>/force_selector' */
  real_T Switch1_l;                    /* '<S97>/Switch1' */
  real_T uDLookupTable_dr;             /* '<S115>/1-D Lookup Table' */
  real_T uDLookupTable1_d4;            /* '<S115>/1-D Lookup Table1' */
  real_T uDLookupTable_bn;             /* '<S116>/1-D Lookup Table' */
  real_T uDLookupTable1_ck;            /* '<S116>/1-D Lookup Table1' */
  real_T uDLookupTable_jt;             /* '<S117>/1-D Lookup Table' */
  real_T uDLookupTable1_ln;            /* '<S117>/1-D Lookup Table1' */
  real_T Switch_d;                     /* '<S96>/Switch' */
  real_T Sum_bf;                       /* '<S96>/Sum' */
  real_T DataTypeConversion_k;         /* '<S96>/Data Type Conversion' */
  real_T DataTypeConversion1_o;        /* '<S96>/Data Type Conversion1' */
  real_T Memory_n;                     /* '<S96>/Memory' */
  real_T Sum1_cc;                      /* '<S96>/Sum1' */
  real_T force_selector_hh[2];         /* '<S96>/force_selector' */
  real_T Switch1_a;                    /* '<S96>/Switch1' */
  real_T uDLookupTable_c;              /* '<S111>/1-D Lookup Table' */
  real_T uDLookupTable1_fb;            /* '<S111>/1-D Lookup Table1' */
  real_T uDLookupTable_el;             /* '<S112>/1-D Lookup Table' */
  real_T uDLookupTable1_ok;            /* '<S112>/1-D Lookup Table1' */
  real_T uDLookupTable_b4;             /* '<S113>/1-D Lookup Table' */
  real_T uDLookupTable1_py;            /* '<S113>/1-D Lookup Table1' */
  real_T Switch_h;                     /* '<S95>/Switch' */
  real_T Sum_f;                        /* '<S95>/Sum' */
  real_T DataTypeConversion_c;         /* '<S95>/Data Type Conversion' */
  real_T DataTypeConversion1_d;        /* '<S95>/Data Type Conversion1' */
  real_T Memory_mn;                    /* '<S95>/Memory' */
  real_T Sum1_o2;                      /* '<S95>/Sum1' */
  real_T force_selector_it[2];         /* '<S95>/force_selector' */
  real_T Switch1_j0;                   /* '<S95>/Switch1' */
  real_T uDLookupTable_hj;             /* '<S107>/1-D Lookup Table' */
  real_T uDLookupTable1_hb;            /* '<S107>/1-D Lookup Table1' */
  real_T uDLookupTable_ca;             /* '<S108>/1-D Lookup Table' */
  real_T uDLookupTable1_em;            /* '<S108>/1-D Lookup Table1' */
  real_T uDLookupTable_dn;             /* '<S109>/1-D Lookup Table' */
  real_T uDLookupTable1_i;             /* '<S109>/1-D Lookup Table1' */
  real_T Switch_bc;                    /* '<S94>/Switch' */
  real_T Sum_of;                       /* '<S94>/Sum' */
  real_T DataTypeConversion_c2;        /* '<S94>/Data Type Conversion' */
  real_T DataTypeConversion1_b4;       /* '<S94>/Data Type Conversion1' */
  real_T Memory_e4;                    /* '<S94>/Memory' */
  real_T Sum1_nb;                      /* '<S94>/Sum1' */
  real_T force_selector_f[2];          /* '<S94>/force_selector' */
  real_T Switch1_d;                    /* '<S94>/Switch1' */
  real_T uDLookupTable_m4;             /* '<S103>/1-D Lookup Table' */
  real_T uDLookupTable1_ku;            /* '<S103>/1-D Lookup Table1' */
  real_T uDLookupTable_ih;             /* '<S104>/1-D Lookup Table' */
  real_T uDLookupTable1_la;            /* '<S104>/1-D Lookup Table1' */
  real_T uDLookupTable_iy;             /* '<S105>/1-D Lookup Table' */
  real_T uDLookupTable1_of;            /* '<S105>/1-D Lookup Table1' */
  real_T statex;                       /* '<S26>/dynamic' */
  real_T selection;                    /* '<S26>/MATLAB Function' */
  real_T retro;                        /* '<S26>/MATLAB Function' */
  real_T Gain1;                        /* '<S15>/Gain1' */
  real_T MathFunction;                 /* '<S15>/Math Function' */
  real_T uDLookupTable_i2;             /* '<S15>/1-D Lookup Table' */
  real_T Gain1_a;                      /* '<S14>/Gain1' */
  real_T MathFunction_b;               /* '<S14>/Math Function' */
  real_T uDLookupTable_ln;             /* '<S14>/1-D Lookup Table' */
  real_T y;                            /* '<Root>/MATLAB Function3' */
  real_T y_e;                          /* '<Root>/MATLAB Function2' */
  real_T master_ready;                 /* '<S4>/Ethercat master State Machine' */
  real_T command;                      /* '<S4>/Ethercat master State Machine' */
  real_T x_axis_reset;                 /* '<Root>/Chart' */
  real_T y_axis_reset;                 /* '<Root>/Chart' */
  real_T enable_drives;                /* '<Root>/Chart' */
  real_T enable_forces;                /* '<Root>/Chart' */
  real_T enable_ethercat;              /* '<Root>/Chart' */
  real_T gravity_const2;               /* '<S5>/gravity_const2' */
  real_T TrigonometricFunction;        /* '<S5>/Trigonometric Function' */
  real_T Product6;                     /* '<S5>/Product6' */
  real_T Product1;                     /* '<S5>/Product1' */
  real_T gain1;                        /* '<S5>/gain1' */
  real32_T Memory8;                    /* '<Root>/Memory8' */
  real32_T quick_stop_drives;          /* '<Root>/quick_stop_drives' */
  real32_T x_axis_reset_fault;         /* '<Root>/x_axis_reset_fault' */
  real32_T y_axis_reset_fault;         /* '<Root>/y_axis_reset_fault' */
  real32_T Memory3;                    /* '<Root>/Memory3' */
  real32_T DataTypeConversion_d3;      /* '<S4>/Data Type Conversion' */
  real32_T DataTypeConversion4_n;      /* '<S7>/Data Type Conversion4' */
  real32_T Memory9;                    /* '<Root>/Memory9' */
  real32_T DataTypeConversion6_a;      /* '<S7>/Data Type Conversion6' */
  real32_T DataTypeConversion5_n;      /* '<S7>/Data Type Conversion5' */
  real32_T DataTypeConversion_kx;      /* '<S26>/Data Type Conversion' */
  real32_T DataTypeConversion3_g;      /* '<S26>/Data Type Conversion3' */
  real32_T DataTypeConversion_p[2];    /* '<S87>/Data Type Conversion' */
  real32_T scala_forza[2];             /* '<S87>/scala_forza' */
  real32_T DataTypeConversion_cg[2];   /* '<S88>/Data Type Conversion' */
  real32_T scala_forza_h[2];           /* '<S88>/scala_forza' */
  real32_T state_y2_k;                 /* '<S26>/state_y2' */
  real32_T state_y1;                   /* '<S26>/state_y1' */
  real32_T DataTypeConversion2_f;      /* '<S26>/Data Type Conversion2' */
  real32_T Gain4;                      /* '<Root>/Gain4' */
  real32_T DataTypeConversion7_l;      /* '<S7>/Data Type Conversion7' */
  real32_T ManualSwitch1;              /* '<S26>/Manual Switch1' */
  real32_T Memory_g;                   /* '<S184>/Memory' */
  real32_T DataTypeConversion1_o1;     /* '<S176>/Data Type Conversion1' */
  real32_T DataTypeConversion_f0;      /* '<S89>/Data Type Conversion' */
  real32_T scala_forza_k;              /* '<S89>/scala_forza' */
  real32_T DataTypeConversion1_am;     /* '<S26>/Data Type Conversion1' */
  real32_T Gain3;                      /* '<Root>/Gain3' */
  real32_T DataTypeConversion34;       /* '<Root>/Data Type Conversion34' */
  real32_T DataTypeConversion35;       /* '<Root>/Data Type Conversion35' */
  real32_T DataTypeConversion36;       /* '<Root>/Data Type Conversion36' */
  real32_T DataTypeConversion42;       /* '<Root>/Data Type Conversion42' */
  real32_T DataTypeConversion41;       /* '<Root>/Data Type Conversion41' */
  real32_T DataTypeConversion43;       /* '<Root>/Data Type Conversion43' */
  real32_T TmpSignalConversionAtBytePack2I[5];
  real32_T gain;                       /* '<S1>/gain' */
  real32_T Saturation;                 /* '<S1>/Saturation' */
  real32_T gain1_i;                    /* '<S1>/gain1' */
  real32_T Saturation1;                /* '<S1>/Saturation1' */
  real32_T start_signal;               /* '<Root>/start_signal' */
  real32_T DataTypeConversion17;       /* '<Root>/Data Type Conversion17' */
  real32_T DataTypeConversion18;       /* '<Root>/Data Type Conversion18' */
  real32_T DataTypeConversion19;       /* '<Root>/Data Type Conversion19' */
  real32_T Switch1_h;                  /* '<S184>/Switch1' */
  real32_T ByteUnpack[4];              /* '<Root>/Byte Unpack' */
  real32_T Master_enabler;             /* '<Root>/Master_enabler ' */
  real32_T enable_drives_g;            /* '<Root>/enable_drives' */
  real32_T enable_forces_e;            /* '<Root>/enable_forces' */
  real32_T x_axis_encoder_reset;       /* '<Root>/x_axis_encoder_reset ' */
  real32_T y_axis_encoder_reset;       /* '<Root>/y_axis_encoder_reset' */
  real32_T statex_g;                   /* '<S26>/static_Prova_griglia' */
  real32_T statey;                     /* '<S26>/static_Prova_griglia' */
  real32_T force;                      /* '<S89>/muro_marcia_sx' */
  real32_T force_d;                    /* '<S89>/muro_marcia_dx' */
  real32_T forcey;                     /* '<S227>/MATLAB Function' */
  real32_T forcey_m;                   /* '<S177>/Force_connector' */
  real32_T debug;                      /* '<S183>/Chart1' */
  real32_T debug_i;                    /* '<S181>/Chart1' */
  real32_T force_dq;                   /* '<S140>/muro_x' */
  real32_T force_k;                    /* '<S99>/muro_x' */
  real32_T f;                          /* '<S26>/MATLAB Function2' */
  real32_T f_f;                        /* '<S26>/MATLAB Function1' */
  real32_T Gain1_ai;                   /* '<S26>/Gain1' */
  real32_T uDLookupTable_ez;           /* '<S91>/1-D Lookup Table' */
  real32_T Product;                    /* '<S91>/Product' */
  real32_T change_sign;                /* '<S91>/change_sign' */
  real32_T ManualSwitch_l;             /* '<S26>/Manual Switch' */
  real32_T Gain_h;                     /* '<S26>/Gain' */
  real32_T Product_k;                  /* '<S26>/Product' */
  real32_T change_sign_j;              /* '<S26>/change_sign' */
  real32_T Product1_i;                 /* '<S26>/Product1' */
  real32_T change_sign1;               /* '<S26>/change_sign1' */
  real32_T DataTypeConversion1_f;      /* '<S40>/Data Type Conversion1' */
  real32_T DataTypeConversion2_b;      /* '<S40>/Data Type Conversion2' */
  real32_T DataTypeConversion3_e;      /* '<S40>/Data Type Conversion3' */
  real32_T DataTypeConversion1_e;      /* '<S44>/Data Type Conversion1' */
  real32_T DataTypeConversion2_a;      /* '<S44>/Data Type Conversion2' */
  real32_T DataTypeConversion3_gd;     /* '<S44>/Data Type Conversion3' */
  real32_T p_ref[3];                   /* '<S7>/MATLAB Function' */
  real32_T vp_ref[3];                  /* '<S7>/MATLAB Function' */
  real32_T M[9];                       /* '<S7>/MATLAB Function' */
  real32_T p_ref_i[3];                 /* '<S29>/MATLAB Function' */
  real32_T M_p[9];                     /* '<S29>/MATLAB Function' */
  real32_T tau[2];                     /* '<S29>/MATLAB Function' */
  real32_T gravity_const;              /* '<S5>/gravity_const' */
  real32_T Product2;                   /* '<S5>/Product2' */
  real32_T Product4;                   /* '<S5>/Product4' */
  real32_T gain2;                      /* '<S5>/gain2' */
  real32_T gravity_const1;             /* '<S5>/gravity_const1' */
  real32_T Product3;                   /* '<S5>/Product3' */
  real32_T Product5;                   /* '<S5>/Product5' */
  real32_T gain4;                      /* '<S5>/gain4' */
  int32_T Memory1;                     /* '<Root>/Memory1' */
  int32_T Memory2;                     /* '<Root>/Memory2' */
  int32_T EtherCATGetState;            /* '<S4>/EtherCAT Get State  ' */
  int32_T Memory_o;                    /* '<S23>/Memory' */
  int32_T Sum_k;                       /* '<S23>/Sum' */
  int32_T Memory_b;                    /* '<S24>/Memory' */
  int32_T Sum_a2;                      /* '<S24>/Sum' */
  int32_T EtherCATInit1[6];            /* '<S4>/EtherCAT Init 1' */
  int32_T DataTypeConversion1_dj;      /* '<S4>/Data Type Conversion1' */
  int32_T EtherCATSetState_o1;         /* '<S4>/EtherCAT Set State ' */
  int32_T EtherCATSetState_o2;         /* '<S4>/EtherCAT Set State ' */
  int32_T Sum_l;                       /* '<S14>/Sum' */
  int32_T Sum_bh;                      /* '<S15>/Sum' */
  int32_T Switch_jn;                   /* '<S23>/Switch' */
  int32_T Switch_e4;                   /* '<S24>/Switch' */
  int32_T EtherCATPDOReceive3;         /* '<S42>/EtherCAT PDO Receive3' */
  int32_T EtherCATPDOReceive2;         /* '<S42>/EtherCAT PDO Receive2' */
  int32_T EtherCATPDOReceive3_l;       /* '<S46>/EtherCAT PDO Receive3' */
  int32_T EtherCATPDOReceive2_h;       /* '<S46>/EtherCAT PDO Receive2' */
  uint32_T EtherCATPDOReceive1;        /* '<S42>/EtherCAT PDO Receive1' */
  uint32_T EtherCATPDOReceive1_a;      /* '<S46>/EtherCAT PDO Receive1' */
  int16_T EtherCATPDOReceive4;         /* '<S42>/EtherCAT PDO Receive4' */
  int16_T EtherCATPDOReceive4_a;       /* '<S46>/EtherCAT PDO Receive4' */
  uint16_T Drive_statusword;           /* '<S40>/Drive_statusword' */
  uint16_T statuswordmask;             /* '<S40>/statusword mask' */
  uint16_T DataTypeConversion_g;       /* '<S40>/Data Type Conversion' */
  uint16_T Drive_statusword_m;         /* '<S44>/Drive_statusword' */
  uint16_T statuswordmask_e;           /* '<S44>/statusword mask' */
  uint16_T DataTypeConversion_ph;      /* '<S44>/Data Type Conversion' */
  uint8_T BytePack1[4];                /* '<Root>/Byte Pack1' */
  uint8_T RateTransition[4];           /* '<Root>/Rate Transition' */
  uint8_T BytePack2[20];               /* '<Root>/Byte Pack2' */
  uint8_T RateTransition1[20];         /* '<Root>/Rate Transition1' */
  uint8_T UDPReceive_o1[16];           /* '<Root>/UDP Receive' */
  uint8_T BytePack3[16];               /* '<Root>/Byte Pack3' */
  uint8_T RateTransition2[16];         /* '<Root>/Rate Transition2' */
  B_transition1_bl_rl_modello_2_T transition2_zero;/* '<S183>/transition2_zero' */
  B_transition1_bl_rl_modello_2_T transition2_pt_rl_bl_pt_rl_bl2;/* '<S183>/transition2_pt_rl_bl_pt_rl_bl2' */
  B_transition1_bl_rl_modello_2_T transition2_pt_bl_rr_pt_bl_rr2;/* '<S183>/transition2_pt_bl_rr_pt_bl_rr2' */
  B_transition1_bl_rl_modello_2_T transition2_br_rr;/* '<S183>/transition2_br_rr' */
  B_transition1_bl_rl_modello_2_T transition2_bl_rl;/* '<S183>/transition2_bl_rl' */
  B_demultiplexer_enable_subsis_T sf_demultiplexer_enable_subsi_b;/* '<S183>/demultiplexer_enable_subsistems' */
  B_crossgate_selection1_begin__T crossgate_selection2_return_rig;/* '<S183>/crossgate_selection2_return_right' */
  B_crossgate_selection1_begin__T crossgate_selection2_return_lef;/* '<S183>/crossgate_selection2_return_left' */
  B_crossgate_selection1_begin__T crossgate_selection2_begin_righ;/* '<S183>/crossgate_selection2_begin_right' */
  B_crossgate_selection1_begin__T crossgate_selection2_begin_left;/* '<S183>/crossgate_selection2_begin_left' */
  B_transition1_bl_rl_modello_2_T transition1_zero;/* '<S181>/transition1_zero' */
  B_transition1_bl_rl_modello_2_T transition1_pt_rl_bl_pt_rl_bl2;/* '<S181>/transition1_pt_rl_bl_pt_rl_bl2' */
  B_transition1_bl_rl_modello_2_T transition1_pt_bl_rr_pt_bl_rr2;/* '<S181>/transition1_pt_bl_rr_pt_bl_rr2' */
  B_transition1_bl_rl_modello_2_T transition1_br_rr;/* '<S181>/transition1_br_rr' */
  B_transition1_bl_rl_modello_2_T transition1_bl_rl;/* '<S181>/transition1_bl_rl' */
  B_demultiplexer_enable_subsis_T sf_demultiplexer_enable_subsist;/* '<S181>/demultiplexer_enable_subsistems' */
  B_crossgate_selection1_begin__T crossgate_selection1_return_rig;/* '<S181>/crossgate_selection1_return_right' */
  B_crossgate_selection1_begin__T crossgate_selection1_return_lef;/* '<S181>/crossgate_selection1_return_left' */
  B_crossgate_selection1_begin__T crossgate_selection1_begin_ri_e;/* '<S181>/crossgate_selection1_begin_right1' */
  B_crossgate_selection1_begin__T crossgate_selection1_begin_righ;/* '<S181>/crossgate_selection1_begin_right' */
  B_crossgate_selection1_begin__T crossgate_selection1_begin_le_h;/* '<S181>/crossgate_selection1_begin_left1' */
  B_crossgate_selection1_begin__T crossgate_selection1_begin_le_k;/* '<S181>/crossgate_selection1_begin_left' */
  B_Render_wall1_modello_2017b__T sf_Render_wall1_mw;/* '<S142>/Render_wall1' */
  B_Render_wall1_modello_2017b__T sf_Render_wall1_ku;/* '<S141>/Render_wall1' */
  B_Render_wall1_modello_2017b__T sf_Render_wall1_k;/* '<S139>/Render_wall1' */
  B_Render_wall1_modello_2017b__T sf_Render_wall1_c;/* '<S138>/Render_wall1' */
  B_Render_wall1_modello_2017b__T sf_Render_wall1_b;/* '<S137>/Render_wall1' */
  B_Render_wall1_modello_2017b__T sf_Render_wall1_mb;/* '<S136>/Render_wall1' */
  B_Render_wall1_modello_2017b__T sf_Render_wall1_mk;/* '<S135>/Render_wall1' */
  B_demultiplexer_enable_gear_s_T sf_demultiplexer_enable_gear__j;/* '<S133>/demultiplexer_enable_gear_subsistems' */
  B_Render_wall1_modello_2017b__T sf_Render_wall1_l;/* '<S101>/Render_wall1' */
  B_Render_wall1_modello_2017b__T sf_Render_wall1_m;/* '<S100>/Render_wall1' */
  B_Render_wall1_modello_2017b__T sf_Render_wall1_o;/* '<S98>/Render_wall1' */
  B_Render_wall1_modello_2017b__T sf_Render_wall1_d;/* '<S97>/Render_wall1' */
  B_Render_wall1_modello_2017b__T sf_Render_wall1_f;/* '<S96>/Render_wall1' */
  B_Render_wall1_modello_2017b__T sf_Render_wall1_h;/* '<S95>/Render_wall1' */
  B_Render_wall1_modello_2017b__T sf_Render_wall1;/* '<S94>/Render_wall1' */
  B_demultiplexer_enable_gear_s_T sf_demultiplexer_enable_gear_su;/* '<S92>/demultiplexer_enable_gear_subsistems' */
  B_AntiSpike_modello_2017b_lev_T sf_AntiSpike_b;/* '<S24>/AntiSpike' */
  B_AntiSpike_modello_2017b_lev_T sf_AntiSpike;/* '<S23>/AntiSpike' */
  B_DS402_state_machine_modello_T sf_DS402_state_machine_g;/* '<S44>/DS402_state_machine' */
  B_DS402_state_machine_modello_T sf_DS402_state_machine;/* '<S40>/DS402_state_machine' */
} B_modello_2017b_levaRetro_acc_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S54>/Unit Delay' */
  real_T UnitDelay_DSTATE_a;           /* '<S56>/Unit Delay' */
  real_T Sum1_DWORK1;                  /* '<S23>/Sum1' */
  real_T Memory_PreviousInput;         /* '<S26>/Memory' */
  real_T Memory6_PreviousInput;        /* '<Root>/Memory6' */
  real_T Memory7_PreviousInput;        /* '<Root>/Memory7' */
  real_T muro_dx;                      /* '<S26>/static_Prova_griglia' */
  real_T muro_sx;                      /* '<S26>/static_Prova_griglia' */
  real_T corsa_marcia_x;               /* '<S26>/static_Prova_griglia' */
  real_T punto_marcia_innestata;       /* '<S26>/static_Prova_griglia' */
  real_T up_gear;                      /* '<S26>/static_Prova_griglia' */
  real_T Memory_PreviousInput_j;       /* '<S228>/Memory' */
  real_T y;                            /* '<S89>/MATLAB Function2' */
  real_T prev_state;                   /* '<S89>/MATLAB Function2' */
  real_T Memory_PreviousInput_a;       /* '<S142>/Memory' */
  real_T Memory_PreviousInput_g;       /* '<S141>/Memory' */
  real_T Memory_PreviousInput_h;       /* '<S139>/Memory' */
  real_T Memory_PreviousInput_f;       /* '<S138>/Memory' */
  real_T Memory_PreviousInput_o;       /* '<S137>/Memory' */
  real_T Memory_PreviousInput_l;       /* '<S136>/Memory' */
  real_T Memory_PreviousInput_g4;      /* '<S135>/Memory' */
  real_T Memory_PreviousInput_p;       /* '<S101>/Memory' */
  real_T Memory_PreviousInput_of;      /* '<S100>/Memory' */
  real_T Memory_PreviousInput_b;       /* '<S99>/Memory' */
  real_T toggle;                       /* '<S99>/offset' */
  real_T force_;                       /* '<S99>/offset' */
  real_T Memory_PreviousInput_l0;      /* '<S98>/Memory' */
  real_T Memory_PreviousInput_fv;      /* '<S97>/Memory' */
  real_T Memory_PreviousInput_i;       /* '<S96>/Memory' */
  real_T Memory_PreviousInput_am;      /* '<S95>/Memory' */
  real_T Memory_PreviousInput_hl;      /* '<S94>/Memory' */
  real_T muro_dx_p;                    /* '<S26>/dynamic' */
  real_T muro_sx_l;                    /* '<S26>/dynamic' */
  real_T corsa_marcia_x_e;             /* '<S26>/dynamic' */
  real_T punto_marcia_innestata_p;     /* '<S26>/dynamic' */
  real_T up_gear_f;                    /* '<S26>/dynamic' */
  real_T retroState;                   /* '<S26>/MATLAB Function' */
  real_T timenow;                      /* '<Root>/Chart' */
  struct {
    real_T EXECRATIO;
  } EtherCATInit1_RWORK;               /* '<S4>/EtherCAT Init 1' */

  void *UDPSend1_PWORK;                /* '<Root>/UDP Send1' */
  void *UDPSend2_PWORK;                /* '<Root>/UDP Send2' */
  void *UDPReceive_PWORK[2];           /* '<Root>/UDP Receive' */
  void *UDPSend3_PWORK;                /* '<Root>/UDP Send3' */
  real32_T Memory8_PreviousInput;      /* '<Root>/Memory8' */
  real32_T Memory3_PreviousInput;      /* '<Root>/Memory3' */
  real32_T Memory9_PreviousInput;      /* '<Root>/Memory9' */
  real32_T Memory_PreviousInput_m;     /* '<S184>/Memory' */
  real32_T last_state;                 /* '<S89>/muro_marcia_sx' */
  real32_T last_state_j;               /* '<S89>/muro_marcia_dx' */
  int32_T Memory1_PreviousInput;       /* '<Root>/Memory1' */
  int32_T Memory2_PreviousInput;       /* '<Root>/Memory2' */
  int32_T Memory_PreviousInput_n;      /* '<S23>/Memory' */
  int32_T Memory_PreviousInput_nc;     /* '<S24>/Memory' */
  int32_T sfEvent;                     /* '<S26>/static_Prova_griglia' */
  int32_T sfEvent_h;                   /* '<S183>/Chart1' */
  int32_T sfEvent_l;                   /* '<S181>/Chart1' */
  int32_T sfEvent_m;                   /* '<S26>/dynamic' */
  int32_T sfEvent_ln;                  /* '<S4>/Ethercat master State Machine' */
  int32_T sfEvent_b;                   /* '<Root>/Chart' */
  int_T EtherCATGetState_IWORK;        /* '<S4>/EtherCAT Get State  ' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK;                   /* '<S16>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_e;                 /* '<S17>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_d;                 /* '<S18>/S-Function' */

  int_T UDPSend1_IWORK[3];             /* '<Root>/UDP Send1' */
  int_T UDPSend2_IWORK[3];             /* '<Root>/UDP Send2' */
  int_T EtherCATSetState_IWORK[2];     /* '<S4>/EtherCAT Set State ' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK_l;                 /* '<S19>/S-Function' */

  int_T UDPReceive_IWORK[2];           /* '<Root>/UDP Receive' */
  int_T UDPSend3_IWORK[3];             /* '<Root>/UDP Send3' */
  int_T EtherCATPDOReceive1_IWORK[7];  /* '<S42>/EtherCAT PDO Receive1' */
  int_T EtherCATPDOReceive3_IWORK[7];  /* '<S42>/EtherCAT PDO Receive3' */
  int_T EtherCATPDOReceive4_IWORK[7];  /* '<S42>/EtherCAT PDO Receive4' */
  int_T EtherCATPDOReceive2_IWORK[7];  /* '<S42>/EtherCAT PDO Receive2' */
  int_T Drive_statusword_IWORK[7];     /* '<S40>/Drive_statusword' */
  int_T Drive_controlword_IWORK[7];    /* '<S40>/Drive_controlword' */
  int_T EtherCATPDOTransmit2_IWORK[7]; /* '<S41>/EtherCAT PDO Transmit 2' */
  int_T EtherCATPDOReceive1_IWORK_b[7];/* '<S46>/EtherCAT PDO Receive1' */
  int_T EtherCATPDOReceive3_IWORK_f[7];/* '<S46>/EtherCAT PDO Receive3' */
  int_T EtherCATPDOReceive4_IWORK_m[7];/* '<S46>/EtherCAT PDO Receive4' */
  int_T EtherCATPDOReceive2_IWORK_c[7];/* '<S46>/EtherCAT PDO Receive2' */
  int_T Drive_statusword_IWORK_a[7];   /* '<S44>/Drive_statusword' */
  int_T Drive_controlword_IWORK_a[7];  /* '<S44>/Drive_controlword' */
  int_T EtherCATPDOTransmit2_IWORK_m[7];/* '<S45>/EtherCAT PDO Transmit 2' */
  int8_T inside_gear_path_SubsysRanBC; /* '<S89>/inside_gear_path' */
  int8_T crossgate_selection2_profile_Su;/* '<S176>/crossgate_selection2_profile' */
  int8_T crossgate_selection1_profile_Su;/* '<S176>/crossgate_selection1_profile' */
  int8_T third_gear_SubsysRanBC;       /* '<S133>/third_gear' */
  int8_T sixth_gear_SubsysRanBC;       /* '<S133>/sixth_gear' */
  int8_T selection_axis_SubsysRanBC;   /* '<S133>/selection_axis' */
  int8_T second_gear_SubsysRanBC;      /* '<S133>/second_gear' */
  int8_T reverse_gear_SubsysRanBC;     /* '<S133>/reverse_gear' */
  int8_T fourth_gear_SubsysRanBC;      /* '<S133>/fourth_gear' */
  int8_T first_gear_SubsysRanBC;       /* '<S133>/first_gear ' */
  int8_T fifth_gear_SubsysRanBC;       /* '<S133>/fifth_gear' */
  int8_T third_gear_SubsysRanBC_n;     /* '<S92>/third_gear' */
  int8_T sixth_gear_SubsysRanBC_i;     /* '<S92>/sixth_gear' */
  int8_T selection_axis1_SubsysRanBC;  /* '<S92>/selection_axis1' */
  int8_T second_gear_SubsysRanBC_l;    /* '<S92>/second_gear' */
  int8_T reverse_gear_SubsysRanBC_m;   /* '<S92>/reverse_gear' */
  int8_T fourth_gear_SubsysRanBC_g;    /* '<S92>/fourth_gear' */
  int8_T first_gear_SubsysRanBC_f;     /* '<S92>/first_gear ' */
  int8_T fifth_gear_SubsysRanBC_o;     /* '<S92>/fifth_gear' */
  int8_T Slaves_control_and_status_Subsy;/* '<Root>/Slaves_control_and_status' */
  uint8_T is_active_c152_modello_2017b_le;/* '<S26>/static_Prova_griglia' */
  uint8_T is_asse_x;                   /* '<S26>/static_Prova_griglia' */
  uint8_T is_active_asse_x;            /* '<S26>/static_Prova_griglia' */
  uint8_T is_asse_y;                   /* '<S26>/static_Prova_griglia' */
  uint8_T is_active_asse_y;            /* '<S26>/static_Prova_griglia' */
  uint8_T is_active_c463_modello_2017b_le;/* '<S183>/Chart1' */
  uint8_T is_c463_modello_2017b_levaRetro;/* '<S183>/Chart1' */
  uint8_T is_state_machine;            /* '<S183>/Chart1' */
  uint8_T is_active_c451_modello_2017b_le;/* '<S181>/Chart1' */
  uint8_T is_c451_modello_2017b_levaRetro;/* '<S181>/Chart1' */
  uint8_T is_state_machine_j;          /* '<S181>/Chart1' */
  uint8_T is_active_c52_modello_2017b_lev;/* '<S26>/dynamic' */
  uint8_T is_asse_x_dyn;               /* '<S26>/dynamic' */
  uint8_T is_active_asse_x_dyn;        /* '<S26>/dynamic' */
  uint8_T is_active_c2_modello_2017b_leva;/* '<S4>/Ethercat master State Machine' */
  uint8_T is_c2_modello_2017b_levaRetro_a;/* '<S4>/Ethercat master State Machine' */
  uint8_T is_active_c27_modello_2017b_lev;/* '<Root>/Chart' */
  uint8_T is_c27_modello_2017b_levaRetro_;/* '<Root>/Chart' */
  boolean_T last_state_not_empty;      /* '<S89>/muro_marcia_sx' */
  boolean_T last_state_not_empty_p;    /* '<S89>/muro_marcia_dx' */
  boolean_T y_not_empty;               /* '<S89>/MATLAB Function2' */
  DW_transition1_bl_rl_modello__T transition2_zero;/* '<S183>/transition2_zero' */
  DW_transition1_bl_rl_modello__T transition2_pt_rl_bl_pt_rl_bl2;/* '<S183>/transition2_pt_rl_bl_pt_rl_bl2' */
  DW_transition1_bl_rl_modello__T transition2_pt_bl_rr_pt_bl_rr2;/* '<S183>/transition2_pt_bl_rr_pt_bl_rr2' */
  DW_transition1_bl_rl_modello__T transition2_br_rr;/* '<S183>/transition2_br_rr' */
  DW_transition1_bl_rl_modello__T transition2_bl_rl;/* '<S183>/transition2_bl_rl' */
  DW_crossgate_selection1_begin_T crossgate_selection2_return_rig;/* '<S183>/crossgate_selection2_return_right' */
  DW_crossgate_selection1_begin_T crossgate_selection2_return_lef;/* '<S183>/crossgate_selection2_return_left' */
  DW_crossgate_selection1_begin_T crossgate_selection2_begin_righ;/* '<S183>/crossgate_selection2_begin_right' */
  DW_crossgate_selection1_begin_T crossgate_selection2_begin_left;/* '<S183>/crossgate_selection2_begin_left' */
  DW_transition1_bl_rl_modello__T transition1_zero;/* '<S181>/transition1_zero' */
  DW_transition1_bl_rl_modello__T transition1_pt_rl_bl_pt_rl_bl2;/* '<S181>/transition1_pt_rl_bl_pt_rl_bl2' */
  DW_transition1_bl_rl_modello__T transition1_pt_bl_rr_pt_bl_rr2;/* '<S181>/transition1_pt_bl_rr_pt_bl_rr2' */
  DW_transition1_bl_rl_modello__T transition1_br_rr;/* '<S181>/transition1_br_rr' */
  DW_transition1_bl_rl_modello__T transition1_bl_rl;/* '<S181>/transition1_bl_rl' */
  DW_crossgate_selection1_begin_T crossgate_selection1_return_rig;/* '<S181>/crossgate_selection1_return_right' */
  DW_crossgate_selection1_begin_T crossgate_selection1_return_lef;/* '<S181>/crossgate_selection1_return_left' */
  DW_crossgate_selection1_begin_T crossgate_selection1_begin_ri_e;/* '<S181>/crossgate_selection1_begin_right1' */
  DW_crossgate_selection1_begin_T crossgate_selection1_begin_righ;/* '<S181>/crossgate_selection1_begin_right' */
  DW_crossgate_selection1_begin_T crossgate_selection1_begin_le_h;/* '<S181>/crossgate_selection1_begin_left1' */
  DW_crossgate_selection1_begin_T crossgate_selection1_begin_le_k;/* '<S181>/crossgate_selection1_begin_left' */
  DW_AntiSpike_modello_2017b_le_T sf_AntiSpike_b;/* '<S24>/AntiSpike' */
  DW_AntiSpike_modello_2017b_le_T sf_AntiSpike;/* '<S23>/AntiSpike' */
  DW_DS402_state_machine_modell_T sf_DS402_state_machine_g;/* '<S44>/DS402_state_machine' */
  DW_DS402_state_machine_modell_T sf_DS402_state_machine;/* '<S40>/DS402_state_machine' */
} DW_modello_2017b_levaRetro_acc_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real32_T position_x;                 /* '<Root>/position_x' */
  real32_T force_x;                    /* '<Root>/force_x' */
  real32_T position_y;                 /* '<Root>/position_y' */
  real32_T force_y;                    /* '<Root>/force_y' */
} ExtY_modello_2017b_levaRetro_acc_T;

/* Backward compatible GRT Identifiers */
#define rtB                            modello_2017b_levaRetro_acc_B
#define BlockIO                        B_modello_2017b_levaRetro_acc_T
#define rtY                            modello_2017b_levaRetro_acc_Y
#define ExternalOutputs                ExtY_modello_2017b_levaRetro_acc_T
#define rtP                            modello_2017b_levaRetro_acc_P
#define Parameters                     P_modello_2017b_levaRetro_acc_T
#define rtDWork                        modello_2017b_levaRetro_acc_DW
#define D_Work                         DW_modello_2017b_levaRetro_acc_T

/* Parameters for system: '<S181>/crossgate_selection1_begin_left' */
struct P_crossgate_selection1_begin__T_ {
  real_T uDLookupTable_tableData[5];   /* Expression: crossgate_selection1_begin_left(:,2)
                                        * Referenced by: '<S187>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[5];    /* Expression: crossgate_selection1_begin_left(:,1)
                                        * Referenced by: '<S187>/1-D Lookup Table'
                                        */
};

/* Parameters for system: '<S181>/transition1_bl_rl' */
struct P_transition1_bl_rl_modello_2_T_ {
  real_T uDLookupTable_tableData[2];   /* Expression: transition1_bl_rl(:,2)
                                        * Referenced by: '<S195>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[2];    /* Expression: transition1_bl_rl(:,1)
                                        * Referenced by: '<S195>/1-D Lookup Table'
                                        */
};

/* Parameters (auto storage) */
struct P_modello_2017b_levaRetro_acc_T_ {
  real_T SystemSampleTime;             /* Variable: SystemSampleTime
                                        * Referenced by:
                                        *   '<S54>/length1'
                                        *   '<S56>/length1'
                                        */
  real_T backlash[14];                 /* Variable: backlash
                                        * Referenced by: '<S227>/Constant'
                                        */
  real_T crossgate1_begleft_retright_stable_pos;/* Variable: crossgate1_begleft_retright_stable_pos
                                                 * Referenced by: '<S181>/Chart1'
                                                 */
  real_T crossgate1_left_pos_threshold;/* Variable: crossgate1_left_pos_threshold
                                        * Referenced by: '<S181>/Chart1'
                                        */
  real_T crossgate1_retleft_begright_stable_pos;/* Variable: crossgate1_retleft_begright_stable_pos
                                                 * Referenced by: '<S181>/Chart1'
                                                 */
  real_T crossgate1_right_pos_threshold;/* Variable: crossgate1_right_pos_threshold
                                         * Referenced by: '<S181>/Chart1'
                                         */
  real_T crossgate2_begleft_retright_stable_pos;/* Variable: crossgate2_begleft_retright_stable_pos
                                                 * Referenced by: '<S183>/Chart1'
                                                 */
  real_T crossgate2_left_pos_threshold;/* Variable: crossgate2_left_pos_threshold
                                        * Referenced by: '<S183>/Chart1'
                                        */
  real_T crossgate2_retleft_begright_stable_pos;/* Variable: crossgate2_retleft_begright_stable_pos
                                                 * Referenced by: '<S183>/Chart1'
                                                 */
  real_T crossgate2_right_pos_threshold;/* Variable: crossgate2_right_pos_threshold
                                         * Referenced by: '<S183>/Chart1'
                                         */
  real_T gearshift_grid[42];           /* Variable: gearshift_grid
                                        * Referenced by:
                                        *   '<S26>/dynamic'
                                        *   '<S26>/static_Prova_griglia'
                                        *   '<S26>/Constant1'
                                        *   '<S89>/Constant1'
                                        *   '<S94>/offset'
                                        *   '<S94>/up//down'
                                        *   '<S95>/offset'
                                        *   '<S95>/up//down'
                                        *   '<S96>/offset'
                                        *   '<S96>/up//down'
                                        *   '<S97>/offset'
                                        *   '<S97>/up//down'
                                        *   '<S98>/offset'
                                        *   '<S98>/up//down'
                                        *   '<S100>/offset'
                                        *   '<S100>/up//down'
                                        *   '<S101>/offset'
                                        *   '<S101>/up//down'
                                        *   '<S135>/offset'
                                        *   '<S135>/up//down'
                                        *   '<S136>/up//down'
                                        *   '<S137>/offset'
                                        *   '<S137>/up//down'
                                        *   '<S138>/offset'
                                        *   '<S138>/up//down'
                                        *   '<S139>/offset'
                                        *   '<S139>/up//down'
                                        *   '<S141>/offset'
                                        *   '<S141>/up//down'
                                        *   '<S142>/offset'
                                        *   '<S142>/up//down'
                                        */
  real_T gearshift_grid_dyn[42];       /* Variable: gearshift_grid_dyn
                                        * Referenced by:
                                        *   '<S26>/dynamic'
                                        *   '<S26>/static_Prova_griglia'
                                        *   '<S136>/offset'
                                        */
  real_T k_stiffness;                  /* Variable: k_stiffness
                                        * Referenced by:
                                        *   '<S94>/stiffness'
                                        *   '<S95>/stiffness'
                                        *   '<S96>/stiffness'
                                        *   '<S97>/stiffness'
                                        *   '<S98>/stiffness'
                                        *   '<S99>/stiffness'
                                        *   '<S100>/stiffness'
                                        *   '<S101>/stiffness'
                                        *   '<S135>/stiffness'
                                        *   '<S136>/stiffness'
                                        *   '<S137>/stiffness'
                                        *   '<S138>/stiffness'
                                        *   '<S139>/stiffness'
                                        *   '<S140>/stiffness'
                                        *   '<S141>/stiffness'
                                        *   '<S142>/stiffness'
                                        */
  real_T off_sw_curve;                 /* Variable: off_sw_curve
                                        * Referenced by:
                                        *   '<S181>/Chart1'
                                        *   '<S183>/Chart1'
                                        */
  real_T selection1_y_neg;             /* Variable: selection1_y_neg
                                        * Referenced by:
                                        *   '<S26>/dynamic'
                                        *   '<S26>/static_Prova_griglia'
                                        *   '<S26>/Constant4'
                                        *   '<S89>/selection1_y_neg'
                                        */
  real_T selection1_y_pos;             /* Variable: selection1_y_pos
                                        * Referenced by:
                                        *   '<S26>/dynamic'
                                        *   '<S26>/static_Prova_griglia'
                                        *   '<S26>/Constant3'
                                        *   '<S89>/selection1_y_pos'
                                        */
  real_T selection2_y_neg;             /* Variable: selection2_y_neg
                                        * Referenced by:
                                        *   '<S26>/dynamic'
                                        *   '<S26>/static_Prova_griglia'
                                        *   '<S26>/Constant6'
                                        *   '<S89>/selection2_y_neg'
                                        */
  real_T selection2_y_pos;             /* Variable: selection2_y_pos
                                        * Referenced by:
                                        *   '<S26>/dynamic'
                                        *   '<S26>/static_Prova_griglia'
                                        *   '<S26>/Constant5'
                                        *   '<S89>/selection2_y_pos'
                                        */
  real_T selection_x_neg;              /* Variable: selection_x_neg
                                        * Referenced by:
                                        *   '<S26>/dynamic'
                                        *   '<S26>/static_Prova_griglia'
                                        *   '<S26>/Constant2'
                                        *   '<S177>/selection_x_neg'
                                        *   '<S94>/selection_x_neg'
                                        *   '<S95>/selection_x_neg'
                                        *   '<S96>/selection_x_neg'
                                        *   '<S97>/selection_x_neg'
                                        *   '<S98>/selection_x_neg'
                                        *   '<S99>/selection_x_neg'
                                        *   '<S100>/selection_x_neg'
                                        *   '<S101>/selection_x_neg'
                                        *   '<S135>/selection_x_neg'
                                        *   '<S136>/selection_x_neg'
                                        *   '<S137>/selection_x_neg'
                                        *   '<S138>/selection_x_neg'
                                        *   '<S139>/selection_x_neg'
                                        *   '<S140>/selection_x_neg'
                                        *   '<S141>/selection_x_neg'
                                        *   '<S142>/selection_x_neg'
                                        */
  real_T selection_x_pos;              /* Variable: selection_x_pos
                                        * Referenced by:
                                        *   '<S26>/dynamic'
                                        *   '<S26>/static_Prova_griglia'
                                        *   '<S26>/Constant'
                                        *   '<S177>/selection_x_pos'
                                        *   '<S94>/selection_x_pos'
                                        *   '<S95>/selection_x_pos'
                                        *   '<S96>/selection_x_pos'
                                        *   '<S97>/selection_x_pos'
                                        *   '<S98>/selection_x_pos'
                                        *   '<S99>/selection_x_pos'
                                        *   '<S100>/selection_x_pos'
                                        *   '<S101>/selection_x_pos'
                                        *   '<S135>/selection_x_pos'
                                        *   '<S136>/selection_x_pos'
                                        *   '<S137>/selection_x_pos'
                                        *   '<S138>/selection_x_pos'
                                        *   '<S139>/selection_x_pos'
                                        *   '<S140>/selection_x_pos'
                                        *   '<S141>/selection_x_pos'
                                        *   '<S142>/selection_x_pos'
                                        */
  real_T stiffness_gioco_gear[14];     /* Variable: stiffness_gioco_gear
                                        * Referenced by: '<S227>/Constant1'
                                        */
  real_T stiffness_sel_walls[16];      /* Variable: stiffness_sel_walls
                                        * Referenced by: '<S89>/Constant'
                                        */
  real_T t_m;                          /* Variable: t_m
                                        * Referenced by:
                                        *   '<S181>/Chart1'
                                        *   '<S183>/Chart1'
                                        */
  real_T torque_constant;              /* Variable: torque_constant
                                        * Referenced by:
                                        *   '<S14>/Gain'
                                        *   '<S15>/Gain'
                                        */
  real_T transmission_ratio[2];        /* Variable: transmission_ratio
                                        * Referenced by:
                                        *   '<S14>/Gain1'
                                        *   '<S15>/Gain1'
                                        *   '<S23>/enc_raw_to_rad1'
                                        *   '<S24>/enc_raw_to_rad1'
                                        */
  real32_T gain_forces;                /* Variable: gain_forces
                                        * Referenced by:
                                        *   '<S87>/scala_forza'
                                        *   '<S88>/scala_forza'
                                        *   '<S89>/scala_forza'
                                        */
  real32_T lever_length;               /* Variable: lever_length
                                        * Referenced by:
                                        *   '<Root>/lever_length_without_knob1'
                                        *   '<S1>/lever_length_without_knob1'
                                        */
  uint16_T statuswordmask_BitMask;     /* Mask Parameter: statuswordmask_BitMask
                                        * Referenced by: '<S40>/statusword mask'
                                        */
  uint16_T statuswordmask_BitMask_h;   /* Mask Parameter: statuswordmask_BitMask_h
                                        * Referenced by: '<S44>/statusword mask'
                                        */
  real_T gravity_const2_Gain;          /* Expression: 9.81
                                        * Referenced by: '<S5>/gravity_const2'
                                        */
  real_T gain1_Gain;                   /* Expression: 1
                                        * Referenced by: '<S5>/gain1'
                                        */
  real_T uDLookupTable_tableData[200]; /* Expression: cogging_compensation_x(:,2)
                                        * Referenced by: '<S14>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[200];  /* Expression: cogging_compensation_x(:,1)
                                        * Referenced by: '<S14>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_tableData_c[200];/* Expression: cogging_compensation_y(:,2)
                                         * Referenced by: '<S15>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_l[200];/* Expression: cogging_compensation_y(:,1)
                                        * Referenced by: '<S15>/1-D Lookup Table'
                                        */
  real_T EtherCATPDOReceive1_P1_Size[2];/* Computed Parameter: EtherCATPDOReceive1_P1_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive1'
                                         */
  real_T EtherCATPDOReceive1_P1[35];   /* Computed Parameter: EtherCATPDOReceive1_P1
                                        * Referenced by: '<S42>/EtherCAT PDO Receive1'
                                        */
  real_T EtherCATPDOReceive1_P2_Size[2];/* Computed Parameter: EtherCATPDOReceive1_P2_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive1'
                                         */
  real_T EtherCATPDOReceive1_P2;       /* Expression: sig_offset
                                        * Referenced by: '<S42>/EtherCAT PDO Receive1'
                                        */
  real_T EtherCATPDOReceive1_P3_Size[2];/* Computed Parameter: EtherCATPDOReceive1_P3_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive1'
                                         */
  real_T EtherCATPDOReceive1_P3;       /* Expression: sig_type
                                        * Referenced by: '<S42>/EtherCAT PDO Receive1'
                                        */
  real_T EtherCATPDOReceive1_P4_Size[2];/* Computed Parameter: EtherCATPDOReceive1_P4_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive1'
                                         */
  real_T EtherCATPDOReceive1_P4;       /* Expression: type_size
                                        * Referenced by: '<S42>/EtherCAT PDO Receive1'
                                        */
  real_T EtherCATPDOReceive1_P5_Size[2];/* Computed Parameter: EtherCATPDOReceive1_P5_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive1'
                                         */
  real_T EtherCATPDOReceive1_P5;       /* Expression: sig_dim
                                        * Referenced by: '<S42>/EtherCAT PDO Receive1'
                                        */
  real_T EtherCATPDOReceive1_P6_Size[2];/* Computed Parameter: EtherCATPDOReceive1_P6_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive1'
                                         */
  real_T EtherCATPDOReceive1_P6;       /* Expression: device_id
                                        * Referenced by: '<S42>/EtherCAT PDO Receive1'
                                        */
  real_T EtherCATPDOReceive1_P7_Size[2];/* Computed Parameter: EtherCATPDOReceive1_P7_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive1'
                                         */
  real_T EtherCATPDOReceive1_P7;       /* Expression: sample_time
                                        * Referenced by: '<S42>/EtherCAT PDO Receive1'
                                        */
  real_T EtherCATPDOReceive3_P1_Size[2];/* Computed Parameter: EtherCATPDOReceive3_P1_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive3'
                                         */
  real_T EtherCATPDOReceive3_P1[51];   /* Computed Parameter: EtherCATPDOReceive3_P1
                                        * Referenced by: '<S42>/EtherCAT PDO Receive3'
                                        */
  real_T EtherCATPDOReceive3_P2_Size[2];/* Computed Parameter: EtherCATPDOReceive3_P2_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive3'
                                         */
  real_T EtherCATPDOReceive3_P2;       /* Expression: sig_offset
                                        * Referenced by: '<S42>/EtherCAT PDO Receive3'
                                        */
  real_T EtherCATPDOReceive3_P3_Size[2];/* Computed Parameter: EtherCATPDOReceive3_P3_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive3'
                                         */
  real_T EtherCATPDOReceive3_P3;       /* Expression: sig_type
                                        * Referenced by: '<S42>/EtherCAT PDO Receive3'
                                        */
  real_T EtherCATPDOReceive3_P4_Size[2];/* Computed Parameter: EtherCATPDOReceive3_P4_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive3'
                                         */
  real_T EtherCATPDOReceive3_P4;       /* Expression: type_size
                                        * Referenced by: '<S42>/EtherCAT PDO Receive3'
                                        */
  real_T EtherCATPDOReceive3_P5_Size[2];/* Computed Parameter: EtherCATPDOReceive3_P5_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive3'
                                         */
  real_T EtherCATPDOReceive3_P5;       /* Expression: sig_dim
                                        * Referenced by: '<S42>/EtherCAT PDO Receive3'
                                        */
  real_T EtherCATPDOReceive3_P6_Size[2];/* Computed Parameter: EtherCATPDOReceive3_P6_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive3'
                                         */
  real_T EtherCATPDOReceive3_P6;       /* Expression: device_id
                                        * Referenced by: '<S42>/EtherCAT PDO Receive3'
                                        */
  real_T EtherCATPDOReceive3_P7_Size[2];/* Computed Parameter: EtherCATPDOReceive3_P7_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive3'
                                         */
  real_T EtherCATPDOReceive3_P7;       /* Expression: sample_time
                                        * Referenced by: '<S42>/EtherCAT PDO Receive3'
                                        */
  real_T EtherCATPDOReceive4_P1_Size[2];/* Computed Parameter: EtherCATPDOReceive4_P1_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive4'
                                         */
  real_T EtherCATPDOReceive4_P1[40];   /* Computed Parameter: EtherCATPDOReceive4_P1
                                        * Referenced by: '<S42>/EtherCAT PDO Receive4'
                                        */
  real_T EtherCATPDOReceive4_P2_Size[2];/* Computed Parameter: EtherCATPDOReceive4_P2_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive4'
                                         */
  real_T EtherCATPDOReceive4_P2;       /* Expression: sig_offset
                                        * Referenced by: '<S42>/EtherCAT PDO Receive4'
                                        */
  real_T EtherCATPDOReceive4_P3_Size[2];/* Computed Parameter: EtherCATPDOReceive4_P3_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive4'
                                         */
  real_T EtherCATPDOReceive4_P3;       /* Expression: sig_type
                                        * Referenced by: '<S42>/EtherCAT PDO Receive4'
                                        */
  real_T EtherCATPDOReceive4_P4_Size[2];/* Computed Parameter: EtherCATPDOReceive4_P4_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive4'
                                         */
  real_T EtherCATPDOReceive4_P4;       /* Expression: type_size
                                        * Referenced by: '<S42>/EtherCAT PDO Receive4'
                                        */
  real_T EtherCATPDOReceive4_P5_Size[2];/* Computed Parameter: EtherCATPDOReceive4_P5_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive4'
                                         */
  real_T EtherCATPDOReceive4_P5;       /* Expression: sig_dim
                                        * Referenced by: '<S42>/EtherCAT PDO Receive4'
                                        */
  real_T EtherCATPDOReceive4_P6_Size[2];/* Computed Parameter: EtherCATPDOReceive4_P6_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive4'
                                         */
  real_T EtherCATPDOReceive4_P6;       /* Expression: device_id
                                        * Referenced by: '<S42>/EtherCAT PDO Receive4'
                                        */
  real_T EtherCATPDOReceive4_P7_Size[2];/* Computed Parameter: EtherCATPDOReceive4_P7_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive4'
                                         */
  real_T EtherCATPDOReceive4_P7;       /* Expression: sample_time
                                        * Referenced by: '<S42>/EtherCAT PDO Receive4'
                                        */
  real_T EtherCATPDOReceive2_P1_Size[2];/* Computed Parameter: EtherCATPDOReceive2_P1_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive2'
                                         */
  real_T EtherCATPDOReceive2_P1[42];   /* Computed Parameter: EtherCATPDOReceive2_P1
                                        * Referenced by: '<S42>/EtherCAT PDO Receive2'
                                        */
  real_T EtherCATPDOReceive2_P2_Size[2];/* Computed Parameter: EtherCATPDOReceive2_P2_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive2'
                                         */
  real_T EtherCATPDOReceive2_P2;       /* Expression: sig_offset
                                        * Referenced by: '<S42>/EtherCAT PDO Receive2'
                                        */
  real_T EtherCATPDOReceive2_P3_Size[2];/* Computed Parameter: EtherCATPDOReceive2_P3_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive2'
                                         */
  real_T EtherCATPDOReceive2_P3;       /* Expression: sig_type
                                        * Referenced by: '<S42>/EtherCAT PDO Receive2'
                                        */
  real_T EtherCATPDOReceive2_P4_Size[2];/* Computed Parameter: EtherCATPDOReceive2_P4_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive2'
                                         */
  real_T EtherCATPDOReceive2_P4;       /* Expression: type_size
                                        * Referenced by: '<S42>/EtherCAT PDO Receive2'
                                        */
  real_T EtherCATPDOReceive2_P5_Size[2];/* Computed Parameter: EtherCATPDOReceive2_P5_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive2'
                                         */
  real_T EtherCATPDOReceive2_P5;       /* Expression: sig_dim
                                        * Referenced by: '<S42>/EtherCAT PDO Receive2'
                                        */
  real_T EtherCATPDOReceive2_P6_Size[2];/* Computed Parameter: EtherCATPDOReceive2_P6_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive2'
                                         */
  real_T EtherCATPDOReceive2_P6;       /* Expression: device_id
                                        * Referenced by: '<S42>/EtherCAT PDO Receive2'
                                        */
  real_T EtherCATPDOReceive2_P7_Size[2];/* Computed Parameter: EtherCATPDOReceive2_P7_Size
                                         * Referenced by: '<S42>/EtherCAT PDO Receive2'
                                         */
  real_T EtherCATPDOReceive2_P7;       /* Expression: sample_time
                                        * Referenced by: '<S42>/EtherCAT PDO Receive2'
                                        */
  real_T Drive_statusword_P1_Size[2];  /* Computed Parameter: Drive_statusword_P1_Size
                                        * Referenced by: '<S40>/Drive_statusword'
                                        */
  real_T Drive_statusword_P1[31];      /* Computed Parameter: Drive_statusword_P1
                                        * Referenced by: '<S40>/Drive_statusword'
                                        */
  real_T Drive_statusword_P2_Size[2];  /* Computed Parameter: Drive_statusword_P2_Size
                                        * Referenced by: '<S40>/Drive_statusword'
                                        */
  real_T Drive_statusword_P2;          /* Expression: sig_offset
                                        * Referenced by: '<S40>/Drive_statusword'
                                        */
  real_T Drive_statusword_P3_Size[2];  /* Computed Parameter: Drive_statusword_P3_Size
                                        * Referenced by: '<S40>/Drive_statusword'
                                        */
  real_T Drive_statusword_P3;          /* Expression: sig_type
                                        * Referenced by: '<S40>/Drive_statusword'
                                        */
  real_T Drive_statusword_P4_Size[2];  /* Computed Parameter: Drive_statusword_P4_Size
                                        * Referenced by: '<S40>/Drive_statusword'
                                        */
  real_T Drive_statusword_P4;          /* Expression: type_size
                                        * Referenced by: '<S40>/Drive_statusword'
                                        */
  real_T Drive_statusword_P5_Size[2];  /* Computed Parameter: Drive_statusword_P5_Size
                                        * Referenced by: '<S40>/Drive_statusword'
                                        */
  real_T Drive_statusword_P5;          /* Expression: sig_dim
                                        * Referenced by: '<S40>/Drive_statusword'
                                        */
  real_T Drive_statusword_P6_Size[2];  /* Computed Parameter: Drive_statusword_P6_Size
                                        * Referenced by: '<S40>/Drive_statusword'
                                        */
  real_T Drive_statusword_P6;          /* Expression: device_id
                                        * Referenced by: '<S40>/Drive_statusword'
                                        */
  real_T Drive_statusword_P7_Size[2];  /* Computed Parameter: Drive_statusword_P7_Size
                                        * Referenced by: '<S40>/Drive_statusword'
                                        */
  real_T Drive_statusword_P7;          /* Expression: sample_time
                                        * Referenced by: '<S40>/Drive_statusword'
                                        */
  real_T Drive_controlword_P1_Size[2]; /* Computed Parameter: Drive_controlword_P1_Size
                                        * Referenced by: '<S40>/Drive_controlword'
                                        */
  real_T Drive_controlword_P1[33];     /* Computed Parameter: Drive_controlword_P1
                                        * Referenced by: '<S40>/Drive_controlword'
                                        */
  real_T Drive_controlword_P2_Size[2]; /* Computed Parameter: Drive_controlword_P2_Size
                                        * Referenced by: '<S40>/Drive_controlword'
                                        */
  real_T Drive_controlword_P2;         /* Expression: sig_offset
                                        * Referenced by: '<S40>/Drive_controlword'
                                        */
  real_T Drive_controlword_P3_Size[2]; /* Computed Parameter: Drive_controlword_P3_Size
                                        * Referenced by: '<S40>/Drive_controlword'
                                        */
  real_T Drive_controlword_P3;         /* Expression: sig_type
                                        * Referenced by: '<S40>/Drive_controlword'
                                        */
  real_T Drive_controlword_P4_Size[2]; /* Computed Parameter: Drive_controlword_P4_Size
                                        * Referenced by: '<S40>/Drive_controlword'
                                        */
  real_T Drive_controlword_P4;         /* Expression: type_size
                                        * Referenced by: '<S40>/Drive_controlword'
                                        */
  real_T Drive_controlword_P5_Size[2]; /* Computed Parameter: Drive_controlword_P5_Size
                                        * Referenced by: '<S40>/Drive_controlword'
                                        */
  real_T Drive_controlword_P5;         /* Expression: sig_dim
                                        * Referenced by: '<S40>/Drive_controlword'
                                        */
  real_T Drive_controlword_P6_Size[2]; /* Computed Parameter: Drive_controlword_P6_Size
                                        * Referenced by: '<S40>/Drive_controlword'
                                        */
  real_T Drive_controlword_P6;         /* Expression: device_id
                                        * Referenced by: '<S40>/Drive_controlword'
                                        */
  real_T Drive_controlword_P7_Size[2]; /* Computed Parameter: Drive_controlword_P7_Size
                                        * Referenced by: '<S40>/Drive_controlword'
                                        */
  real_T Drive_controlword_P7;         /* Expression: sample_time
                                        * Referenced by: '<S40>/Drive_controlword'
                                        */
  real_T EtherCATPDOTransmit2_P1_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P1_Size
                                          * Referenced by: '<S41>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P1[36];  /* Computed Parameter: EtherCATPDOTransmit2_P1
                                        * Referenced by: '<S41>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P2_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P2_Size
                                          * Referenced by: '<S41>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P2;      /* Expression: sig_offset
                                        * Referenced by: '<S41>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P3_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P3_Size
                                          * Referenced by: '<S41>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P3;      /* Expression: sig_type
                                        * Referenced by: '<S41>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P4_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P4_Size
                                          * Referenced by: '<S41>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P4;      /* Expression: type_size
                                        * Referenced by: '<S41>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P5_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P5_Size
                                          * Referenced by: '<S41>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P5;      /* Expression: sig_dim
                                        * Referenced by: '<S41>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P6_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P6_Size
                                          * Referenced by: '<S41>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P6;      /* Expression: device_id
                                        * Referenced by: '<S41>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P7_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P7_Size
                                          * Referenced by: '<S41>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P7;      /* Expression: sample_time
                                        * Referenced by: '<S41>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOReceive1_P1_Size_m[2];/* Computed Parameter: EtherCATPDOReceive1_P1_Size_m
                                           * Referenced by: '<S46>/EtherCAT PDO Receive1'
                                           */
  real_T EtherCATPDOReceive1_P1_f[35]; /* Computed Parameter: EtherCATPDOReceive1_P1_f
                                        * Referenced by: '<S46>/EtherCAT PDO Receive1'
                                        */
  real_T EtherCATPDOReceive1_P2_Size_o[2];/* Computed Parameter: EtherCATPDOReceive1_P2_Size_o
                                           * Referenced by: '<S46>/EtherCAT PDO Receive1'
                                           */
  real_T EtherCATPDOReceive1_P2_d;     /* Expression: sig_offset
                                        * Referenced by: '<S46>/EtherCAT PDO Receive1'
                                        */
  real_T EtherCATPDOReceive1_P3_Size_p[2];/* Computed Parameter: EtherCATPDOReceive1_P3_Size_p
                                           * Referenced by: '<S46>/EtherCAT PDO Receive1'
                                           */
  real_T EtherCATPDOReceive1_P3_a;     /* Expression: sig_type
                                        * Referenced by: '<S46>/EtherCAT PDO Receive1'
                                        */
  real_T EtherCATPDOReceive1_P4_Size_m[2];/* Computed Parameter: EtherCATPDOReceive1_P4_Size_m
                                           * Referenced by: '<S46>/EtherCAT PDO Receive1'
                                           */
  real_T EtherCATPDOReceive1_P4_e;     /* Expression: type_size
                                        * Referenced by: '<S46>/EtherCAT PDO Receive1'
                                        */
  real_T EtherCATPDOReceive1_P5_Size_n[2];/* Computed Parameter: EtherCATPDOReceive1_P5_Size_n
                                           * Referenced by: '<S46>/EtherCAT PDO Receive1'
                                           */
  real_T EtherCATPDOReceive1_P5_j;     /* Expression: sig_dim
                                        * Referenced by: '<S46>/EtherCAT PDO Receive1'
                                        */
  real_T EtherCATPDOReceive1_P6_Size_o[2];/* Computed Parameter: EtherCATPDOReceive1_P6_Size_o
                                           * Referenced by: '<S46>/EtherCAT PDO Receive1'
                                           */
  real_T EtherCATPDOReceive1_P6_e;     /* Expression: device_id
                                        * Referenced by: '<S46>/EtherCAT PDO Receive1'
                                        */
  real_T EtherCATPDOReceive1_P7_Size_o[2];/* Computed Parameter: EtherCATPDOReceive1_P7_Size_o
                                           * Referenced by: '<S46>/EtherCAT PDO Receive1'
                                           */
  real_T EtherCATPDOReceive1_P7_p;     /* Expression: sample_time
                                        * Referenced by: '<S46>/EtherCAT PDO Receive1'
                                        */
  real_T EtherCATPDOReceive3_P1_Size_p[2];/* Computed Parameter: EtherCATPDOReceive3_P1_Size_p
                                           * Referenced by: '<S46>/EtherCAT PDO Receive3'
                                           */
  real_T EtherCATPDOReceive3_P1_m[51]; /* Computed Parameter: EtherCATPDOReceive3_P1_m
                                        * Referenced by: '<S46>/EtherCAT PDO Receive3'
                                        */
  real_T EtherCATPDOReceive3_P2_Size_g[2];/* Computed Parameter: EtherCATPDOReceive3_P2_Size_g
                                           * Referenced by: '<S46>/EtherCAT PDO Receive3'
                                           */
  real_T EtherCATPDOReceive3_P2_e;     /* Expression: sig_offset
                                        * Referenced by: '<S46>/EtherCAT PDO Receive3'
                                        */
  real_T EtherCATPDOReceive3_P3_Size_j[2];/* Computed Parameter: EtherCATPDOReceive3_P3_Size_j
                                           * Referenced by: '<S46>/EtherCAT PDO Receive3'
                                           */
  real_T EtherCATPDOReceive3_P3_o;     /* Expression: sig_type
                                        * Referenced by: '<S46>/EtherCAT PDO Receive3'
                                        */
  real_T EtherCATPDOReceive3_P4_Size_m[2];/* Computed Parameter: EtherCATPDOReceive3_P4_Size_m
                                           * Referenced by: '<S46>/EtherCAT PDO Receive3'
                                           */
  real_T EtherCATPDOReceive3_P4_f;     /* Expression: type_size
                                        * Referenced by: '<S46>/EtherCAT PDO Receive3'
                                        */
  real_T EtherCATPDOReceive3_P5_Size_l[2];/* Computed Parameter: EtherCATPDOReceive3_P5_Size_l
                                           * Referenced by: '<S46>/EtherCAT PDO Receive3'
                                           */
  real_T EtherCATPDOReceive3_P5_c;     /* Expression: sig_dim
                                        * Referenced by: '<S46>/EtherCAT PDO Receive3'
                                        */
  real_T EtherCATPDOReceive3_P6_Size_b[2];/* Computed Parameter: EtherCATPDOReceive3_P6_Size_b
                                           * Referenced by: '<S46>/EtherCAT PDO Receive3'
                                           */
  real_T EtherCATPDOReceive3_P6_o;     /* Expression: device_id
                                        * Referenced by: '<S46>/EtherCAT PDO Receive3'
                                        */
  real_T EtherCATPDOReceive3_P7_Size_e[2];/* Computed Parameter: EtherCATPDOReceive3_P7_Size_e
                                           * Referenced by: '<S46>/EtherCAT PDO Receive3'
                                           */
  real_T EtherCATPDOReceive3_P7_f;     /* Expression: sample_time
                                        * Referenced by: '<S46>/EtherCAT PDO Receive3'
                                        */
  real_T EtherCATPDOReceive4_P1_Size_j[2];/* Computed Parameter: EtherCATPDOReceive4_P1_Size_j
                                           * Referenced by: '<S46>/EtherCAT PDO Receive4'
                                           */
  real_T EtherCATPDOReceive4_P1_h[40]; /* Computed Parameter: EtherCATPDOReceive4_P1_h
                                        * Referenced by: '<S46>/EtherCAT PDO Receive4'
                                        */
  real_T EtherCATPDOReceive4_P2_Size_c[2];/* Computed Parameter: EtherCATPDOReceive4_P2_Size_c
                                           * Referenced by: '<S46>/EtherCAT PDO Receive4'
                                           */
  real_T EtherCATPDOReceive4_P2_d;     /* Expression: sig_offset
                                        * Referenced by: '<S46>/EtherCAT PDO Receive4'
                                        */
  real_T EtherCATPDOReceive4_P3_Size_c[2];/* Computed Parameter: EtherCATPDOReceive4_P3_Size_c
                                           * Referenced by: '<S46>/EtherCAT PDO Receive4'
                                           */
  real_T EtherCATPDOReceive4_P3_f;     /* Expression: sig_type
                                        * Referenced by: '<S46>/EtherCAT PDO Receive4'
                                        */
  real_T EtherCATPDOReceive4_P4_Size_d[2];/* Computed Parameter: EtherCATPDOReceive4_P4_Size_d
                                           * Referenced by: '<S46>/EtherCAT PDO Receive4'
                                           */
  real_T EtherCATPDOReceive4_P4_n;     /* Expression: type_size
                                        * Referenced by: '<S46>/EtherCAT PDO Receive4'
                                        */
  real_T EtherCATPDOReceive4_P5_Size_n[2];/* Computed Parameter: EtherCATPDOReceive4_P5_Size_n
                                           * Referenced by: '<S46>/EtherCAT PDO Receive4'
                                           */
  real_T EtherCATPDOReceive4_P5_k;     /* Expression: sig_dim
                                        * Referenced by: '<S46>/EtherCAT PDO Receive4'
                                        */
  real_T EtherCATPDOReceive4_P6_Size_j[2];/* Computed Parameter: EtherCATPDOReceive4_P6_Size_j
                                           * Referenced by: '<S46>/EtherCAT PDO Receive4'
                                           */
  real_T EtherCATPDOReceive4_P6_e;     /* Expression: device_id
                                        * Referenced by: '<S46>/EtherCAT PDO Receive4'
                                        */
  real_T EtherCATPDOReceive4_P7_Size_j[2];/* Computed Parameter: EtherCATPDOReceive4_P7_Size_j
                                           * Referenced by: '<S46>/EtherCAT PDO Receive4'
                                           */
  real_T EtherCATPDOReceive4_P7_g;     /* Expression: sample_time
                                        * Referenced by: '<S46>/EtherCAT PDO Receive4'
                                        */
  real_T EtherCATPDOReceive2_P1_Size_c[2];/* Computed Parameter: EtherCATPDOReceive2_P1_Size_c
                                           * Referenced by: '<S46>/EtherCAT PDO Receive2'
                                           */
  real_T EtherCATPDOReceive2_P1_n[42]; /* Computed Parameter: EtherCATPDOReceive2_P1_n
                                        * Referenced by: '<S46>/EtherCAT PDO Receive2'
                                        */
  real_T EtherCATPDOReceive2_P2_Size_l[2];/* Computed Parameter: EtherCATPDOReceive2_P2_Size_l
                                           * Referenced by: '<S46>/EtherCAT PDO Receive2'
                                           */
  real_T EtherCATPDOReceive2_P2_f;     /* Expression: sig_offset
                                        * Referenced by: '<S46>/EtherCAT PDO Receive2'
                                        */
  real_T EtherCATPDOReceive2_P3_Size_h[2];/* Computed Parameter: EtherCATPDOReceive2_P3_Size_h
                                           * Referenced by: '<S46>/EtherCAT PDO Receive2'
                                           */
  real_T EtherCATPDOReceive2_P3_n;     /* Expression: sig_type
                                        * Referenced by: '<S46>/EtherCAT PDO Receive2'
                                        */
  real_T EtherCATPDOReceive2_P4_Size_h[2];/* Computed Parameter: EtherCATPDOReceive2_P4_Size_h
                                           * Referenced by: '<S46>/EtherCAT PDO Receive2'
                                           */
  real_T EtherCATPDOReceive2_P4_o;     /* Expression: type_size
                                        * Referenced by: '<S46>/EtherCAT PDO Receive2'
                                        */
  real_T EtherCATPDOReceive2_P5_Size_p[2];/* Computed Parameter: EtherCATPDOReceive2_P5_Size_p
                                           * Referenced by: '<S46>/EtherCAT PDO Receive2'
                                           */
  real_T EtherCATPDOReceive2_P5_c;     /* Expression: sig_dim
                                        * Referenced by: '<S46>/EtherCAT PDO Receive2'
                                        */
  real_T EtherCATPDOReceive2_P6_Size_n[2];/* Computed Parameter: EtherCATPDOReceive2_P6_Size_n
                                           * Referenced by: '<S46>/EtherCAT PDO Receive2'
                                           */
  real_T EtherCATPDOReceive2_P6_d;     /* Expression: device_id
                                        * Referenced by: '<S46>/EtherCAT PDO Receive2'
                                        */
  real_T EtherCATPDOReceive2_P7_Size_f[2];/* Computed Parameter: EtherCATPDOReceive2_P7_Size_f
                                           * Referenced by: '<S46>/EtherCAT PDO Receive2'
                                           */
  real_T EtherCATPDOReceive2_P7_m;     /* Expression: sample_time
                                        * Referenced by: '<S46>/EtherCAT PDO Receive2'
                                        */
  real_T Drive_statusword_P1_Size_n[2];/* Computed Parameter: Drive_statusword_P1_Size_n
                                        * Referenced by: '<S44>/Drive_statusword'
                                        */
  real_T Drive_statusword_P1_o[31];    /* Computed Parameter: Drive_statusword_P1_o
                                        * Referenced by: '<S44>/Drive_statusword'
                                        */
  real_T Drive_statusword_P2_Size_f[2];/* Computed Parameter: Drive_statusword_P2_Size_f
                                        * Referenced by: '<S44>/Drive_statusword'
                                        */
  real_T Drive_statusword_P2_a;        /* Expression: sig_offset
                                        * Referenced by: '<S44>/Drive_statusword'
                                        */
  real_T Drive_statusword_P3_Size_b[2];/* Computed Parameter: Drive_statusword_P3_Size_b
                                        * Referenced by: '<S44>/Drive_statusword'
                                        */
  real_T Drive_statusword_P3_d;        /* Expression: sig_type
                                        * Referenced by: '<S44>/Drive_statusword'
                                        */
  real_T Drive_statusword_P4_Size_i[2];/* Computed Parameter: Drive_statusword_P4_Size_i
                                        * Referenced by: '<S44>/Drive_statusword'
                                        */
  real_T Drive_statusword_P4_h;        /* Expression: type_size
                                        * Referenced by: '<S44>/Drive_statusword'
                                        */
  real_T Drive_statusword_P5_Size_j[2];/* Computed Parameter: Drive_statusword_P5_Size_j
                                        * Referenced by: '<S44>/Drive_statusword'
                                        */
  real_T Drive_statusword_P5_d;        /* Expression: sig_dim
                                        * Referenced by: '<S44>/Drive_statusword'
                                        */
  real_T Drive_statusword_P6_Size_i[2];/* Computed Parameter: Drive_statusword_P6_Size_i
                                        * Referenced by: '<S44>/Drive_statusword'
                                        */
  real_T Drive_statusword_P6_i;        /* Expression: device_id
                                        * Referenced by: '<S44>/Drive_statusword'
                                        */
  real_T Drive_statusword_P7_Size_f[2];/* Computed Parameter: Drive_statusword_P7_Size_f
                                        * Referenced by: '<S44>/Drive_statusword'
                                        */
  real_T Drive_statusword_P7_h;        /* Expression: sample_time
                                        * Referenced by: '<S44>/Drive_statusword'
                                        */
  real_T Drive_controlword_P1_Size_k[2];/* Computed Parameter: Drive_controlword_P1_Size_k
                                         * Referenced by: '<S44>/Drive_controlword'
                                         */
  real_T Drive_controlword_P1_a[33];   /* Computed Parameter: Drive_controlword_P1_a
                                        * Referenced by: '<S44>/Drive_controlword'
                                        */
  real_T Drive_controlword_P2_Size_p[2];/* Computed Parameter: Drive_controlword_P2_Size_p
                                         * Referenced by: '<S44>/Drive_controlword'
                                         */
  real_T Drive_controlword_P2_b;       /* Expression: sig_offset
                                        * Referenced by: '<S44>/Drive_controlword'
                                        */
  real_T Drive_controlword_P3_Size_g[2];/* Computed Parameter: Drive_controlword_P3_Size_g
                                         * Referenced by: '<S44>/Drive_controlword'
                                         */
  real_T Drive_controlword_P3_c;       /* Expression: sig_type
                                        * Referenced by: '<S44>/Drive_controlword'
                                        */
  real_T Drive_controlword_P4_Size_e[2];/* Computed Parameter: Drive_controlword_P4_Size_e
                                         * Referenced by: '<S44>/Drive_controlword'
                                         */
  real_T Drive_controlword_P4_p;       /* Expression: type_size
                                        * Referenced by: '<S44>/Drive_controlword'
                                        */
  real_T Drive_controlword_P5_Size_p[2];/* Computed Parameter: Drive_controlword_P5_Size_p
                                         * Referenced by: '<S44>/Drive_controlword'
                                         */
  real_T Drive_controlword_P5_b;       /* Expression: sig_dim
                                        * Referenced by: '<S44>/Drive_controlword'
                                        */
  real_T Drive_controlword_P6_Size_b[2];/* Computed Parameter: Drive_controlword_P6_Size_b
                                         * Referenced by: '<S44>/Drive_controlword'
                                         */
  real_T Drive_controlword_P6_b;       /* Expression: device_id
                                        * Referenced by: '<S44>/Drive_controlword'
                                        */
  real_T Drive_controlword_P7_Size_f[2];/* Computed Parameter: Drive_controlword_P7_Size_f
                                         * Referenced by: '<S44>/Drive_controlword'
                                         */
  real_T Drive_controlword_P7_j;       /* Expression: sample_time
                                        * Referenced by: '<S44>/Drive_controlword'
                                        */
  real_T EtherCATPDOTransmit2_P1_Size_f[2];/* Computed Parameter: EtherCATPDOTransmit2_P1_Size_f
                                            * Referenced by: '<S45>/EtherCAT PDO Transmit 2'
                                            */
  real_T EtherCATPDOTransmit2_P1_c[36];/* Computed Parameter: EtherCATPDOTransmit2_P1_c
                                        * Referenced by: '<S45>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P2_Size_h[2];/* Computed Parameter: EtherCATPDOTransmit2_P2_Size_h
                                            * Referenced by: '<S45>/EtherCAT PDO Transmit 2'
                                            */
  real_T EtherCATPDOTransmit2_P2_l;    /* Expression: sig_offset
                                        * Referenced by: '<S45>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P3_Size_h[2];/* Computed Parameter: EtherCATPDOTransmit2_P3_Size_h
                                            * Referenced by: '<S45>/EtherCAT PDO Transmit 2'
                                            */
  real_T EtherCATPDOTransmit2_P3_n;    /* Expression: sig_type
                                        * Referenced by: '<S45>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P4_Size_k[2];/* Computed Parameter: EtherCATPDOTransmit2_P4_Size_k
                                            * Referenced by: '<S45>/EtherCAT PDO Transmit 2'
                                            */
  real_T EtherCATPDOTransmit2_P4_c;    /* Expression: type_size
                                        * Referenced by: '<S45>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P5_Size_i[2];/* Computed Parameter: EtherCATPDOTransmit2_P5_Size_i
                                            * Referenced by: '<S45>/EtherCAT PDO Transmit 2'
                                            */
  real_T EtherCATPDOTransmit2_P5_m;    /* Expression: sig_dim
                                        * Referenced by: '<S45>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P6_Size_c[2];/* Computed Parameter: EtherCATPDOTransmit2_P6_Size_c
                                            * Referenced by: '<S45>/EtherCAT PDO Transmit 2'
                                            */
  real_T EtherCATPDOTransmit2_P6_n;    /* Expression: device_id
                                        * Referenced by: '<S45>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P7_Size_o[2];/* Computed Parameter: EtherCATPDOTransmit2_P7_Size_o
                                            * Referenced by: '<S45>/EtherCAT PDO Transmit 2'
                                            */
  real_T EtherCATPDOTransmit2_P7_e;    /* Expression: sample_time
                                        * Referenced by: '<S45>/EtherCAT PDO Transmit 2'
                                        */
  real_T zero1_Value;                  /* Expression: 0
                                        * Referenced by: '<S92>/zero1'
                                        */
  real_T zero1_Value_p;                /* Expression: 0
                                        * Referenced by: '<S94>/zero1'
                                        */
  real_T uDLookupTable_tableData_ch[14];/* Expression: static_gear_curve{5}.stiffness(:,2)
                                         * Referenced by: '<S105>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_g[14]; /* Expression: static_gear_curve{5}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S105>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData[15]; /* Expression: static_gear_curve_viscous{5}.stiffness(:,2)
                                        * Referenced by: '<S105>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp01Data[15];  /* Expression: static_gear_curve_viscous{5}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S105>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable_tableData_h[15];/* Expression: static_gear_curve{5}.return(:,2)
                                        * Referenced by: '<S104>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_p[15]; /* Expression: static_gear_curve{5}.return(:,1)*(1/1000)
                                        * Referenced by: '<S104>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_o[15];/* Expression: static_gear_curve_viscous{5}.return(:,2)
                                         * Referenced by: '<S104>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable1_bp01Data_d[15];/* Expression: static_gear_curve_viscous{5}.return(:,1)*(1/1000)
                                        * Referenced by: '<S104>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable_tableData_n[15];/* Expression: static_gear_curve{5}.begin(:,2)
                                        * Referenced by: '<S103>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_i[15]; /* Expression: static_gear_curve{5}.begin(:,1)*(1/1000)
                                        * Referenced by: '<S103>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_h[15];/* Expression: static_gear_curve_viscous{5}.begin(:,2)
                                         * Referenced by: '<S103>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable1_bp01Data_k[15];/* Expression: static_gear_curve_viscous{5}.begin(:,1)*(1/1000)
                                        * Referenced by: '<S103>/1-D Lookup Table1'
                                        */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S94>/Memory'
                                        */
  real_T constant_Value;               /* Expression: 3
                                        * Referenced by: '<S94>/constant '
                                        */
  real_T zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S94>/zero'
                                        */
  real_T zero1_Value_j;                /* Expression: 0
                                        * Referenced by: '<S95>/zero1'
                                        */
  real_T uDLookupTable_tableData_b[12];/* Expression: static_gear_curve{1}.stiffness(:,2)
                                        * Referenced by: '<S109>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_m[12]; /* Expression: static_gear_curve{1}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S109>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_i[15];/* Expression: static_gear_curve_viscous{1}.stiffness(:,2)
                                         * Referenced by: '<S109>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable1_bp01Data_i[15];/* Expression: static_gear_curve_viscous{1}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S109>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable_tableData_cp[15];/* Expression: static_gear_curve{1}.return(:,2)
                                         * Referenced by: '<S108>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_b[15]; /* Expression: static_gear_curve{1}.return(:,1)*(1/1000)
                                        * Referenced by: '<S108>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_d[15];/* Expression: static_gear_curve_viscous{1}.return(:,2)
                                         * Referenced by: '<S108>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable1_bp01Data_n[15];/* Expression: static_gear_curve_viscous{1}.return(:,1)*(1/1000)
                                        * Referenced by: '<S108>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable_tableData_ct[15];/* Expression: static_gear_curve{1}.begin(:,2)
                                         * Referenced by: '<S107>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_h[15]; /* Expression: static_gear_curve{1}.begin(:,1)*(1/1000)
                                        * Referenced by: '<S107>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_m[15];/* Expression: static_gear_curve_viscous{1}.begin(:,2)
                                         * Referenced by: '<S107>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable1_bp01Data_g[15];/* Expression: static_gear_curve_viscous{1}.begin(:,1)*(1/1000)
                                        * Referenced by: '<S107>/1-D Lookup Table1'
                                        */
  real_T Memory_InitialCondition_l;    /* Expression: 0
                                        * Referenced by: '<S95>/Memory'
                                        */
  real_T constant_Value_o;             /* Expression: 3
                                        * Referenced by: '<S95>/constant '
                                        */
  real_T zero_Value_f;                 /* Expression: 0
                                        * Referenced by: '<S95>/zero'
                                        */
  real_T zero1_Value_l;                /* Expression: 0
                                        * Referenced by: '<S96>/zero1'
                                        */
  real_T uDLookupTable_tableData_p[13];/* Expression: static_gear_curve{4}.stiffness(:,2)
                                        * Referenced by: '<S113>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_hd[13];/* Expression: static_gear_curve{4}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S113>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_j[15];/* Expression: static_gear_curve_viscous{4}.stiffness(:,2)
                                         * Referenced by: '<S113>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable1_bp01Data_a[15];/* Expression: static_gear_curve_viscous{4}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S113>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable_tableData_ps[15];/* Expression: static_gear_curve{4}.return(:,2)
                                         * Referenced by: '<S112>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_e[15]; /* Expression: static_gear_curve{4}.return(:,1)*(1/1000)
                                        * Referenced by: '<S112>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_dv[15];/* Expression: static_gear_curve_viscous{4}.return(:,2)
                                          * Referenced by: '<S112>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_an[15];/* Expression: static_gear_curve_viscous{4}.return(:,1)*(1/1000)
                                         * Referenced by: '<S112>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable_tableData_f[15];/* Expression: static_gear_curve{4}.begin(:,2)
                                        * Referenced by: '<S111>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_c[15]; /* Expression: static_gear_curve{4}.begin(:,1)*(1/1000)
                                        * Referenced by: '<S111>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_f[15];/* Expression: static_gear_curve_viscous{4}.begin(:,2)
                                         * Referenced by: '<S111>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable1_bp01Data_j[15];/* Expression: static_gear_curve_viscous{4}.begin(:,1)*(1/1000)
                                        * Referenced by: '<S111>/1-D Lookup Table1'
                                        */
  real_T Memory_InitialCondition_c;    /* Expression: 0
                                        * Referenced by: '<S96>/Memory'
                                        */
  real_T constant_Value_l;             /* Expression: 3
                                        * Referenced by: '<S96>/constant '
                                        */
  real_T zero_Value_c;                 /* Expression: 0
                                        * Referenced by: '<S96>/zero'
                                        */
  real_T zero1_Value_b;                /* Expression: 0
                                        * Referenced by: '<S97>/zero1'
                                        */
  real_T uDLookupTable_tableData_nm[11];/* Expression: static_gear_curve{7}.stiffness(:,2)
                                         * Referenced by: '<S117>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_hc[11];/* Expression: static_gear_curve{7}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S117>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_m3[15];/* Expression: static_gear_curve_viscous{7}.stiffness(:,2)
                                          * Referenced by: '<S117>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_g1[15];/* Expression: static_gear_curve_viscous{7}.stiffness(:,1)*(1/1000)
                                         * Referenced by: '<S117>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable_tableData_d[15];/* Expression: static_gear_curve{7}.return(:,2)
                                        * Referenced by: '<S116>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_f[15]; /* Expression: static_gear_curve{7}.return(:,1)*(1/1000)
                                        * Referenced by: '<S116>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_oi[15];/* Expression: static_gear_curve_viscous{7}.return(:,2)
                                          * Referenced by: '<S116>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_l[15];/* Expression: static_gear_curve_viscous{7}.return(:,1)*(1/1000)
                                        * Referenced by: '<S116>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable_tableData_hr[15];/* Expression: static_gear_curve{7}.begin(:,2)
                                         * Referenced by: '<S115>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_cf[15];/* Expression: static_gear_curve{7}.begin(:,1)*(1/1000)
                                        * Referenced by: '<S115>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_im[15];/* Expression: static_gear_curve_viscous{7}.begin(:,2)
                                          * Referenced by: '<S115>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_ih[15];/* Expression: static_gear_curve_viscous{7}.begin(:,1)*(1/1000)
                                         * Referenced by: '<S115>/1-D Lookup Table1'
                                         */
  real_T Memory_InitialCondition_k;    /* Expression: 0
                                        * Referenced by: '<S97>/Memory'
                                        */
  real_T constant_Value_a;             /* Expression: 3
                                        * Referenced by: '<S97>/constant '
                                        */
  real_T zero_Value_l;                 /* Expression: 0
                                        * Referenced by: '<S97>/zero'
                                        */
  real_T zero1_Value_d;                /* Expression: 0
                                        * Referenced by: '<S98>/zero1'
                                        */
  real_T uDLookupTable_tableData_fd[13];/* Expression: static_gear_curve{2}.stiffness(:,2)
                                         * Referenced by: '<S121>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_f2[13];/* Expression: static_gear_curve{2}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S121>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_hs[15];/* Expression: static_gear_curve_viscous{2}.stiffness(:,2)
                                          * Referenced by: '<S121>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_a0[15];/* Expression: static_gear_curve_viscous{2}.stiffness(:,1)*(1/1000)
                                         * Referenced by: '<S121>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable_tableData_a[15];/* Expression: static_gear_curve{2}.return(:,2)
                                        * Referenced by: '<S120>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_g3[15];/* Expression: static_gear_curve{2}.return(:,1)*(1/1000)
                                        * Referenced by: '<S120>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_l[15];/* Expression: static_gear_curve_viscous{2}.return(:,2)
                                         * Referenced by: '<S120>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable1_bp01Data_ls[15];/* Expression: static_gear_curve_viscous{2}.return(:,1)*(1/1000)
                                         * Referenced by: '<S120>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable_tableData_j[15];/* Expression: static_gear_curve{2}.begin(:,2)
                                        * Referenced by: '<S119>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_d[15]; /* Expression: static_gear_curve{2}.begin(:,1)*(1/1000)
                                        * Referenced by: '<S119>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_me[15];/* Expression: static_gear_curve_viscous{2}.begin(:,2)
                                          * Referenced by: '<S119>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_nx[15];/* Expression: static_gear_curve_viscous{2}.begin(:,1)*(1/1000)
                                         * Referenced by: '<S119>/1-D Lookup Table1'
                                         */
  real_T Memory_InitialCondition_e;    /* Expression: 0
                                        * Referenced by: '<S98>/Memory'
                                        */
  real_T constant_Value_f;             /* Expression: 3
                                        * Referenced by: '<S98>/constant '
                                        */
  real_T zero_Value_lb;                /* Expression: 0
                                        * Referenced by: '<S98>/zero'
                                        */
  real_T Memory_InitialCondition_ku;   /* Expression: 0
                                        * Referenced by: '<S99>/Memory'
                                        */
  real_T uDLookupTable_tableData_he[2];/* Expression: curve_cross_x(:,2)
                                        * Referenced by: '<S122>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_n[2];  /* Expression: curve_cross_x(:,1)
                                        * Referenced by: '<S122>/1-D Lookup Table'
                                        */
  real_T zero1_Value_lp;               /* Expression: 0
                                        * Referenced by: '<S99>/zero1'
                                        */
  real_T zero1_Value_c;                /* Expression: 0
                                        * Referenced by: '<S100>/zero1'
                                        */
  real_T uDLookupTable_tableData_bi[12];/* Expression: static_gear_curve{6}.stiffness(:,2)
                                         * Referenced by: '<S128>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_k[12]; /* Expression: static_gear_curve{6}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S128>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_p[15];/* Expression: static_gear_curve_viscous{6}.stiffness(:,2)
                                         * Referenced by: '<S128>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable1_bp01Data_b[15];/* Expression: static_gear_curve_viscous{6}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S128>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable_tableData_p1[15];/* Expression: static_gear_curve{6}.return(:,2)
                                         * Referenced by: '<S127>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_gc[15];/* Expression: static_gear_curve{6}.return(:,1)*(1/1000)
                                        * Referenced by: '<S127>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_a[15];/* Expression: static_gear_curve_viscous{6}.return(:,2)
                                         * Referenced by: '<S127>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable1_bp01Data_jl[15];/* Expression: static_gear_curve_viscous{6}.return(:,1)*(1/1000)
                                         * Referenced by: '<S127>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable_tableData_jh[15];/* Expression: static_gear_curve{6}.begin(:,2)
                                         * Referenced by: '<S126>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_hr[15];/* Expression: static_gear_curve{6}.begin(:,1)*(1/1000)
                                        * Referenced by: '<S126>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_n[15];/* Expression: static_gear_curve_viscous{6}.begin(:,2)
                                         * Referenced by: '<S126>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable1_bp01Data_ln[15];/* Expression: static_gear_curve_viscous{6}.begin(:,1)*(1/1000)
                                         * Referenced by: '<S126>/1-D Lookup Table1'
                                         */
  real_T Memory_InitialCondition_b;    /* Expression: 0
                                        * Referenced by: '<S100>/Memory'
                                        */
  real_T constant_Value_aq;            /* Expression: 3
                                        * Referenced by: '<S100>/constant '
                                        */
  real_T zero_Value_m;                 /* Expression: 0
                                        * Referenced by: '<S100>/zero'
                                        */
  real_T zero1_Value_m;                /* Expression: 0
                                        * Referenced by: '<S101>/zero1'
                                        */
  real_T uDLookupTable_tableData_o[12];/* Expression: static_gear_curve{3}.stiffness(:,2)
                                        * Referenced by: '<S132>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_dz[12];/* Expression: static_gear_curve{3}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S132>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_dn[15];/* Expression: static_gear_curve_viscous{3}.stiffness(:,2)
                                          * Referenced by: '<S132>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_kd[15];/* Expression: static_gear_curve_viscous{3}.stiffness(:,1)*(1/1000)
                                         * Referenced by: '<S132>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable_tableData_cv[15];/* Expression: static_gear_curve{3}.return(:,2)
                                         * Referenced by: '<S131>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_o[15]; /* Expression: static_gear_curve{3}.return(:,1)*(1/1000)
                                        * Referenced by: '<S131>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_k[15];/* Expression: static_gear_curve_viscous{3}.return(:,2)
                                         * Referenced by: '<S131>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable1_bp01Data_dd[15];/* Expression: static_gear_curve_viscous{3}.return(:,1)*(1/1000)
                                         * Referenced by: '<S131>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable_tableData_i[15];/* Expression: static_gear_curve{3}.begin(:,2)
                                        * Referenced by: '<S130>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_mv[15];/* Expression: static_gear_curve{3}.begin(:,1)*(1/1000)
                                        * Referenced by: '<S130>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_n1[15];/* Expression: static_gear_curve_viscous{3}.begin(:,2)
                                          * Referenced by: '<S130>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_ij[15];/* Expression: static_gear_curve_viscous{3}.begin(:,1)*(1/1000)
                                         * Referenced by: '<S130>/1-D Lookup Table1'
                                         */
  real_T Memory_InitialCondition_kl;   /* Expression: 0
                                        * Referenced by: '<S101>/Memory'
                                        */
  real_T constant_Value_h;             /* Expression: 3
                                        * Referenced by: '<S101>/constant '
                                        */
  real_T zero_Value_a;                 /* Expression: 0
                                        * Referenced by: '<S101>/zero'
                                        */
  real_T zero1_Value_n;                /* Expression: 0
                                        * Referenced by: '<S133>/zero1'
                                        */
  real_T zero1_Value_ba;               /* Expression: 0
                                        * Referenced by: '<S135>/zero1'
                                        */
  real_T uDLookupTable_tableData_g[14];/* Expression: static_gear_curve{5}.stiffness(:,2)
                                        * Referenced by: '<S146>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_kw[14];/* Expression: static_gear_curve{5}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S146>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_ds[15];/* Expression: static_gear_curve_viscous{5}.stiffness(:,2)
                                          * Referenced by: '<S146>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_e[15];/* Expression: static_gear_curve_viscous{5}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S146>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable_tableData_iu[15];/* Expression: static_gear_curve{5}.return(:,2)
                                         * Referenced by: '<S145>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_og[15];/* Expression: static_gear_curve{5}.return(:,1)*(1/1000)
                                        * Referenced by: '<S145>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_ni[15];/* Expression: static_gear_curve_viscous{5}.return(:,2)
                                          * Referenced by: '<S145>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_o[15];/* Expression: static_gear_curve_viscous{5}.return(:,1)*(1/1000)
                                        * Referenced by: '<S145>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable_tableData_o5[15];/* Expression: static_gear_curve{5}.begin(:,2)
                                         * Referenced by: '<S144>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_c0[15];/* Expression: static_gear_curve{5}.begin(:,1)*(1/1000)
                                        * Referenced by: '<S144>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_iy[15];/* Expression: static_gear_curve_viscous{5}.begin(:,2)
                                          * Referenced by: '<S144>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_oo[15];/* Expression: static_gear_curve_viscous{5}.begin(:,1)*(1/1000)
                                         * Referenced by: '<S144>/1-D Lookup Table1'
                                         */
  real_T Memory_InitialCondition_ew;   /* Expression: 0
                                        * Referenced by: '<S135>/Memory'
                                        */
  real_T constant_Value_fr;            /* Expression: 3
                                        * Referenced by: '<S135>/constant '
                                        */
  real_T zero_Value_a0;                /* Expression: 0
                                        * Referenced by: '<S135>/zero'
                                        */
  real_T zero1_Value_pr;               /* Expression: 0
                                        * Referenced by: '<S136>/zero1'
                                        */
  real_T uDLookupTable_tableData_am[7];/* Expression: dynamic_gear_curve{1}.stiffness(:,2)
                                        * Referenced by: '<S150>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_np[7]; /* Expression: dynamic_gear_curve{1}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S150>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_ox[15];/* Expression: static_gear_curve_viscous{1}.stiffness(:,2)
                                          * Referenced by: '<S150>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_dt[15];/* Expression: static_gear_curve_viscous{1}.stiffness(:,1)*(1/1000)
                                         * Referenced by: '<S150>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable_tableData_jp[19];/* Expression: dynamic_gear_curve{1}.return(:,2)
                                         * Referenced by: '<S149>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_g2[19];/* Expression: dynamic_gear_curve{1}.return(:,1)*(1/1000)
                                        * Referenced by: '<S149>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_g[15];/* Expression: static_gear_curve_viscous{1}.return(:,2)
                                         * Referenced by: '<S149>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable1_bp01Data_ns[15];/* Expression: static_gear_curve_viscous{1}.return(:,1)*(1/1000)
                                         * Referenced by: '<S149>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable_tableData_fv[21];/* Expression: dynamic_gear_curve{1}.begin(:,2)
                                         * Referenced by: '<S148>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_kr[21];/* Expression: dynamic_gear_curve{1}.begin(:,1)*(1/1000)
                                        * Referenced by: '<S148>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_l5[15];/* Expression: static_gear_curve_viscous{1}.begin(:,2)
                                          * Referenced by: '<S148>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_lo[15];/* Expression: static_gear_curve_viscous{1}.begin(:,1)*(1/1000)
                                         * Referenced by: '<S148>/1-D Lookup Table1'
                                         */
  real_T Memory_InitialCondition_n;    /* Expression: 0
                                        * Referenced by: '<S136>/Memory'
                                        */
  real_T constant_Value_ol;            /* Expression: 3
                                        * Referenced by: '<S136>/constant '
                                        */
  real_T zero_Value_av;                /* Expression: 0
                                        * Referenced by: '<S136>/zero'
                                        */
  real_T zero1_Value_f;                /* Expression: 0
                                        * Referenced by: '<S137>/zero1'
                                        */
  real_T uDLookupTable_tableData_ah[13];/* Expression: static_gear_curve{4}.stiffness(:,2)
                                         * Referenced by: '<S154>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_ku[13];/* Expression: static_gear_curve{4}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S154>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_jb[15];/* Expression: static_gear_curve_viscous{4}.stiffness(:,2)
                                          * Referenced by: '<S154>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_h[15];/* Expression: static_gear_curve_viscous{4}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S154>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable_tableData_np[15];/* Expression: static_gear_curve{4}.return(:,2)
                                         * Referenced by: '<S153>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_go[15];/* Expression: static_gear_curve{4}.return(:,1)*(1/1000)
                                        * Referenced by: '<S153>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_hu[15];/* Expression: static_gear_curve_viscous{4}.return(:,2)
                                          * Referenced by: '<S153>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_c[15];/* Expression: static_gear_curve_viscous{4}.return(:,1)*(1/1000)
                                        * Referenced by: '<S153>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable_tableData_ds[15];/* Expression: static_gear_curve{4}.begin(:,2)
                                         * Referenced by: '<S152>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_oq[15];/* Expression: static_gear_curve{4}.begin(:,1)*(1/1000)
                                        * Referenced by: '<S152>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_ok[15];/* Expression: static_gear_curve_viscous{4}.begin(:,2)
                                          * Referenced by: '<S152>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_l3[15];/* Expression: static_gear_curve_viscous{4}.begin(:,1)*(1/1000)
                                         * Referenced by: '<S152>/1-D Lookup Table1'
                                         */
  real_T Memory_InitialCondition_o;    /* Expression: 0
                                        * Referenced by: '<S137>/Memory'
                                        */
  real_T constant_Value_oh;            /* Expression: 3
                                        * Referenced by: '<S137>/constant '
                                        */
  real_T zero_Value_l1;                /* Expression: 0
                                        * Referenced by: '<S137>/zero'
                                        */
  real_T zero1_Value_dp;               /* Expression: 0
                                        * Referenced by: '<S138>/zero1'
                                        */
  real_T uDLookupTable_tableData_od[11];/* Expression: static_gear_curve{7}.stiffness(:,2)
                                         * Referenced by: '<S158>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_e0[11];/* Expression: static_gear_curve{7}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S158>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_jx[15];/* Expression: static_gear_curve_viscous{7}.stiffness(:,2)
                                          * Referenced by: '<S158>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_f[15];/* Expression: static_gear_curve_viscous{7}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S158>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable_tableData_iw[15];/* Expression: static_gear_curve{7}.return(:,2)
                                         * Referenced by: '<S157>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_cy[15];/* Expression: static_gear_curve{7}.return(:,1)*(1/1000)
                                        * Referenced by: '<S157>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_g3[15];/* Expression: static_gear_curve_viscous{7}.return(:,2)
                                          * Referenced by: '<S157>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_gb[15];/* Expression: static_gear_curve_viscous{7}.return(:,1)*(1/1000)
                                         * Referenced by: '<S157>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable_tableData_k[15];/* Expression: static_gear_curve{7}.begin(:,2)
                                        * Referenced by: '<S156>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_j[15]; /* Expression: static_gear_curve{7}.begin(:,1)*(1/1000)
                                        * Referenced by: '<S156>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_ae[15];/* Expression: static_gear_curve_viscous{7}.begin(:,2)
                                          * Referenced by: '<S156>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_om[15];/* Expression: static_gear_curve_viscous{7}.begin(:,1)*(1/1000)
                                         * Referenced by: '<S156>/1-D Lookup Table1'
                                         */
  real_T Memory_InitialCondition_j;    /* Expression: 0
                                        * Referenced by: '<S138>/Memory'
                                        */
  real_T constant_Value_m;             /* Expression: 3
                                        * Referenced by: '<S138>/constant '
                                        */
  real_T zero_Value_d;                 /* Expression: 0
                                        * Referenced by: '<S138>/zero'
                                        */
  real_T zero1_Value_o;                /* Expression: 0
                                        * Referenced by: '<S139>/zero1'
                                        */
  real_T uDLookupTable_tableData_by[13];/* Expression: static_gear_curve{2}.stiffness(:,2)
                                         * Referenced by: '<S162>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_lb[13];/* Expression: static_gear_curve{2}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S162>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_kv[15];/* Expression: static_gear_curve_viscous{2}.stiffness(:,2)
                                          * Referenced by: '<S162>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_dy[15];/* Expression: static_gear_curve_viscous{2}.stiffness(:,1)*(1/1000)
                                         * Referenced by: '<S162>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable_tableData_pp[15];/* Expression: static_gear_curve{2}.return(:,2)
                                         * Referenced by: '<S161>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_kv[15];/* Expression: static_gear_curve{2}.return(:,1)*(1/1000)
                                        * Referenced by: '<S161>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_hv[15];/* Expression: static_gear_curve_viscous{2}.return(:,2)
                                          * Referenced by: '<S161>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_d4[15];/* Expression: static_gear_curve_viscous{2}.return(:,1)*(1/1000)
                                         * Referenced by: '<S161>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable_tableData_cj[15];/* Expression: static_gear_curve{2}.begin(:,2)
                                         * Referenced by: '<S160>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_do[15];/* Expression: static_gear_curve{2}.begin(:,1)*(1/1000)
                                        * Referenced by: '<S160>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_jo[15];/* Expression: static_gear_curve_viscous{2}.begin(:,2)
                                          * Referenced by: '<S160>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_on[15];/* Expression: static_gear_curve_viscous{2}.begin(:,1)*(1/1000)
                                         * Referenced by: '<S160>/1-D Lookup Table1'
                                         */
  real_T Memory_InitialCondition_a;    /* Expression: 0
                                        * Referenced by: '<S139>/Memory'
                                        */
  real_T constant_Value_g;             /* Expression: 3
                                        * Referenced by: '<S139>/constant '
                                        */
  real_T zero_Value_lp;                /* Expression: 0
                                        * Referenced by: '<S139>/zero'
                                        */
  real_T uDLookupTable_tableData_heq[2];/* Expression: curve_cross_x(:,2)
                                         * Referenced by: '<S163>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_mt[2]; /* Expression: curve_cross_x(:,1)
                                        * Referenced by: '<S163>/1-D Lookup Table'
                                        */
  real_T zero1_Value_jo;               /* Expression: 0
                                        * Referenced by: '<S140>/zero1'
                                        */
  real_T zero1_Value_lt;               /* Expression: 0
                                        * Referenced by: '<S141>/zero1'
                                        */
  real_T uDLookupTable_tableData_e[12];/* Expression: static_gear_curve{6}.stiffness(:,2)
                                        * Referenced by: '<S168>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_gj[12];/* Expression: static_gear_curve{6}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S168>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_e[15];/* Expression: static_gear_curve_viscous{6}.stiffness(:,2)
                                         * Referenced by: '<S168>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable1_bp01Data_fn[15];/* Expression: static_gear_curve_viscous{6}.stiffness(:,1)*(1/1000)
                                         * Referenced by: '<S168>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable_tableData_de[15];/* Expression: static_gear_curve{6}.return(:,2)
                                         * Referenced by: '<S167>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_gi[15];/* Expression: static_gear_curve{6}.return(:,1)*(1/1000)
                                        * Referenced by: '<S167>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_kq[15];/* Expression: static_gear_curve_viscous{6}.return(:,2)
                                          * Referenced by: '<S167>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_hs[15];/* Expression: static_gear_curve_viscous{6}.return(:,1)*(1/1000)
                                         * Referenced by: '<S167>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable_tableData_m[15];/* Expression: static_gear_curve{6}.begin(:,2)
                                        * Referenced by: '<S166>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_mm[15];/* Expression: static_gear_curve{6}.begin(:,1)*(1/1000)
                                        * Referenced by: '<S166>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_ib[15];/* Expression: static_gear_curve_viscous{6}.begin(:,2)
                                          * Referenced by: '<S166>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_m[15];/* Expression: static_gear_curve_viscous{6}.begin(:,1)*(1/1000)
                                        * Referenced by: '<S166>/1-D Lookup Table1'
                                        */
  real_T Memory_InitialCondition_a5;   /* Expression: 0
                                        * Referenced by: '<S141>/Memory'
                                        */
  real_T constant_Value_fq;            /* Expression: 3
                                        * Referenced by: '<S141>/constant '
                                        */
  real_T zero_Value_o;                 /* Expression: 0
                                        * Referenced by: '<S141>/zero'
                                        */
  real_T zero1_Value_g;                /* Expression: 0
                                        * Referenced by: '<S142>/zero1'
                                        */
  real_T uDLookupTable_tableData_nmk[12];/* Expression: static_gear_curve{3}.stiffness(:,2)
                                          * Referenced by: '<S172>/1-D Lookup Table'
                                          */
  real_T uDLookupTable_bp01Data_p5[12];/* Expression: static_gear_curve{3}.stiffness(:,1)*(1/1000)
                                        * Referenced by: '<S172>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_p4[15];/* Expression: static_gear_curve_viscous{3}.stiffness(:,2)
                                          * Referenced by: '<S172>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_i0[15];/* Expression: static_gear_curve_viscous{3}.stiffness(:,1)*(1/1000)
                                         * Referenced by: '<S172>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable_tableData_b4[15];/* Expression: static_gear_curve{3}.return(:,2)
                                         * Referenced by: '<S171>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_fi[15];/* Expression: static_gear_curve{3}.return(:,1)*(1/1000)
                                        * Referenced by: '<S171>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_mu[15];/* Expression: static_gear_curve_viscous{3}.return(:,2)
                                          * Referenced by: '<S171>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_eq[15];/* Expression: static_gear_curve_viscous{3}.return(:,1)*(1/1000)
                                         * Referenced by: '<S171>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable_tableData_dn[15];/* Expression: static_gear_curve{3}.begin(:,2)
                                         * Referenced by: '<S170>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_fw[15];/* Expression: static_gear_curve{3}.begin(:,1)*(1/1000)
                                        * Referenced by: '<S170>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData_hs3[15];/* Expression: static_gear_curve_viscous{3}.begin(:,2)
                                           * Referenced by: '<S170>/1-D Lookup Table1'
                                           */
  real_T uDLookupTable1_bp01Data_nm[15];/* Expression: static_gear_curve_viscous{3}.begin(:,1)*(1/1000)
                                         * Referenced by: '<S170>/1-D Lookup Table1'
                                         */
  real_T Memory_InitialCondition_i;    /* Expression: 0
                                        * Referenced by: '<S142>/Memory'
                                        */
  real_T constant_Value_d;             /* Expression: 3
                                        * Referenced by: '<S142>/constant '
                                        */
  real_T zero_Value_dn;                /* Expression: 0
                                        * Referenced by: '<S142>/zero'
                                        */
  real_T zero1_Value_ja;               /* Expression: 0
                                        * Referenced by: '<S89>/zero1'
                                        */
  real_T Constant_Value;               /* Expression: crossgate_selection1_begin_left(1,1)
                                        * Referenced by: '<S181>/Constant'
                                        */
  real_T Memory_InitialCondition_ki;   /* Expression: 0
                                        * Referenced by: '<S228>/Memory'
                                        */
  real_T constant_Value_fd;            /* Expression: 4
                                        * Referenced by: '<S228>/constant '
                                        */
  real_T EtherCATGetState_P1_Size[2];  /* Computed Parameter: EtherCATGetState_P1_Size
                                        * Referenced by: '<S4>/EtherCAT Get State  '
                                        */
  real_T EtherCATGetState_P1;          /* Expression: device_id
                                        * Referenced by: '<S4>/EtherCAT Get State  '
                                        */
  real_T EtherCATGetState_P2_Size[2];  /* Computed Parameter: EtherCATGetState_P2_Size
                                        * Referenced by: '<S4>/EtherCAT Get State  '
                                        */
  real_T EtherCATGetState_P2;          /* Expression: sample_time
                                        * Referenced by: '<S4>/EtherCAT Get State  '
                                        */
  real_T x_axis_encoder_raw_offset_Value;/* Expression: 0
                                          * Referenced by: '<Root>/x_axis_encoder_raw_offset'
                                          */
  real_T change_sign4_Gain;            /* Expression: -1
                                        * Referenced by: '<S7>/change_sign4'
                                        */
  real_T y_axis_encoder_raw_offset_Value;/* Expression: 0
                                          * Referenced by: '<Root>/y_axis_encoder_raw_offset'
                                          */
  real_T change_sign5_Gain;            /* Expression: -1
                                        * Referenced by: '<S7>/change_sign5'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S54>/Unit Delay'
                                        */
  real_T change_sign6_Gain;            /* Expression: -1
                                        * Referenced by: '<S7>/change_sign6'
                                        */
  real_T UnitDelay_InitialCondition_k; /* Expression: 0
                                        * Referenced by: '<S56>/Unit Delay'
                                        */
  real_T change_sign7_Gain;            /* Expression: -1
                                        * Referenced by: '<S7>/change_sign7'
                                        */
  real_T static1_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/static1'
                                        */
  real_T dynamic1_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/dynamic1'
                                        */
  real_T Memory_InitialCondition_cu;   /* Expression: 8
                                        * Referenced by: '<S26>/Memory'
                                        */
  real_T static2_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/static2'
                                        */
  real_T dynamic2_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/dynamic2'
                                        */
  real_T zeroforce4_Value;             /* Expression: 4
                                        * Referenced by: '<Root>/zero force4'
                                        */
  real_T UDPSend1_P1_Size[2];          /* Computed Parameter: UDPSend1_P1_Size
                                        * Referenced by: '<Root>/UDP Send1'
                                        */
  real_T UDPSend1_P1[26];              /* Computed Parameter: UDPSend1_P1
                                        * Referenced by: '<Root>/UDP Send1'
                                        */
  real_T UDPSend1_P2_Size[2];          /* Computed Parameter: UDPSend1_P2_Size
                                        * Referenced by: '<Root>/UDP Send1'
                                        */
  real_T UDPSend1_P2;                  /* Expression: localPort
                                        * Referenced by: '<Root>/UDP Send1'
                                        */
  real_T UDPSend1_P3_Size[2];          /* Computed Parameter: UDPSend1_P3_Size
                                        * Referenced by: '<Root>/UDP Send1'
                                        */
  real_T UDPSend1_P3[11];              /* Computed Parameter: UDPSend1_P3
                                        * Referenced by: '<Root>/UDP Send1'
                                        */
  real_T UDPSend1_P4_Size[2];          /* Computed Parameter: UDPSend1_P4_Size
                                        * Referenced by: '<Root>/UDP Send1'
                                        */
  real_T UDPSend1_P4;                  /* Expression: toPort
                                        * Referenced by: '<Root>/UDP Send1'
                                        */
  real_T UDPSend1_P5_Size[2];          /* Computed Parameter: UDPSend1_P5_Size
                                        * Referenced by: '<Root>/UDP Send1'
                                        */
  real_T UDPSend1_P5;                  /* Expression: useHostTargetComm
                                        * Referenced by: '<Root>/UDP Send1'
                                        */
  real_T UDPSend1_P6_Size[2];          /* Computed Parameter: UDPSend1_P6_Size
                                        * Referenced by: '<Root>/UDP Send1'
                                        */
  real_T UDPSend1_P6;                  /* Expression: sampleTime
                                        * Referenced by: '<Root>/UDP Send1'
                                        */
  real_T fx_offset9_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/fx_offset9'
                                        */
  real_T fx_offset10_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/fx_offset10'
                                        */
  real_T zeroforce5_Value;             /* Expression: 20
                                        * Referenced by: '<Root>/zero force5'
                                        */
  real_T UDPSend2_P1_Size[2];          /* Computed Parameter: UDPSend2_P1_Size
                                        * Referenced by: '<Root>/UDP Send2'
                                        */
  real_T UDPSend2_P1[26];              /* Computed Parameter: UDPSend2_P1
                                        * Referenced by: '<Root>/UDP Send2'
                                        */
  real_T UDPSend2_P2_Size[2];          /* Computed Parameter: UDPSend2_P2_Size
                                        * Referenced by: '<Root>/UDP Send2'
                                        */
  real_T UDPSend2_P2;                  /* Expression: localPort
                                        * Referenced by: '<Root>/UDP Send2'
                                        */
  real_T UDPSend2_P3_Size[2];          /* Computed Parameter: UDPSend2_P3_Size
                                        * Referenced by: '<Root>/UDP Send2'
                                        */
  real_T UDPSend2_P3[11];              /* Computed Parameter: UDPSend2_P3
                                        * Referenced by: '<Root>/UDP Send2'
                                        */
  real_T UDPSend2_P4_Size[2];          /* Computed Parameter: UDPSend2_P4_Size
                                        * Referenced by: '<Root>/UDP Send2'
                                        */
  real_T UDPSend2_P4;                  /* Expression: toPort
                                        * Referenced by: '<Root>/UDP Send2'
                                        */
  real_T UDPSend2_P5_Size[2];          /* Computed Parameter: UDPSend2_P5_Size
                                        * Referenced by: '<Root>/UDP Send2'
                                        */
  real_T UDPSend2_P5;                  /* Expression: useHostTargetComm
                                        * Referenced by: '<Root>/UDP Send2'
                                        */
  real_T UDPSend2_P6_Size[2];          /* Computed Parameter: UDPSend2_P6_Size
                                        * Referenced by: '<Root>/UDP Send2'
                                        */
  real_T UDPSend2_P6;                  /* Expression: sampleTime
                                        * Referenced by: '<Root>/UDP Send2'
                                        */
  real_T change_sign4_Gain_j;          /* Expression: -1
                                        * Referenced by: '<S29>/change_sign4'
                                        */
  real_T change_sign5_Gain_l;          /* Expression: -1
                                        * Referenced by: '<S29>/change_sign5'
                                        */
  real_T fx_offset_Value;              /* Expression: 1.3
                                        * Referenced by: '<Root>/fx_offset'
                                        */
  real_T b7_Gain;                      /* Expression: 1/1.05
                                        * Referenced by: '<Root>/b7'
                                        */
  real_T fx_offset1_Value;             /* Expression: -2
                                        * Referenced by: '<Root>/fx_offset1'
                                        */
  real_T fx_offset2_Value;             /* Expression: 3
                                        * Referenced by: '<Root>/fx_offset2'
                                        */
  real_T fx_offset3_Value;             /* Expression: 4
                                        * Referenced by: '<Root>/fx_offset3'
                                        */
  real_T fx_offset4_Value;             /* Expression: -2.5
                                        * Referenced by: '<Root>/fx_offset4'
                                        */
  real_T b9_Gain;                      /* Expression: 0
                                        * Referenced by: '<Root>/b9'
                                        */
  real_T fy_offset_Value;              /* Expression: -0.7
                                        * Referenced by: '<Root>/fy_offset'
                                        */
  real_T b8_Gain;                      /* Expression: 1/1.05
                                        * Referenced by: '<Root>/b8'
                                        */
  real_T fx_offset5_Value;             /* Expression: 2
                                        * Referenced by: '<Root>/fx_offset5'
                                        */
  real_T fx_offset6_Value;             /* Expression: -0.5
                                        * Referenced by: '<Root>/fx_offset6'
                                        */
  real_T fx_offset7_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/fx_offset7'
                                        */
  real_T fx_offset8_Value;             /* Expression: 1
                                        * Referenced by: '<Root>/fx_offset8'
                                        */
  real_T b10_Gain;                     /* Expression: 0
                                        * Referenced by: '<Root>/b10'
                                        */
  real_T Constant_Value_o;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T bracciolevaselezionetheta0_Valu;/* Expression: 0.0207
                                          * Referenced by: '<S5>/braccio leva selezione theta 0'
                                          */
  real_T massalevaselezione_Value;     /* Expression: 0.544
                                        * Referenced by: '<S5>/massa leva selezione'
                                        */
  real_T EtherCATSetState_P1_Size[2];  /* Computed Parameter: EtherCATSetState_P1_Size
                                        * Referenced by: '<S4>/EtherCAT Set State '
                                        */
  real_T EtherCATSetState_P1;          /* Expression: device_id
                                        * Referenced by: '<S4>/EtherCAT Set State '
                                        */
  real_T EtherCATSetState_P2_Size[2];  /* Computed Parameter: EtherCATSetState_P2_Size
                                        * Referenced by: '<S4>/EtherCAT Set State '
                                        */
  real_T EtherCATSetState_P2;          /* Expression: timeout
                                        * Referenced by: '<S4>/EtherCAT Set State '
                                        */
  real_T EtherCATSetState_P3_Size[2];  /* Computed Parameter: EtherCATSetState_P3_Size
                                        * Referenced by: '<S4>/EtherCAT Set State '
                                        */
  real_T EtherCATSetState_P3;          /* Expression: sample_time
                                        * Referenced by: '<S4>/EtherCAT Set State '
                                        */
  real_T Memory6_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<Root>/Memory6'
                                        */
  real_T Memory7_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<Root>/Memory7'
                                        */
  real_T Constant2_Value;              /* Expression: 2*pi
                                        * Referenced by: '<S14>/Constant2'
                                        */
  real_T Constant_Value_o5;            /* Expression: 0
                                        * Referenced by: '<S14>/Constant'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1
                                        * Referenced by: '<S14>/Gain2'
                                        */
  real_T Constant2_Value_n;            /* Expression: 2*pi
                                        * Referenced by: '<S15>/Constant2'
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S15>/Constant'
                                        */
  real_T Constant8_Value;              /* Expression: 0.5
                                        * Referenced by: '<S89>/Constant8'
                                        */
  real_T constant_Value_d2;            /* Expression: 3
                                        * Referenced by: '<S184>/constant '
                                        */
  real_T UDPReceive_P1_Size[2];        /* Computed Parameter: UDPReceive_P1_Size
                                        * Referenced by: '<Root>/UDP Receive'
                                        */
  real_T UDPReceive_P1[26];            /* Computed Parameter: UDPReceive_P1
                                        * Referenced by: '<Root>/UDP Receive'
                                        */
  real_T UDPReceive_P2_Size[2];        /* Computed Parameter: UDPReceive_P2_Size
                                        * Referenced by: '<Root>/UDP Receive'
                                        */
  real_T UDPReceive_P2;                /* Expression: localPort
                                        * Referenced by: '<Root>/UDP Receive'
                                        */
  real_T UDPReceive_P3_Size[2];        /* Computed Parameter: UDPReceive_P3_Size
                                        * Referenced by: '<Root>/UDP Receive'
                                        */
  real_T UDPReceive_P3;                /* Expression: outWidth
                                        * Referenced by: '<Root>/UDP Receive'
                                        */
  real_T UDPReceive_P4_Size[2];        /* Computed Parameter: UDPReceive_P4_Size
                                        * Referenced by: '<Root>/UDP Receive'
                                        */
  real_T UDPReceive_P4;                /* Expression: useHostTargetComm
                                        * Referenced by: '<Root>/UDP Receive'
                                        */
  real_T UDPReceive_P5_Size[2];        /* Computed Parameter: UDPReceive_P5_Size
                                        * Referenced by: '<Root>/UDP Receive'
                                        */
  real_T UDPReceive_P5[12];            /* Computed Parameter: UDPReceive_P5
                                        * Referenced by: '<Root>/UDP Receive'
                                        */
  real_T UDPReceive_P6_Size[2];        /* Computed Parameter: UDPReceive_P6_Size
                                        * Referenced by: '<Root>/UDP Receive'
                                        */
  real_T UDPReceive_P6;                /* Expression: maxUDPQueue
                                        * Referenced by: '<Root>/UDP Receive'
                                        */
  real_T UDPReceive_P7_Size[2];        /* Computed Parameter: UDPReceive_P7_Size
                                        * Referenced by: '<Root>/UDP Receive'
                                        */
  real_T UDPReceive_P7;                /* Expression: sampleTime
                                        * Referenced by: '<Root>/UDP Receive'
                                        */
  real_T zeroforce6_Value;             /* Expression: 16
                                        * Referenced by: '<Root>/zero force6'
                                        */
  real_T UDPSend3_P1_Size[2];          /* Computed Parameter: UDPSend3_P1_Size
                                        * Referenced by: '<Root>/UDP Send3'
                                        */
  real_T UDPSend3_P1[26];              /* Computed Parameter: UDPSend3_P1
                                        * Referenced by: '<Root>/UDP Send3'
                                        */
  real_T UDPSend3_P2_Size[2];          /* Computed Parameter: UDPSend3_P2_Size
                                        * Referenced by: '<Root>/UDP Send3'
                                        */
  real_T UDPSend3_P2;                  /* Expression: localPort
                                        * Referenced by: '<Root>/UDP Send3'
                                        */
  real_T UDPSend3_P3_Size[2];          /* Computed Parameter: UDPSend3_P3_Size
                                        * Referenced by: '<Root>/UDP Send3'
                                        */
  real_T UDPSend3_P3[11];              /* Computed Parameter: UDPSend3_P3
                                        * Referenced by: '<Root>/UDP Send3'
                                        */
  real_T UDPSend3_P4_Size[2];          /* Computed Parameter: UDPSend3_P4_Size
                                        * Referenced by: '<Root>/UDP Send3'
                                        */
  real_T UDPSend3_P4;                  /* Expression: toPort
                                        * Referenced by: '<Root>/UDP Send3'
                                        */
  real_T UDPSend3_P5_Size[2];          /* Computed Parameter: UDPSend3_P5_Size
                                        * Referenced by: '<Root>/UDP Send3'
                                        */
  real_T UDPSend3_P5;                  /* Expression: useHostTargetComm
                                        * Referenced by: '<Root>/UDP Send3'
                                        */
  real_T UDPSend3_P6_Size[2];          /* Computed Parameter: UDPSend3_P6_Size
                                        * Referenced by: '<Root>/UDP Send3'
                                        */
  real_T UDPSend3_P6;                  /* Expression: sampleTime
                                        * Referenced by: '<Root>/UDP Send3'
                                        */
  real_T fy_offset1_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/fy_offset1'
                                        */
  real_T fy_offset2_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/fy_offset2'
                                        */
  real_T x_axis_torque_ref_Value;      /* Expression: 0
                                        * Referenced by: '<Root>/x_axis_torque_ref'
                                        */
  real_T y_axis_torque_ref_Value;      /* Expression: 0
                                        * Referenced by: '<Root>/y_axis_torque_ref'
                                        */
  real32_T gravity_const1_Gain;        /* Computed Parameter: gravity_const1_Gain
                                        * Referenced by: '<S5>/gravity_const1'
                                        */
  real32_T gain4_Gain;                 /* Computed Parameter: gain4_Gain
                                        * Referenced by: '<S5>/gain4'
                                        */
  real32_T gravity_const_Gain;         /* Computed Parameter: gravity_const_Gain
                                        * Referenced by: '<S5>/gravity_const'
                                        */
  real32_T gain2_Gain;                 /* Computed Parameter: gain2_Gain
                                        * Referenced by: '<S5>/gain2'
                                        */
  real32_T change_sign1_Gain;          /* Computed Parameter: change_sign1_Gain
                                        * Referenced by: '<S26>/change_sign1'
                                        */
  real32_T change_sign_Gain;           /* Computed Parameter: change_sign_Gain
                                        * Referenced by: '<S26>/change_sign'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S26>/Gain'
                                        */
  real32_T uDLookupTable_tableData_ep[16];/* Computed Parameter: uDLookupTable_tableData_ep
                                           * Referenced by: '<S91>/1-D Lookup Table'
                                           */
  real32_T uDLookupTable_bp01Data_gt[16];/* Computed Parameter: uDLookupTable_bp01Data_gt
                                          * Referenced by: '<S91>/1-D Lookup Table'
                                          */
  real32_T change_sign_Gain_o;         /* Computed Parameter: change_sign_Gain_o
                                        * Referenced by: '<S91>/change_sign'
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S26>/Gain1'
                                        */
  real32_T Constant_Value_f;           /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S99>/Constant'
                                        */
  real32_T Constant_Value_b;           /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S140>/Constant'
                                        */
  real32_T zero1_Value_h;              /* Computed Parameter: zero1_Value_h
                                        * Referenced by: '<S181>/zero1'
                                        */
  real32_T zero_Value_i;               /* Computed Parameter: zero_Value_i
                                        * Referenced by: '<S181>/zero'
                                        */
  real32_T zero_Value_p;               /* Computed Parameter: zero_Value_p
                                        * Referenced by: '<S183>/zero'
                                        */
  real32_T Memory8_InitialCondition;   /* Computed Parameter: Memory8_InitialCondition
                                        * Referenced by: '<Root>/Memory8'
                                        */
  real32_T quick_stop_drives_Value;    /* Computed Parameter: quick_stop_drives_Value
                                        * Referenced by: '<Root>/quick_stop_drives'
                                        */
  real32_T x_axis_reset_fault_Value;   /* Computed Parameter: x_axis_reset_fault_Value
                                        * Referenced by: '<Root>/x_axis_reset_fault'
                                        */
  real32_T y_axis_reset_fault_Value;   /* Computed Parameter: y_axis_reset_fault_Value
                                        * Referenced by: '<Root>/y_axis_reset_fault'
                                        */
  real32_T Memory3_InitialCondition;   /* Computed Parameter: Memory3_InitialCondition
                                        * Referenced by: '<Root>/Memory3'
                                        */
  real32_T Memory9_InitialCondition;   /* Computed Parameter: Memory9_InitialCondition
                                        * Referenced by: '<Root>/Memory9'
                                        */
  real32_T received_data_Value[2];     /* Computed Parameter: received_data_Value
                                        * Referenced by: '<Root>/received_data'
                                        */
  real32_T retro_button_Value;         /* Computed Parameter: retro_button_Value
                                        * Referenced by: '<Root>/retro_button'
                                        */
  real32_T Gain4_Gain;                 /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<Root>/Gain4'
                                        */
  real32_T Memory_InitialCondition_g;  /* Computed Parameter: Memory_InitialCondition_g
                                        * Referenced by: '<S184>/Memory'
                                        */
  real32_T Gain3_Gain;                 /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<Root>/Gain3'
                                        */
  real32_T gain_Gain;                  /* Computed Parameter: gain_Gain
                                        * Referenced by: '<S1>/gain'
                                        */
  real32_T Saturation_UpperSat;        /* Computed Parameter: Saturation_UpperSat
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real32_T Saturation_LowerSat;        /* Computed Parameter: Saturation_LowerSat
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real32_T gain1_Gain_a;               /* Computed Parameter: gain1_Gain_a
                                        * Referenced by: '<S1>/gain1'
                                        */
  real32_T Saturation1_UpperSat;       /* Computed Parameter: Saturation1_UpperSat
                                        * Referenced by: '<S1>/Saturation1'
                                        */
  real32_T Saturation1_LowerSat;       /* Computed Parameter: Saturation1_LowerSat
                                        * Referenced by: '<S1>/Saturation1'
                                        */
  real32_T start_signal_Value;         /* Computed Parameter: start_signal_Value
                                        * Referenced by: '<Root>/start_signal'
                                        */
  real32_T knob_mass_Value;            /* Computed Parameter: knob_mass_Value
                                        * Referenced by: '<Root>/knob_mass'
                                        */
  real32_T lever_length_without_knob_Value;/* Computed Parameter: lever_length_without_knob_Value
                                            * Referenced by: '<Root>/lever_length_without_knob'
                                            */
  real32_T Master_enabler_Value;       /* Computed Parameter: Master_enabler_Value
                                        * Referenced by: '<Root>/Master_enabler '
                                        */
  real32_T enable_drives_Value;        /* Computed Parameter: enable_drives_Value
                                        * Referenced by: '<Root>/enable_drives'
                                        */
  real32_T enable_forces_Value;        /* Computed Parameter: enable_forces_Value
                                        * Referenced by: '<Root>/enable_forces'
                                        */
  real32_T x_axis_encoder_reset_Value; /* Computed Parameter: x_axis_encoder_reset_Value
                                        * Referenced by: '<Root>/x_axis_encoder_reset '
                                        */
  real32_T y_axis_encoder_reset_Value; /* Computed Parameter: y_axis_encoder_reset_Value
                                        * Referenced by: '<Root>/y_axis_encoder_reset'
                                        */
  int32_T Memory1_InitialCondition;    /* Computed Parameter: Memory1_InitialCondition
                                        * Referenced by: '<Root>/Memory1'
                                        */
  int32_T Memory2_InitialCondition;    /* Computed Parameter: Memory2_InitialCondition
                                        * Referenced by: '<Root>/Memory2'
                                        */
  int32_T Memory_InitialCondition_ly;  /* Computed Parameter: Memory_InitialCondition_ly
                                        * Referenced by: '<S23>/Memory'
                                        */
  int32_T Memory_InitialCondition_o0;  /* Computed Parameter: Memory_InitialCondition_o0
                                        * Referenced by: '<S24>/Memory'
                                        */
  int32_T Gain2_Gain_l;                /* Computed Parameter: Gain2_Gain_l
                                        * Referenced by: '<Root>/Gain2'
                                        */
  int32_T Gain5_Gain;                  /* Computed Parameter: Gain5_Gain
                                        * Referenced by: '<Root>/Gain5'
                                        */
  int32_T Gain8_Gain;                  /* Computed Parameter: Gain8_Gain
                                        * Referenced by: '<Root>/Gain8'
                                        */
  int32_T Gain6_Gain;                  /* Computed Parameter: Gain6_Gain
                                        * Referenced by: '<Root>/Gain6'
                                        */
  int32_T Gain7_Gain;                  /* Computed Parameter: Gain7_Gain
                                        * Referenced by: '<Root>/Gain7'
                                        */
  int32_T enc_raw_to_rad_Gain;         /* Computed Parameter: enc_raw_to_rad_Gain
                                        * Referenced by: '<S23>/enc_raw_to_rad'
                                        */
  int32_T enc_raw_to_rad_Gain_a;       /* Computed Parameter: enc_raw_to_rad_Gain_a
                                        * Referenced by: '<S24>/enc_raw_to_rad'
                                        */
  int16_T torque_raw_to_torque_nm_Gain;/* Computed Parameter: torque_raw_to_torque_nm_Gain
                                        * Referenced by: '<Root>/torque_raw_to_torque_nm'
                                        */
  int16_T torque_raw_to_torque_nm1_Gain;/* Computed Parameter: torque_raw_to_torque_nm1_Gain
                                         * Referenced by: '<Root>/torque_raw_to_torque_nm1'
                                         */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<S26>/Manual Switch'
                                        */
  uint8_T ManualSwitch12_CurrentSetting;/* Computed Parameter: ManualSwitch12_CurrentSetting
                                         * Referenced by: '<Root>/Manual Switch12'
                                         */
  uint8_T ManualSwitch11_CurrentSetting;/* Computed Parameter: ManualSwitch11_CurrentSetting
                                         * Referenced by: '<Root>/Manual Switch11'
                                         */
  uint8_T ManualSwitch1_CurrentSetting;/* Computed Parameter: ManualSwitch1_CurrentSetting
                                        * Referenced by: '<S26>/Manual Switch1'
                                        */
  uint8_T ManualSwitch9_CurrentSetting;/* Computed Parameter: ManualSwitch9_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch9'
                                        */
  uint8_T ManualSwitch10_CurrentSetting;/* Computed Parameter: ManualSwitch10_CurrentSetting
                                         * Referenced by: '<Root>/Manual Switch10'
                                         */
  uint8_T ManualSwitch_CurrentSetting_h;/* Computed Parameter: ManualSwitch_CurrentSetting_h
                                         * Referenced by: '<Root>/Manual Switch'
                                         */
  uint8_T ManualSwitch7_CurrentSetting;/* Computed Parameter: ManualSwitch7_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch7'
                                        */
  uint8_T ManualSwitch2_CurrentSetting;/* Computed Parameter: ManualSwitch2_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch2'
                                        */
  uint8_T ManualSwitch8_CurrentSetting;/* Computed Parameter: ManualSwitch8_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch8'
                                        */
  uint8_T Ripplecompensationswitch_Curren;/* Computed Parameter: Ripplecompensationswitch_Curren
                                           * Referenced by: '<S14>/Ripple compensation switch'
                                           */
  uint8_T Ripplecompensationswitch_Curr_g;/* Computed Parameter: Ripplecompensationswitch_Curr_g
                                           * Referenced by: '<S15>/Ripple compensation switch'
                                           */
  P_transition1_bl_rl_modello_2_T transition2_zero;/* '<S183>/transition2_zero' */
  P_transition1_bl_rl_modello_2_T transition2_pt_rl_bl_pt_rl_bl2;/* '<S183>/transition2_pt_rl_bl_pt_rl_bl2' */
  P_transition1_bl_rl_modello_2_T transition2_pt_bl_rr_pt_bl_rr2;/* '<S183>/transition2_pt_bl_rr_pt_bl_rr2' */
  P_transition1_bl_rl_modello_2_T transition2_br_rr;/* '<S183>/transition2_br_rr' */
  P_transition1_bl_rl_modello_2_T transition2_bl_rl;/* '<S183>/transition2_bl_rl' */
  P_crossgate_selection1_begin__T crossgate_selection2_return_rig;/* '<S183>/crossgate_selection2_return_right' */
  P_crossgate_selection1_begin__T crossgate_selection2_return_lef;/* '<S183>/crossgate_selection2_return_left' */
  P_crossgate_selection1_begin__T crossgate_selection2_begin_righ;/* '<S183>/crossgate_selection2_begin_right' */
  P_crossgate_selection1_begin__T crossgate_selection2_begin_left;/* '<S183>/crossgate_selection2_begin_left' */
  P_transition1_bl_rl_modello_2_T transition1_zero;/* '<S181>/transition1_zero' */
  P_transition1_bl_rl_modello_2_T transition1_pt_rl_bl_pt_rl_bl2;/* '<S181>/transition1_pt_rl_bl_pt_rl_bl2' */
  P_transition1_bl_rl_modello_2_T transition1_pt_bl_rr_pt_bl_rr2;/* '<S181>/transition1_pt_bl_rr_pt_bl_rr2' */
  P_transition1_bl_rl_modello_2_T transition1_br_rr;/* '<S181>/transition1_br_rr' */
  P_transition1_bl_rl_modello_2_T transition1_bl_rl;/* '<S181>/transition1_bl_rl' */
  P_crossgate_selection1_begin__T crossgate_selection1_return_rig;/* '<S181>/crossgate_selection1_return_right' */
  P_crossgate_selection1_begin__T crossgate_selection1_return_lef;/* '<S181>/crossgate_selection1_return_left' */
  P_crossgate_selection1_begin__T crossgate_selection1_begin_ri_e;/* '<S181>/crossgate_selection1_begin_right1' */
  P_crossgate_selection1_begin__T crossgate_selection1_begin_righ;/* '<S181>/crossgate_selection1_begin_right' */
  P_crossgate_selection1_begin__T crossgate_selection1_begin_le_h;/* '<S181>/crossgate_selection1_begin_left1' */
  P_crossgate_selection1_begin__T crossgate_selection1_begin_le_k;/* '<S181>/crossgate_selection1_begin_left' */
};

/* Real-time Model Data Structure */
struct tag_RTM_modello_2017b_levaRetro_acc_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[5];
    SimStruct childSFunctions[20];
    SimStruct *childSFunctionPtrs[20];
    struct _ssBlkInfo2 blkInfo2[20];
    struct _ssSFcnModelMethods2 methods2[20];
    struct _ssSFcnModelMethods3 methods3[20];
    struct _ssSFcnModelMethods4 methods4[20];
    struct _ssStatesInfo2 statesInfo2[20];
    ssPeriodicStatesInfo periodicStatesInfo[20];
    struct _ssPortInfo2 inputOutputPortInfo2[20];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn15;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn16;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn18;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn19;
  } NonInlinedSFcns;

  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  void *dwork;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    uint32_T clockTick3;
    uint32_T clockTickH3;
    time_T stepSize3;
    uint32_T clockTick4;
    uint32_T clockTickH4;
    time_T stepSize4;
    struct {
      uint16_T TID[5];
    } TaskCounters;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[5];
    time_T offsetTimesArray[5];
    int_T sampleTimeTaskIDArray[5];
    int_T sampleHitArray[5];
    int_T perTaskSampleHitsArray[25];
    time_T tArray[5];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_modello_2017b_levaRetro_acc_T modello_2017b_levaRetro_acc_P;

/* Block signals (auto storage) */
extern B_modello_2017b_levaRetro_acc_T modello_2017b_levaRetro_acc_B;

/* Block states (auto storage) */
extern DW_modello_2017b_levaRetro_acc_T modello_2017b_levaRetro_acc_DW;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_modello_2017b_levaRetro_acc_T modello_2017b_levaRetro_acc_Y;

/*====================*
 * External functions *
 *====================*/
extern modello_2017b_levaRetro_acc_rtModel *modello_2017b_levaRetro_acc(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  modello_2017b_levaRetro_acc_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_modello_2017b_levaRetro_acc_T *const
  modello_2017b_levaRetro_acc_M;

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
 * '<Root>' : 'modello_2017b_levaRetro_acc'
 * '<S1>'   : 'modello_2017b_levaRetro_acc/Actuation'
 * '<S2>'   : 'modello_2017b_levaRetro_acc/Band-Limited White Noise'
 * '<S3>'   : 'modello_2017b_levaRetro_acc/Chart'
 * '<S4>'   : 'modello_2017b_levaRetro_acc/EtherCAT Master Control'
 * '<S5>'   : 'modello_2017b_levaRetro_acc/Gravity compensation'
 * '<S6>'   : 'modello_2017b_levaRetro_acc/Gravity compensation1'
 * '<S7>'   : 'modello_2017b_levaRetro_acc/Kinematics'
 * '<S8>'   : 'modello_2017b_levaRetro_acc/Kinematics1'
 * '<S9>'   : 'modello_2017b_levaRetro_acc/MATLAB Function'
 * '<S10>'  : 'modello_2017b_levaRetro_acc/MATLAB Function1'
 * '<S11>'  : 'modello_2017b_levaRetro_acc/MATLAB Function2'
 * '<S12>'  : 'modello_2017b_levaRetro_acc/MATLAB Function3'
 * '<S13>'  : 'modello_2017b_levaRetro_acc/Passivity second'
 * '<S14>'  : 'modello_2017b_levaRetro_acc/Ripple compensation x axis'
 * '<S15>'  : 'modello_2017b_levaRetro_acc/Ripple compensation y axis'
 * '<S16>'  : 'modello_2017b_levaRetro_acc/Scope 1'
 * '<S17>'  : 'modello_2017b_levaRetro_acc/Scope 2'
 * '<S18>'  : 'modello_2017b_levaRetro_acc/Scope 3'
 * '<S19>'  : 'modello_2017b_levaRetro_acc/Scope 5'
 * '<S20>'  : 'modello_2017b_levaRetro_acc/Slaves_control_and_status'
 * '<S21>'  : 'modello_2017b_levaRetro_acc/Subsystem'
 * '<S22>'  : 'modello_2017b_levaRetro_acc/caratterizzazione'
 * '<S23>'  : 'modello_2017b_levaRetro_acc/encoder_x_axis_processing'
 * '<S24>'  : 'modello_2017b_levaRetro_acc/encoder_y_axis_processing'
 * '<S25>'  : 'modello_2017b_levaRetro_acc/griglia'
 * '<S26>'  : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable'
 * '<S27>'  : 'modello_2017b_levaRetro_acc/quadrato'
 * '<S28>'  : 'modello_2017b_levaRetro_acc/ripple_comp_block'
 * '<S29>'  : 'modello_2017b_levaRetro_acc/Actuation/Kinematics'
 * '<S30>'  : 'modello_2017b_levaRetro_acc/Actuation/Kinematics/MATLAB Function'
 * '<S31>'  : 'modello_2017b_levaRetro_acc/EtherCAT Master Control/Ethercat master State Machine'
 * '<S32>'  : 'modello_2017b_levaRetro_acc/Kinematics/Forward kinematics1'
 * '<S33>'  : 'modello_2017b_levaRetro_acc/Kinematics/Jacobian_x_vel_ang1'
 * '<S34>'  : 'modello_2017b_levaRetro_acc/Kinematics/MATLAB Function'
 * '<S35>'  : 'modello_2017b_levaRetro_acc/Kinematics1/Forward kinematics1'
 * '<S36>'  : 'modello_2017b_levaRetro_acc/Kinematics1/Jacobian_x_vel_ang1'
 * '<S37>'  : 'modello_2017b_levaRetro_acc/Kinematics1/MATLAB Function'
 * '<S38>'  : 'modello_2017b_levaRetro_acc/Slaves_control_and_status/x_axis_drive_control'
 * '<S39>'  : 'modello_2017b_levaRetro_acc/Slaves_control_and_status/y_axis_drive_control'
 * '<S40>'  : 'modello_2017b_levaRetro_acc/Slaves_control_and_status/x_axis_drive_control/Drive_state'
 * '<S41>'  : 'modello_2017b_levaRetro_acc/Slaves_control_and_status/x_axis_drive_control/drive_input'
 * '<S42>'  : 'modello_2017b_levaRetro_acc/Slaves_control_and_status/x_axis_drive_control/drive_output'
 * '<S43>'  : 'modello_2017b_levaRetro_acc/Slaves_control_and_status/x_axis_drive_control/Drive_state/DS402_state_machine'
 * '<S44>'  : 'modello_2017b_levaRetro_acc/Slaves_control_and_status/y_axis_drive_control/Drive_state'
 * '<S45>'  : 'modello_2017b_levaRetro_acc/Slaves_control_and_status/y_axis_drive_control/drive_input'
 * '<S46>'  : 'modello_2017b_levaRetro_acc/Slaves_control_and_status/y_axis_drive_control/drive_output'
 * '<S47>'  : 'modello_2017b_levaRetro_acc/Slaves_control_and_status/y_axis_drive_control/Drive_state/DS402_state_machine'
 * '<S48>'  : 'modello_2017b_levaRetro_acc/Subsystem/MATLAB Function'
 * '<S49>'  : 'modello_2017b_levaRetro_acc/caratterizzazione/MATLAB Function'
 * '<S50>'  : 'modello_2017b_levaRetro_acc/caratterizzazione/PD in POS'
 * '<S51>'  : 'modello_2017b_levaRetro_acc/caratterizzazione/PD in POS/AntiSpike'
 * '<S52>'  : 'modello_2017b_levaRetro_acc/caratterizzazione/PD in POS/derivatore'
 * '<S53>'  : 'modello_2017b_levaRetro_acc/encoder_x_axis_processing/AntiSpike'
 * '<S54>'  : 'modello_2017b_levaRetro_acc/encoder_x_axis_processing/derivatore'
 * '<S55>'  : 'modello_2017b_levaRetro_acc/encoder_y_axis_processing/AntiSpike'
 * '<S56>'  : 'modello_2017b_levaRetro_acc/encoder_y_axis_processing/derivatore'
 * '<S57>'  : 'modello_2017b_levaRetro_acc/griglia/MATLAB Function'
 * '<S58>'  : 'modello_2017b_levaRetro_acc/griglia/MATLAB Function1'
 * '<S59>'  : 'modello_2017b_levaRetro_acc/griglia/MATLAB Function2'
 * '<S60>'  : 'modello_2017b_levaRetro_acc/griglia/Prova_griglia'
 * '<S61>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcex_visc'
 * '<S62>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcey'
 * '<S63>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcex_visc/demultiplexer_enable_gear_subsistems'
 * '<S64>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcex_visc/fifth_gear'
 * '<S65>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcex_visc/first_gear '
 * '<S66>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcex_visc/fourth_gear'
 * '<S67>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcex_visc/reverse_gear'
 * '<S68>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcex_visc/second_gear'
 * '<S69>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcex_visc/selection_axis'
 * '<S70>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcex_visc/sixth_gear'
 * '<S71>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcex_visc/third_gear'
 * '<S72>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcex_visc/fifth_gear/Render_wall1'
 * '<S73>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcex_visc/first_gear /Render_wall1'
 * '<S74>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcex_visc/fourth_gear/Render_wall1'
 * '<S75>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcex_visc/reverse_gear/Render_wall1'
 * '<S76>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcex_visc/second_gear/Render_wall1'
 * '<S77>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcex_visc/selection_axis/muro_x'
 * '<S78>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcex_visc/sixth_gear/Render_wall1'
 * '<S79>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcex_visc/third_gear/Render_wall1'
 * '<S80>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcey/MATLAB Function'
 * '<S81>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcey/muro_marcia_dx'
 * '<S82>'  : 'modello_2017b_levaRetro_acc/griglia/render_curve_forcey/muro_marcia_sx'
 * '<S83>'  : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/MATLAB Function'
 * '<S84>'  : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/MATLAB Function1'
 * '<S85>'  : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/MATLAB Function2'
 * '<S86>'  : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/dynamic'
 * '<S87>'  : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc'
 * '<S88>'  : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1'
 * '<S89>'  : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey'
 * '<S90>'  : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/static_Prova_griglia'
 * '<S91>'  : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/variable_viscous_coeff_y'
 * '<S92>'  : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves'
 * '<S93>'  : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/demultiplexer_enable_gear_subsistems'
 * '<S94>'  : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/fifth_gear'
 * '<S95>'  : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/first_gear '
 * '<S96>'  : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/fourth_gear'
 * '<S97>'  : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/reverse_gear'
 * '<S98>'  : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/second_gear'
 * '<S99>'  : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/selection_axis1'
 * '<S100>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/sixth_gear'
 * '<S101>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/third_gear'
 * '<S102>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/fifth_gear/Render_wall1'
 * '<S103>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/fifth_gear/static_begin_curve'
 * '<S104>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/fifth_gear/static_return_curve'
 * '<S105>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/fifth_gear/static_stiffness_curve'
 * '<S106>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/first_gear /Render_wall1'
 * '<S107>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/first_gear /static_begin_curve'
 * '<S108>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/first_gear /static_return_curve'
 * '<S109>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/first_gear /static_stiffness_curve'
 * '<S110>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/fourth_gear/Render_wall1'
 * '<S111>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/fourth_gear/static_begin_curve'
 * '<S112>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/fourth_gear/static_return_curve'
 * '<S113>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/fourth_gear/static_stiffness_curve'
 * '<S114>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/reverse_gear/Render_wall1'
 * '<S115>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/reverse_gear/static_begin_curve'
 * '<S116>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/reverse_gear/static_return_curve'
 * '<S117>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/reverse_gear/static_stiffness_curve'
 * '<S118>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/second_gear/Render_wall1'
 * '<S119>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/second_gear/static_begin_curve'
 * '<S120>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/second_gear/static_return_curve'
 * '<S121>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/second_gear/static_stiffness_curve'
 * '<S122>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/selection_axis1/curve_cross_x'
 * '<S123>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/selection_axis1/muro_x'
 * '<S124>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/selection_axis1/offset'
 * '<S125>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/sixth_gear/Render_wall1'
 * '<S126>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/sixth_gear/static_begin_curve'
 * '<S127>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/sixth_gear/static_return_curve'
 * '<S128>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/sixth_gear/static_stiffness_curve'
 * '<S129>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/third_gear/Render_wall1'
 * '<S130>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/third_gear/static_begin_curve'
 * '<S131>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/third_gear/static_return_curve'
 * '<S132>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc/Static curves/third_gear/static_stiffness_curve'
 * '<S133>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves'
 * '<S134>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/demultiplexer_enable_gear_subsistems'
 * '<S135>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/fifth_gear'
 * '<S136>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/first_gear '
 * '<S137>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/fourth_gear'
 * '<S138>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/reverse_gear'
 * '<S139>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/second_gear'
 * '<S140>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/selection_axis'
 * '<S141>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/sixth_gear'
 * '<S142>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/third_gear'
 * '<S143>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/fifth_gear/Render_wall1'
 * '<S144>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/fifth_gear/static_begin_curve'
 * '<S145>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/fifth_gear/static_return_curve'
 * '<S146>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/fifth_gear/static_stiffness_curve'
 * '<S147>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/first_gear /Render_wall1'
 * '<S148>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/first_gear /static_begin_curve'
 * '<S149>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/first_gear /static_return_curve'
 * '<S150>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/first_gear /static_stiffness_curve'
 * '<S151>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/fourth_gear/Render_wall1'
 * '<S152>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/fourth_gear/static_begin_curve'
 * '<S153>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/fourth_gear/static_return_curve'
 * '<S154>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/fourth_gear/static_stiffness_curve'
 * '<S155>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/reverse_gear/Render_wall1'
 * '<S156>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/reverse_gear/static_begin_curve'
 * '<S157>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/reverse_gear/static_return_curve'
 * '<S158>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/reverse_gear/static_stiffness_curve'
 * '<S159>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/second_gear/Render_wall1'
 * '<S160>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/second_gear/static_begin_curve'
 * '<S161>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/second_gear/static_return_curve'
 * '<S162>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/second_gear/static_stiffness_curve'
 * '<S163>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/selection_axis/curve_cross_x'
 * '<S164>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/selection_axis/muro_x'
 * '<S165>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/sixth_gear/Render_wall1'
 * '<S166>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/sixth_gear/static_begin_curve'
 * '<S167>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/sixth_gear/static_return_curve'
 * '<S168>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/sixth_gear/static_stiffness_curve'
 * '<S169>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/third_gear/Render_wall1'
 * '<S170>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/third_gear/static_begin_curve'
 * '<S171>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/third_gear/static_return_curve'
 * '<S172>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcex_visc1/Dynamic curves/third_gear/static_stiffness_curve'
 * '<S173>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/MATLAB Function'
 * '<S174>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/MATLAB Function1'
 * '<S175>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/MATLAB Function2'
 * '<S176>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile'
 * '<S177>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/inside_gear_path'
 * '<S178>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/muro_marcia_dx'
 * '<S179>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/muro_marcia_sx'
 * '<S180>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_enabler'
 * '<S181>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile'
 * '<S182>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile_modMimmo'
 * '<S183>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection2_profile'
 * '<S184>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/last_crossgate_force_box'
 * '<S185>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/Chart1'
 * '<S186>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/Select curve'
 * '<S187>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/crossgate_selection1_begin_left'
 * '<S188>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/crossgate_selection1_begin_left1'
 * '<S189>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/crossgate_selection1_begin_right'
 * '<S190>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/crossgate_selection1_begin_right1'
 * '<S191>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/crossgate_selection1_return_left'
 * '<S192>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/crossgate_selection1_return_right'
 * '<S193>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/demultiplexer_enable_subsistems'
 * '<S194>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/demultiplexer_enable_subsistems1'
 * '<S195>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/transition1_bl_rl'
 * '<S196>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/transition1_br_rr'
 * '<S197>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/transition1_pt_bl_rr_pt_bl_rr2'
 * '<S198>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/transition1_pt_rl_bl_pt_rl_bl2'
 * '<S199>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile/transition1_zero'
 * '<S200>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile_modMimmo/Chart1'
 * '<S201>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile_modMimmo/Select curve'
 * '<S202>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile_modMimmo/crossgate_selection1_begin_left'
 * '<S203>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile_modMimmo/crossgate_selection1_begin_left1'
 * '<S204>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile_modMimmo/crossgate_selection1_begin_right'
 * '<S205>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile_modMimmo/crossgate_selection1_begin_right1'
 * '<S206>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile_modMimmo/crossgate_selection1_return_left'
 * '<S207>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile_modMimmo/crossgate_selection1_return_right'
 * '<S208>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile_modMimmo/demultiplexer_enable_subsistems'
 * '<S209>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile_modMimmo/demultiplexer_enable_subsistems1'
 * '<S210>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile_modMimmo/transition1_bl_rl'
 * '<S211>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile_modMimmo/transition1_br_rr'
 * '<S212>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile_modMimmo/transition1_pt_bl_rr_pt_bl_rr2'
 * '<S213>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile_modMimmo/transition1_pt_rl_bl_pt_rl_bl2'
 * '<S214>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection1_profile_modMimmo/transition1_zero'
 * '<S215>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection2_profile/Chart1'
 * '<S216>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection2_profile/crossgate_selection2_begin_left'
 * '<S217>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection2_profile/crossgate_selection2_begin_right'
 * '<S218>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection2_profile/crossgate_selection2_return_left'
 * '<S219>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection2_profile/crossgate_selection2_return_right'
 * '<S220>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection2_profile/demultiplexer_enable_subsistems'
 * '<S221>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection2_profile/transition2_bl_rl'
 * '<S222>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection2_profile/transition2_br_rr'
 * '<S223>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection2_profile/transition2_pt_bl_rr_pt_bl_rr2'
 * '<S224>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection2_profile/transition2_pt_rl_bl_pt_rl_bl2'
 * '<S225>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/crossgate_profile/crossgate_selection2_profile/transition2_zero'
 * '<S226>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/inside_gear_path/Force_connector'
 * '<S227>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/inside_gear_path/inside_gear_force_y'
 * '<S228>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/inside_gear_path/last_inside_gear_force_box'
 * '<S229>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/inside_gear_path/inside_gear_force_y/MATLAB Function'
 * '<S230>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/inside_gear_path/inside_gear_force_y/MATLAB Function1'
 * '<S231>' : 'modello_2017b_levaRetro_acc/prova_cambio_con_profili_enabled_sbox_viscous_variable/render_curve_forcey/inside_gear_path/inside_gear_force_y/MATLAB Function2'
 * '<S232>' : 'modello_2017b_levaRetro_acc/ripple_comp_block/PD in POS'
 * '<S233>' : 'modello_2017b_levaRetro_acc/ripple_comp_block/PI in VEL'
 * '<S234>' : 'modello_2017b_levaRetro_acc/ripple_comp_block/PD in POS/AntiSpike'
 * '<S235>' : 'modello_2017b_levaRetro_acc/ripple_comp_block/PD in POS/derivatore'
 */
#endif                                 /* RTW_HEADER_modello_2017b_levaRetro_acc_h_ */
