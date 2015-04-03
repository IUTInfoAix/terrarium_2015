
#include <nuttx/config.h>
#include <stdio.h>
#includ "esp8266.h"

#ifdef CONFIG_BUILD_KERNEL
int main(int argc, FAR char *argv[])
#else
int esp8266_main(int argc, char *argv[])
#endif
{
	esp8266(arc, argc[]);
  return 0;
}
