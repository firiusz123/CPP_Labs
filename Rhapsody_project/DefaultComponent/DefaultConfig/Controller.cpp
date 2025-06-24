/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: user
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Controller.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_Controller_Controller_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Controller
Controller::Controller(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Controller, Controller(), 0, Default_Controller_Controller_SERIALIZE);
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
    NOTIFY_DESTRUCTOR(~Controller, true);
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
            NOTIFY_RELATION_CLEARED("itsDetector_1");
            itsDetector_1 = NULL;
        }
    if(itsDisplay_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDisplay_1");
            itsDisplay_1 = NULL;
        }
    if(itsDrive_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDrive_1");
            itsDrive_1 = NULL;
        }
    if(itsKeyboard_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsKeyboard_1");
            itsKeyboard_1 = NULL;
        }
    if(itsReciever_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsReciever_1");
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
    if(p_Detector != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDetector_1", p_Detector, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDetector_1");
        }
}

void Controller::_setItsDetector_1(Detector* p_Detector) {
    __setItsDetector_1(p_Detector);
}

void Controller::_clearItsDetector_1() {
    NOTIFY_RELATION_CLEARED("itsDetector_1");
    itsDetector_1 = NULL;
}

void Controller::__setItsDisplay_1(Display* p_Display) {
    itsDisplay_1 = p_Display;
    if(p_Display != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDisplay_1", p_Display, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDisplay_1");
        }
}

void Controller::_setItsDisplay_1(Display* p_Display) {
    __setItsDisplay_1(p_Display);
}

void Controller::_clearItsDisplay_1() {
    NOTIFY_RELATION_CLEARED("itsDisplay_1");
    itsDisplay_1 = NULL;
}

void Controller::__setItsDrive_1(Drive* p_Drive) {
    itsDrive_1 = p_Drive;
    if(p_Drive != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDrive_1", p_Drive, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDrive_1");
        }
}

void Controller::_setItsDrive_1(Drive* p_Drive) {
    __setItsDrive_1(p_Drive);
}

void Controller::_clearItsDrive_1() {
    NOTIFY_RELATION_CLEARED("itsDrive_1");
    itsDrive_1 = NULL;
}

void Controller::__setItsKeyboard_1(Keyboard* p_Keyboard) {
    itsKeyboard_1 = p_Keyboard;
    if(p_Keyboard != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsKeyboard_1", p_Keyboard, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsKeyboard_1");
        }
}

void Controller::_setItsKeyboard_1(Keyboard* p_Keyboard) {
    __setItsKeyboard_1(p_Keyboard);
}

void Controller::_clearItsKeyboard_1() {
    NOTIFY_RELATION_CLEARED("itsKeyboard_1");
    itsKeyboard_1 = NULL;
}

void Controller::__setItsReciever_1(reciever* p_reciever) {
    itsReciever_1 = p_reciever;
    if(p_reciever != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsReciever_1", p_reciever, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsReciever_1");
        }
}

void Controller::_setItsReciever_1(reciever* p_reciever) {
    __setItsReciever_1(p_reciever);
}

