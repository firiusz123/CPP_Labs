#include "mage.h"
#include "assassin.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace NormalMode;

int main() {
    srand(time(0));

    std::cout << "\nTotal Character count without creating the object: " << Character::getObjectCount() << std::endl;

    try
    {
        Mage mage("Gandalf", 80, 250);
        
        Assassin assassin("Batman", 150, 75);

        std::cout << "Normal Mode Mage Info:\n";
        
        mage.display();
        assassin.SetALive(0);
        assassin.attack(mage , 10);
        
        std::cout << "\nNormal Mode Assassin Info:\n";
        assassin.display();


        std::cout << "\nTotal Character count: " << Character::getObjectCount() << std::endl;


        std::cout << "Default Mana from Static Method: " << Mage::getDefaultMana() << std::endl;

        // Switching to Random Mode
        std::cout << "\nSwitching to Random Mode:\n";

        RandomMode::Mage randomMage("RandomKassadin");
        randomMage.display();

        RandomMode::Assassin randomAssassin("RandomZed");
        randomAssassin.display();


        std::cout << "\nTotal Character count: " << Character::getObjectCount() << std::endl;

        return 0;
    }
    catch(const std::invalid_argument& e){std::cerr << "Invalid input: " << e.what() << std::endl;}
}
