#include "gtest.h"
#include "gmock.h"
#include "car.h"
#include "mockcar.h"

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
TEST(CarOn, CarWorks)
{
    mockcar car; 
    EXPECT_CALL(car, setOnStatus()); // UMMM....????
    car.setOnStatus(); 

}

TEST(CarAccelerates, CarGoesVroom)
{
    mockcar car; 
    EXPECT_CALL(car, accelerate(5)); // UMMM....??? PART 2
    car.accelerate(5); 
}