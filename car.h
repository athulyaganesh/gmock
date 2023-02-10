#pragma once

#include <string> 

class car
{
    private:
         bool on; // True indicates car engine is on, else off. 
         bool motion; // if True, car is moving, else stopped.  
         int speed;  //speed of car in mph 
    public:
        car();
        car(bool start, int speed, bool motion);
        virtual void setOnStatus();
        virtual void setMotionStatus();
        virtual void setSpeed(int x);
        virtual bool getOnStatus();
        virtual bool getMotionStatus();
        virtual int getSpeed();
        virtual void start(); //if stopped, start the car.
        virtual void stop(); //if started, stop the car.
        virtual void accelerate(int x); //if started, accelerate the car by x mph.
        virtual void decelrate(int x);  //if started, decelerate the car by x mph. 
}; 