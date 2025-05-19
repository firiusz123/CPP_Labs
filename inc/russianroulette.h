#ifndef RUSSIANROULETTE_H
#define RUSSIANROULETTE_H

#include "character.h"
#include <random>

class RussianRoulette {
private:
    Character& player;
    int bulletPosition;  
    int currentChamber;  

    void spinToLose();

public:
    RussianRoulette(Character& character);

    // Play one round: may reduce health if unlucky
    void pullTrigger();
};

#endif // RUSSIANROULETTE_H
