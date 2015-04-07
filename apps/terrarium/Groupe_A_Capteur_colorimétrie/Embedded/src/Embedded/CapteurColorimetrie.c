#include "CapteurLuminance.h"

int (*my_ConvertADC)();

int* BitToRGB (int bit)
{

}

int* Colorimetrie()
{
    int nombre = my_ConvertADC();
    return BitToRGB(nombre);
}

void initializeColorimetrie (int (*ConvertADC)())
{
	/*
    fd = open(dev/adc/)
    int val = 0;
    result = read (fd, &val, sizeof(val));
    ioctl(); // appel systeme sur les registres de la carte avec parametrage
    */
    my_ConvertADC = ConvertADC;
}