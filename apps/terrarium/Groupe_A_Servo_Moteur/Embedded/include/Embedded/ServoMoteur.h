#ifndef EMBEDDED_HELLO_H
#define EMBEDDED_HELLO_H


void initializeServomoteur(int (*ServoMoteur)(int positionAngulaire));
int StrPostoString(String posText);

int mouvement(String val);
int mouvement(int val);

#endif
