
#ifndef ESP8266_H
#define ESP8266_H

#include <nuttx/config.h>

#if defined(CONFIG_NSH_BUILTIN_APPS) && !defined(CONFIG_EXAMPLES_CAN_NMSGS)
#  define CONFIG_EXAMPLES_CAN_NMSGS 32
#endif

int myapp_test(void);

#endif /* ESP8266_H */
