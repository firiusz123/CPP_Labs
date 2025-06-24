/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Controller.cpp
*********************************************************************/

//## auto_generated
#include "Controller.h"
//## auto_generated
#include <oxf/omthread.h>
//## package Default

//## class Controller
Controller::Controller(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    {
        {
            itsDetector.setShouldDelete(false);
        }
        {
            itsDrive.setShouldDelete(false);
        }
        {
            itsReciever.setShouldDelete(false);
        }
        {
            itsLamp.setShouldDelete(false);
        }
        {
            itsKeyboard.setShouldDelete(false);
        }
        {
            itsDisplay.setShouldDelete(false);
        }
        {
            itsLamp_1.setShouldDelete(false);
        }
    }
    itsDetector_1 = NULL;
    itsDisplay_1 = NULL;
    itsDrive_1 = NULL;
    itsKeyboard_1 = NULL;
    itsReciever_1 = NULL;
    initRelations();
    initStatechart();
}

Controller::~Controller() {
    cleanUpRelations();
    cancelTimeouts();
}

std::string Controller::getCode() const {
    return code;
}

void Controller::setCode(std::string p_code) {
    code = p_code;
}

bool Controller::getCode_ok() const {
    return code_ok;
}

void Controller::setCode_ok(bool p_code_ok) {
    code_ok = p_code_ok;
}

bool Controller::getDetector_ok() const {
    return detector_ok;
}

void Controller::setDetector_ok(bool p_detector_ok) {
    detector_ok = p_detector_ok;
}

bool Controller::getDrive_ok() const {
    return drive_ok;
}

void Controller::setDrive_ok(bool p_drive_ok) {
    drive_ok = p_drive_ok;
}

bool Controller::getLamp_ok() const {
    return lamp_ok;
}

void Controller::setLamp_ok(bool p_lamp_ok) {
    lamp_ok = p_lamp_ok;
}

float Controller::getPosition() const {
    return position;
}

void Controller::setPosition(float p_position) {
    position = p_position;
}

float Controller::getPosition_max() const {
    return position_max;
}

void Controller::setPosition_max(float p_position_max) {
    position_max = p_position_max;
}

float Controller::getPosition_min() const {
    return position_min;
}

void Controller::setPosition_min(float p_position_min) {
    position_min = p_position_min;
}

bool Controller::getReciever_ok() const {
    return reciever_ok;
}

void Controller::setReciever_ok(bool p_reciever_ok) {
    reciever_ok = p_reciever_ok;
}

Detector* Controller::getItsDetector() const {
    return (Detector*) &itsDetector;
}

Detector* Controller::getItsDetector_1() const {
    return itsDetector_1;
}

void Controller::setItsDetector_1(Detector* p_Detector) {
    _setItsDetector_1(p_Detector);
}

Display* Controller::getItsDisplay() const {
    return (Display*) &itsDisplay;
}

Display* Controller::getItsDisplay_1() const {
    return itsDisplay_1;
}

void Controller::setItsDisplay_1(Display* p_Display) {
    _setItsDisplay_1(p_Display);
}

Drive* Controller::getItsDrive() const {
    return (Drive*) &itsDrive;
}

Drive* Controller::getItsDrive_1() const {
    return itsDrive_1;
}

void Controller::setItsDrive_1(Drive* p_Drive) {
    _setItsDrive_1(p_Drive);
}

Keyboard* Controller::getItsKeyboard() const {
    return (Keyboard*) &itsKeyboard;
}

Keyboard* Controller::getItsKeyboard_1() const {
    return itsKeyboard_1;
}

void Controller::setItsKeyboard_1(Keyboard* p_Keyboard) {
    _setItsKeyboard_1(p_Keyboard);
}

Lamp* Controller::getItsLamp() const {
    return (Lamp*) &itsLamp;
}

Lamp* Controller::getItsLamp_1() const {
    return (Lamp*) &itsLamp_1;
}

reciever* Controller::getItsReciever() const {
    return (reciever*) &itsReciever;
}

reciever* Controller::getItsReciever_1() const {
    return itsReciever_1;
}

void Controller::setItsReciever_1(reciever* p_reciever) {
    _setItsReciever_1(p_reciever);
}

