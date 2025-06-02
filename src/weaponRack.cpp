#include "weaponRack.h"


 void WeaponRack::useHpPotions(Character* person)
    {
        occupied.lock();
        
        int current_hp = person->Gethealth();
        std::cout <<"the current hp is" << current_hp <<"\n";
        person -> SetHealth(current_hp + 10);
        std::cout <<"hp after the potion is: " << person->Gethealth() <<"\n";

        occupied.unlock();
    }