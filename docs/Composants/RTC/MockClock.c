#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

/*
Programme de mocking décrivant les fonctionnalités du module RTC sur la carte SAM4S X-PLAINED de Atmel. 
*/

TEST_GROUP(MockClock) {
};


void getAnnee() {
    mock().actualCall("getAnnee");
}

TEST(MockClock, SimpleScenario) {
    mock().expectOneCall("getAnnee");
    getAnnee();
    mock().checkExpectations();
}

void getMois()
{
    mock().actualCall("getMois");
}

TEST(MockClock, SimpleScenario)
{
    mock().expectOneCall("getMois");
    getMois();
    mock().checkExpectations();
}

void getSemaine()
{
    mock().actualCall("getSemaine");
}

TEST(MockClock, SimpleScenario)
{
    mock().expectOneCall("getSemaine");
    getSemaine();
    mock().checkExpectations();
}

void getJour()
{
    mock().actualCall("getJour");
}

TEST(MockClock, SimpleScenario)
{
    mock().expectOneCall("getJour");
    getJour();
    mock().checkExpectations();
}

void getHeure()
{
    mock().actualCall("getHeure");
}

TEST(MockClock, SimpleScenario)
{
    mock().expectOneCall("getHeure");
    getHeure();
    mock().checkExpectations();
}

void getMinute()
{
    mock().actualCall("getMinute");
}

TEST(MockClock, SimpleScenario)
{
    mock().expectOneCall("getMinute");
    getMinute();
    mock().checkExpectations();
}

void getSeconde()
{
    mock().actualCall("getSeconde");
}

TEST(MockClock, SimpleScenario)
{
    mock().expectOneCall("getSeconde");
    getSeconde();
    mock().checkExpectations();
}

void getTime()
{
    mock().actualCall("getTime");
}

TEST(MockClock, SimpleScenario)
{
    mock().expectOneCall("getTime");
    getTime();
    mock().checkExpectations();
}
