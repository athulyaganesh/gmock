#pragma once
#include "car.h"

class testdrive
{
    car* Car; 

    public:
        testdrive(car* Car):Car(Car){}
    
        int isOn()
        {
            if(Car->getOnStatus())
            {
                Car->accelerate(5); 
            }
            else 
            {
                Car->setOnStatus(); 
            }

            return Car->getSpeed(); 
            
        }

        int Stop()
        {
            if(!Car->getOnStatus())
            {
                Car->setSpeed(0);
            }
            else 
            {
                Car->decelrate(5);
            }
            return Car->getSpeed(); 
        }
}; 