#include "character.h"
#include <vector>

class band : public Character
{
    public:
    std::vector<Character*> characterBand;
    private:
    void add(Character* person);
    void display();
    
    ~band();
};