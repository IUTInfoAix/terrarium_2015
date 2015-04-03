//#include <unistd.h>
#include "bouchonWifi.h"
#include "string.h"

void wifi_list(FAR struct nsh_vtbl_s *vtbl)
{
	char *str = "AT+CWLAP";
	int fd = open ("/dev/ttyS0");
	write (fd, str, strlen(str));
	while (true)
	{
		read (fd, str, 256);
		if (str == "OK") break;
		nsh_output(vtbl, str);
		nsh_output(vtbl, "\n");
	}
}

void wifi_connect(FAR struct nsh_vtbl_s *vtbl, char *name, char *pass)
{
	char * str = "AT+CWJAP=\"";
	strcat (str, name);
	strcat (str, "\",\"");
	strcat (str, pass);
	strcat (str, "\"");
	int fd = open ("/dev/ttyS0");
	write (fd, str, strlen(str));
}

void wifi_status()
{

}

void wifi_disconnect()
{

}

void cmd_wifi(FAR struct nsh_vtbl_s *vtbl, int argc, char **argv)
{
	if (argv[1] == "list")
	{
		wifi_list(vtbl);
	}
	else if (argv[1] == "connect")
	{
		if (argc < 3) nsh_output(vtbl, "usage: esp8266 connect <wifi_ssid>");
		else wifi_connect();
	}
	else if (argv[1] == "status")
	{

	}
	else if (argv[1] == "disconnect")
	{

	}
	else
	{

	}
}

