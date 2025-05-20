#ifndef CAT_H
#define CAT_H

#include "animal.h"
#include "character.h"


    class Cat : public Animal {
    private:
        int cutness;
        int scratch_dmg;

    public:
        static int pet_count;

        Cat(const std::string& name, int health, int scratch_dmg);
        
        
        void makeSound()  const override;

        int attack(Character &person , int value);

        static int getCount() {
            return pet_count;
        }

        ~Cat();
    };



#endif // ASSASSIN_H
