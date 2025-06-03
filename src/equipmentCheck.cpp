#include "equipmentCheck.h"




void EquipmentCheck::add(Character* person)
{
    character_band.push_back(person);
}
int EquipmentCheck::getPotionsNumber()
{
    potionsNumber = 0 ;
    for(const auto& person : character_band)
    {
       potionsNumber+= person->getPotionsNumber();
    }

    std::cout << "number of potions of the party "<< potionsNumber << "\n";
    return 0 ;
}
EquipmentCheck::~EquipmentCheck()
{
    
    for(auto person : character_band)
    {
        delete person;
    }
}