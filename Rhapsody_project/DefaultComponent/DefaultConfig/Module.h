/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Module
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Module.h
*********************************************************************/

#ifndef Module_H
#define Module_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Module
class Module {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Module();
    
    //## auto_generated
    ~Module();
    
    ////    Operations    ////
    
    //## operation get_active()
    bool get_active();
    
    //## operation is_ok()
    bool is_ok();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getId() const;
    
    //## auto_generated
    void setId(int p_id);
    
    //## auto_generated
    bool getIs_active() const;
    
    //## auto_generated
    void setIs_active(bool p_is_active);
    
    //## auto_generated
    std::string getName() const;
    
    //## auto_generated
    void setName(std::string p_name);
    
    ////    Attributes    ////

protected :

    int id;		//## attribute id
    
    bool is_active;		//## attribute is_active
    
    std::string name;		//## attribute name
};

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Module.h
*********************************************************************/
