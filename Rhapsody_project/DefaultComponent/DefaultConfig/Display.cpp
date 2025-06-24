/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Display
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Display.cpp
*********************************************************************/

//## auto_generated
#include "Display.h"
//## auto_generated
#include <oxf/omthread.h>
//## package Default

//## class Display
Display::Display(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    {
        {
            itsController.setShouldDelete(false);
        }
    }
    initRelations();
}

Display::~Display() {
}

Controller* Display::getItsController() const {
    return (Controller*) &itsController;
}

bool Display::startBehavior() {
    bool done = true;
    done &= itsController.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Display::initRelations() {
    itsController._setItsDisplay_1(this);
}

void Display::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsController.setActiveContext(theActiveContext, false);
    }
}

void Display::destroy() {
    itsController.destroy();
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Display.cpp
*********************************************************************/
