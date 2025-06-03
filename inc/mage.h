#ifndef MAGE_H
#define MAGE_H

#include "character.h"
#include <chrono>
#include <thread>

namespace NormalMode {
    class Mage : public Character {
    private:
        int mana;

    public:
        Mage(const std::string& name, int health, int mana);
        void display() const override;
        int attack(Character &person , int value) override;

        // Static method for returning default mana value
        static  int getDefaultMana() {
            return 100;  // You can modify this default value as needed
        }
        void logStatus()  override ;
        void getRest() override ; 
        std::string getString() override ;
        int getPotionsNumber() override ;
        ~Mage();
    };
}

namespace RandomMode {
    class Mage : public Character {
    private:
        int mana;

    public:
        Mage(const std::string& name);
        void display() const override;
        int attack(Character& person, int value) override;
        void logStatus()  override ;
        void getRest() override ; 
        std::string getString() override ;
        int getPotionsNumber() override ;
        ~Mage();
    };
}

#endif // MAGE_H
