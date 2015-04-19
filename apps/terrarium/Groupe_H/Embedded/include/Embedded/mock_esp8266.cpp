#include <sys/types.h>
#include "mock_esp8266.h"
#include "string.h"
#include "myErrno.h"

int mock_esp8266::mock_open(const char *path, int oflag){
	if (strcmp("/dev/ttyS0", path) && (oflag == 0)){
		mock_esp8266::fd = 32987;
		return mock_esp8266::fd;
	}else{
		mock_esp8266::fd = -1;
		return -1;
	}
}

int mock_esp8266::mock_close(int fd){
	if (mock_esp8266::fd == fd && (fd > 0)){
		mock_esp8266::fd = -1;
		return 0;
	}
	else
		return -1;
}

ssize_t mock_esp8266::mock_read(int fd, void *buf, size_t nbytes){
	if(mock_esp8266::fd == fd){
		return  nbytes;
	}
	return 0;
	

}

ssize_t mock_esp8266::mock_write(int fd, const void *buf, size_t nbytes){
	return 0;
}


int main(){
	return 0;
}

