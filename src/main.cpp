#include "mage.h"
#include "assassin.h"
#include "observer.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ui.h"
#include "factory.h"
#include "sim.h"
#include "weaponRack.h"
#include <thread>

using namespace NormalMode;

int main() {
    srand(time(0));

    std::cout << "\nTotal Character count without creating the object: " << Character::getObjectCount() << std::endl;
    
    try
    {   Simulation* sim = new Simulation();
        NormalMode::Assassin* assassin = new NormalMode::Assassin("Zed", 100, 50);
        NormalMode::Mage* mage = new NormalMode::Mage("Lux", 60, 300);
        RandomMode::Mage* mage1 = new RandomMode::Mage("gandalf");
        RandomMode::Assassin* assasin1 = new RandomMode::Assassin("marek");
        WeaponRack* healthRack = new WeaponRack();
        /*
        std::thread t1(&Simulation::Simulate_Assasin_Training ,sim ,assassin);
        std::thread t2(&Simulation::Simulate_Mage_Training, sim,mage);

        std::thread t5(&Simulation::Character_logger, sim, assassin, 500, 10);
        std::thread t6(&Simulation::Character_logger, sim, mage, 20, 10);

        std::vector<Character*> g1 = {assassin,assasin1};
        std::vector<Character*> g2 = {mage,mage1};
        
        std::thread t7(Simulation::processObjects,sim,g1);
        std::thread t8(Simulation::processObjects,sim,g2);
        */
        //mutex testing 
        std::thread t9(&WeaponRack::useHpPotions,healthRack,assasin1);
        std::thread t10(&WeaponRack::useHpPotions,healthRack,assassin);
        /*
        t1.join();
        t2.join();
        t5.join();
        t6.join();
        t7.join();
        t8.join();
        */
        t9.join();
        t10.join();


        
        delete assassin;
        delete mage;
        delete sim;


        
       /*  UI* ui = new UI();


        CharacterFactory* mageFactory = new MageFactory();
        CharacterFactory* assasinFactory = new AssasinFactory();

        AutoFactory<NormalMode::Assassin> assassinFactory;
        Character* assassin = assassinFactory.createCharacter();
        Character* mage = mageFactory->createCharacter();

        //Mage mage("Gandalf", 80, 250);
        
        
        
        //Character* assassin = new Assassin("Batman", 150, 75);

        std::cout << "Normal Mode Mage Info:\n";
        
        mage->display();
        //assassin.SetALive(0);
        
        assassin->addObserver(ui);
        ////
        assassin->attack(*mage , 10);
        assassin->attack(*mage , 10);
        
        std::cout << "\nNormal Mode Assassin Info:\n";
        assassin->display();


        std::cout << "\nTotal Character count: " << Character::getObjectCount() << std::endl;


        std::cout << "Default Mana from Static Method: " << Mage::getDefaultMana() << std::endl;
    */
        // Switching to Random Mode
    /*
        std::cout << "\nSwitching to Random Mode:\n";

        RandomMode::Mage randomMage("RandomKassadin");
        randomMage.display();

        RandomMode::Assassin randomAssassin("RandomZed");
        randomAssassin.display();


        std::cout << "\nTotal Character count: " << Character::getObjectCount() << std::endl;

        return 0;
        */
    }
 
    catch(const std::invalid_argument& e){std::cerr << "Invalid input: " << e.what() << std::endl;}

    

}
