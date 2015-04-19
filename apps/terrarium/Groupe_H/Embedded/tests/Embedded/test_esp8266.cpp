#include <CppUTest/TestHarness.h>

extern "C"
{
    #include <esp8266.h>
    #include <mock_esp8266.h>
}
TEST_GROUP (Embedded)
{
    void setup()
    {	
	//Initialiser les 4 fonctions open write read close
	my_open = mock_esp8266::mock_open;
	my_write = mock_esp8266::mock_write;
	my_read = mock_esp8266::mock_read;
	my_close = mock_esp8266::mock_close;
    }
    void teardown()
    {
    }
};

void linkFunctions()
{
    
}

TEST(Embedded, wifi_list)
{
    wifi_list();
    CHECK_EQUAL(0, my_errno);		
}

TEST(Embedded, wifi_connect)
{
    CHECK_EQUAL(0, wifi_connect((char *)"abc", (char *)"abc"));
    CHECK_EQUAL(0, my_errno);
}

TEST(Embedded, wifi_disconnect)
{
    CHECK_EQUAL(0, wifi_disconnect());
    CHECK_EQUAL(0, my_errno);
}

TEST(Embedded, tcp_connect)
{
    CHECK_EQUAL(0, tcp_connect((char *)"TCP", (char *)"150.1.2.3", 25123));
    CHECK_EQUAL(0, my_errno);
}

TEST(Embedded, tcp_disconnect)
{
    CHECK_EQUAL(0, tcp_connect((char *)"TCP", (char *)"150.1.2.3", 25123));
    CHECK_EQUAL(0, wifi_disconnect());
    CHECK_EQUAL(0, my_errno);
}

TEST(Embedded, tcp_status)
{
    CHECK_EQUAL(0, tcp_connect((char *)"TCP", (char *)"150.1.2.3", 25123));
    tcp_status();
    CHECK_EQUAL(0, my_errno);
}
