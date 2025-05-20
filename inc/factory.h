#ifndef FACTORY_H
#define FACTORY_H
#include "character.h"
#include "mage.h"
#include "assassin.h"
#include <tuple>
#include <utility>


//////////////////////////////////////
class CharacterFactory
{
    public:
    virtual Character* createCharacter() = 0 ;
    virtual ~CharacterFactory(){}
    
};
/////////////////////////////////////////////


class MageFactory : public CharacterFactory {
public:
    Character* createCharacter() override {
        return new NormalMode::Mage("Gandalf", 100, 100); // or some default args
    }
};
//////////////////////////////////////////////////////////

class AssasinFactory : public CharacterFactory {
public:
 Character* createCharacter() override {
        return new NormalMode::Assassin("Batman", 100, 100); // or some default args
    }
};
/////////////////////////////////////////////////////////



template <typename T>
class AutoFactory : public CharacterFactory {
public:
    Character* createCharacter() override {
        return new T("batman", 100, 100);
    }
};





#endif