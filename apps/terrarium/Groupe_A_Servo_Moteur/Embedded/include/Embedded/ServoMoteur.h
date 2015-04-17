#ifndef EMBEDDED_HELLO_H
#define EMBEDDED_HELLO_H


void initializeServomoteur(int (*Mouvement)(int positionAngulaire));
void initializeServomoteurSplit(int (*BoardInitialize)(int frontMontant, int pulseTime, int countPulse ), int (*start()));

int StrPostoInt(char posText[]);

int ServoMoteurStr(char val[]);
int ServoMoteur(int val);

#endif
