# Copyright 1994-2014 The MathWorks, Inc.
#
# File    : grt_vcx64.tmf   
#
# Abstract:
#       Template makefile for building a Windows-based stand-alone generic 
#       real-time version of Simulink model using generated C code and the
#       Microsoft Visual C/C++ compiler version 8.0 for x64
#
#       Note that this template is automatically customized by the build 
#       procedure to create "<model>.mk"
#
#       The following defines can be used to modify the behavior of the
#       build:
#
#         OPT_OPTS       - Optimization option. See DEFAULT_OPT_OPTS in
#                          vctools.mak for default.
#         OPTS           - User specific options.
#         CPP_OPTS       - C++ compiler options.
#         USER_SRCS      - Additional user sources, such as files needed by
#                          S-functions.
#         USER_INCLUDES  - Additional include paths
#                          (i.e. USER_INCLUDES="-Iwhere-ever -Iwhere-ever2")
#
#       To enable debugging:
#         set DEBUG_BUILD = 1, which will trigger OPTS=-Zi (may vary with
#                               compiler version, see compiler doc) 
#
#       This template makefile is designed to be used with a system target
#       file that contains 'rtwgensettings.BuildDirSuffix' see grt.tlc


#------------------------ Macros read by make_rtw -----------------------------
#
# The following macros are read by the build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the build procedure (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD         = nmake
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = grt.tlc
BUILD_SUCCESS	= ^#^#^# Created
COMPILER_TOOL_CHAIN = vcx64

#---------------------- Tokens expanded by make_rtw ---------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# build procedure.
#
#  MODEL_NAME          - Name of the Simulink block diagram
#  MODEL_MODULES       - Any additional generated source modules
#  MAKEFILE_NAME       - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT         - Path to where MATLAB is installed.
#  MATLAB_BIN          - Path to MATLAB executable.
#  S_FUNCTIONS         - List of S-functions.
#  S_FUNCTIONS_LIB     - List of S-functions libraries to link.
#  NUMST               - Number of sample times
#  TID01EQ             - yes (1) or no (0): Are sampling rates of continuous task
#                        (tid=0) and 1st discrete task equal.
#  NCSTATES            - Number of continuous states
#  BUILDARGS           - Options passed in at the command line.
#  MULTITASKING        - yes (1) or no (0): Is solver mode multitasking
#  MAT_FILE            - yes (1) or no (0): Should mat file logging be done
#  EXT_MODE            - yes (1) or no (0): Build for external mode
#  TMW_EXTMODE_TESTING - yes (1) or no (0): Build ext_test.c for external mode
#                        testing.
#  EXTMODE_TRANSPORT   - Index of transport mechanism (e.g. tcpip, serial) for extmode
#  EXTMODE_STATIC      - yes (1) or no (0): Use static instead of dynamic mem alloc.
#  EXTMODE_STATIC_SIZE - Size of static memory allocation buffer.

MODEL                = AcquireAngleAmicSimple_4kHz_M2017b
MODULES              = rt_matrx.c rt_printf.c rt_logging.c AcquireAngleAmicSimple_4kHz_M2017b_data.c rtGetInf.c rtGetNaN.c rt_nonfinite.c ecat_config_xml_0.c
MAKEFILE             = AcquireAngleAmicSimple_4kHz_M2017b.mk
MATLAB_ROOT          = C:\Program Files\MATLAB\R2017b
ALT_MATLAB_ROOT      = C:\PROGRA~1\MATLAB\R2017b
MATLAB_BIN           = C:\Program Files\MATLAB\R2017b\bin
ALT_MATLAB_BIN       = C:\PROGRA~1\MATLAB\R2017b\bin
MASTER_ANCHOR_DIR    = 
START_DIR            = D:\Dropbox\PROJECTS\AsiaHaptics18-Challenge\AsiaHaptics_CODE\Acqusizione_AMIC
S_FUNCTIONS          = xpcethercatgetstate.c xpcethercatpdorx.c xpcethercatpdotx.c xpcethercatsetstate.c xpctimeinfo.c
S_FUNCTIONS_LIB      = 
NUMST                = 3
TID01EQ              = 1
NCSTATES             = 0
BUILDARGS            =  ISPROTECTINGMODEL=NOTPROTECTING
MULTITASKING         = 0
MAT_FILE             = 1
EXT_MODE             = 0
TMW_EXTMODE_TESTING  = 0
EXTMODE_TRANSPORT    = 0
EXTMODE_STATIC       = 0
EXTMODE_STATIC_SIZE  = 1000000

