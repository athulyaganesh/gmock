#pragma once
#include "car.h"

class testdrive
{
    car* Car; 

    public:
        testdrive(car* Car):Car(Car){}
    
        bool isOn()
        {
            return Car->getOnStatus(); 
        }
        int Stop()
        {
            return Car->getSpeed(); 
        }
};