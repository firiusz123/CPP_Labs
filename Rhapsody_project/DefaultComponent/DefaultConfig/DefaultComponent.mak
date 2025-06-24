
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug=-g
CPPCompileRelease=-O
LinkDebug=-g
LinkRelease=-O

CleanupFlagForSimulink=
SIMULINK_CONFIG=False
ifeq ($(SIMULINK_CONFIG),True)
CleanupFlagForSimulink=-DOM_WITH_CLEANUP
endif

ConfigurationCPPCompileSwitches=   $(INCLUDE_QUALIFIER). $(INCLUDE_QUALIFIER)$(OMROOT) $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/oxf $(DEFINE_QUALIFIER)CYGWIN $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) -Wno-write-strings $(CPPCompileDebug) -c  $(CleanupFlagForSimulink)
ConfigurationCCCompileSwitches=$(INCLUDE_PATH) -c 

#########################################
###### Predefined macros ################
RM=/bin/rm -rf
INCLUDE_QUALIFIER=-I
DEFINE_QUALIFIER=-D
CC=g++
LIB_CMD=ar
LINK_CMD=g++
LIB_FLAGS=rvu
LINK_FLAGS= $(LinkDebug)   

#########################################
####### Context macros ##################

FLAGSFILE=
RULESFILE=
OMROOT="C:/Program Files/IBM/Rhapsody/9.0.1/Share"
RHPROOT="C:/Program Files/IBM/Rhapsody/9.0.1"
FRAMEWORK_LIB_ROOT="C:/ProgramData/IBM/Rhapsody/9.0.1x64/UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.o
EXE_EXT=.exe
LIB_EXT=.a

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS= \
  $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinWebComponentsx64$(LIB_EXT) \
  $(FRAMEWORK_LIB_ROOT)/lib/cygwinWebServicesx64$(LIB_EXT) \
  -lws2_32

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/Cygwin

ADDITIONAL_OBJS=

OBJS= \
  reciever.o \
  Controller.o \
  Detector.o \
  Lamp.o \
  Drive.o \
  Module.o \
  Display.o \
  Keyboard.o \
  Operator.o \
  user.o \
  maintainer.o \
  env.o \
  Default.o \
  InitWebResources.o




#########################################
####### Predefined macros ###############
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)

ifeq ($(INSTRUMENTATION),Animation)

INST_FLAGS=$(DEFINE_QUALIFIER)OMANIMATOR $(DEFINE_QUALIFIER)__USE_W32_SOCKETS 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinaomanimx64$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinoxsiminstx64$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinoxfinstx64$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinomcomapplx64$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),Tracing)

INST_FLAGS=$(DEFINE_QUALIFIER)OMTRACER 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwintomtracex64$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinaomtracex64$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinoxsiminstx64$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinoxfinstx64$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinomcomapplx64$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),None)

INST_FLAGS= 
INST_INCLUDES=
INST_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinoxsimx64$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinoxfx64$(LIB_EXT)
SOCK_LIB=-lws2_32

else
	@echo An invalid Instrumentation $(INSTRUMENTATION) is specified.
	exit
endif
endif
endif

.SUFFIXES: $(CPP_EXT)

#####################################################################
##################### Context dependencies and commands #############






reciever.o : reciever.cpp reciever.h    Default.h Controller.h Module.h 
	@echo Compiling reciever.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o reciever.o reciever.cpp




Controller.o : Controller.cpp Controller.h    Default.h Detector.h Drive.h reciever.h Lamp.h Keyboard.h Display.h Module.h 
	@echo Compiling Controller.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Controller.o Controller.cpp




Detector.o : Detector.cpp Detector.h    Default.h Controller.h Module.h 
	@echo Compiling Detector.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Detector.o Detector.cpp




Lamp.o : Lamp.cpp Lamp.h    Default.h Controller.h Module.h 
	@echo Compiling Lamp.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Lamp.o Lamp.cpp




Drive.o : Drive.cpp Drive.h    Default.h Controller.h Module.h 
	@echo Compiling Drive.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Drive.o Drive.cpp




Module.o : Module.cpp Module.h    Default.h 
	@echo Compiling Module.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Module.o Module.cpp




Display.o : Display.cpp Display.h    Default.h Controller.h Module.h 
	@echo Compiling Display.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Display.o Display.cpp




Keyboard.o : Keyboard.cpp Keyboard.h    Default.h Controller.h Module.h 
	@echo Compiling Keyboard.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Keyboard.o Keyboard.cpp




Operator.o : Operator.cpp Operator.h    Default.h user.h 
	@echo Compiling Operator.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Operator.o Operator.cpp




user.o : user.cpp user.h    Default.h 
	@echo Compiling user.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o user.o user.cpp




maintainer.o : maintainer.cpp maintainer.h    Default.h user.h 
	@echo Compiling maintainer.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o maintainer.o maintainer.cpp




env.o : env.cpp env.h    Default.h 
	@echo Compiling env.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o env.o env.cpp




Default.o : Default.cpp Default.h    reciever.h Controller.h Detector.h Lamp.h Drive.h Module.h Display.h Keyboard.h 
	@echo Compiling Default.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Default.o Default.cpp




InitWebResources.o : InitWebResources.cpp     
	@echo Compiling InitWebResources.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o InitWebResources.o InitWebResources.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS)
	@echo Compiling $(TARGET_MAIN)$(CPP_EXT)
	@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################
############## Predefined Instructions #############################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS)



clean:
	@echo Cleanup
	$(RM) reciever.o
	$(RM) Controller.o
	$(RM) Detector.o
	$(RM) Lamp.o
	$(RM) Drive.o
	$(RM) Module.o
	$(RM) Display.o
	$(RM) Keyboard.o
	$(RM) Operator.o
	$(RM) user.o
	$(RM) maintainer.o
	$(RM) env.o
	$(RM) Default.o
	$(RM) InitWebResources.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)