void Controller::_clearItsReciever_1() {
    NOTIFY_RELATION_CLEARED("itsReciever_1");
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
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Servicing");
        pushNullTransition();
        rootState_subState = Servicing;
        rootState_active = Servicing;
        NOTIFY_TRANSITION_TERMINATED("0");
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
                    NOTIFY_TRANSITION_STARTED("1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Servicing");
                    NOTIFY_STATE_ENTERED("ROOT.Auth");
                    rootState_subState = Auth;
                    rootState_active = Auth;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Auth
        case Auth:
        {
            if(IS_EVENT_TYPE_OF(evSuccess_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.Auth");
                    NOTIFY_STATE_ENTERED("ROOT.Operation");
                    rootState_subState = Operation;
                    rootState_active = Operation;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evError_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Auth");
                    NOTIFY_STATE_ENTERED("ROOT.Error");
                    rootState_subState = Error;
                    rootState_active = Error;
                    rootState_timeout = scheduleTimeout(2000, "ROOT.Error");
                    NOTIFY_TRANSITION_TERMINATED("2");
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
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Error");
                            NOTIFY_STATE_ENTERED("ROOT.Auth");
                            rootState_subState = Auth;
                            rootState_active = Auth;
                            NOTIFY_TRANSITION_TERMINATED("3");
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
                    NOTIFY_TRANSITION_STARTED("7");
                    NOTIFY_STATE_EXITED("ROOT.Operation");
                    NOTIFY_STATE_ENTERED("ROOT.Testing");
                    rootState_subState = Testing;
                    rootState_active = Testing;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evRegulate_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.Operation");
                    NOTIFY_STATE_ENTERED("ROOT.Regulations");
                    pushNullTransition();
                    rootState_subState = Regulations;
                    rootState_active = Regulations;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evFirmware_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.Operation");
                    NOTIFY_STATE_ENTERED("ROOT.Firmware");
                    pushNullTransition();
                    rootState_subState = Firmware;
                    rootState_active = Firmware;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Regulations
        case Regulations:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Regulations");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_8");
                    rootState_subState = terminationstate_8;
                    rootState_active = terminationstate_8;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Firmware
        case Firmware:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Firmware");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_8");
                    rootState_subState = terminationstate_8;
                    rootState_active = terminationstate_8;
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Testing
        case Testing:
        {
            if(IS_EVENT_TYPE_OF(evOK_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("17");
                    NOTIFY_STATE_EXITED("ROOT.Testing");
                    //#[ transition 17 
                    itsReciever.GEN(evActivate(true));
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("17");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evFAIL_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_STATE_EXITED("ROOT.Testing");
                    //#[ transition 8 
                    itsReciever.GEN(evActivate(false));
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Blockade");
                    pushNullTransition();
                    rootState_subState = Blockade;
                    rootState_active = Blockade;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Blockade
        case Blockade:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Blockade");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_8");
                    rootState_subState = terminationstate_8;
                    rootState_active = terminationstate_8;
                    NOTIFY_TRANSITION_TERMINATED("11");
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
                    NOTIFY_TRANSITION_STARTED("12");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_10");
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Step
        case Step:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("16");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Step");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_12");
                    pushNullTransition();
                    rootState_subState = sendaction_12;
                    rootState_active = sendaction_12;
                    //#[ state sendaction_12.(Entry) 
                    itsDetector.GEN(evCheckCollision);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("16");
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
                            NOTIFY_TRANSITION_STARTED("15");
                            NOTIFY_TRANSITION_STARTED("14");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.sendaction_12");
                            NOTIFY_STATE_ENTERED("ROOT.Ready");
                            rootState_subState = Ready;
                            rootState_active = Ready;
                            NOTIFY_TRANSITION_TERMINATED("14");
                            NOTIFY_TRANSITION_TERMINATED("15");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("15");
                            NOTIFY_TRANSITION_STARTED("13");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.sendaction_12");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_10");
                            pushNullTransition();
                            rootState_subState = sendaction_10;
                            rootState_active = sendaction_10;
                            //#[ state sendaction_10.(Entry) 
                            itsLamp.GEN(evStep());
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("13");
                            NOTIFY_TRANSITION_TERMINATED("15");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_14
        case sendaction_14:
        {
            res = sendaction_14_handleEvent();
        }
        break;
        // State sendaction_15
        case sendaction_15:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("21");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Start.sendaction_15");
                    NOTIFY_STATE_ENTERED("ROOT.Start.sendaction_16");
                    pushNullTransition();
                    Start_subState = sendaction_16;
                    rootState_active = sendaction_16;
                    //#[ state Start.sendaction_16.(Entry) 
                    itsDrive.GEN(evStart());
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("21");
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
                    NOTIFY_TRANSITION_STARTED("23");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Start.sendaction_16");
                    NOTIFY_STATE_ENTERED("ROOT.Start.terminationstate_17");
                    Start_subState = terminationstate_17;
                    rootState_active = terminationstate_17;
                    NOTIFY_TRANSITION_TERMINATED("23");
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
            res = Stop_sendaction_14_handleEvent();
        }
        break;
        // State sendaction_15
        case Stop_sendaction_15:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("30");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_15");
                    NOTIFY_STATE_ENTERED("ROOT.Stop.sendaction_16");
                    pushNullTransition();
                    Stop_subState = Stop_sendaction_16;
                    rootState_active = Stop_sendaction_16;
                    //#[ state Stop.sendaction_16.(Entry) 
                    itsDrive.GEN(evStop);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("30");
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
                    NOTIFY_TRANSITION_STARTED("29");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_16");
                    NOTIFY_STATE_ENTERED("ROOT.Stop.terminationstate_17");
                    Stop_subState = Stop_terminationstate_17;
                    rootState_active = Stop_terminationstate_17;
                    NOTIFY_TRANSITION_TERMINATED("29");
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
    NOTIFY_STATE_ENTERED("ROOT.Stop");
    pushNullTransition();
    rootState_subState = Stop;
    NOTIFY_TRANSITION_STARTED("34");
    //#[ transition 34 
    set_state(STOPPED);
    //#]
    NOTIFY_STATE_ENTERED("ROOT.Stop.sendaction_14");
    pushNullTransition();
    Stop_subState = Stop_sendaction_14;
    rootState_active = Stop_sendaction_14;
    //#[ state Stop.sendaction_14.(Entry) 
    itsDetector.GEN(evStop);
    //#]
    NOTIFY_TRANSITION_TERMINATED("34");
}

