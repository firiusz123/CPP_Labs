/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: user
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Display
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Display.h
*********************************************************************/

#ifndef Display_H
#define Display_H

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
//## link itsController
#include "Controller.h"
//## class Display
#include "Module.h"
//## package Default

//## class Display
class Display : public OMReactive, public Module {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDisplay;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Display(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Display();
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDisplay : public OMAnimatedModule {
    DECLARE_META(Display, OMAnimatedDisplay)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Display.h
*********************************************************************/
