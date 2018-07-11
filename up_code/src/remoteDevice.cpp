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

RemoteDevice::RemoteDevice(int address, int my_port, int device_port)
{
	sockfd = socket(AF_INET, SOCK_DGRAM, 0); // AF_INET: look for the address in the "net domain" (and not in the process domain)
	if (sockfd < 0)
		this->error("ERROR opening socket");

	bzero((char *) &serv_addr, sizeof(serv_addr));
	portno = my_port;
	portdevice = device_port; 
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(portno);
	serv_addr.sin_addr.s_addr = INADDR_ANY;

	if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0)
		this->error("ERROR on binding");

	fromlen = sizeof(struct sockaddr_in); 

	// Set timeout not to block everything
	read_timeout.tv_sec = 0;
	read_timeout.tv_usec = 10; // expressed in microsecond
	setsockopt(sockfd, SOL_SOCKET, SO_RCVTIMEO, &read_timeout, sizeof(read_timeout));

}

void RemoteDevice::receive(void)
{
	n = recvfrom(sockfd, buffer, 1024, 0, (struct sockaddr *)&cli_addr, &fromlen);
	if (n<0)
		this->error("recvfrom");
	printf(" %d \n",n);
}