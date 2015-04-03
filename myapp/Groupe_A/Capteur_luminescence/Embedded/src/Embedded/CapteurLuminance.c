#include "CapteurLuminance.h"

int (*my_ConvertADC)();

double BitToTens(int bit) 
{
	return bit * 3.6 / 4096;
}

double TensToIntens (double Tens) 
{
	return Tens / 0.0072;
}

double IntensToLx (double Intens)
{
	return Intens * 2;
}

double BitToLx (int bit)
{
	if (bit < 0 || bit > 4095) return -1;
    printf("%lf\n", TensToIntens(BitToTens(bit)));
	return IntensToLx(TensToIntens(BitToTens(bit)));
}

double Luminance()
{
    int nombre = my_ConvertADC();
    return BitToLx(nombre);
}

void initializeLuminance (int (*ConvertADC)())
{
	/*
    fd = open(dev/adc/)
    int val = 0;
    result = read (fd, &val, sizeof(val));
    ioctl(); // appel systeme sur les registres de la carte avec parametrage
    */
    my_ConvertADC = ConvertADC;
}