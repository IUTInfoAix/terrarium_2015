#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

extern "C"
{
  #include "Hello.h"
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

/*
**	Appliquer U=RI
*	On cherche I donc I = U/R
* 	R est une valeur fixe 3500  
*	Tu vas voir dans la doc du TEMT6000
*	Retrouver une fonction qui en fonction de l'amperage renvoie une valeur en LUX
*
*
*/



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

