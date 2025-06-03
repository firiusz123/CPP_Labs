#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>
#include "observer.h"
#include <vector>
#include <algorithm>
#include "subject.h"




    class Character : public Subject {
    protected:
        std::string name;
        int health;
        int alive = 1;
        std::vector<Observer*> observers;

    public:
        static int totalCount;
        int turn;
        
        
        //observer
        virtual void addObserver(Observer* observer);
        virtual void removeObserver(Observer* observer);
        virtual void notifyObserver();
        ///

        Character();
        Character(const std::string& name, int health);
        virtual void display() const;


        static int getObjectCount() {
            return totalCount;
        }
        const std::string  getName(){ return name;}
        void SetHealth(int value);
        virtual int attack(Character &person , int value);
        void SetALive(int value);
        int Gethealth(){return health;}
        virtual void logStatus();
        virtual void getRest();
        virtual std::string getString();
        virtual int getPotionsNumber(){return 20;}

        virtual ~Character();
    };



#endif // CHARACTER_H