CODE_INTERFACE_PACKAGING = Nonreusable function

CLASSIC_INTERFACE    = 0
# Optional for GRT
ALLOCATIONFCN        = 0
ONESTEPFCN           = 1
TERMFCN              = 1
MULTI_INSTANCE_CODE  = 0

MODELREFS            = 
SHARED_SRC           = 
SHARED_SRC_DIR       = 
SHARED_BIN_DIR       = 
SHARED_LIB           = 
TARGET_LANG_EXT      = c
MEX_OPT_FILE         = -f "C:\Users\Domenico\AppData\Roaming\MathWorks\MATLAB\R2017b\mex_C_win64.xml"
VISUAL_VER           = 14.0
OPTIMIZATION_FLAGS   = /O2 /Oy-
ADDITIONAL_LDFLAGS   = 
DEFINES_CUSTOM       = 

# To enable debugging:
# set DEBUG_BUILD = 1
DEBUG_BUILD             = 0

#--------------------------- Model and reference models -----------------------
MODELLIB                  = AcquireAngleAmicSimple_4kHz_M2017blib.lib
MODELREF_LINK_LIBS        = 
MODELREF_LINK_RSPFILE     = AcquireAngleAmicSimple_4kHz_M2017b_ref.rsp
MODELREF_INC_PATH         = 
RELATIVE_PATH_TO_ANCHOR   = ..\..
MODELREF_TARGET_TYPE      = NONE

!if "$(MATLAB_ROOT)" != "$(ALT_MATLAB_ROOT)"
MATLAB_ROOT = $(ALT_MATLAB_ROOT)
!endif
!if "$(MATLAB_BIN)" != "$(ALT_MATLAB_BIN)"
MATLAB_BIN = $(ALT_MATLAB_BIN)
!endif
MATLAB_ARCH_BIN = $(MATLAB_BIN)\win64

#--------------------------- Tool Specifications ------------------------------

CPU = AMD64
!include $(MATLAB_ROOT)\rtw\c\tools\vctools.mak
APPVER = 5.02

GEN_LINKER_RESPONSE  = $(MATLAB_ARCH_BIN)\createResponseFile.exe 1
CMD_FILE             = $(MODEL).rsp

#------------------------------ Include/Lib Path ------------------------------

MATLAB_INCLUDES =                    $(MATLAB_ROOT)\simulink\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\rtw\c\src
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\rtw\c\src\ext_mode\common

# Additional file include paths

MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(START_DIR)
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\simulink\include\sf_runtime
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(START_DIR)\AcquireAngleAmicSimple_4kHz_M2017b_grt_rtw
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\simulink\include\messages

INCLUDE = .;$(RELATIVE_PATH_TO_ANCHOR);$(MATLAB_INCLUDES);$(INCLUDE)

!if "$(SHARED_SRC_DIR)" != ""
INCLUDE = $(INCLUDE);$(SHARED_SRC_DIR)
!endif

#------------------------ External mode ---------------------------------------
# Uncomment -DVERBOSE to have information printed to stdout
# To add a new transport layer, see the comments in
#   <matlabroot>/toolbox/simulink/simulink/extmode_transports.m
!if $(EXT_MODE) == 1
EXT_CC_OPTS = -DEXT_MODE # -DVERBOSE
!if $(EXTMODE_TRANSPORT) == 0 #tcpip
EXT_SRC = ext_svr.c updown.c ext_work.c rtiostream_interface.c rtiostream_tcpip.c
EXT_LIB = wsock32.lib
!endif
!if $(EXTMODE_TRANSPORT) == 1 #serial_win32
EXT_SRC = ext_svr.c updown.c ext_work.c ext_svr_serial_transport.c
EXT_SRC = $(EXT_SRC) ext_serial_pkt.c rtiostream_serial_interface.c rtiostream_serial.c
EXT_LIB =
!endif
!if $(TMW_EXTMODE_TESTING) == 1
EXT_SRC     = $(EXT_SRC) ext_test.c
EXT_CC_OPTS = $(EXT_CC_OPTS) -DTMW_EXTMODE_TESTING
!endif
!if $(EXTMODE_STATIC) == 1
EXT_SRC     = $(EXT_SRC) mem_mgr.c
EXT_CC_OPTS = $(EXT_CC_OPTS) -DEXTMODE_STATIC -DEXTMODE_STATIC_SIZE=$(EXTMODE_STATIC_SIZE)
!endif
!else
EXT_SRC     =
EXT_CC_OPTS =
EXT_LIB     =
!endif

