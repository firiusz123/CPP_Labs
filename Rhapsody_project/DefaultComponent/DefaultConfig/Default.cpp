/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: user
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## classInstance itsController
#include "Controller.h"
//## classInstance itsDetector
#include "Detector.h"
//## auto_generated
#include "Display.h"
//## auto_generated
#include "Drive.h"
//## auto_generated
#include "Keyboard.h"
//## auto_generated
#include "Lamp.h"
//## auto_generated
#include "Module.h"
//## auto_generated
#include "reciever.h"
//#[ ignore
#define evCollision_SERIALIZE OM_NO_OP

#define evCollision_UNSERIALIZE OM_NO_OP

#define evCollision_CONSTRUCTOR evCollision()

#define evCheckCollision_SERIALIZE OM_NO_OP

#define evCheckCollision_UNSERIALIZE OM_NO_OP

#define evCheckCollision_CONSTRUCTOR evCheckCollision()

#define evError_SERIALIZE OM_NO_OP

#define evError_UNSERIALIZE OM_NO_OP

#define evError_CONSTRUCTOR evError()

#define evFAIL_SERIALIZE OM_NO_OP

#define evFAIL_UNSERIALIZE OM_NO_OP

#define evFAIL_CONSTRUCTOR evFAIL()

#define evStep_SERIALIZE OMADD_SER(argument_0, x2String(myEvent->argument_0))

#define evStep_UNSERIALIZE OMADD_UNSER(float, argument_0, OMDestructiveString2X)

#define evStep_CONSTRUCTOR evStep(argument_0)

#define evStart_SERIALIZE OMADD_SER(state, x2String((int)myEvent->state))

#define evStart_UNSERIALIZE OMADD_UNSER(int, state, OMDestructiveString2X)

#define evStart_CONSTRUCTOR evStart(state)

#define evSignal_SERIALIZE OM_NO_OP

#define evSignal_UNSERIALIZE OM_NO_OP

#define evSignal_CONSTRUCTOR evSignal()

#define evActivate_SERIALIZE OM_NO_OP

#define evActivate_UNSERIALIZE OM_NO_OP

#define evActivate_CONSTRUCTOR evActivate()

#define evStop_SERIALIZE OM_NO_OP

#define evStop_UNSERIALIZE OM_NO_OP

#define evStop_CONSTRUCTOR evStop()

#define evSuccess_SERIALIZE OM_NO_OP

#define evSuccess_UNSERIALIZE OM_NO_OP

#define evSuccess_CONSTRUCTOR evSuccess()

#define evRegulate_SERIALIZE OM_NO_OP

#define evRegulate_UNSERIALIZE OM_NO_OP

#define evRegulate_CONSTRUCTOR evRegulate()

#define evFirmware_SERIALIZE OM_NO_OP

#define evFirmware_UNSERIALIZE OM_NO_OP

#define evFirmware_CONSTRUCTOR evFirmware()

#define evTest_SERIALIZE OM_NO_OP

#define evTest_UNSERIALIZE OM_NO_OP

#define evTest_CONSTRUCTOR evTest()

#define evOK_SERIALIZE OM_NO_OP

#define evOK_UNSERIALIZE OM_NO_OP

#define evOK_CONSTRUCTOR evOK()
//#]

//## package Default


//## classInstance itsController
Controller itsController;

//## classInstance itsController_1
Controller itsController_1;

//## classInstance itsController_2
Controller itsController_2;

//## classInstance itsDetector
Detector itsDetector;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(Default, Default)
#endif // _OMINSTRUMENT

