#ifndef ASSASSIN_H
#define ASSASSIN_H

#include "character.h"
#include <thread>
#include <chrono>

namespace NormalMode {
    class Assassin : public Character {
    private:
        int lethality;

    public:
        static int count;

        Assassin(const std::string& name, int health, int lethality);
        
        void display() const override;

        int attack(Character &person , int value) override;

        static int getCount() {
            return count;
        }
        void logStatus()  override ;
        void getRest() override ;
        std::string getString() override ;
        int getPotionsNumber() override ;

        ~Assassin();
    };
}

namespace RandomMode {
    class Assassin : public Character {
    private:
        int lethality;

    public:
        static int count;

        Assassin(const std::string& name);
        void display() const override;
        

        static int getCount() {
            return count;
        }
        int attack(Character &person , int value);
        void logStatus()  override ;
        void getRest() override ;
        std::string getString() override;
        int getPotionsNumber() override ;

        ~Assassin();
    };
}

#endif // ASSASSIN_H
