#include "CapteurLuminance.h"

double BitToTens(int bit) 
{
	return bit * 3.6 / 4096;
}

double TensToIntens (double Tens) 
{
	return Tens / 3500;
}

double IntensToLx (double Intens)
{
	return Intens * 2;
}
