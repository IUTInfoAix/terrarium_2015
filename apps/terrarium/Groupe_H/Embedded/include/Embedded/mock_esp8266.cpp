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
#include <errno.h>
#include <stdio.h>
#include <string>
#include <string.h>

using namespace std;


// Mock de OPEN
int mock_esp8266::mock_open(const char *path, int oflag){

	// Initialisation des APs

	APs = new std::string*[mock_esp8266::nAPs];	
	for (int i = 0; i < mock_esp8266::nAPs; ++i)
		APs[i] = new std::string[4];
	APs[0][1]="abc"; // ssid "abc"
	APs[0][2]="abc"; // passwd "abc"
	APs[0][3]="1"; // chanel 1
	APs[0][4]="1"; // Encryption Wep


	APs[1][1]="wifi2"; // ssid "wifi2"
	APs[1][2]="azerty"; // passwd "abc"
	APs[1][3]="10"; // chanel 1
	APs[1][4]="2"; // Encryption Wep




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
int mock_esp8266::mock_read(int fd, void *buf, size_t nbytes){
	
	if(mock_esp8266::fd == fd){	
		if (nbytes <= lastResponse.size()){
			buf = (char *) lastResponse.c_str();
			return  nbytes;
		}else{
			buf = (char*) lastResponse.substr(0,nbytes-1).c_str();
			return nbytes;
		}
			
	}else{
		printf("Read failed ! %s\n", strerror(errno));
		return -1;
	}	

}

// Mock de WRITE
int mock_esp8266::mock_write(int fd, const void *buf, size_t nbytes){
	
	if((mock_esp8266::fd == fd) && (sizeof(buf)!=0)){	
		mock_esp8266::mock_classification(&buf, nbytes);
		return  nbytes;
	}else{
		printf("Write failed ! %s\n", strerror(errno));
		return -1;
	}
}





// Classification du buffer recu en fonction de son type, plus d'infos sur:
// https://theadventuresofarduino.files.wordpress.com/2014/08/esp8266eng.pdf
void mock_esp8266::mock_classification(const void *buf, size_t nbytes){

	string instr ( (char *) buf );
	
	if ( instr.substr(0, 2).compare("AT+")){
		string subInstr (instr.substr(3, nbytes-1));
		if( instr[nbytes-1] == '?' && instr[nbytes-2] == '=' ){
			mock_esp8266::mock_testCmdProcess(subInstr);	
		}else if( instr[nbytes-1] == '?'){
			mock_esp8266::mock_queryCmdProcess(subInstr);
		}else if( instr.find("=") > 0){
			mock_esp8266::mock_setCmdProcess(subInstr);
		}else{
			mock_esp8266::mock_runProcess(subInstr);
		}
	
	}else{
	
	}
}

// Processing du type "Test Command"
void mock_esp8266::mock_testCmdProcess(string instr){

	int sizeInstr = instr.size();
	instr = instr.substr(0,sizeInstr-2);
	string response;

	if( instr == "CWMODE" ){
		response = "OK";	
	}
	
	mock_esp8266::lastResponse = response;

}

// Processing du type "Query Command"
void mock_esp8266::mock_queryCmdProcess(string instr){

	instr = instr.substr(0,instr.size()-1);
	string response;
	if(instr == "CWMODE"){
		response = "OK";
	}else if(instr == "CWJAP"){
		if ( mock_esp8266::APJoined)
			response = "OK";
	}else if(instr == "CWQAP"){
		if ( !mock_esp8266::APJoined )
			response = "OK";
	}

	mock_esp8266::lastResponse = response;
}

// Processing du type "Set Command"
void mock_esp8266::mock_setCmdProcess(string instr){
	
	unsigned spl = instr.find("=");
	string val = instr.substr(spl+1,instr.size()-1);
	instr = instr.substr(0, spl-1);
	string response;

	if (instr == "CWMODE"){
		mock_esp8266::mode = stoi(val);	
	}else if(instr == "CWJAP"){
		mock_esp8266::ssid = instr.substr(0,instr.find(",")-1);
		mock_esp8266::ssid = instr.substr(instr.find(",")+1, instr.size()-1);
	}


	mock_esp8266::lastResponse =  response;
}

// Processing du type "Run"
void mock_esp8266::mock_runProcess(string instr){
	
	string response;
	if (instr == "RST"){
		response = "OK"; 
	}else if (instr == "CWJAP"){
		for (int i=0; i<mock_esp8266::nAPs -1; ++i){
			if( mock_esp8266::APs[i][0] == mock_esp8266::ssid)
				if (mock_esp8266::APs[i][1] == mock_esp8266::pwd)
					mock_esp8266::APJoined = true;	
		}
	}else if (instr == "CWQAP"){
		if ( mock_esp8266::APJoined ){
			mock_esp8266::APJoined = false;	
		}
	}

	mock_esp8266::lastResponse =  response;
}


