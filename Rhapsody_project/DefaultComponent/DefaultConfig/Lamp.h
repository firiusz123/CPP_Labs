/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Lamp
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Lamp.h
*********************************************************************/

#ifndef Lamp_H
#define Lamp_H

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
//## class Lamp
#include "Module.h"
//## link itsController
class Controller;

//## package Default

//## class Lamp
class Lamp : public OMReactive, public Module {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Lamp(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Lamp();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _clearItsController();
    
    ////    Framework    ////
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Inactive:
    //## statechart_method
    inline bool Inactive_IN() const;
    
    // Blink:
    //## statechart_method
    inline bool Blink_IN() const;
    
    // Active:
    //## statechart_method
    inline bool Active_IN() const;

protected :

//#[ ignore
    enum Lamp_Enum {
        OMNonState = 0,
        Inactive = 1,
        Blink = 2,
        Active = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

inline bool Lamp::rootState_IN() const {
    return true;
}

inline bool Lamp::Inactive_IN() const {
    return rootState_subState == Inactive;
}

inline bool Lamp::Blink_IN() const {
    return rootState_subState == Blink;
}

inline bool Lamp::Active_IN() const {
    return rootState_subState == Active;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Lamp.h
*********************************************************************/
