#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/msg.h>
#include<sys/ipc.h>
struct msg
{
	long mtype;
	char mtext[20];
};
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("Usage:./a.out mtype mtext");
		return 0;
	}
	int id=msgget(5,IPC_CREAT|0664);
	if(id<0)
	{
		perror("msgget");
		return 0;
	}
	printf("Msg Queue id=%d\n",id);
	struct msg v;
	v.mtype=atoi(argv[1]);
	strcpy(v.mtext,argv[2]);
	int ret=msgsnd(id,&v,strlen(v.mtext)+1,0);
	printf("ret=%d\n",ret);
	printf("mtype=%ld m.text=%s\n",v.mtype,v.mtext);



}
