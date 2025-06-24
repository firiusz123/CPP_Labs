/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: user
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Keyboard
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Keyboard.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Keyboard.h"
//#[ ignore
#define Default_Keyboard_Keyboard_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Keyboard
Keyboard::Keyboard(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Keyboard, Keyboard(), 0, Default_Keyboard_Keyboard_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsController.setShouldDelete(false);
        }
    }
    initRelations();
}

Keyboard::~Keyboard() {
    NOTIFY_DESTRUCTOR(~Keyboard, false);
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

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedKeyboard::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedModule::serializeAttributes(aomsAttributes);
}

void OMAnimatedKeyboard::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsController);
    OMAnimatedModule::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_REACTIVE_META_S_SIMPLE_P(Keyboard, Default, false, Module, OMAnimatedModule, OMAnimatedKeyboard)

OMINIT_SUPERCLASS(Module, OMAnimatedModule)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Keyboard.cpp
*********************************************************************/
