#include<stdio.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<string.h>
#include<unistd.h>
int main()
{
	int csd,cport,len;
	char sendmsg[100],rcvmsg[100];
	struct sockaddr_in servaddr,cliaddr;
	printf("enter server port\n");
	scanf("%d",&cport);
	printf("%d\n",cport);
	csd=socket(AF_INET,SOCK_STREAM,0);
	if(csd<0)
		printf("cant create\n");
	else
		printf("socket is created\n");
	servaddr.sin_family=AF_INET;
	servaddr.sin_addr.s_addr=htonl(INADDR_ANY);//inet_addr("");
	servaddr.sin_port=htons(cport);
	if(connect(csd,(struct sockaddr*)&servaddr,sizeof(servaddr))<0)
		printf("cant connect");
	else
		printf("Connected");
	
	recv(csd,rcvmsg,100,0);
	printf("Welcome to VIT %s",rcvmsg);
	close(csd);
}
