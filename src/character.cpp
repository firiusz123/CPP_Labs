#include "character.h"
#include <iostream>



int Character::totalCount = 0;

    Character::Character(const std::string& name, int health)
        : name(name), health(health) {
        ++totalCount;
    }

    void Character::display() const {
        std::cout << "Name: " << name << ", Health: " << health << std::endl;
    }

    Character::~Character() {}

 // namespace NormalMode

