#include "cat.h"
#include <iostream>
#include <cstdlib>



    int Cat::pet_count = 0;

    Cat::Cat(const std::string& name, int health, int scratch_dmg)
        : Animal(name, health), scratch_dmg(scratch_dmg) {
        ++pet_count;
    }

    void Cat::makeSound() const {std::cout << "Meow meow M E O W !!!!!!!!!!!!!!!!!!!!!" << "\n" ;}

    int Cat::attack(Character &person , int value)
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
    Cat::~Cat() {}