bool Controller::startBehavior() {
    bool done = true;
    done &= itsDetector.startBehavior();
    done &= itsDisplay.startBehavior();
    done &= itsDrive.startBehavior();
    done &= itsKeyboard.startBehavior();
    done &= itsLamp.startBehavior();
    done &= itsLamp_1.startBehavior();
    done &= itsReciever.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Controller::initRelations() {
    itsLamp_1._setItsController(this);
}

void Controller::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Stop_subState = OMNonState;
    Start_subState = OMNonState;
    rootState_timeout = NULL;
}

void Controller::cleanUpRelations() {
    if(itsDetector_1 != NULL)
        {
            itsDetector_1 = NULL;
        }
    if(itsDisplay_1 != NULL)
        {
            itsDisplay_1 = NULL;
        }
    if(itsDrive_1 != NULL)
        {
            itsDrive_1 = NULL;
        }
    if(itsKeyboard_1 != NULL)
        {
            itsKeyboard_1 = NULL;
        }
    if(itsReciever_1 != NULL)
        {
            itsReciever_1 = NULL;
        }
}

void Controller::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Controller::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Controller::__setItsDetector_1(Detector* p_Detector) {
    itsDetector_1 = p_Detector;
}

void Controller::_setItsDetector_1(Detector* p_Detector) {
    __setItsDetector_1(p_Detector);
}

void Controller::_clearItsDetector_1() {
    itsDetector_1 = NULL;
}

void Controller::__setItsDisplay_1(Display* p_Display) {
    itsDisplay_1 = p_Display;
}

void Controller::_setItsDisplay_1(Display* p_Display) {
    __setItsDisplay_1(p_Display);
}

void Controller::_clearItsDisplay_1() {
    itsDisplay_1 = NULL;
}

void Controller::__setItsDrive_1(Drive* p_Drive) {
    itsDrive_1 = p_Drive;
}

void Controller::_setItsDrive_1(Drive* p_Drive) {
    __setItsDrive_1(p_Drive);
}

void Controller::_clearItsDrive_1() {
    itsDrive_1 = NULL;
}

void Controller::__setItsKeyboard_1(Keyboard* p_Keyboard) {
    itsKeyboard_1 = p_Keyboard;
}

void Controller::_setItsKeyboard_1(Keyboard* p_Keyboard) {
    __setItsKeyboard_1(p_Keyboard);
}

void Controller::_clearItsKeyboard_1() {
    itsKeyboard_1 = NULL;
}

void Controller::__setItsReciever_1(reciever* p_reciever) {
    itsReciever_1 = p_reciever;
}

void Controller::_setItsReciever_1(reciever* p_reciever) {
    __setItsReciever_1(p_reciever);
}

void Controller::_clearItsReciever_1() {
    itsReciever_1 = NULL;
}

void Controller::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsDetector.setActiveContext(theActiveContext, false);
        itsDrive.setActiveContext(theActiveContext, false);
        itsReciever.setActiveContext(theActiveContext, false);
        itsLamp.setActiveContext(theActiveContext, false);
        itsKeyboard.setActiveContext(theActiveContext, false);
        itsDisplay.setActiveContext(theActiveContext, false);
        itsLamp_1.setActiveContext(theActiveContext, false);
    }
}

void Controller::destroy() {
    itsDetector.destroy();
    itsDisplay.destroy();
    itsDrive.destroy();
    itsKeyboard.destroy();
    itsLamp.destroy();
    itsLamp_1.destroy();
    itsReciever.destroy();
    OMReactive::destroy();
}

void Controller::rootState_entDef() {
    {
        pushNullTransition();
        rootState_subState = Servicing;
        rootState_active = Servicing;
    }
}

