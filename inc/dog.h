#ifndef DOG_H
#define DOG_H

#include "animal.h"
#include "character.h"


    class Dog : public Animal {
    private:
        int cutness;
        int bite_dmg;

    public:
        static int pet_count;

        Dog(const std::string& name, int health, int bite_dmg);
        
        
        void makeSound() const;

        int attack(Character &person , int value);

        static int getCount() {
            return pet_count;
        }

        ~Dog();
    };



#endif // ASSASSIN_H
