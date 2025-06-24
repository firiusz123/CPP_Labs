/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Lamp
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Lamp.cpp
*********************************************************************/

//## auto_generated
#include "Lamp.h"
//## link itsController
#include "Controller.h"
//## auto_generated
#include <oxf/omthread.h>
//## package Default

//## class Lamp
Lamp::Lamp(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsController = NULL;
    initStatechart();
}

Lamp::~Lamp() {
    cleanUpRelations();
}

Controller* Lamp::getItsController() const {
    return itsController;
}

void Lamp::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool Lamp::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Lamp::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Lamp::cleanUpRelations() {
    if(itsController != NULL)
        {
            itsController = NULL;
        }
}

void Lamp::__setItsController(Controller* p_Controller) {
    itsController = p_Controller;
}

void Lamp::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void Lamp::_clearItsController() {
    itsController = NULL;
}

void Lamp::rootState_entDef() {
    {
        rootState_subState = Inactive;
        rootState_active = Inactive;
    }
}

IOxfReactive::TakeEventStatus Lamp::rootState_processEvent() {
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
            else if(IS_EVENT_TYPE_OF(evStep_Default_id))
                {
                    OMSETPARAMS(evStep);
                    pushNullTransition();
                    rootState_subState = Blink;
                    rootState_active = Blink;
                    res = eventConsumed;
                }
            
        }
        break;
        // State Blink
        case Blink:
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
	File Path	: DefaultComponent/DefaultConfig/Lamp.cpp
*********************************************************************/
