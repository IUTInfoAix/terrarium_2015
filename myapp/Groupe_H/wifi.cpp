
void wifi_list()
{

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

