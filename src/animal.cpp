#include "animal.h"
#include <iostream>



    int Animal::pet_count = 0;
    Animal::Animal(const std::string& name, int health)
        : name(name), health(health) 
    {
        ++pet_count;
        if(health < 0){throw std::invalid_argument("you cannot have negative hp"); }
    }

    void Animal::display(Animal* a)  {
        std::cout << "Name: " << a->name << ", Health: " << a->health << std::endl;
    }
    
    void Animal::SetHealth(int value)
    {
        health=+ value;

    }
    void Animal::makeSound() const {
    std::cout << name << " makes an indistinct animal sound." << std::endl;
}

    
    void Animal::SetALive(int value)
    {
        if( (value != 0) && (value != 1) )
        {
            throw std::invalid_argument("alive must be 0 or 1");
        }
        else{ alive = value ;}
    }

    Animal::~Animal() {std::cout << "the  animal has passed away \n";}
    

 // namespace NormalMode

