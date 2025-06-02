#include "sim.h"



void Simulation::Simulate_Assasin_Training(Character* obj)
{
    
    

    Character* dummy = new RandomMode::Mage("dummmmmmmmmmmmmy");
    
   
    try{
    dummy->display();
    obj->attack(*dummy , 200);
    dummy->display();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Attack error , you are bad assasin xd " << e.what() << "\n" ;
    }
    
    delete dummy;
    
}

void Simulation::Simulate_Mage_Training(Character* obj)
{
    
    

    Character* dummy = new RandomMode::Mage("dummmmmmmmmmmmmy");
    
   
    try{
    dummy->display();
    obj->attack(*dummy , 200);
    dummy->display();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Attack error , you are bad assasin xd " << e.what() << "\n" ;
    }
    
    delete dummy;
}
void  Simulation::Character_logger(Character* obj, int interval_ms, int times)
{
    
    for (int i = 0; i < times; ++i) 
    {
        obj->logStatus();
    }

}
void Simulation::processObjects(const std::vector<Character*>& objs)
{
    for (Character* obj: objs)
    {
        obj->display();
    }
}