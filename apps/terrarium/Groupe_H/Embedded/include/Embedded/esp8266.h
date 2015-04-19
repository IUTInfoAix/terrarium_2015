#ifndef __ESP8266_H__
#define __ESP8266_H__

//#include <nuttx/config.h>

//#if defined(CONFIG_NSH_BUILTIN_APPS) && !defined(CONFIG_EXAMPLES_CAN_NMSGS)
//#  define CONFIG_EXAMPLES_CAN_NMSGS 32
//#endif

    extern int my_errno;
    extern int		(*my_open)(const char *, int);
    extern int		(*my_close)(int);
    extern ssize_t	(*my_read)(int , void* , size_t);
    extern ssize_t	(*my_write)(int, const void*, size_t);
/****************************************************************/
/*						WIFI FUNCTIONS							*/
/****************************************************************/

/*
* function: wifi_list()
* return: void
* brief: list the available ssids
* parameters: none
* example: wifi_list();
*/
void wifi_list();

/*
* function: wifi_connect(char* name, char* pass)
* return: 0 if connected, 1 if not
* brief: connection to an access point
* parameters: (char*) name, (char*) pass
* example: wifi_connect("ssid", "password");
*/
int wifi_connect(char* name, char* pass);


/*
* function: wifi_disconnect()
* return: 0 if disconnected, 1 otherwise
* brief: disconnection to an access point
* parameters: none
* example: wifi_disconnect()
*/
int wifi_disconnect();

/****************************************************************/
/*						TCP FUNCTIONS							*/
/****************************************************************/

/*
* function: tcp_connect(char* type, char* addr, int port )
* return: 0 if connected, else 1
* brief: Establish TCP connection or UDP
* parameters: char* type, char* addr, int port
* example: tcp_connect("TCP", "XXX.XXX.XXX.XXX", 2222);
*/
int tcp_connect(char* type, char* addr, int port);

/*
* function: tcp_disconnect()
* return: 0 if disconnected, else 1
* brief: Disable TCP connection or UDP
* parameters: none
* example: tcp_disconnect();
*/
int tcp_disconnect();


/*
* function: tcp_status()
* return: void
* brief: give status of tcp connection
* parameters: none
* example: wifi_status()
*/
void tcp_status();
#endif /* __ESP8266_H__ */
