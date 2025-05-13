#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>


    class Character {
    protected:
        std::string name;
        int health;

    public:
        static int totalCount;

        Character(const std::string& name, int health);
        virtual void display() const;


        static int getObjectCount() {
            return totalCount;
        }

        virtual ~Character();
    };



#endif // CHARACTER_H
