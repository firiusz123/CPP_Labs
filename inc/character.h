#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>
#include "observer.h"
#include <vector>
#include <algorithm>





    class Character {
    protected:
        std::string name;
        int health;
        int alive = 1;
        std::vector<Observer*> observers;

    public:
        static int totalCount;
        
        
        //observer
        virtual void addObserver(Observer* observer);
        virtual void removeObserver(Observer* observer);
        virtual void notifyObserver();
        ///


        Character(const std::string& name, int health);
        virtual void display() const;


        static int getObjectCount() {
            return totalCount;
        }
        const std::string  getName(){ return name;}
        void SetHealth(int value);
        virtual int attack(Character &person , int value);
        void SetALive(int value);
        void Gethealth();

        virtual ~Character();
    };



#endif // CHARACTER_H
