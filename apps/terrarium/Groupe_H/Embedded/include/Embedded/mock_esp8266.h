/*
 *
 * File : mock_esp8266.h
 *
 * Author : GROUPE_H
 *
 *
 */

#include <sys/types.h>

// Mock de esp8266
class mock_esp8266 {

	static int fd;

	public:
		int 	mock_open(const char *path, int oflag);
		int     mock_close(int fd);
		ssize_t mock_read(int fd, void *buf, size_t nbytes);
		ssize_t mock_write(int fd, const void *buf, size_t nbytes);

	private:
		void mock_classification(void *buf, size_t nbytes);
		void mock_testCmdProcess(void *cmdBuf);
		void mock_queryCmdProcess(void *cmdBuf);
		void mock_setCmdProcess(void *cmdBuf);
		void mock_runProcess(void *cmdBuf);



};
