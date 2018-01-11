#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main()
{

//making socket
int fd = socket(AF_INET, SOCK_STREAM, 0);
if (fd == -1) //an error

//implement a socket
if (bind(fd,(struct sockaddr *) &addr, sizeof(addr)) == -1){
   //error
}

//listen for connections 
int backlog = 10; //number of clients that can sim. queue to wait for server connection
if (listen(fd, backlog) == -1){
    //an error
}

//looping and accepting connections 
while (backlog == 10){    // this isn't really checking anything ???
   struct sockaddr_in clientaddr; 
   socklen_t          clientaddr_len = sizeof(cliadddr);

   int connfd = accept(fd, (struct sockaddr *) &cliaddr, &cliaddr_len);
   if (connfd == -1){
        //an error
   }
}