IOxfReactive::TakeEventStatus Controller::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Servicing
        case Servicing:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = Auth;
                    rootState_active = Auth;
                    res = eventConsumed;
                }
            
        }
        break;
        // State Auth
        case Auth:
        {
            if(IS_EVENT_TYPE_OF(evSuccess_Default_id))
                {
                    rootState_subState = Operation;
                    rootState_active = Operation;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evError_Default_id))
                {
                    rootState_subState = Error;
                    rootState_active = Error;
                    rootState_timeout = scheduleTimeout(2000, NULL);
                    res = eventConsumed;
                }
            
        }
        break;
        // State Error
        case Error:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            cancel(rootState_timeout);
                            rootState_subState = Auth;
                            rootState_active = Auth;
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State Operation
        case Operation:
        {
            if(IS_EVENT_TYPE_OF(evTest_Default_id))
                {
                    rootState_subState = Testing;
                    rootState_active = Testing;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evRegulate_Default_id))
                {
                    pushNullTransition();
                    rootState_subState = Regulations;
                    rootState_active = Regulations;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evFirmware_Default_id))
                {
                    pushNullTransition();
                    rootState_subState = Firmware;
                    rootState_active = Firmware;
                    res = eventConsumed;
                }
            
        }
        break;
        // State Regulations
        case Regulations:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = terminationstate_8;
                    rootState_active = terminationstate_8;
                    res = eventConsumed;
                }
            
        }
        break;
        // State Firmware
        case Firmware:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = terminationstate_8;
                    rootState_active = terminationstate_8;
                    res = eventConsumed;
                }
            
        }
        break;
        // State Testing
        case Testing:
        {
            if(IS_EVENT_TYPE_OF(evOK_Default_id))
                {
                    //#[ transition 17 
                    itsReciever.GEN(evActivate(true));
                    //#]
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evFAIL_Default_id))
                {
                    //#[ transition 8 
                    itsReciever.GEN(evActivate(false));
                    //#]
                    pushNullTransition();
                    rootState_subState = Blockade;
                    rootState_active = Blockade;
                    res = eventConsumed;
                }
            
        }
        break;
        // State Blockade
        case Blockade:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = terminationstate_8;
                    rootState_active = terminationstate_8;
                    res = eventConsumed;
                }
            
        }
        break;
        // State Ready
        case Ready:
        {
            res = Ready_handleEvent();
        }
        break;
        // State sendaction_10
        case sendaction_10:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    res = eventConsumed;
                }
            
        }
        break;
        // State Step
        case Step:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    pushNullTransition();
                    rootState_subState = sendaction_12;
                    rootState_active = sendaction_12;
                    //#[ state sendaction_12.(Entry) 
                    itsDetector.GEN(evCheckCollision);
                    //#]
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_12
        case sendaction_12:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 14 
                    if(!state_indication)
                        {
                            popNullTransition();
                            rootState_subState = Ready;
                            rootState_active = Ready;
                            res = eventConsumed;
                        }
                    else
                        {
                            popNullTransition();
                            pushNullTransition();
                            rootState_subState = sendaction_10;
                            rootState_active = sendaction_10;
                            //#[ state sendaction_10.(Entry) 
                            itsLamp.GEN(evStep());
                            //#]
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_14
        case sendaction_14:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 22 
                    if(!state_indication)
                        {
                            popNullTransition();
                            pushNullTransition();
                            Start_subState = sendaction_16;
                            rootState_active = sendaction_16;
                            //#[ state Start.sendaction_16.(Entry) 
                            itsDrive.GEN(evStart());
                            //#]
                            res = eventConsumed;
                        }
                    else
                        {
                            popNullTransition();
                            pushNullTransition();
                            Start_subState = sendaction_15;
                            rootState_active = sendaction_15;
                            //#[ state Start.sendaction_15.(Entry) 
                            itsLamp.GEN(evStart());
                            //#]
                            res = eventConsumed;
                        }
                }
            
            if(res == eventNotConsumed)
                {
                    res = Start_handleEvent();
                }
        }
        break;
        // State sendaction_15
        case sendaction_15:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    pushNullTransition();
                    Start_subState = sendaction_16;
                    rootState_active = sendaction_16;
                    //#[ state Start.sendaction_16.(Entry) 
                    itsDrive.GEN(evStart());
                    //#]
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = Start_handleEvent();
                }
        }
        break;
        // State sendaction_16
        case sendaction_16:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    Start_subState = terminationstate_17;
                    rootState_active = terminationstate_17;
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = Start_handleEvent();
                }
        }
        break;
        // State terminationstate_17
        case terminationstate_17:
        {
            res = Start_handleEvent();
        }
        break;
        // State sendaction_14
        case Stop_sendaction_14:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 31 
                    if(!state_indication)
                        {
                            popNullTransition();
                            pushNullTransition();
                            Stop_subState = Stop_sendaction_16;
                            rootState_active = Stop_sendaction_16;
                            //#[ state Stop.sendaction_16.(Entry) 
                            itsDrive.GEN(evStop);
                            //#]
                            res = eventConsumed;
                        }
                    else
                        {
                            popNullTransition();
                            pushNullTransition();
                            Stop_subState = Stop_sendaction_15;
                            rootState_active = Stop_sendaction_15;
                            //#[ state Stop.sendaction_15.(Entry) 
                            itsLamp.GEN(evStop);
                            //#]
                            res = eventConsumed;
                        }
                }
            
            if(res == eventNotConsumed)
                {
                    res = Stop_handleEvent();
                }
        }
        break;
        // State sendaction_15
        case Stop_sendaction_15:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    pushNullTransition();
                    Stop_subState = Stop_sendaction_16;
                    rootState_active = Stop_sendaction_16;
                    //#[ state Stop.sendaction_16.(Entry) 
                    itsDrive.GEN(evStop);
                    //#]
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = Stop_handleEvent();
                }
        }
        break;
        // State sendaction_16
        case Stop_sendaction_16:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    Stop_subState = Stop_terminationstate_17;
                    rootState_active = Stop_terminationstate_17;
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = Stop_handleEvent();
                }
        }
        break;
        // State terminationstate_17
        case Stop_terminationstate_17:
        {
            res = Stop_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

void Controller::Stop_entDef() {
    pushNullTransition();
    rootState_subState = Stop;
    //#[ transition 34 
    set_state(STOPPED);
    //#]
    pushNullTransition();
    Stop_subState = Stop_sendaction_14;
    rootState_active = Stop_sendaction_14;
    //#[ state Stop.sendaction_14.(Entry) 
    itsDetector.GEN(evStop);
    //#]
}

void Controller::Stop_exit() {
    popNullTransition();
    switch (Stop_subState) {
        // State sendaction_14
        case Stop_sendaction_14:
        {
            popNullTransition();
        }
        break;
        // State sendaction_15
        case Stop_sendaction_15:
        {
            popNullTransition();
        }
        break;
        // State sendaction_16
        case Stop_sendaction_16:
        {
            popNullTransition();
        }
        break;
        
        default:
            break;
    }
    Stop_subState = OMNonState;
    
}

IOxfReactive::TakeEventStatus Controller::Stop_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 37 
            if(IS_COMPLETED(Stop)==true)
                {
                    Stop_exit();
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    res = eventConsumed;
                }
        }
    
    return res;
}

