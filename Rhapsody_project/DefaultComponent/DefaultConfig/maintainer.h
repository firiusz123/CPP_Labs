/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: user
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: maintainer
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/maintainer.h
*********************************************************************/

#ifndef maintainer_H
#define maintainer_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## actor maintainer
#include "user.h"
//## package Default

//## actor maintainer
class maintainer : public user {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedmaintainer;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    maintainer();
    
    //## auto_generated
    ~maintainer();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedmaintainer : public OMAnimateduser {
    DECLARE_META(maintainer, OMAnimatedmaintainer)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/maintainer.h
*********************************************************************/
