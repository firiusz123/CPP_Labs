/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: user
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: env
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/env.h
*********************************************************************/

#ifndef env_H
#define env_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## actor env
class env {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedenv;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    env();
    
    //## auto_generated
    ~env();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedenv : virtual public AOMInstance {
    DECLARE_META(env, OMAnimatedenv)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/env.h
*********************************************************************/