void Controller::Start_entDef() {
    pushNullTransition();
    rootState_subState = Start;
    pushNullTransition();
    Start_subState = sendaction_14;
    rootState_active = sendaction_14;
    //#[ state Start.sendaction_14.(Entry) 
    itsDetector.GEN(evStart());
    //#]
}

void Controller::Start_exit() {
    popNullTransition();
    switch (Start_subState) {
        // State sendaction_14
        case sendaction_14:
        {
            popNullTransition();
        }
        break;
        // State sendaction_15
        case sendaction_15:
        {
            popNullTransition();
        }
        break;
        // State sendaction_16
        case sendaction_16:
        {
            popNullTransition();
        }
        break;
        
        default:
            break;
    }
    Start_subState = OMNonState;
    
}

IOxfReactive::TakeEventStatus Controller::Start_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 27 
            if(IS_COMPLETED(Start)==true)
                {
                    Start_exit();
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    res = eventConsumed;
                }
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Controller::ReadyTakeevSignal() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    //## transition 35 
    if(state != STOPPED)
        {
            Stop_entDef();
            res = eventConsumed;
        }
    else
        {
            //## transition 26 
            if(state0 == OPENING)
                {
                    //#[ transition 26 
                    set_state(CLOSING);
                    //#]
                    Start_entDef();
                    res = eventConsumed;
                }
            else
                {
                    //## transition 28 
                    if(state0 == CLOSING)
                        {
                            //#[ transition 28 
                            set_state(OPENING);
                            //#]
                            Start_entDef();
                            res = eventConsumed;
                        }
                }
        }
    return res;
}

IOxfReactive::TakeEventStatus Controller::Ready_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evSignal_Default_id))
        {
            res = ReadyTakeevSignal();
        }
    else if(IS_EVENT_TYPE_OF(evCollision_Default_id))
        {
            Stop_entDef();
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evStep_Default_id))
        {
            OMSETPARAMS(evStep);
            //## transition 40 
            if(state == OPENING ? (position < position_max) : (position > position_min))
                {
                    pushNullTransition();
                    rootState_subState = Step;
                    rootState_active = Step;
                    res = eventConsumed;
                }
            else
                {
                    Stop_entDef();
                    res = eventConsumed;
                }
        }
    
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Controller.cpp
*********************************************************************/
