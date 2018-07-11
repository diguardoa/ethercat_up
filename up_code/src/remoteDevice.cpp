/* remoteDevice.cpp
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/

#include "project/remoteDevice.hpp"

void RemoteDevice::error(char *msg)
{
	perror(msg);
	//exit(1);
}

RemoteDevice::RemoteDevice(char *address, int my_port, int device_port)
{
	portno = my_port;
	portdevice = device_port; 

	/*
	* Socket that receives values
	*/
	sockfd = socket(AF_INET, SOCK_DGRAM, 0); // AF_INET: look for the address in the "net domain" (and not in the process domain)
	if (sockfd < 0)
		this->error("ERROR opening socket");

	bzero((char *) &serv_addr, sizeof(serv_addr));

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(portno);
	serv_addr.sin_addr.s_addr = INADDR_ANY;

	if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0)
		this->error("ERROR on binding");

	fromlen = sizeof(struct sockaddr_in); 

	// Set timeout not to block everything
	read_timeout.tv_sec = 0;
	read_timeout.tv_usec = 10; // expressed in microsecond
	setsockopt(sockfd, SOL_SOCKET, SO_RCVTIMEO, &read_timeout, sizeof(read_timeout));	// set the timeout

	/*
	* Socket that sends values
	*/
	newsockfd = socket(AF_INET, SOCK_DGRAM, 0); 
	if (newsockfd < 0)
		this->error("ERROR opening socket");
	cli_addr.sin_family = AF_INET;
	cli_addr.sin_port = htons(portdevice);
	inet_pton(AF_INET,address,&cli_addr.sin_addr);
}

int RemoteDevice::receive(char *buffer)
{
	n = recvfrom(sockfd, buffer, 1024, 0, (struct sockaddr *)&cli_addr2, &fromlen);
	return n;
	/*
	if (n<0)
	{	
		//this->error("recvfrom");
	}else{
		//printf(" %d \n",n);
	}
	*/
}

int RemoteDevice::send(char *buffer, int sizeToSend)
{
	n = sendto(newsockfd, buffer, sizeToSend, 0, (struct sockaddr *)&cli_addr, fromlen);
	printf("%d\n", n);
	return n;
}