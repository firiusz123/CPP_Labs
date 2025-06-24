/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: user
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Operator
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Operator.h
*********************************************************************/

#ifndef Operator_H
#define Operator_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## actor Operator
#include "user.h"
//## package Default

//## actor Operator
class Operator : public user {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOperator;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Operator();
    
    //## auto_generated
    ~Operator();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedOperator : public OMAnimateduser {
    DECLARE_META(Operator, OMAnimatedOperator)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Operator.h
*********************************************************************/
