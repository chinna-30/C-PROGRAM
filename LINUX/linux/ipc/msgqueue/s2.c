#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
struct msg
{
	long mtype;
	char mtext[20];
};
int main()
{
	int id=msgget(3,IPC_CREAT|0664);
	struct msg v;
	while(1)
	{
		msgrcv(id,&v,sizeof(v.mtext),1,0);
		printf("%s\n",v.mtext);

	}


}
