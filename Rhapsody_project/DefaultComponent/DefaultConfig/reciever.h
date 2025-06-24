/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: reciever
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/reciever.h
*********************************************************************/

#ifndef reciever_H
#define reciever_H

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
//## class reciever
#include "Module.h"
//## package Default

//## class reciever
class reciever : public OMReactive, public Module {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    reciever(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~reciever();
    
    ////    Operations    ////
    
    //## operation validate_signal()
    void validate_signal();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getSignal_ok() const;
    
    //## auto_generated
    void setSignal_ok(bool p_signal_ok);
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    bool signal_ok;		//## attribute signal_ok
    
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
    
    // validate:
    //## statechart_method
    inline bool validate_IN() const;
    
    // sendaction_3:
    //## statechart_method
    inline bool sendaction_3_IN() const;
    
    // Inactive:
    //## statechart_method
    inline bool Inactive_IN() const;
    
    // Active:
    //## statechart_method
    inline bool Active_IN() const;

protected :

//#[ ignore
    enum reciever_Enum {
        OMNonState = 0,
        validate = 1,
        sendaction_3 = 2,
        Inactive = 3,
        Active = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

inline bool reciever::rootState_IN() const {
    return true;
}

inline bool reciever::validate_IN() const {
    return rootState_subState == validate;
}

inline bool reciever::sendaction_3_IN() const {
    return rootState_subState == sendaction_3;
}

inline bool reciever::Inactive_IN() const {
    return rootState_subState == Inactive;
}

inline bool reciever::Active_IN() const {
    return rootState_subState == Active;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/reciever.h
*********************************************************************/
