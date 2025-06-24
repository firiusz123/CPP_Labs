/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: user
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: env
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/env.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "env.h"
//#[ ignore
#define Default_env_env_SERIALIZE OM_NO_OP
//#]

//## package Default

//## actor env
env::env() {
    NOTIFY_CONSTRUCTOR(env, env(), 0, Default_env_env_SERIALIZE);
}

env::~env() {
    NOTIFY_DESTRUCTOR(~env, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedenv::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(env, Default, Default, false, OMAnimatedenv)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/env.cpp
*********************************************************************/
