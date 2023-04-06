/* This client connects to the server and 
   sends requistions to the server.
*/
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/tcp.h>

#define BUFFER_SIZE 1024
#define PORT 8080


int main(int argc, char *argv[]) {
    if (argc < 3){
        printf("Usage: %s <ip address> <list of parameters>\n", argv[0]);
        exit(0);
    }


    return 0;
}
