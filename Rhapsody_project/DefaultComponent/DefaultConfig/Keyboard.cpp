/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Keyboard
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Keyboard.cpp
*********************************************************************/

//## auto_generated
#include "Keyboard.h"
//## auto_generated
#include <oxf/omthread.h>
//## package Default

//## class Keyboard
Keyboard::Keyboard(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    {
        {
            itsController.setShouldDelete(false);
        }
    }
    initRelations();
}

Keyboard::~Keyboard() {
}

Controller* Keyboard::getItsController() const {
    return (Controller*) &itsController;
}

bool Keyboard::startBehavior() {
    bool done = true;
    done &= itsController.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Keyboard::initRelations() {
    itsController._setItsKeyboard_1(this);
}

void Keyboard::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsController.setActiveContext(theActiveContext, false);
    }
}

void Keyboard::destroy() {
    itsController.destroy();
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Keyboard.cpp
*********************************************************************/
