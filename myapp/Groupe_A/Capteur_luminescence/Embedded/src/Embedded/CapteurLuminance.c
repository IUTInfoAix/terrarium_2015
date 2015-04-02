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

double BitToLx (int bit)
{
	if (bit < 0 || bit > 4095) return -1;
	return IntensToLx(TensToIntens(BitToTens(bit)));
}