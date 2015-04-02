#include <unistd.h>

void wifi_list(FAR struct nsh_vtbl_s *vtbl)
{
	char * str = "AT+CWLAP";
	int fd = open ("/dev/ttyS0");
	write (fd, str, 8);
	str = read (fr, str, 2000);
	nsh_output(vtbl, str);
}

void wifi_connect()
{

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

