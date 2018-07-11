/* remoteDevice.hpp
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/

#ifndef REMOTEDEVICE_H
#define REMOTEDEVICE_H

#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <netdb.h>
#include <unistd.h>

class RemoteDevice {
private:
	int sockfd; // file descriptor
	int newsockfd;
	int portno; // port the socket accepts connection
	int portdevice;
	int clilen; // size of the address of the client (needed for the accept system call)
	int n; // contains the number of characters read or written
	char buffer[256];

	socklen_t fromlen;
	struct timeval read_timeout;
	struct sockaddr_in serv_addr; //
	struct sockaddr_in cli_addr;

	void error(char *msg);

public:
	RemoteDevice(int address, int my_port, int device_port);

	void receive();
};



#endif
