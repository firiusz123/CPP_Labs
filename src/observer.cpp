#include "observer.h"
#include <iostream>



int Observer::observer_number = 0 ;

Observer::~Observer() = default;



void Observer::update()
{

    std::cout << "observer called " << Observer::observer_number << " times\n";
    Observer::observer_number ++ ;
}

