#include "dog.h"
#include <iostream>
#include <cstdlib>



    int Dog::pet_count = 0;

    Dog::Dog(const std::string& name, int health, int bite_dmg)
        : Animal(name, health), bite_dmg(bite_dmg) {
        ++pet_count;
    }

    void Dog::makeSound() const {std::cout << "BARK BARK BARKA" << "\n" ;}

    int Dog::attack(Character &person , int value)
    {
            if(alive)
            {
            std::cout <<  name << " tries to attack " << person.getName();
            person.SetHealth(value);
            }
            else
            {
                throw std::invalid_argument("dead you cannot attack :( \n");
            }
            return 1;
    }
    Dog::~Dog() {}



