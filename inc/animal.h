#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>


    class Animal {
    protected:
        std::string name;
        int health;
        int alive = 1;

    public:
        static int pet_count;

        Animal(const std::string& name, int health);

        virtual void makeSound() const ;

        virtual void display() const ;



        static int getObjectCount() {
            return pet_count;
        }
        const std::string  getName(){ return name;}
        void SetHealth(int value);
        void SetALive(int value);
        void Gethealth();

         ~Animal();
    };



#endif // CHARACTER_H
