/*
*   Mock_Test_Servomotor.cpp
*
*   Fichier de test pour la partie servomoteur - Avec mock
*
*   Auteur : Rémy Kaloustian
*
*   Dernière modification : 3/04/2015
*/

#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"


extern "C"
{
  #include <stdio.h>
  #include <unistd.h>
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

TEST(Embedded, string_close)
{
  CHECK_EQUAL(0,StrPostoInt("close"));
}

TEST(Embedded, string_full)
{
  CHECK_EQUAL(180,StrPostoInt("full"));
}



TEST(Embedded, string_half)
{
  CHECK_EQUAL(90,StrPostoInt("half"));
}


TEST(Embedded, string_quarter)
{
  CHECK_EQUAL(45,StrPostoInt("quarter"));
}


TEST(Embedded, string_three_quarts)
{
  CHECK_EQUAL(135,StrPostoInt("three quarts"));
}


TEST(Embedded, string_parameter_valid)
{
  CHECK_EQUAL(-1,StrPostoInt("haacqlf"));
}

int ServomoteurBien(int position){
return 0;
}

TEST(Embedded, Servomoteurfct)
{
    initializeServomoteur(ServomoteurBien);
    CHECK_EQUAL(0, ServoMoteur(10));
}

TEST(Embedded, Servomoteurerrneg)
{
    initializeServomoteur(ServomoteurBien);
    CHECK_EQUAL(-1, ServoMoteur(-10));
}


TEST(Embedded, Servomoteurerrbig)
{
    initializeServomoteur(ServomoteurBien);
    CHECK_EQUAL(-1, ServoMoteur(1000));
}

TEST(Embedded, ServomoteurSfct)
{
    initializeServomoteur(ServomoteurBien);
    CHECK_EQUAL(0, ServoMoteurStr("half"));
}

TEST(Embedded, ServomoteurSerr)
{
    initializeServomoteur(ServomoteurBien);
    CHECK_EQUAL(-1, ServoMoteurStr("ersgfvd"));
}


int ServomoteurFalse(int position){
return -1;
}

TEST(Embedded, Servomoteurerr)
{
    initializeServomoteur(ServomoteurFalse);
    CHECK_EQUAL(-1, ServoMoteur(10));
}

TEST(Embedded, ServomoteurSerrfale)
{
    initializeServomoteur(ServomoteurFalse);
    CHECK_EQUAL(-1, ServoMoteurStr("half"));
}