#------------------------ rtModel ----------------------------------------------

RTM_CC_OPTS = -DUSE_RTMODEL

#----------------- Compiler and Linker Options --------------------------------

# Optimization Options
OPT_OPTS = $(DEFAULT_OPT_OPTS)

# General User Options
!if "$(DEBUG_BUILD)" == "0"
DBG_FLAG =
!else
#   Set OPT_OPTS=-Zi and any additional flags for debugging
DBG_FLAG = -Zi
!endif

!if "$(OPTIMIZATION_FLAGS)" != ""
CC_OPTS = $(OPTS) $(EXT_CC_OPTS) $(RTM_CC_OPTS) $(OPTIMIZATION_FLAGS)
!else
CC_OPTS = $(OPT_OPTS) $(OPTS) $(EXT_CC_OPTS) $(RTM_CC_OPTS)
!endif

CPP_REQ_DEFINES = -DMODEL=$(MODEL) -DRT -DNUMST=$(NUMST) \
		  -DTID01EQ=$(TID01EQ) -DNCSTATES=$(NCSTATES) \
		  -DMT=$(MULTITASKING) -DHAVESTDIO -DMAT_FILE=$(MAT_FILE) \
		  -DONESTEPFCN=$(ONESTEPFCN) -DTERMFCN=$(TERMFCN) \
		  -DMULTI_INSTANCE_CODE=$(MULTI_INSTANCE_CODE) \
		  -DCLASSIC_INTERFACE=$(CLASSIC_INTERFACE) \
		  -DALLOCATIONFCN=$(ALLOCATIONFCN) \
		  $(DEFINES_CUSTOM)

# Uncomment this line to move warning level to W4
# cflags = $(cflags:W3=W4)
CFLAGS   = $(MODELREF_INC_PATH) $(cflags) $(cvarsmt) /wd4996 $(DBG_FLAG) $(CC_OPTS)\
	   $(CPP_REQ_DEFINES) $(USER_INCLUDES)
CPPFLAGS = $(MODELREF_INC_PATH) $(cflags) $(cvarsmt) /wd4996 /EHsc- $(DBG_FLAG) \
	   $(CPP_OPTS) $(CC_OPTS) $(CPP_REQ_DEFINES) $(USER_INCLUDES)
LDFLAGS  = $(ldebug) $(conflags) $(EXT_LIB) $(conlibs) libcpmt.lib $(ADDITIONAL_LDFLAGS)

# libcpmt.lib is the multi-threaded, static lib version of the C++ standard lib

#----------------------------- Source Files -----------------------------------


#Standalone executable
!if "$(MODELREF_TARGET_TYPE)" == "NONE"
PRODUCT   = $(RELATIVE_PATH_TO_ANCHOR)\$(MODEL).exe

!if "$(CLASSIC_INTERFACE)" == "1"
MAIN_SRC = classic_main.c
OTHER_SRC = rt_sim.c
!else
!if "$(MULTI_INSTANCE_CODE)" == "1"
!if "$(CODE_INTERFACE_PACKAGING)" == "C++ class"
MAIN_SRC  = rt_cppclass_main.cpp
!else
MAIN_SRC  = rt_malloc_main.c
!endif
!else
MAIN_SRC = rt_main.c
!endif
OTHER_SRC =
!endif
REQ_SRCS  = $(MODEL).$(TARGET_LANG_EXT) $(MODULES) \
                    $(MAIN_SRC) $(OTHER_SRC) $(EXT_SRC)

#Model Reference Target
!else
PRODUCT   = $(MODELLIB)
REQ_SRCS  = $(MODULES)
!endif

USER_SRCS =

SRCS = $(REQ_SRCS) $(USER_SRCS) $(S_FUNCTIONS)
OBJS_CPP_UPPER = $(SRCS:.CPP=.obj)
OBJS_CPP_LOWER = $(OBJS_CPP_UPPER:.cpp=.obj)
OBJS_C_UPPER = $(OBJS_CPP_LOWER:.C=.obj)
OBJS = $(OBJS_C_UPPER:.c=.obj)
SHARED_OBJS = $(SHARED_BIN_DIR)\*.obj
# ------------------------- Additional Libraries ------------------------------

LIBS =

