#ifndef EMBEDDED_HELLO_H
#define EMBEDDED_HELLO_H


void initializeServomoteur(int (*Mouvement)(int positionAngulaire));
int StrPostoInt(char posText[]);

int ServoMoteurStr(char val[]);
int ServoMoteur(int val);

#endif
