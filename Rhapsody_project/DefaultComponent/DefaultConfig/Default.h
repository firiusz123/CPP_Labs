/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <oxf/event.h>
//## classInstance itsController
class Controller;

//## classInstance itsDetector
class Detector;

//## auto_generated
class Display;

//## auto_generated
class Drive;

//## auto_generated
class Keyboard;

//## auto_generated
class Lamp;

//## auto_generated
class Module;

//## auto_generated
class reciever;

//#[ ignore
#define evCollision_Default_id 18601

#define evCheckCollision_Default_id 18602

#define evError_Default_id 18603

#define evFAIL_Default_id 18604

#define evStep_Default_id 18605

#define evStart_Default_id 18606

#define evSignal_Default_id 18607

#define evActivate_Default_id 18608

#define evStop_Default_id 18609

#define evSuccess_Default_id 18610

#define evRegulate_Default_id 18611

#define evFirmware_Default_id 18612

#define evTest_Default_id 18613

#define evOK_Default_id 18614
//#]

//## package Default


//## type states
enum states {
    STOPPED = 0,
    OPENING = 1,
    CLOSING = -1
};

//## classInstance itsController
extern Controller itsController;

//## classInstance itsController_1
extern Controller itsController_1;

//## classInstance itsController_2
extern Controller itsController_2;

//## classInstance itsDetector
extern Detector itsDetector;

//## auto_generated
void Default_initRelations();

//## auto_generated
bool Default_startBehavior();

//#[ ignore
class Default_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Default_OMInitializer();
    
    //## auto_generated
    ~Default_OMInitializer();
};
//#]

//## event evCollision()
class evCollision : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evCollision();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evCheckCollision()
class evCheckCollision : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evCheckCollision();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evError()
class evError : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evError();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evFAIL()
class evFAIL : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evFAIL();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evStep(float)
class evStep : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evStep(float p_argument_0);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    float argument_0;		//## auto_generated
};

//## event evStart(states)
class evStart : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evStart(states p_state);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    states state;		//## auto_generated
};

//## event evSignal()
class evSignal : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evSignal();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evActivate()
class evActivate : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evActivate();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evStop()
class evStop : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evStop();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evSuccess()
class evSuccess : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evSuccess();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evRegulate()
class evRegulate : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evRegulate();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evFirmware()
class evFirmware : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evFirmware();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evTest()
class evTest : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evTest();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evOK()
class evOK : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evOK();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Default.h
*********************************************************************/
