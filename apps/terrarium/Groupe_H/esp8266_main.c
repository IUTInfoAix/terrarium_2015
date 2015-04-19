
#include <nuttx/config.h>
#include <stdio.h>
#include "esp8266.h"

#ifdef CONFIG_BUILD_KERNEL
int main(int argc, FAR char *argv[])
#else
int esp8266_main(int argc, char *argv[])
#endif
{
	esp8266(argc, argv);
  return 0;
}
