/*
 *
 * File : mock_esp8266.cpp
 *
 * Author : GROUPE_H
 *
 *
 */

#include <sys/types.h>
#include "mock_esp8266.h"
#include "string.h"
#include <errno.h>
#include <stdio.h>


// Mock de OPEN
int mock_esp8266::mock_open(const char *path, int oflag){
	if (strcmp("/dev/ttyS0", path) && (oflag == 0)){
		mock_esp8266::fd = 32987;
		return mock_esp8266::fd;
	}else{	
		printf("Open failed ! %s\n", strerror(errno));
		mock_esp8266::fd = -1;
		return -1;
	}
}

// Mock de CLOSE
int mock_esp8266::mock_close(int fd){
	if (mock_esp8266::fd == fd && (fd > 0)){
		mock_esp8266::fd = -1;
		return 0;
	}
	else{
		printf("Close failed ! %s\n", strerror(errno));
		return -1;
	}
}

// Mock de READ
ssize_t mock_esp8266::mock_read(int fd, void *buf, size_t nbytes){
	
	if((mock_esp8266::fd == fd) && (sizeof(buf)!=0)){	
		return  nbytes;
	}else{
		printf("Read failed ! %s\n", strerror(errno));
		return -1;
	}	

}

// Mock de WRITE
ssize_t mock_esp8266::mock_write(int fd, const void *buf, size_t nbytes){
	
	if((mock_esp8266::fd == fd) && (sizeof(buf)!=0)){	
		return  nbytes;
	}else{
		printf("Write failed ! %s\n", strerror(errno));
		return -1;
	}
}





// Classification du buffer recu en fonction de son type, plus d'infos sur:
// https://theadventuresofarduino.files.wordpress.com/2014/08/esp8266eng.pdf
void mock_esp8266::mock_classification(void *buf, size_t nbytes){
	--nbytes;	
	if (strcmp((char *) buf, "A") && strcmp((char *) buf+1,"T") && strcmp((char *) buf+2,"+")){
	
	}else{
		printf("Classification error:  Not a valid instruction %s\n", strerror(errno));
	
	}
}

// Processing du type "Test Command"
void mock_esp8266::mock_testCmdProcess(void *cmdBuf){

}

// Processing du type "Query Command"
void mock_esp8266::mock_queryCmdProcess(void *cmdBuf){

}

// Processing du type "Set Command"
void mock_esp8266::mock_setCmdProcess(void *cmdBuf){

}

// Processing du type "Run"
void mock_esp8266::mock_runProcess(void *cmdBuf){

}


int main(){
	return 0;
}
