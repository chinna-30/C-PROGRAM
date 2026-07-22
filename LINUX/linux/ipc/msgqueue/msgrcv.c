#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<sys/types.h>
struct msg
{
	long mtype;
	char mtext[20];
};
int main(int argc,char * argv[])
{
	if(argc!=2)
	{
		printf("Usage:./a.out mtype\n");
		return 0;
	}
	int id=msgget(5,IPC_CREAT|0664);
	if(id<0)
	{
		perror("msgrcv");
		return 0;
	}
	struct msg v;
	int msgtype=atoi(argv[1]);
	int ret=msgrcv(id,&v,sizeof(v.mtext),msgtype,0);
	printf("mtype=%ld mtext=%s\n",v.mtype,v.mtext);



}
