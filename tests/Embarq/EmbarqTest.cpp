#include "CppUTest/TestHarness.h"

extern "C" {
    #include "DHT_11.h"
}

TEST_GROUP(Embarq) {
    void setup() {
    }

    void teardown() {
    }
};

TEST(Embarq, Test) {
    FAIL("Fail me");
}

TEST(Embarq, Test_Chkdelay_HIGH_True) {
    DHT_11* Sensor = new DHT_11();
    CHECK_EQUAL(0, Sensor->chkdelay(100, 1, 0));
    delete Sensor;
}

TEST(Embarq, Test_Chkdelay_HIGH_False) {
    DHT_11* Sensor = new DHT_11();
    CHECK_EQUAL(1, Sensor->chkdelay(100, 1, 2));
    delete Sensor;
}

TEST(Embarq, Test_Chkdelay_LOW_True) {
    DHT_11* Sensor = new DHT_11();
    CHECK_EQUAL(0, Sensor->chkdelay(100, 0, 0));
    delete Sensor;
}

TEST(Embarq, Test_Chkdelay_LOW_False) {
    DHT_11* Sensor = new DHT_11();
    CHECK_EQUAL(1, Sensor->chkdelay(100, 0, 2));
    delete Sensor;
}

TEST(Embarq, Test_Read) {
    DHT_11* Sensor = new DHT_11();
    CHECK_EQUAL(0, Sensor->read(42, ""));
    delete Sensor;
}

TEST(Embarq, Test_Read_DataLineBusy) {
    DHT_11* Sensor = new DHT_11();
    CHECK_EQUAL(-3, Sensor->read(42, "data line busy"));
    delete Sensor;
}

TEST(Embarq, Test_Read_Timeout) {
    DHT_11* Sensor = new DHT_11();
    CHECK_EQUAL(-2, Sensor->read(42, "Timeout"));
    delete Sensor;
}

TEST(Embarq, Test_Read_ChecksumError) {
    DHT_11* Sensor = new DHT_11();
    CHECK_EQUAL(-1, Sensor->read(42, "checksum error"));
    delete Sensor;
}