void Controller::Stop_exit() {
    popNullTransition();
    switch (Stop_subState) {
        // State sendaction_14
        case Stop_sendaction_14:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_14");
        }
        break;
        // State sendaction_15
        case Stop_sendaction_15:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_15");
        }
        break;
        // State sendaction_16
        case Stop_sendaction_16:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_16");
        }
        break;
        // State terminationstate_17
        case Stop_terminationstate_17:
        {
            NOTIFY_STATE_EXITED("ROOT.Stop.terminationstate_17");
        }
        break;
        default:
            break;
    }
    Stop_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Stop");
}

IOxfReactive::TakeEventStatus Controller::Stop_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 37 
            if(IS_COMPLETED(Stop)==true)
                {
                    NOTIFY_TRANSITION_STARTED("37");
                    Stop_exit();
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("37");
                    res = eventConsumed;
                }
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Controller::Stop_sendaction_14_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 31 
            if(!state_indication)
                {
                    NOTIFY_TRANSITION_STARTED("33");
                    NOTIFY_TRANSITION_STARTED("31");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_14");
                    NOTIFY_STATE_ENTERED("ROOT.Stop.sendaction_16");
                    pushNullTransition();
                    Stop_subState = Stop_sendaction_16;
                    rootState_active = Stop_sendaction_16;
                    //#[ state Stop.sendaction_16.(Entry) 
                    itsDrive.GEN(evStop);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("31");
                    NOTIFY_TRANSITION_TERMINATED("33");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("33");
                    NOTIFY_TRANSITION_STARTED("32");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_14");
                    NOTIFY_STATE_ENTERED("ROOT.Stop.sendaction_15");
                    pushNullTransition();
                    Stop_subState = Stop_sendaction_15;
                    rootState_active = Stop_sendaction_15;
                    //#[ state Stop.sendaction_15.(Entry) 
                    itsLamp.GEN(evStop);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("32");
                    NOTIFY_TRANSITION_TERMINATED("33");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = Stop_handleEvent();
        }
    return res;
}

void Controller::Start_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Start");
    pushNullTransition();
    rootState_subState = Start;
    NOTIFY_TRANSITION_STARTED("18");
    NOTIFY_STATE_ENTERED("ROOT.Start.sendaction_14");
    pushNullTransition();
    Start_subState = sendaction_14;
    rootState_active = sendaction_14;
    //#[ state Start.sendaction_14.(Entry) 
    itsDetector.GEN(evStart());
    //#]
    NOTIFY_TRANSITION_TERMINATED("18");
}

void Controller::Start_exit() {
    popNullTransition();
    switch (Start_subState) {
        // State sendaction_14
        case sendaction_14:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Start.sendaction_14");
        }
        break;
        // State sendaction_15
        case sendaction_15:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Start.sendaction_15");
        }
        break;
        // State sendaction_16
        case sendaction_16:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Start.sendaction_16");
        }
        break;
        // State terminationstate_17
        case terminationstate_17:
        {
            NOTIFY_STATE_EXITED("ROOT.Start.terminationstate_17");
        }
        break;
        default:
            break;
    }
    Start_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Start");
}

