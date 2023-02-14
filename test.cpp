#pragma once

#include "gtest"
#include "gmock"
#include "car.h"
#include "mockcar.h"
#include "testdrive.h" 

using ::testing::InSequence;
using ::testing::Return;
using ::testing::AtLeast;
using ::testing::_;
using ::testing::Ge;
using ::testing::StrictMock;
using ::testing::NiceMock; 

class MockTest 
{
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

/*
TEST(SomeTestCaseName, SomeTestName) {
    MockTest mock;
    EXPECT_CALL(mock, SomeMethod);
    mock.SomeMethod();

}*/
/*
create a mock car object, call the getOnStatus at least once. This Should return true; 
*/
TEST(CarOn, CarWorks)
{
    mockcar car; 
    EXPECT_CALL(car, getOnStatus()).Times(AtLeast(1)); 
    
    testdrive td(&car); 
    EXPECT_EQ(td.isOn(),5); 
}
/*
create mockcar object,  call the stop object atleast once. If speed equals 0, passes the test case. 

*/
TEST(CarStopped, CarNoGoesVroom)
{
    mockcar car; 
    EXPECT_CALL(car, stop()).Times(AtLeast(1));
   
   testdrive td(&car); 
   EXPECT_EQ(td.Stop(),0); 
}