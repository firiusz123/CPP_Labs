#include "character.h"
#include "observer.h"
#include <iostream>



    //observer 
    
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

    // OBSERVERS
    void Character::addObserver(Observer* observer) 
    {
        observers.push_back(observer);
    }

     void Character::removeObserver(Observer* observer) 
    {
        observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());    
    }

    void Character::notifyObserver()
    {
        for (Observer* obs : observers)
        {
            obs->update();
        }
    }


    Character::~Character() {}
    

 // namespace NormalMode

