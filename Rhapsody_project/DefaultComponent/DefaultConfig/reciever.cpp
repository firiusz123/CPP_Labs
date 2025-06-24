/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: user
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: reciever
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/reciever.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "reciever.h"
//#[ ignore
#define Default_reciever_reciever_SERIALIZE OM_NO_OP

#define Default_reciever_validate_signal_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class reciever
reciever::reciever(IOxfActive* theActiveContext) : signal_ok(false) {
    NOTIFY_REACTIVE_CONSTRUCTOR(reciever, reciever(), 0, Default_reciever_reciever_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsController.setShouldDelete(false);
        }
    }
    initRelations();
    initStatechart();
}

reciever::~reciever() {
    NOTIFY_DESTRUCTOR(~reciever, false);
}

void reciever::validate_signal() {
    NOTIFY_OPERATION(validate_signal, validate_signal(), 0, Default_reciever_validate_signal_SERIALIZE);
    //#[ operation validate_signal()
    //#]
}

bool reciever::getSignal_ok() const {
    return signal_ok;
}

void reciever::setSignal_ok(bool p_signal_ok) {
    signal_ok = p_signal_ok;
}

Controller* reciever::getItsController() const {
    return (Controller*) &itsController;
}

bool reciever::startBehavior() {
    bool done = true;
    done &= itsController.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void reciever::initRelations() {
    itsController._setItsReciever_1(this);
}

void reciever::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void reciever::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsController.setActiveContext(theActiveContext, false);
    }
}

void reciever::destroy() {
    itsController.destroy();
    OMReactive::destroy();
}

void reciever::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Inactive");
        rootState_subState = Inactive;
        rootState_active = Inactive;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus reciever::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Inactive
        case Inactive:
        {
            if(IS_EVENT_TYPE_OF(evActivate_Default_id))
                {
                    //## transition 1 
                    if(params->active)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            NOTIFY_STATE_EXITED("ROOT.Inactive");
                            NOTIFY_STATE_ENTERED("ROOT.Active");
                            rootState_subState = Active;
                            rootState_active = Active;
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State Active
        case Active:
        {
            if(IS_EVENT_TYPE_OF(evActivate_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Active");
                    NOTIFY_STATE_ENTERED("ROOT.Inactive");
                    rootState_subState = Inactive;
                    rootState_active = Inactive;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evSignal_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.Active");
                    NOTIFY_STATE_ENTERED("ROOT.validate");
                    pushNullTransition();
                    rootState_subState = validate;
                    rootState_active = validate;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State validate
        case validate:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 5 
                    if(signal_ok)
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            NOTIFY_TRANSITION_STARTED("5");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.validate");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_3");
                            pushNullTransition();
                            rootState_subState = sendaction_3;
                            rootState_active = sendaction_3;
                            //#[ state sendaction_3.(Entry) 
                            itsController.GEN(evSignal);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("5");
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            NOTIFY_TRANSITION_STARTED("4");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.validate");
                            NOTIFY_STATE_ENTERED("ROOT.Active");
                            rootState_subState = Active;
                            rootState_active = Active;
                            NOTIFY_TRANSITION_TERMINATED("4");
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_3
        case sendaction_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_3");
                    NOTIFY_STATE_ENTERED("ROOT.Active");
                    rootState_subState = Active;
                    rootState_active = Active;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedreciever::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("signal_ok", x2String(myReal->signal_ok));
    OMAnimatedModule::serializeAttributes(aomsAttributes);
}

void OMAnimatedreciever::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsController);
    OMAnimatedModule::serializeRelations(aomsRelations);
}

void OMAnimatedreciever::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case reciever::Inactive:
        {
            Inactive_serializeStates(aomsState);
        }
        break;
        case reciever::Active:
        {
            Active_serializeStates(aomsState);
        }
        break;
        case reciever::validate:
        {
            validate_serializeStates(aomsState);
        }
        break;
        case reciever::sendaction_3:
        {
            sendaction_3_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedreciever::validate_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.validate");
}

void OMAnimatedreciever::sendaction_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_3");
}

void OMAnimatedreciever::Inactive_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Inactive");
}

void OMAnimatedreciever::Active_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(reciever, Default, false, Module, OMAnimatedModule, OMAnimatedreciever)

OMINIT_SUPERCLASS(Module, OMAnimatedModule)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/reciever.cpp
*********************************************************************/
