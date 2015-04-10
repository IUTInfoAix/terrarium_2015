#ifndef EMBEDDED_HELLO_H
#define EMBEDDED_HELLO_H

#include <stdio.h>


void initializeServomoteur(int (*Mouvement)(int positionAngulaire));
void initializeServomoteurSplit(int (*BoardInitialize)(int frontMontant, int pulseTime, int duration ), 
	int (*start(int devpath)));
 
int StrPostoInt(char posText[]);

int ServoMoteurStr(char val[]);
int ServoMoteur(int val);

#endif
