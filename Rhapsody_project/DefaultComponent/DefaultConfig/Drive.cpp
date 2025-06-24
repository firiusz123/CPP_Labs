/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Drive
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Drive.cpp
*********************************************************************/

//## auto_generated
#include "Drive.h"
//## auto_generated
#include <oxf/omthread.h>
//## package Default

//## class Drive
Drive::Drive(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    {
        {
            itsController.setShouldDelete(false);
        }
    }
    initRelations();
    initStatechart();
}

Drive::~Drive() {
    cancelTimeouts();
}

Controller* Drive::getItsController() const {
    return (Controller*) &itsController;
}

bool Drive::startBehavior() {
    bool done = true;
    done &= itsController.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Drive::initRelations() {
    itsController._setItsDrive_1(this);
}

void Drive::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Drive::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Drive::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Drive::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsController.setActiveContext(theActiveContext, false);
    }
}

void Drive::destroy() {
    itsController.destroy();
    OMReactive::destroy();
}

void Drive::rootState_entDef() {
    {
        rootState_subState = Inactive;
        rootState_active = Inactive;
    }
}

IOxfReactive::TakeEventStatus Drive::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Inactive
        case Inactive:
        {
            if(IS_EVENT_TYPE_OF(evStart_Default_id))
                {
                    OMSETPARAMS(evStart);
                    //#[ transition 1 
                    direction = params->state;
                    //#]
                    rootState_subState = Active;
                    rootState_active = Active;
                    rootState_timeout = scheduleTimeout(period, NULL);
                    res = eventConsumed;
                }
            
        }
        break;
        // State Active
        case Active:
        {
            if(IS_EVENT_TYPE_OF(evStop_Default_id))
                {
                    cancel(rootState_timeout);
                    rootState_subState = Inactive;
                    rootState_active = Inactive;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            cancel(rootState_timeout);
                            //#[ transition 3 
                            std::cout <<"\nDrive:period="<<period<<",velocity="<<velocity<<",dir="<<direction;
                            //#]
                            pushNullTransition();
                            rootState_subState = sendaction_2;
                            rootState_active = sendaction_2;
                            //#[ state sendaction_2.(Entry) 
                            itsController.GEN(evStep());
                            //#]
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_2
        case sendaction_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = Active;
                    rootState_active = Active;
                    rootState_timeout = scheduleTimeout(period, NULL);
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
	File Path	: DefaultComponent/DefaultConfig/Drive.cpp
*********************************************************************/
