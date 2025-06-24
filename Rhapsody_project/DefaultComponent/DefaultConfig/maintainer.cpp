/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: user
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: maintainer
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/maintainer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "maintainer.h"
//#[ ignore
#define Default_maintainer_maintainer_SERIALIZE OM_NO_OP
//#]

//## package Default

//## actor maintainer
maintainer::maintainer() {
    NOTIFY_CONSTRUCTOR(maintainer, maintainer(), 0, Default_maintainer_maintainer_SERIALIZE);
}

maintainer::~maintainer() {
    NOTIFY_DESTRUCTOR(~maintainer, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedmaintainer::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimateduser::serializeAttributes(aomsAttributes);
}

void OMAnimatedmaintainer::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimateduser::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(maintainer, Default, false, user, OMAnimateduser, OMAnimatedmaintainer)

OMINIT_SUPERCLASS(user, OMAnimateduser)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/maintainer.cpp
*********************************************************************/