!if "$(OPT_OPTS)" == "$(DEFAULT_OPT_OPTS)"
LIBS = $(LIBS) $(MATLAB_ROOT)\toolbox\rtw\targets\xpc\target\build\xpcblocks\lib\AtEcat_xpc_vcx64.lib
!else
LIBS = $(LIBS) AtEcat_xpc.lib
!endif 

LIBS = $(LIBS)

#--------------------------------- Rules --------------------------------------
all: set_environment_variables $(PRODUCT)

!if "$(MODELREF_TARGET_TYPE)" == "NONE"
#--- Stand-alone model ---
$(PRODUCT) : $(OBJS) $(SHARED_LIB) $(LIBS) $(MODELREF_LINK_LIBS)
	@cmd /C "echo ### Linking ..."
	$(GEN_LINKER_RESPONSE) $(CMD_FILE) $(OBJS)
	$(LD) $(LDFLAGS) $(S_FUNCTIONS_LIB) $(SHARED_LIB) $(LIBS) $(MAT_LIBS) @$(CMD_FILE) @$(MODELREF_LINK_RSPFILE) -out:$@
	@del $(CMD_FILE)
	@cmd /C "echo $(BUILD_SUCCESS) executable $(MODEL).exe"
!else
#--- Model reference Coder Target ---
$(PRODUCT) : $(OBJS) $(SHARED_LIB)
	@cmd /C "echo ### Linking ..."
	$(GEN_LINKER_RESPONSE) $(CMD_FILE) $(OBJS)
	$(LD) -lib /OUT:$(MODELLIB) @$(CMD_FILE) $(S_FUNCTIONS_LIB)
	@cmd /C "echo $(BUILD_SUCCESS) static library $(MODELLIB)"
!endif

!if "$(CLASSIC_INTERFACE)" ==  "1"
!if "$(TARGET_LANG_EXT)" ==  "cpp"
{$(MATLAB_ROOT)\rtw\c\grt}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) /TP $(CPPFLAGS) $<
!else
{$(MATLAB_ROOT)\rtw\c\grt}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<
!endif
!else
!if "$(TARGET_LANG_EXT)" ==  "cpp"
{$(MATLAB_ROOT)\rtw\c\src\common}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) /TP $(CPPFLAGS) $<

{$(MATLAB_ROOT)\rtw\c\src\common}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) /TP $(CPPFLAGS) $<
!else
{$(MATLAB_ROOT)\rtw\c\src\common}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<
!endif
!endif

{$(MATLAB_ROOT)\rtw\c\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\rtw\c\src\ext_mode\common}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\rtw\c\src\rtiostream\rtiostreamtcpip}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\rtw\c\src\ext_mode\serial}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\rtw\c\src\ext_mode\custom}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

# Additional sources

{$(MATLAB_ROOT)\toolbox\rtw\targets\xpc\target\build\xpcblocks}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\rtw\c\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\simulink\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{..}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<



{$(MATLAB_ROOT)\toolbox\rtw\targets\xpc\target\build\xpcblocks}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\rtw\c\src}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\simulink\src}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{..}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<



# Look in simulink/src helper files

{$(MATLAB_ROOT)\simulink\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\simulink\src}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

# Put these rule last, otherwise nmake will check toolboxes first

{$(RELATIVE_PATH_TO_ANCHOR)}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(RELATIVE_PATH_TO_ANCHOR)}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

!if "$(SHARED_LIB)" != ""
$(SHARED_LIB) : $(SHARED_SRC)
	@cmd /C "echo ### Creating $@"
	@$(CC) $(CFLAGS) -Fo$(SHARED_BIN_DIR)\ @<<
$?
<<
	@$(LIBCMD) /nologo /out:$@ $(SHARED_OBJS)
	@cmd /C "echo ### $@ Created"
!endif


set_environment_variables:
	@set INCLUDE=$(INCLUDE)
	@set LIB=$(LIB)

# Libraries:



MODULES_AtEcat_xpc = \
	dummy.obj \


AtEcat_xpc.lib : rtw_proj.tmw $(MAKEFILE) $(MODULES_AtEcat_xpc)
	@cmd /C "echo ### Creating $@"
	$(LIBCMD) /nologo /out:$@ $(MODULES_AtEcat_xpc)
	@cmd /C "echo ### $@ Created"



#----------------------------- Dependencies -----------------------------------

$(OBJS) : $(MAKEFILE) rtw_proj.tmw
