/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: reciever
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/reciever.cpp
*********************************************************************/

//## auto_generated
#include "reciever.h"
//## auto_generated
#include <oxf/omthread.h>
//## package Default

//## class reciever
reciever::reciever(IOxfActive* theActiveContext) : signal_ok(false) {
    setActiveContext(theActiveContext, false);
    {
        {
            itsController.setShouldDelete(false);
        }
    }
    initRelations();
    initStatechart();
}

reciever::~reciever() {
}

void reciever::validate_signal() {
    //#[ operation validate_signal()
    //#]
}

bool reciever::getSignal_ok() const {
    return signal_ok;
}

void reciever::setSignal_ok(bool p_signal_ok) {
    signal_ok = p_signal_ok;
}

Controller* reciever::getItsController() const {
    return (Controller*) &itsController;
}

bool reciever::startBehavior() {
    bool done = true;
    done &= itsController.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void reciever::initRelations() {
    itsController._setItsReciever_1(this);
}

void reciever::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void reciever::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsController.setActiveContext(theActiveContext, false);
    }
}

void reciever::destroy() {
    itsController.destroy();
    OMReactive::destroy();
}

void reciever::rootState_entDef() {
    {
        rootState_subState = Inactive;
        rootState_active = Inactive;
    }
}

IOxfReactive::TakeEventStatus reciever::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Inactive
        case Inactive:
        {
            if(IS_EVENT_TYPE_OF(evActivate_Default_id))
                {
                    //## transition 1 
                    if(params->active)
                        {
                            rootState_subState = Active;
                            rootState_active = Active;
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State Active
        case Active:
        {
            if(IS_EVENT_TYPE_OF(evActivate_Default_id))
                {
                    rootState_subState = Inactive;
                    rootState_active = Inactive;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evSignal_Default_id))
                {
                    pushNullTransition();
                    rootState_subState = validate;
                    rootState_active = validate;
                    res = eventConsumed;
                }
            
        }
        break;
        // State validate
        case validate:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 5 
                    if(signal_ok)
                        {
                            popNullTransition();
                            pushNullTransition();
                            rootState_subState = sendaction_3;
                            rootState_active = sendaction_3;
                            //#[ state sendaction_3.(Entry) 
                            itsController.GEN(evSignal);
                            //#]
                            res = eventConsumed;
                        }
                    else
                        {
                            popNullTransition();
                            rootState_subState = Active;
                            rootState_active = Active;
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_3
        case sendaction_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = Active;
                    rootState_active = Active;
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/reciever.cpp
*********************************************************************/
