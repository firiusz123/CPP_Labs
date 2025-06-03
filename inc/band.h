#ifndef BAND_h
#define BAND_h
#include "character.h"
#include <vector>

class Band : public Character
{
    
    private:
    
    std::vector<Character*> characterBand;
    public:
    Band() = default;
    void add(Character* person);
    void  display() const override;
    virtual int getPotionsNumber()  override;

    ~Band();
};
#endif