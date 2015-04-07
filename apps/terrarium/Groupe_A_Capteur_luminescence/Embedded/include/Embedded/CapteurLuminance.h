#ifndef EMBEDDED_CAPTEURLUMINANCE_H
#define EMBEDDED_CAPTEURLUMINANCE_H

double BitToTens(int bit);
double TensToIntens (double Tens);
double IntensToLx (double Intens);
double BitToLx (int bit);

void initializeLuminance(int (*ConvertADC)());


double Luminance();


#endif