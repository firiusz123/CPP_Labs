/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Detector
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Detector.cpp
*********************************************************************/

//## auto_generated
#include "Detector.h"
//## auto_generated
#include <oxf/omthread.h>
//## package Default

//## class Detector
Detector::Detector(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    {
        {
            itsController.setShouldDelete(false);
        }
    }
    initRelations();
    initStatechart();
}

Detector::~Detector() {
}

void Detector::reset_counter() {
    //#[ operation reset_counter()
    //#]
}

Controller* Detector::getItsController() const {
    return (Controller*) &itsController;
}

bool Detector::startBehavior() {
    bool done = true;
    done &= itsController.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Detector::initRelations() {
    itsController._setItsDetector_1(this);
}

void Detector::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Detector::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsController.setActiveContext(theActiveContext, false);
    }
}

void Detector::destroy() {
    itsController.destroy();
    OMReactive::destroy();
}

void Detector::rootState_entDef() {
    {
        rootState_subState = Inactive;
        rootState_active = Inactive;
    }
}

IOxfReactive::TakeEventStatus Detector::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Inactive
        case Inactive:
        {
            if(IS_EVENT_TYPE_OF(evStart_Default_id))
                {
                    OMSETPARAMS(evStart);
                    rootState_subState = Active;
                    rootState_active = Active;
                    res = eventConsumed;
                }
            
        }
        break;
        // State Active
        case Active:
        {
            if(IS_EVENT_TYPE_OF(evStop_Default_id))
                {
                    rootState_subState = Inactive;
                    rootState_active = Inactive;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evCollision_Default_id))
                {
                    //#[ transition 3 
                    pulses +=margin;
                    //#]
                    rootState_subState = Active;
                    rootState_active = Active;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evCheckCollision_Default_id))
                {
                    //## transition 4 
                    if(check_collision())
                        {
                            pushNullTransition();
                            rootState_subState = sendaction_2;
                            rootState_active = sendaction_2;
                            //#[ state sendaction_2.(Entry) 
                            itsController.GEN(evCollision);
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
                    //#[ transition 5 
                    reset_counters();
                    //#]
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
	File Path	: DefaultComponent/DefaultConfig/Detector.cpp
*********************************************************************/
