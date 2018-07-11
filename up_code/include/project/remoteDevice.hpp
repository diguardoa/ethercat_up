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
#include <arpa/inet.h>

class RemoteDevice {
private:
	int sockfd; // file descriptor
	int newsockfd;
	int portno; // port the socket accepts connection
	int portdevice;
	int clilen; // size of the address of the client (needed for the accept system call)
	int n; // contains the number of characters read or written
	//char buffer[256];

	socklen_t fromlen;
	unsigned int tolen;
	struct timeval read_timeout;
	struct sockaddr_in serv_addr; //
	struct sockaddr_in cli_addr;
	struct sockaddr_in cli_addr2;

	struct hostent *hp;

	void error(char *msg);

public:
	RemoteDevice(char *address, int my_port, int device_port);

	int receive(char *);

	int send(char *, int);
};



#endif
