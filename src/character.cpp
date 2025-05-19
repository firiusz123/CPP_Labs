#include "character.h"
#include <iostream>



    int Character::totalCount = 0;
    Character::Character(const std::string& name, int health)
        : name(name), health(health) 
    {
        ++totalCount;
        if(health < 0){throw std::invalid_argument("you cannot have negative hp"); }
    }

    void Character::display() const {
        std::cout << "Name: " << name << ", Health: " << health << std::endl;
    }

    void Character::SetHealth(int value)
    {
        health=+ value;

    }
    
    void Character::SetALive(int value)
    {
        if( (value != 0) && (value != 1) )
        {
            throw std::invalid_argument("alive must be 0 or 1");
        }
        else{ alive = value ;}
    }

    Character::~Character() {std::cout << "character destructor called"<<"\n";}
    

 // namespace NormalMode

