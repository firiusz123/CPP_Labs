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
  int Mage::attack(Character &person , int value) 
    {
        std::cout << "Base Character attack does nothing\n";
        return 0;
    }
    void Mage::logStatus() 
    {
        std::cout <<"mana:"<< mana << "\n" ;
    }
    void Mage::getRest()
    {

    
        std::cout << "the " << name << "is resting\n" ;
        std::this_thread::sleep_for(std::chrono::seconds(3));
        std::cout << "the " << name << "got decent rest\n" ;
    }
    std::string Mage::getString()
    {
        return "FIREBALL!!!!!!!!!!!!";
    }
    int Mage::getPotionsNumber()
    {
        std::this_thread::sleep_for(std::chrono::seconds(1 + rand() % 6));
        return 10 ;
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
int Mage::attack(Character &person , int value) 
    {
        std::cout << "Base Character attack does nothing\n";
        return 0;
    }
    void Mage::logStatus() 
    {
        std::cout <<"mana:"<< mana << "\n" ;
    }

    void Mage::getRest()
    {

    
        std::cout << "the " << name << "is resting\n" ;
        std::this_thread::sleep_for(std::chrono::seconds(1 + rand() % 6));
        std::cout << "the " << name << "got decent rest\n" ;
    }
     std::string Mage::getString()
    {
        return "FIREBALL!!!!!!!!!!!!";
    }
    int Mage::getPotionsNumber()
    {
        std::this_thread::sleep_for(std::chrono::seconds(1 + rand() % 6));
        return (rand() % 101);
    }
    
Mage::~Mage() {}

} // namespace RandomMode
