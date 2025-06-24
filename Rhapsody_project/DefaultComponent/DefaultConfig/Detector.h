/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Detector
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Detector.h
*********************************************************************/

#ifndef Detector_H
#define Detector_H

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
//## class Detector
#include "Module.h"
//## package Default

//## class Detector
class Detector : public OMReactive, public Module {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Detector(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Detector();
    
    ////    Operations    ////
    
    //## operation reset_counter()
    void reset_counter();
    
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
    enum Detector_Enum {
        OMNonState = 0,
        sendaction_2 = 1,
        Inactive = 2,
        Active = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

inline bool Detector::rootState_IN() const {
    return true;
}

inline bool Detector::sendaction_2_IN() const {
    return rootState_subState == sendaction_2;
}

inline bool Detector::Inactive_IN() const {
    return rootState_subState == Inactive;
}

inline bool Detector::Active_IN() const {
    return rootState_subState == Active;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Detector.h
*********************************************************************/
