#ifndef EMBEDDED_CAPTEURCOLORIMETRIE_H
#define EMBEDDED_CAPTEURCOLORIMETRIE_H

char *decimal_to_binary(int n);
int* BitToRGB (int bit);
void initializeColorimetrie (int (*ConvertADC)());

int* Colorimetrie();

#endif