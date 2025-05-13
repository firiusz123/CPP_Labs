#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>


    class Character {
    protected:
        std::string name;
        int health;
        int alive = 1;

    public:
        static int totalCount;

        Character(const std::string& name, int health);
        virtual void display() const;


        static int getObjectCount() {
            return totalCount;
        }
        const std::string  getName(){ return name;}
        void SetHealth(int value);
        void SetALive(int value);
        void Gethealth();

        virtual ~Character();
    };



#endif // CHARACTER_H
