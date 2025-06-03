#include "band.h"   
    
void Band::add(Character* person)
{
    characterBand.push_back(person);
}
void Band::display() const
{
    for(const auto& person : characterBand)
    {
        person->display();
    }
}
Band::~Band()
{
    
    for(auto person : characterBand)
    {
        delete person;
    }
}
int Band::getPotionsNumber() 
{
    int total = 0;
    for(const auto& member : characterBand)
        total += member->getPotionsNumber();
    return total;
}