void Default_initRelations() {
    {
        {
            itsDetector.setShouldDelete(false);
        }
        {
            itsController.setShouldDelete(false);
        }
        {
            itsController_1.setShouldDelete(false);
        }
        {
            itsController_2.setShouldDelete(false);
        }
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool Default_startBehavior() {
    bool done = true;
    done &= itsController.startBehavior();
    done &= itsController_1.startBehavior();
    done &= itsController_2.startBehavior();
    done &= itsDetector.startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&itsDetector, Detector, "itsDetector", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsController, Controller, "itsController", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsController_1, Controller, "itsController_1", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsController_2, Controller, "itsController_2", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
Default_OMInitializer::Default_OMInitializer() {
    Default_initRelations();
    Default_startBehavior();
}

Default_OMInitializer::~Default_OMInitializer() {
}
//#]

//## event evCollision()
evCollision::evCollision() {
    NOTIFY_EVENT_CONSTRUCTOR(evCollision)
    setId(evCollision_Default_id);
}

bool evCollision::isTypeOf(const short id) const {
    return (evCollision_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evCollision, Default, Default, evCollision())

//## event evCheckCollision()
evCheckCollision::evCheckCollision() {
    NOTIFY_EVENT_CONSTRUCTOR(evCheckCollision)
    setId(evCheckCollision_Default_id);
}

bool evCheckCollision::isTypeOf(const short id) const {
    return (evCheckCollision_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evCheckCollision, Default, Default, evCheckCollision())

//## event evError()
evError::evError() {
    NOTIFY_EVENT_CONSTRUCTOR(evError)
    setId(evError_Default_id);
}

bool evError::isTypeOf(const short id) const {
    return (evError_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evError, Default, Default, evError())

//## event evFAIL()
evFAIL::evFAIL() {
    NOTIFY_EVENT_CONSTRUCTOR(evFAIL)
    setId(evFAIL_Default_id);
}

bool evFAIL::isTypeOf(const short id) const {
    return (evFAIL_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evFAIL, Default, Default, evFAIL())

//## event evStep(float)
evStep::evStep(float p_argument_0) : argument_0(p_argument_0) {
    NOTIFY_EVENT_CONSTRUCTOR(evStep)
    setId(evStep_Default_id);
}

bool evStep::isTypeOf(const short id) const {
    return (evStep_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evStep, Default, Default, evStep(float))

//## event evStart(states)
//#[ ignore
evStart::evStart(int p_state) : state((states)p_state) {
    NOTIFY_EVENT_CONSTRUCTOR(evStart)
    setId(evStart_Default_id);
}
//#]

evStart::evStart() {
    NOTIFY_EVENT_CONSTRUCTOR(evStart)
    setId(evStart_Default_id);
}

evStart::evStart(states p_state) : state(p_state) {
    NOTIFY_EVENT_CONSTRUCTOR(evStart)
    setId(evStart_Default_id);
}

bool evStart::isTypeOf(const short id) const {
    return (evStart_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evStart, Default, Default, evStart(states))

//## event evSignal()
evSignal::evSignal() {
    NOTIFY_EVENT_CONSTRUCTOR(evSignal)
    setId(evSignal_Default_id);
}

bool evSignal::isTypeOf(const short id) const {
    return (evSignal_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evSignal, Default, Default, evSignal())

//## event evActivate()
evActivate::evActivate() {
    NOTIFY_EVENT_CONSTRUCTOR(evActivate)
    setId(evActivate_Default_id);
}

bool evActivate::isTypeOf(const short id) const {
    return (evActivate_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evActivate, Default, Default, evActivate())

//## event evStop()
evStop::evStop() {
    NOTIFY_EVENT_CONSTRUCTOR(evStop)
    setId(evStop_Default_id);
}

bool evStop::isTypeOf(const short id) const {
    return (evStop_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evStop, Default, Default, evStop())

//## event evSuccess()
evSuccess::evSuccess() {
    NOTIFY_EVENT_CONSTRUCTOR(evSuccess)
    setId(evSuccess_Default_id);
}

bool evSuccess::isTypeOf(const short id) const {
    return (evSuccess_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evSuccess, Default, Default, evSuccess())

//## event evRegulate()
evRegulate::evRegulate() {
    NOTIFY_EVENT_CONSTRUCTOR(evRegulate)
    setId(evRegulate_Default_id);
}

bool evRegulate::isTypeOf(const short id) const {
    return (evRegulate_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evRegulate, Default, Default, evRegulate())

//## event evFirmware()
evFirmware::evFirmware() {
    NOTIFY_EVENT_CONSTRUCTOR(evFirmware)
    setId(evFirmware_Default_id);
}

bool evFirmware::isTypeOf(const short id) const {
    return (evFirmware_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evFirmware, Default, Default, evFirmware())

//## event evTest()
evTest::evTest() {
    NOTIFY_EVENT_CONSTRUCTOR(evTest)
    setId(evTest_Default_id);
}

bool evTest::isTypeOf(const short id) const {
    return (evTest_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evTest, Default, Default, evTest())

//## event evOK()
evOK::evOK() {
    NOTIFY_EVENT_CONSTRUCTOR(evOK)
    setId(evOK_Default_id);
}

bool evOK::isTypeOf(const short id) const {
    return (evOK_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evOK, Default, Default, evOK())

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Default.cpp
*********************************************************************/
