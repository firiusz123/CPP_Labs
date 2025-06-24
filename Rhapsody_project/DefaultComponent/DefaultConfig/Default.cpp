/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Default.cpp
*********************************************************************/

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
//## package Default


//## classInstance itsController
Controller itsController;

//## classInstance itsController_1
Controller itsController_1;

//## classInstance itsController_2
Controller itsController_2;

//## classInstance itsDetector
Detector itsDetector;

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
}

bool Default_startBehavior() {
    bool done = true;
    done &= itsController.startBehavior();
    done &= itsController_1.startBehavior();
    done &= itsController_2.startBehavior();
    done &= itsDetector.startBehavior();
    return done;
}

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
    setId(evCollision_Default_id);
}

bool evCollision::isTypeOf(const short id) const {
    return (evCollision_Default_id==id);
}

//## event evCheckCollision()
evCheckCollision::evCheckCollision() {
    setId(evCheckCollision_Default_id);
}

bool evCheckCollision::isTypeOf(const short id) const {
    return (evCheckCollision_Default_id==id);
}

//## event evError()
evError::evError() {
    setId(evError_Default_id);
}

bool evError::isTypeOf(const short id) const {
    return (evError_Default_id==id);
}

//## event evFAIL()
evFAIL::evFAIL() {
    setId(evFAIL_Default_id);
}

bool evFAIL::isTypeOf(const short id) const {
    return (evFAIL_Default_id==id);
}

//## event evStep(float)
evStep::evStep(float p_argument_0) : argument_0(p_argument_0) {
    setId(evStep_Default_id);
}

bool evStep::isTypeOf(const short id) const {
    return (evStep_Default_id==id);
}

//## event evStart(states)
evStart::evStart(states p_state) : state(p_state) {
    setId(evStart_Default_id);
}

bool evStart::isTypeOf(const short id) const {
    return (evStart_Default_id==id);
}

//## event evSignal()
evSignal::evSignal() {
    setId(evSignal_Default_id);
}

bool evSignal::isTypeOf(const short id) const {
    return (evSignal_Default_id==id);
}

//## event evActivate()
evActivate::evActivate() {
    setId(evActivate_Default_id);
}

bool evActivate::isTypeOf(const short id) const {
    return (evActivate_Default_id==id);
}

//## event evStop()
evStop::evStop() {
    setId(evStop_Default_id);
}

bool evStop::isTypeOf(const short id) const {
    return (evStop_Default_id==id);
}

//## event evSuccess()
evSuccess::evSuccess() {
    setId(evSuccess_Default_id);
}

bool evSuccess::isTypeOf(const short id) const {
    return (evSuccess_Default_id==id);
}

//## event evRegulate()
evRegulate::evRegulate() {
    setId(evRegulate_Default_id);
}

bool evRegulate::isTypeOf(const short id) const {
    return (evRegulate_Default_id==id);
}

//## event evFirmware()
evFirmware::evFirmware() {
    setId(evFirmware_Default_id);
}

bool evFirmware::isTypeOf(const short id) const {
    return (evFirmware_Default_id==id);
}

//## event evTest()
evTest::evTest() {
    setId(evTest_Default_id);
}

bool evTest::isTypeOf(const short id) const {
    return (evTest_Default_id==id);
}

//## event evOK()
evOK::evOK() {
    setId(evOK_Default_id);
}

bool evOK::isTypeOf(const short id) const {
    return (evOK_Default_id==id);
}

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Default.cpp
*********************************************************************/
