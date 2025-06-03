#ifndef EQUIPMENTCHECK_h
#define EQUIPMENTCHECK_h
#include "character.h"
#include <vector>

class EquipmentCheck : public Character
{
    private:
    int potionsNumber = 0 ;
    std::vector <Character*> character_band ;

    public:
    EquipmentCheck() = default;
    void add(Character* person);
    int getPotionsNumber() override;
    ~EquipmentCheck();


};
#endif