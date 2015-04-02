#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

extern "C"
{
  #include "ServoMoteur.h"
}

TEST_GROUP(Embedded)
{
  void setup()
  {
  }

  void teardown() 
  {
  }
};

TEST(Embedded, Count_1) {
    CHECK_EQUAL(1, hello());
}