IOxfReactive::TakeEventStatus Controller::Start_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 27 
            if(IS_COMPLETED(Start)==true)
                {
                    NOTIFY_TRANSITION_STARTED("27");
                    Start_exit();
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("27");
                    res = eventConsumed;
                }
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Controller::sendaction_14_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 22 
            if(!state_indication)
                {
                    NOTIFY_TRANSITION_STARTED("19");
                    NOTIFY_TRANSITION_STARTED("22");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Start.sendaction_14");
                    NOTIFY_STATE_ENTERED("ROOT.Start.sendaction_16");
                    pushNullTransition();
                    Start_subState = sendaction_16;
                    rootState_active = sendaction_16;
                    //#[ state Start.sendaction_16.(Entry) 
                    itsDrive.GEN(evStart());
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("22");
                    NOTIFY_TRANSITION_TERMINATED("19");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("19");
                    NOTIFY_TRANSITION_STARTED("20");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Start.sendaction_14");
                    NOTIFY_STATE_ENTERED("ROOT.Start.sendaction_15");
                    pushNullTransition();
                    Start_subState = sendaction_15;
                    rootState_active = sendaction_15;
                    //#[ state Start.sendaction_15.(Entry) 
                    itsLamp.GEN(evStart());
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("20");
                    NOTIFY_TRANSITION_TERMINATED("19");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = Start_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Controller::ReadyTakeevSignal() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    //## transition 35 
    if(state != STOPPED)
        {
            NOTIFY_TRANSITION_STARTED("24");
            NOTIFY_TRANSITION_STARTED("35");
            NOTIFY_STATE_EXITED("ROOT.Ready");
            Stop_entDef();
            NOTIFY_TRANSITION_TERMINATED("35");
            NOTIFY_TRANSITION_TERMINATED("24");
            res = eventConsumed;
        }
    else
        {
            //## transition 26 
            if(state0 == OPENING)
                {
                    NOTIFY_TRANSITION_STARTED("24");
                    NOTIFY_TRANSITION_STARTED("25");
                    NOTIFY_TRANSITION_STARTED("26");
                    NOTIFY_STATE_EXITED("ROOT.Ready");
                    //#[ transition 26 
                    set_state(CLOSING);
                    //#]
                    Start_entDef();
                    NOTIFY_TRANSITION_TERMINATED("26");
                    NOTIFY_TRANSITION_TERMINATED("25");
                    NOTIFY_TRANSITION_TERMINATED("24");
                    res = eventConsumed;
                }
            else
                {
                    //## transition 28 
                    if(state0 == CLOSING)
                        {
                            NOTIFY_TRANSITION_STARTED("24");
                            NOTIFY_TRANSITION_STARTED("25");
                            NOTIFY_TRANSITION_STARTED("28");
                            NOTIFY_STATE_EXITED("ROOT.Ready");
                            //#[ transition 28 
                            set_state(OPENING);
                            //#]
                            Start_entDef();
                            NOTIFY_TRANSITION_TERMINATED("28");
                            NOTIFY_TRANSITION_TERMINATED("25");
                            NOTIFY_TRANSITION_TERMINATED("24");
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
            NOTIFY_TRANSITION_STARTED("36");
            NOTIFY_STATE_EXITED("ROOT.Ready");
            Stop_entDef();
            NOTIFY_TRANSITION_TERMINATED("36");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evStep_Default_id))
        {
            OMSETPARAMS(evStep);
            //## transition 40 
            if(state == OPENING ? (position < position_max) : (position > position_min))
                {
                    NOTIFY_TRANSITION_STARTED("38");
                    NOTIFY_TRANSITION_STARTED("40");
                    NOTIFY_STATE_EXITED("ROOT.Ready");
                    NOTIFY_STATE_ENTERED("ROOT.Step");
                    pushNullTransition();
                    rootState_subState = Step;
                    rootState_active = Step;
                    NOTIFY_TRANSITION_TERMINATED("40");
                    NOTIFY_TRANSITION_TERMINATED("38");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("38");
                    NOTIFY_TRANSITION_STARTED("39");
                    NOTIFY_STATE_EXITED("ROOT.Ready");
                    Stop_entDef();
                    NOTIFY_TRANSITION_TERMINATED("39");
                    NOTIFY_TRANSITION_TERMINATED("38");
                    res = eventConsumed;
                }
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedController::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("code", UNKNOWN2STRING(myReal->code));
    aomsAttributes->addAttribute("code_ok", x2String(myReal->code_ok));
    aomsAttributes->addAttribute("detector_ok", x2String(myReal->detector_ok));
    aomsAttributes->addAttribute("drive_ok", x2String(myReal->drive_ok));
    aomsAttributes->addAttribute("lamp_ok", x2String(myReal->lamp_ok));
    aomsAttributes->addAttribute("position", x2String(myReal->position));
    aomsAttributes->addAttribute("position_max", x2String(myReal->position_max));
    aomsAttributes->addAttribute("position_min", x2String(myReal->position_min));
    aomsAttributes->addAttribute("reciever_ok", x2String(myReal->reciever_ok));
}

void OMAnimatedController::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDetector", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDetector);
    aomsRelations->addRelation("itsDrive", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDrive);
    aomsRelations->addRelation("itsReciever", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsReciever);
    aomsRelations->addRelation("itsLamp", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLamp);
    aomsRelations->addRelation("itsKeyboard", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsKeyboard);
    aomsRelations->addRelation("itsDisplay", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDisplay);
    aomsRelations->addRelation("itsLamp_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLamp_1);
    aomsRelations->addRelation("itsDisplay_1", false, true);
    if(myReal->itsDisplay_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDisplay_1);
        }
    aomsRelations->addRelation("itsDrive_1", false, true);
    if(myReal->itsDrive_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDrive_1);
        }
    aomsRelations->addRelation("itsKeyboard_1", false, true);
    if(myReal->itsKeyboard_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsKeyboard_1);
        }
    aomsRelations->addRelation("itsDetector_1", false, true);
    if(myReal->itsDetector_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDetector_1);
        }
    aomsRelations->addRelation("itsReciever_1", false, true);
    if(myReal->itsReciever_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsReciever_1);
        }
}

