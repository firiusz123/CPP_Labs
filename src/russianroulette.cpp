#include "russianroulette.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

RussianRoulette::RussianRoulette(Character& character) 
    : player(character) 
{
    
    spinToLose();
}

void RussianRoulette::spinToLose() {
    bulletPosition = 1 + (std::rand() % 6);  
    currentChamber = 1;                     
}

void RussianRoulette::pullTrigger() {
    std::cout << player.getName() << " pulls the trigger on chamber " << currentChamber << "...\n";

    if (currentChamber == bulletPosition) {
        std::cout << "Bang! Bullet fired! " << player.getName() << "'s health is reduced.\n";
        int damage = 50;  // Arbitrary damage amount
        player.SetHealth(-damage);  // Subtract health

        // If health goes below zero, set alive status to 0
        if (player.Gethealth() <= 0) {
            player.SetALive(0);
            std::cout << player.getName() << " has died.\n";
        }
    } else {
        std::cout << "Click! No bullet this time.\n";
    }

    // Advance chamber (loop back to 1 after 6)
    currentChamber = (currentChamber % 6) + 1;
}
