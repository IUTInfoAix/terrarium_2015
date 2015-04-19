#include <nuttx/config.h>

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <debug.h>

unsigned int [] send {char data [], unsigned int length)
{
	unsigned int dataByte [length];
	for (unsigned j = 0; j < length; ++j){
		for (int i = 0; i < 8; ++i) {
    			dataByte[j] = ((data[j] >> i) & 1);
		}
	}
}
