#ifndef SIM_H
#define SIM_H

#include <thread>
#include "factory.h"
#include "character.h"
#include "mage.h"
#include "assassin.h"
#include <iostream>
#include <thread>
#include <chrono>
class Simulation
{
    public:
        void Simulate_Assasin_Training(Character* obj);
        void Simulate_Mage_Training(Character* obj);
        void Character_logger(Character* obj, int interval_ms, int times);
        void processObjects(const std::vector<Character*>&);
};


#endif