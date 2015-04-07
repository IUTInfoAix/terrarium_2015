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


int ConvertADC_CouleurBleu() 
{
  return 255;
}


TEST(Embedded, Luminance_Nuit_Total) 
{
  // programme le mock de read dans un cas de nuit totale: retourne 0
  int tab[3] = { 0, 0, 255 };
  initializeLuminance(&ConvertADC_NuitTotale);
  int *resultat = Colorimetrie();
  for (int i = 0; i < 3; ++i) {
    DOUBLES_EQUAL(tab[i], (&resultat)++, DELTA);
  }
}

int ConvertADC_CouleurBlanche()
{
  return 4095;
}

TEST(Embedded, Couleur_Blanche_Total) 
{
  // programme le mock de read dans un cas de jour totale: retourne 1000
  includent tab[3] = { 0, 0, 255 };
  initializeLuminance(&ConvertADC_NuitTotale);
  int *resultat = Colorimetrie();
  for (int i = 0; i < 3; ++i) {
    DOUBLES_EQUAL(tab[i], (&resultat)++, DELTA);
  }
}