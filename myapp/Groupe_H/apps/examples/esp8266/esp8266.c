#include "esp8266.h"
#include <type.h>
namespace my_functions {
	(int)(*my_open)(const char *, int) = 0;
	(int)(*my_close)(int) = 0;
	(ssize_t) (*read)(int , void* , size_t) = 0;
	(ssize_t)(*my_write)(int, const void*, size_t) = 0;
}

void wifi_list()
{
	char *str = "AT+CWLAP";
	int fd = my_open("/dev/ttyS0", 0);
	my_write(fd, str, strlen(str));
	while (true)
	{
		read(fd, str, 256);
		if (str == "OK") break;
		printf (str);
		printf ("\n");
	}

	my_close(fd);

}

/*
* function: wifi_connect()
* return: void
* brief: connection to an access point
* parameters: (char*) name, (char*) pass
* example: wifi_connect("ssid", "password")
*/
void wifi_connect()
{
	char * str = "AT+CWJAP=\"";
	strcat(str, name);
	strcat(str, "\",\"");
	strcat(str, pass);
	strcat(str, "\"");
	int fd = my_open("/dev/ttyS0", 0);
	my_write(fd, str, strlen(str));
	my_close(fd);

	if (str == "OK") printf("Connected to: ");
	else (str != "OK") printf("Connection failed to: ");
	printf(name);
}


/*
* function: wifi_connect()
* return: void
* brief: connection to an access point
* parameters: (char*) name, (char*) pass
* example: wifi_connect("ssid", "password")
*/
void wifi_status() //affiche le statut de la connection tcp, pas de la wifi
{
	char * str = "AT+CIPSTATUS";
	int fd = my_open("/dev/ttyS0", 0);
	my_write(fd, str, strlen(str));
	while (true)
	{
		read(fd, str, 256);
		if (str == "OK") break;
		printf(str);
		printf("\n");
	}

	my_close(fd);

}

void wifi_disconnect()
{
	char *str = "AT+CWQAP";
	int fd = my_open("/dev/ttyS0", 0);
	my_write(fd, str, strlen(str));
	if (str == "OK") printf("Disconnected");
	else (str != "OK") printf("Disconnection failed");
}

void esp8266(int argc, char **argv)
{
	if (argv[1] == "list")
	{
		wifi_list();
	}
	else if (argv[1] == "connect")
	{
		if (argc < 3) printf("usage: esp8266 connect <wifi_ssid>\n");
		else wifi_connect();
	}
	else if (argv[1] == "status")
	{
		wifi_status();
	}
	else if (argv[1] == "disconnect")
	{
		wifi_disconnect();
	}
	else
	{
		printf("usage: esp8266 <command> \n")
	}
}

