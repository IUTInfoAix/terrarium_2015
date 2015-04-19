/*
 *
 * File : mock_esp8266.h
 *
 * Author : GROUPE_H
 *
 *
 */

#include <sys/types.h>
#include <string.h>
#include <string>
#include <vector>
// Mock de esp8266
namespace mock_esp8266 {

	int fd;
	
	// Settings	
	std::string addr;
	int port;
	int mode;
	std::string ssid;
	std::string pwd = "";
	int chl = -1;
	int Ecn = -1;
	
	bool APJoined = false;
	std::string lastResponse;

	std::string** APs;
	// Creation de points d'accès wifi virtuels
	// map < ssid, password >
	//std::map < std::string, std::vector<std::string> > APs;
	int nAPs = 2;

	int 	mock_open(const char *path, int oflag);
	int     mock_close(int fd);
	ssize_t mock_read(int fd, void *buf, size_t nbytes);
	ssize_t mock_write(int fd, const void *buf, size_t nbytes);

	void mock_classification(const void *buf, size_t nbytes);
	void mock_testCmdProcess(std::string instr);
	void mock_queryCmdProcess(std::string instr);
	void mock_setCmdProcess(std::string instr);
	void mock_runProcess(std::string instr);



};
