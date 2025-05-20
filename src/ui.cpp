#include "ui.h"
#include <iostream>



int UI::observer_number = 0 ;

UI::~UI() = default;



void UI::update()
{

    std::cout << "\nobserver called " << UI::observer_number << " times\n";
    UI::observer_number ++ ;
}

