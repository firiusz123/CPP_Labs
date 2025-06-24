/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Drive
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Drive.h
*********************************************************************/

#ifndef Drive_H
#define Drive_H

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
//## class Drive
#include "Module.h"
//## package Default

//## class Drive
class Drive : public OMReactive, public Module {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Drive(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Drive();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Relations and components    ////
    
    Controller itsController;		//## link itsController
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
    
    ////    Framework    ////
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // sendaction_2:
    //## statechart_method
    inline bool sendaction_2_IN() const;
    
    // Inactive:
    //## statechart_method
    inline bool Inactive_IN() const;
    
    // Active:
    //## statechart_method
    inline bool Active_IN() const;

protected :

//#[ ignore
    enum Drive_Enum {
        OMNonState = 0,
        sendaction_2 = 1,
        Inactive = 2,
        Active = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

inline bool Drive::rootState_IN() const {
    return true;
}

inline bool Drive::sendaction_2_IN() const {
    return rootState_subState == sendaction_2;
}

inline bool Drive::Inactive_IN() const {
    return rootState_subState == Inactive;
}

inline bool Drive::Active_IN() const {
    return rootState_subState == Active;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Drive.h
*********************************************************************/
