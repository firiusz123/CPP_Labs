#include "mage.h"
#include <iostream>
#include <cstdlib>

namespace NormalMode {

Mage::Mage(const std::string& name, int health, int mana)
    : Character(name, health), mana(mana) 
    {
        if(health > 100){throw std::invalid_argument("mages are not so healthy , lower amount of health"); }
    }

void Mage::display() const {
    Character::display();
    std::cout << "Mana: " << mana << std::endl;
}
void Mage::CastManaRegen()
{   
    mana += 10;
    std::cout << name << " regenerates mana, new mana: " << mana << std::endl;
}

Mage::~Mage() {std::cout << name << " has been slain ;(" << "\n" ;}

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
