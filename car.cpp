#include "car.h" 
#include <iostream> 

using namespace std; 

car::car()
{
    on = false; 
    motion = false;
    speed = 0; 
}
car::car(bool on, int speed, bool motion)
{
    on = on; 
    speed = speed; 
    motion = motion; 
}
void car::start() //if stopped, start the car.
{
    if(!on)
    {
        on = true;
    }
    else
    {
        cout<<"Engine is on!"<<endl; 
    }

}

void car::stop() //if started, stop the car.
{
    if(on)
    {
        on = false;
    }
    else
    {
        cout<<"Engine is off!"<<endl; 
    }
}
void car::accelerate(int x)//if started, accelerate the car by x mph.
{
    motion =+ x; 
}
void car::decelrate(int x) //if started, decelerate the car by x mph. 
{
    if(motion - x > 0)
    {
        motion=-x; 
    }
    else 
    {
        cout<<"Not possible!"<<endl; 
    }
}