void OMAnimatedController::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Controller::Servicing:
        {
            Servicing_serializeStates(aomsState);
        }
        break;
        case Controller::Auth:
        {
            Auth_serializeStates(aomsState);
        }
        break;
        case Controller::Error:
        {
            Error_serializeStates(aomsState);
        }
        break;
        case Controller::Operation:
        {
            Operation_serializeStates(aomsState);
        }
        break;
        case Controller::Regulations:
        {
            Regulations_serializeStates(aomsState);
        }
        break;
        case Controller::Firmware:
        {
            Firmware_serializeStates(aomsState);
        }
        break;
        case Controller::Testing:
        {
            Testing_serializeStates(aomsState);
        }
        break;
        case Controller::Blockade:
        {
            Blockade_serializeStates(aomsState);
        }
        break;
        case Controller::terminationstate_8:
        {
            terminationstate_8_serializeStates(aomsState);
        }
        break;
        case Controller::Ready:
        {
            Ready_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_10:
        {
            sendaction_10_serializeStates(aomsState);
        }
        break;
        case Controller::Step:
        {
            Step_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_12:
        {
            sendaction_12_serializeStates(aomsState);
        }
        break;
        case Controller::Start:
        {
            Start_serializeStates(aomsState);
        }
        break;
        case Controller::Stop:
        {
            Stop_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedController::Testing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Testing");
}

void OMAnimatedController::terminationstate_8_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_8");
}

void OMAnimatedController::Stop_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Stop");
    switch (myReal->Stop_subState) {
        case Controller::Stop_sendaction_14:
        {
            Stop_sendaction_14_serializeStates(aomsState);
        }
        break;
        case Controller::Stop_sendaction_15:
        {
            Stop_sendaction_15_serializeStates(aomsState);
        }
        break;
        case Controller::Stop_sendaction_16:
        {
            Stop_sendaction_16_serializeStates(aomsState);
        }
        break;
        case Controller::Stop_terminationstate_17:
        {
            Stop_terminationstate_17_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedController::Stop_terminationstate_17_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Stop.terminationstate_17");
}

void OMAnimatedController::Stop_sendaction_16_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Stop.sendaction_16");
}

void OMAnimatedController::Stop_sendaction_15_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Stop.sendaction_15");
}

void OMAnimatedController::Stop_sendaction_14_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Stop.sendaction_14");
}

void OMAnimatedController::Step_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Step");
}

void OMAnimatedController::Start_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Start");
    switch (myReal->Start_subState) {
        case Controller::sendaction_14:
        {
            sendaction_14_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_15:
        {
            sendaction_15_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_16:
        {
            sendaction_16_serializeStates(aomsState);
        }
        break;
        case Controller::terminationstate_17:
        {
            terminationstate_17_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedController::terminationstate_17_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Start.terminationstate_17");
}

void OMAnimatedController::sendaction_16_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Start.sendaction_16");
}

void OMAnimatedController::sendaction_15_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Start.sendaction_15");
}

void OMAnimatedController::sendaction_14_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Start.sendaction_14");
}

void OMAnimatedController::Servicing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Servicing");
}

void OMAnimatedController::sendaction_12_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_12");
}

void OMAnimatedController::sendaction_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_10");
}

void OMAnimatedController::Regulations_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Regulations");
}

void OMAnimatedController::Ready_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Ready");
}

void OMAnimatedController::Operation_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Operation");
}

void OMAnimatedController::Firmware_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Firmware");
}

void OMAnimatedController::Error_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Error");
}

void OMAnimatedController::Blockade_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Blockade");
}

void OMAnimatedController::Auth_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Auth");
}
//#]

IMPLEMENT_REACTIVE_META_P(Controller, Default, Default, false, OMAnimatedController)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Controller.cpp
*********************************************************************/
