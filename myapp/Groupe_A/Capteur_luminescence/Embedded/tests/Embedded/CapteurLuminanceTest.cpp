#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

extern "C"
{
  #include "CapteurLuminance.h"
}

#define DELTA 0.01

TEST_GROUP(Embedded)
{
  void setup()
  {
  }

  void teardown() 
  {
  }
};

TEST(Embedded, CountTens1)
{
    DOUBLES_EQUAL(0.906, BitToTens(1035), DELTA);
}

TEST(Embedded, CountTens2)
{
	DOUBLES_EQUAL(2, BitToTens(2276), DELTA);
}

TEST(Embedded, CountIntens1) 
{
	DOUBLES_EQUAL(0.001, TensToIntens(3.5), DELTA);
}

TEST(Embedded, CountIntens2) 
{
	DOUBLES_EQUAL(0.0002, TensToIntens(0.7), DELTA);
}

TEST(Embedded, CountLx1)
{
	DOUBLES_EQUAL(20, IntensToLx(10), DELTA)
}

TEST(Embedded, CountLx2)
{
	DOUBLES_EQUAL(200, IntensToLx(100), DELTA)
}


TEST(Embedded, TestAll)
{
  for (int i = 0; i < 4095; ++i) {
    sleep(1);
    /*
    fd = open(dev/adc/)
    int val = 0;
    result = read (fd, &val, sizeof(val));
    ioctl(); // appel systeme sur les registres de la carte avec parametrage

    */
    int nombre;
    srand(time(NULL));
    nombre = (int)rand() % 4096;
    
    DOUBLES_EQUAL(nombre * 5.02232143 * 0.0000001, BitToLx(nombre), DELTA)
  }
}