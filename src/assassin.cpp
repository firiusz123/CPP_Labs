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

    Assassin::~Assassin() {}

}  // namespace RandomMode
