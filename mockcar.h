#pragma once 

#include "car.h"
#include "gmock.h"
#include <iostream>

using namespace std; 

class mockcar:public car 
{
    public:
        MOCK_METHOD(void,setOnStatus,  ());
	    MOCK_METHOD(void,setMotionStatus,  ());
	    MOCK_METHOD(void,SetSpeed,  ());
        MOCK_METHOD(bool,getOnStatus,  ());
        MOCK_METHOD(bool,getMotionStatus,  ());
        MOCK_METHOD(int,getSpeed,  ());
        MOCK_METHOD(void, start, ());
        MOCK_METHOD(void, stop, ());
        MOCK_METHOD(void, accelerate, (int x));
        MOCK_METHOD(void, decelerate, (int x));

};

