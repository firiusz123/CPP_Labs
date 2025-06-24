/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Module
//!	Generated Date	: Tue, 24, Jun 2025  
	File Path	: DefaultComponent/DefaultConfig/Module.cpp
*********************************************************************/

//## auto_generated
#include "Module.h"
//## package Default

//## class Module
Module::Module() : is_active(false) {
}

Module::~Module() {
}

bool Module::get_active() {
    //#[ operation get_active()
    //#]
}

bool Module::is_ok() {
    //#[ operation is_ok()
    //#]
}

int Module::getId() const {
    return id;
}

void Module::setId(int p_id) {
    id = p_id;
}

bool Module::getIs_active() const {
    return is_active;
}

void Module::setIs_active(bool p_is_active) {
    is_active = p_is_active;
}

std::string Module::getName() const {
    return name;
}

void Module::setName(std::string p_name) {
    name = p_name;
}

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Module.cpp
*********************************************************************/
