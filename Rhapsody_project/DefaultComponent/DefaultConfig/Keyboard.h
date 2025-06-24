/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Keyboard
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Keyboard.h
*********************************************************************/

#ifndef Keyboard_H
#define Keyboard_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## link itsController
#include "Controller.h"
//## class Keyboard
#include "Module.h"
//## package Default

//## class Keyboard
class Keyboard : public OMReactive, public Module {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Keyboard(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Keyboard();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    Controller itsController;		//## link itsController
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Keyboard.h
*********************************************************************/
