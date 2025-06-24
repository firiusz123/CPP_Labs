/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: user
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Controller.h
*********************************************************************/

#ifndef Controller_H
#define Controller_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## classInstance itsDetector
#include "Detector.h"
//## classInstance itsDisplay
#include "Display.h"
//## classInstance itsDrive
#include "Drive.h"
//## classInstance itsKeyboard
#include "Keyboard.h"
//## classInstance itsLamp
#include "Lamp.h"
//## classInstance itsReciever
#include "reciever.h"
//## package Default

//## class Controller
class Controller : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedController;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Controller(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Controller();
    
    ////    Additional operations    ////
    
    //## auto_generated
    std::string getCode() const;
    
    //## auto_generated
    void setCode(std::string p_code);
    
    //## auto_generated
    bool getCode_ok() const;
    
    //## auto_generated
    void setCode_ok(bool p_code_ok);
    
    //## auto_generated
    bool getDetector_ok() const;
    
    //## auto_generated
    void setDetector_ok(bool p_detector_ok);
    
    //## auto_generated
    bool getDrive_ok() const;
    
    //## auto_generated
    void setDrive_ok(bool p_drive_ok);
    
    //## auto_generated
    bool getLamp_ok() const;
    
    //## auto_generated
    void setLamp_ok(bool p_lamp_ok);
    
    //## auto_generated
    float getPosition() const;
    
    //## auto_generated
    void setPosition(float p_position);
    
    //## auto_generated
    float getPosition_max() const;
    
    //## auto_generated
    void setPosition_max(float p_position_max);
    
    //## auto_generated
    float getPosition_min() const;
    
    //## auto_generated
    void setPosition_min(float p_position_min);
    
    //## auto_generated
    bool getReciever_ok() const;
    
    //## auto_generated
    void setReciever_ok(bool p_reciever_ok);
    
    //## auto_generated
    Detector* getItsDetector() const;
    
    //## auto_generated
    Detector* getItsDetector_1() const;
    
    //## auto_generated
    void setItsDetector_1(Detector* p_Detector);
    
    //## auto_generated
    Display* getItsDisplay() const;
    
    //## auto_generated
    Display* getItsDisplay_1() const;
    
    //## auto_generated
    void setItsDisplay_1(Display* p_Display);
    
    //## auto_generated
    Drive* getItsDrive() const;
    
    //## auto_generated
    Drive* getItsDrive_1() const;
    
    //## auto_generated
    void setItsDrive_1(Drive* p_Drive);
    
    //## auto_generated
    Keyboard* getItsKeyboard() const;
    
    //## auto_generated
    Keyboard* getItsKeyboard_1() const;
    
    //## auto_generated
    void setItsKeyboard_1(Keyboard* p_Keyboard);
    
    //## auto_generated
    Lamp* getItsLamp() const;
    
    //## auto_generated
    Lamp* getItsLamp_1() const;
    
    //## auto_generated
    reciever* getItsReciever() const;
    
    //## auto_generated
    reciever* getItsReciever_1() const;
    
    //## auto_generated
    void setItsReciever_1(reciever* p_reciever);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    std::string code;		//## attribute code
    
    bool code_ok;		//## attribute code_ok
    
    bool detector_ok;		//## attribute detector_ok
    
    bool drive_ok;		//## attribute drive_ok
    
    bool lamp_ok;		//## attribute lamp_ok
    
    float position;		//## attribute position
    
    float position_max;		//## attribute position_max
    
    float position_min;		//## attribute position_min
    
    bool reciever_ok;		//## attribute reciever_ok
    
    ////    Relations and components    ////
    
    Detector itsDetector;		//## classInstance itsDetector
    
    Detector* itsDetector_1;		//## link itsDetector_1
    
    Display itsDisplay;		//## classInstance itsDisplay
    
    Display* itsDisplay_1;		//## link itsDisplay_1
    
    Drive itsDrive;		//## classInstance itsDrive
    
    Drive* itsDrive_1;		//## link itsDrive_1
    
    Keyboard itsKeyboard;		//## classInstance itsKeyboard
    
    Keyboard* itsKeyboard_1;		//## link itsKeyboard_1
    
    Lamp itsLamp;		//## classInstance itsLamp
    
    Lamp itsLamp_1;		//## link itsLamp_1
    
    reciever itsReciever;		//## classInstance itsReciever
    
    reciever* itsReciever_1;		//## link itsReciever_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDetector_1(Detector* p_Detector);
    
    //## auto_generated
    void _setItsDetector_1(Detector* p_Detector);
    
    //## auto_generated
    void _clearItsDetector_1();
    
    //## auto_generated
    void __setItsDisplay_1(Display* p_Display);
    
    //## auto_generated
    void _setItsDisplay_1(Display* p_Display);
    
    //## auto_generated
    void _clearItsDisplay_1();
    
    //## auto_generated
    void __setItsDrive_1(Drive* p_Drive);
    
    //## auto_generated
    void _setItsDrive_1(Drive* p_Drive);
    
    //## auto_generated
    void _clearItsDrive_1();
    
    //## auto_generated
    void __setItsKeyboard_1(Keyboard* p_Keyboard);
    
    //## auto_generated
    void _setItsKeyboard_1(Keyboard* p_Keyboard);
    
    //## auto_generated
    void _clearItsKeyboard_1();
    
    //## auto_generated
    void __setItsReciever_1(reciever* p_reciever);
    
    //## auto_generated
    void _setItsReciever_1(reciever* p_reciever);
    
    //## auto_generated
    void _clearItsReciever_1();
    
    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    inline bool rootState_isCompleted();
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Testing:
    //## statechart_method
    inline bool Testing_IN() const;
    
    // terminationstate_8:
    //## statechart_method
    inline bool terminationstate_8_IN() const;
    
    // Stop:
    //## statechart_method
    inline bool Stop_IN() const;
    
    //## statechart_method
    inline bool Stop_isCompleted();
    
    //## statechart_method
    void Stop_entDef();
    
    //## statechart_method
    void Stop_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Stop_handleEvent();
    
    // Stop_terminationstate_17:
    //## statechart_method
    inline bool Stop_terminationstate_17_IN() const;
    
    // Stop_sendaction_16:
    //## statechart_method
    inline bool Stop_sendaction_16_IN() const;
    
    // Stop_sendaction_15:
    //## statechart_method
    inline bool Stop_sendaction_15_IN() const;
    
    // Stop_sendaction_14:
    //## statechart_method
    inline bool Stop_sendaction_14_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Stop_sendaction_14_handleEvent();
    
    // Step:
    //## statechart_method
    inline bool Step_IN() const;
    
    // Start:
    //## statechart_method
    inline bool Start_IN() const;
    
    //## statechart_method
    inline bool Start_isCompleted();
    
    //## statechart_method
    void Start_entDef();
    
    //## statechart_method
    void Start_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Start_handleEvent();
    
    // terminationstate_17:
    //## statechart_method
    inline bool terminationstate_17_IN() const;
    
    // sendaction_16:
    //## statechart_method
    inline bool sendaction_16_IN() const;
    
    // sendaction_15:
    //## statechart_method
    inline bool sendaction_15_IN() const;
    
    // sendaction_14:
    //## statechart_method
    inline bool sendaction_14_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus sendaction_14_handleEvent();
    
    // Servicing:
    //## statechart_method
    inline bool Servicing_IN() const;
    
    // sendaction_12:
    //## statechart_method
    inline bool sendaction_12_IN() const;
    
    // sendaction_10:
    //## statechart_method
    inline bool sendaction_10_IN() const;
    
    // Regulations:
    //## statechart_method
    inline bool Regulations_IN() const;
    
    // Ready:
    //## statechart_method
    inline bool Ready_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus ReadyTakeevSignal();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Ready_handleEvent();
    
    // Operation:
    //## statechart_method
    inline bool Operation_IN() const;
    
    // Firmware:
    //## statechart_method
    inline bool Firmware_IN() const;
    
    // Error:
    //## statechart_method
    inline bool Error_IN() const;
    
    // Blockade:
    //## statechart_method
    inline bool Blockade_IN() const;
    
    // Auth:
    //## statechart_method
    inline bool Auth_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Controller_Enum {
        OMNonState = 0,
        Testing = 1,
        terminationstate_8 = 2,
        Stop = 3,
        Stop_terminationstate_17 = 4,
        Stop_sendaction_16 = 5,
        Stop_sendaction_15 = 6,
        Stop_sendaction_14 = 7,
        Step = 8,
        Start = 9,
        terminationstate_17 = 10,
        sendaction_16 = 11,
        sendaction_15 = 12,
        sendaction_14 = 13,
        Servicing = 14,
        sendaction_12 = 15,
        sendaction_10 = 16,
        Regulations = 17,
        Ready = 18,
        Operation = 19,
        Firmware = 20,
        Error = 21,
        Blockade = 22,
        Auth = 23
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int Stop_subState;
    
    int Start_subState;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedController : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Controller, OMAnimatedController)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Testing_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_8_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Stop_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Stop_terminationstate_17_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Stop_sendaction_16_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Stop_sendaction_15_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Stop_sendaction_14_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Step_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Start_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_17_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_16_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_15_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_14_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Servicing_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_12_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_10_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Regulations_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Ready_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Operation_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Firmware_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Error_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Blockade_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Auth_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Controller::rootState_IN() const {
    return true;
}

inline bool Controller::rootState_isCompleted() {
    return ( IS_IN(terminationstate_8) );
}

inline bool Controller::Testing_IN() const {
    return rootState_subState == Testing;
}

inline bool Controller::terminationstate_8_IN() const {
    return rootState_subState == terminationstate_8;
}

inline bool Controller::Stop_IN() const {
    return rootState_subState == Stop;
}

inline bool Controller::Stop_isCompleted() {
    return ( IS_IN(Stop_terminationstate_17) );
}

inline bool Controller::Stop_terminationstate_17_IN() const {
    return Stop_subState == Stop_terminationstate_17;
}

inline bool Controller::Stop_sendaction_16_IN() const {
    return Stop_subState == Stop_sendaction_16;
}

inline bool Controller::Stop_sendaction_15_IN() const {
    return Stop_subState == Stop_sendaction_15;
}

inline bool Controller::Stop_sendaction_14_IN() const {
    return Stop_subState == Stop_sendaction_14;
}

inline bool Controller::Step_IN() const {
    return rootState_subState == Step;
}

inline bool Controller::Start_IN() const {
    return rootState_subState == Start;
}

inline bool Controller::Start_isCompleted() {
    return ( IS_IN(terminationstate_17) );
}

inline bool Controller::terminationstate_17_IN() const {
    return Start_subState == terminationstate_17;
}

inline bool Controller::sendaction_16_IN() const {
    return Start_subState == sendaction_16;
}

inline bool Controller::sendaction_15_IN() const {
    return Start_subState == sendaction_15;
}

inline bool Controller::sendaction_14_IN() const {
    return Start_subState == sendaction_14;
}

inline bool Controller::Servicing_IN() const {
    return rootState_subState == Servicing;
}

inline bool Controller::sendaction_12_IN() const {
    return rootState_subState == sendaction_12;
}

inline bool Controller::sendaction_10_IN() const {
    return rootState_subState == sendaction_10;
}

inline bool Controller::Regulations_IN() const {
    return rootState_subState == Regulations;
}

inline bool Controller::Ready_IN() const {
    return rootState_subState == Ready;
}

inline bool Controller::Operation_IN() const {
    return rootState_subState == Operation;
}

inline bool Controller::Firmware_IN() const {
    return rootState_subState == Firmware;
}

inline bool Controller::Error_IN() const {
    return rootState_subState == Error;
}

inline bool Controller::Blockade_IN() const {
    return rootState_subState == Blockade;
}

inline bool Controller::Auth_IN() const {
    return rootState_subState == Auth;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Controller.h
*********************************************************************/
