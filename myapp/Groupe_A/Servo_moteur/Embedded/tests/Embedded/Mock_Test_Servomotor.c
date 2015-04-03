/*
*   Mock_Test_Servomotor.c
*
*   Fichier de test pour la partie servomoteur - Avec mock
*
*   Auteur : Rémy Kaloustian
*
*   Dernière modification : 3/04/2015
*/

#include "cpputest/include/CppUTest/TestHarness.h"
#include "cpputest/include/CppUTestExt/MockSupport.h"


extern "C"
{
  #include <stdio.h>
  #include <unistd.h>
  #include "Servomotor.h"
}

#define DELTA 0.01
TEST_GROUP(Embedded)
{
    void teardown()
    {
        mock().clear();
    }
};

TEST(Embedded,int_parameter_valid)
{
  DOUBLES_EQUAL(0,Servomotor(90),DELTA);
}

TEST(Embedded, int_parameter_invalide)
{
  DOUBLES_EQUAL(-1,Servomotor(2000000000000),DELTA);
}

TEST(Embedded, string_parameter_valid)
{
  DOUBLES_EQUAL(0,Servomotor("half",DELTA);
}

TEST(Embedded, string_parameter_invalid)
{
  DOUBLES_EQUAL(-1,Servomotor("cuzmblakyo"),DELTA);
}



