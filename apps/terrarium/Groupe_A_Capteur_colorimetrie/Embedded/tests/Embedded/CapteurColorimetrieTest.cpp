#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

extern "C"
{
  #include <stdio.h>
  #include <unistd.h>
  #include "CapteurColorimetrie.h"
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


int ConvertADC_CouleurBleu(char* filename, int access, int permission) 
{
  return 15;
}

 // 1111.1111.1111
TEST(Embedded, Colorimetrie_CouleurBleu) 
{
  // programme le mock de read dans un cas de nuit totale: retourne 0
  int tab[3] = { 0, 0, 15 };
  initializeColorimetrie(&ConvertADC_CouleurBleu);
  int resultat[3]; 
  int erreur = Colorimetrie(resultat);
  
  CHECK_EQUAL(erreur, 0);
  for (int i = 0; i < 3; ++i) {
    DOUBLES_EQUAL(tab[i], resultat[i], DELTA);
  }
}

int ConvertADC_CouleurBlanche(char* filename, int access, int permission)
{
  return 4095;
}

TEST(Embedded, Colorimetrie_CouleurBlanche) 
{
  // programme le mock de read dans un cas de jour totale: retourne 1000
  int tab[3] = { 15, 15, 15 };
  initializeColorimetrie(&ConvertADC_CouleurBlanche);
  int resultat[3]; 
  int erreur = Colorimetrie(resultat);
  
  CHECK_EQUAL(erreur, 0);
  for (int i = 0; i < 3; ++i) {
    DOUBLES_EQUAL(tab[i], resultat[i], DELTA);
  } 
}

int ConvertADC_CouleurRouge(char* filename, int access, int permission)
{
  return 3840;
}

TEST(Embedded, Colorimetrie_CouleurRouge) 
{
  // programme le mock de read dans un cas de jour totale: retourne 1000
  int tab[3] = { 15, 0, 0 };
  initializeColorimetrie(&ConvertADC_CouleurRouge);
  int resultat[3]; 
  int erreur = Colorimetrie(resultat);
  CHECK_EQUAL(erreur, 0);
  for (int i = 0; i < 3; ++i) {
    DOUBLES_EQUAL(tab[i], resultat[i], DELTA);
  }
}

int ConvertADC_CouleurVerte(char* filename, int access, int permission)
{
  return 240;
} // 0000.1111.0000

TEST(Embedded, Colorimetrie_CouleurVerte) 
{
  // programme le mock de read dans un cas de jour totale: retourne 1000
  int tab[3] = { 0, 15, 0 };
  initializeColorimetrie(&ConvertADC_CouleurVerte);
  int resultat[3]; 
  int erreur = Colorimetrie(resultat);
  
  CHECK_EQUAL(erreur, 0);
  for (int i = 0; i < 3; ++i) {
    DOUBLES_EQUAL(tab[i], resultat[i], DELTA);
  }
}