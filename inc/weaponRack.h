#ifndef WEAPONRACK_H
#define WEAPONRACK_H
#include "character.h"
#include <iostream>
#include <thread>
#include<mutex>

static std::mutex  occupied;


class WeaponRack
   {
    public:
    void useHpPotions(Character* person);

   };


#endif // MAGE_H
