#include "assassin.h"
#include <iostream>
#include <cstdlib>

namespace NormalMode {

    int Assassin::count = 0;

    Assassin::Assassin(const std::string& name, int health, int lethality)
        : Character(name, health), lethality(lethality) {
        ++count;
    }

    void Assassin::display() const {
        std::cout << "Name: " << name << ", Health: " << health << ", Lethality: " << lethality << std::endl;
    }
     int Assassin::attack(Character &person , int value)
    {       
            if(alive)
            {
            std::cout <<  name << " tries to attack " << person.getName()<<"\n";
            person.SetHealth(value);
            }
            else
            {
                throw std::invalid_argument("dead you cannot attack :( \n");
            }
            notifyObserver();
            return 1;
    }
    void Assassin::logStatus() 
    {
        std::cout <<"lethality"<< lethality << "\n" ;
    }
    
    Assassin::~Assassin() {}

}  // namespace NormalMode

namespace RandomMode {

    int Assassin::count = 0;

    Assassin::Assassin(const std::string& name)
        : Character(name,health = 1 + rand() % 50) {
        
        lethality = 1 + rand() % 601;
        ++count;
    }

    void Assassin::display() const {
        std::cout << "[Random Mode] Name: " << name << ", Health: " << health << ", Lethality: " << lethality << std::endl;
    }
    int Assassin::attack(Character &person , int value)
    {
            if(alive)
            {
            std::cout <<  name << " tries to attack " << person.getName() << "\n";
            person.SetHealth(value);
            }
            else
            {
                throw("dead you cannot attack :( \n");
            }
            return 1;
    }
    void Assassin::logStatus() 
    {
        std::cout <<"lethality"<< lethality << "\n" ;
    }
    
    
    Assassin::~Assassin() {}

}  // namespace RandomMode
