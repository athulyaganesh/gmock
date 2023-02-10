#pragma once

#include <string> 

class car
{
    private:
         bool start; // True indicates car engine is on, else off. 
         bool fuel; // True indicates more than half the fuel tank is full
         bool motion; // if True, car is moving, else stopped.   
    public:
        car();
        car(bool start, bool fuel, bool motion);
        void start();
        void stop();
        void accelerate();
        void decelrate(); 
        void horn();   
}; 