/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: user
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: user
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/user.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "user.h"
//#[ ignore
#define Default_user_user_SERIALIZE OM_NO_OP
//#]

//## package Default

//## actor user
user::user() {
    NOTIFY_CONSTRUCTOR(user, user(), 0, Default_user_user_SERIALIZE);
}

user::~user() {
    NOTIFY_DESTRUCTOR(~user, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimateduser::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(user, Default, Default, false, OMAnimateduser)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/user.cpp
*********************************************************************/
