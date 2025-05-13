#include "mage.h"
#include <iostream>
#include <cstdlib>

namespace NormalMode {

Mage::Mage(const std::string& name, int health, int mana)
    : Character(name, health), mana(mana) {}

void Mage::display() const {
    Character::display();
    std::cout << "Mana: " << mana << std::endl;
}

Mage::~Mage() {}

} // namespace NormalMode

namespace RandomMode {

Mage::Mage(const std::string& name)
    : Character(name, mana = (1 + rand() % 1001)) {}

void Mage::display() const {
    std::cout << "[Random Mode] Name: " << name
              << ", Health: " << health
              << ", Mana: " << mana << std::endl;
}

Mage::~Mage() {}

} // namespace RandomMode
