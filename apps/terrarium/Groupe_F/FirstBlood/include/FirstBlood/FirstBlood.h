#ifndef FIRSTBLOOD_H
#define FIRSTBLOOD_H

#include "define_sdcard.h"
#include "moc_sdcard_start.h"
#include <stdio.h>

struct functions {
  int (*my_sdcard_start) (int);
};

int sdCard(int argc, char* argv[], struct functions f);
int  append(char*s, size_t size, char c);

#endif
