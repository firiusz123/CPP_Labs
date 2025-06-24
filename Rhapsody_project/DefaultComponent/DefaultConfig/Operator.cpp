/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: user
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Operator
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Operator.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Operator.h"
//#[ ignore
#define Default_Operator_Operator_SERIALIZE OM_NO_OP
//#]

//## package Default

//## actor Operator
Operator::Operator() {
    NOTIFY_CONSTRUCTOR(Operator, Operator(), 0, Default_Operator_Operator_SERIALIZE);
}

Operator::~Operator() {
    NOTIFY_DESTRUCTOR(~Operator, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedOperator::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimateduser::serializeAttributes(aomsAttributes);
}

void OMAnimatedOperator::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimateduser::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Operator, Default, false, user, OMAnimateduser, OMAnimatedOperator)

OMINIT_SUPERCLASS(user, OMAnimateduser)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Operator.cpp
*********************************************************************/
