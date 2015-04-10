#ifndef EMBEDDED_CAPTEURCOLORIMETRIE_H
#define EMBEDDED_CAPTEURCOLORIMETRIE_H

char *decimal_to_binary(int n);
int BitToRGB (int bit, int* result);
void initializeColorimetrie (int (*ConvertADC)(char*, int, int));

int Colorimetrie(int* result);

#endif