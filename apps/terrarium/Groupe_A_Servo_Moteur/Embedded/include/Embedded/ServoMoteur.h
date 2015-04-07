#ifndef EMBEDDED_HELLO_H
#define EMBEDDED_HELLO_H


void initializeServomoteur(int (*ServoMoteur)(int positionAngulaire));
int StrPostoInt(char posText[]);

int mouvementStr(char val[]);
int mouvement(int val);

#endif
