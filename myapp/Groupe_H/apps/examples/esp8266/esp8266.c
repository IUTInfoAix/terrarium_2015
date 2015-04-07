/*
* authors: Thomas Margier, Alexis Eutrope, Mathieu Mérino
* date   : 3 april 2015
* brief  : functions to use the esp8266 module
*/


#include "esp8266.h"
#include <type.h>


namespace my_functions {
	(int)(*my_open)(const char *, int, mode_t) = 0;
	(int)(*my_open)(const char *, int) = 0;
	(int)(*my_close)(int) = 0;
	(ssize_t) (*read)(int , void* , size_t) = 0;
	(ssize_t)(*my_write)(int, const void*, size_t) = 0;
}


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
void wifi_list()
{
	char *str = "AT+CWLAP";
	int fd = my_open("/dev/ttyS0", 0);
	my_write(fd, str, strlen(str));

	str = ""
	while (true)
	{

		read(fd, str, 256);
		if (strlen(str) == "")
		{
			printf("No access point available \n");
			break;
		}
		if (str == "OK") break;
		printf("%s \n", str);
	}

	my_close(fd);

}

/*
* function: wifi_connect(char* name, char* pass)
* return: 0 if connected, 1 if not
* brief: connection to an access point
* parameters: (char*) name, (char*) pass
* example: wifi_connect("ssid", "password");
*/
int wifi_connect(char* name, char* pass)
{
	char * str = "AT+CWJAP=\"";
	strcat(str, name);
	strcat(str, "\",\"");
	strcat(str, pass);
	strcat(str, "\"");
	int fd = my_open("/dev/ttyS0", 0);
	my_write(fd, str, strlen(str));
	my_close(fd);

	if (str == "OK") 
	{
		printf("Connected to: %s \n", name);
		return 0;
	}
	else (str != "OK")
	{
		printf("Connection failed to: %s \n", name);
		return 1;
	}
}


/*
* function: wifi_disconnect()
* return: 0 if disconnected, 1 otherwise
* brief: disconnection to an access point
* parameters: none
* example: wifi_disconnect()
*/
int wifi_disconnect()
{
	char *str = "AT+CWQAP";
	int fd = my_open("/dev/ttyS0", 0);
	my_write(fd, str, strlen(str));
	my_close(fd);
	if (str == "OK") 
	{
		printf("Disconnected");
		return 0;
	}
	else ()
	{
		printf("Disconnection failed");
		return 1;
	}
}

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
int tcp_connect(char* type, char* addr, int port)
{
	char *nbConnections = "AT+CIPMUX=0";
	int fd = my_open("/dev/ttyS0", 0);
	my_write(fd, nbConnections, strlen(nbConnections));
	char *str = "AT+CIPSTART=\"";
	strcat(str, type);
	strcat(str, "\", \"");
	strcat(str, addr);
	strcat(str, "\", \"");
	strcat(str, port);

	my_write(fd, str, strlen(str));

	str = "";

	if (my_read(fd, str, 256) == 0)
	{
		my_close(fd);
		return 1;
	}
	my_close(fd);
	return 0;
}

/*
* function: tcp_disconnect()
* return: 0 if disconnected, else 1
* brief: Disable TCP connection or UDP
* parameters: none
* example: tcp_disconnect();
*/
int tcp_disconnect()
{
	char *str = "AT+CIPCLOSE";
	int fd = my_open("/dev/ttyS0", 0);
	my_write(fd, str, strlen(str));
	str = "";
	if (my_read(fd, str, 256) == 0)
	{
		my_close(fd);
		return 1;
	}

	my_close(fd);
	return 0;
}


/*
* function: tcp_status()
* return: void
* brief: give status of tcp connection
* parameters: none
* example: wifi_status()
*/
void tcp_status()
{
	char * str = "AT+CIPSTATUS";
	int fd = my_open("/dev/ttyS0", 0);
	my_write(fd, str, strlen(str));
	while (true)
	{
		my_read(fd, str, 256);
		if (str == "OK") break;
		printf("%s \n", str);
	}

	my_close(fd);

}

/*
*function: tcp_send_data(char* data)
*return: void
*brief: send data to tcp server
*parameters: char* data
*example: tcp_send_data("the test is true");
*/
void tcp_send_data(char* data)
{
	char* str = "AT+CIPSEND=256";
	int fd = my_open("/dev/ttyS0", 0);
	my_write(fd, str, strlen(str));
	char * result;
	my_read(fd, result, 256);
	if(result == ">")
	{
		char * send = "/receiver.php?test=";
		strcat(send, data);
		my_write(fd, send, strlen(send);
	}
	else
	{
		printf("erreur lors de l'envoie du fichier");
	}
	my_close(fd);
}

/*
* function: esp8266(int argc, char **argv)
* return: void
* brief: main function of the module esp8266
* parameters: int argc, char **argv
* example: esp8266(2, ["esp8266"]["list"])
*/
void esp8266(int argc, char **argv)
{
	if (argv[1] == "list")
	{
		wifi_list();
	}
	else if (argv[1] == "connect")
	{
		if (argc < 4) printf("usage: esp8266 connect <wifi_ssid>\n");
		else wifi_connect(argv[2], argv[3]);
	}
	else if (argv[1] == "disconnect")
	{
		wifi_disconnect();
	}
	else if (argv[1] == "tcpconnect")
	{
		if (argc < 5) printf("usage: esp8266 tcpconnect <type> <address> <port>\n");
		else tcp_connect(argv[2], argv[3], argv[4]);
	}
	else if (argv[1] == "tcpdisconnect")
	{
		tcp_disconnect();
	}
	else if (argv[1] == "send")
	{
	if(argc < 3) printf("usage: esp8266 send <data>");
	else	tcp_send_data(argv[2]);
	}
	else if (argv[1] == "tcpstatus")
	{
		tcp_status();
	}
	else if (argv[1] == "help")
	{
		print("connect \t disconnect \t list \n tcpconnect \t tcpdisconnect \t tcpstatus \t send");
	}
	else
	{
		printf("usage: esp8266 <command>, help to see commands \n");
	}
}

