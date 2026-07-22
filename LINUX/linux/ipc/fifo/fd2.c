#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
int main()
{
	int fd1,fd2;
	mkfifo("f1",0664);
	mkfifo("f2",0664);
	perror("mkfifo");
	fd1=open("f1",O_RDONLY);
	fd2=open("f2",O_WRONLY);
	if((fd1||fd2)<0)
	{
		perror("open");
	}
	if(fork()==0)
	{
		char a[20];
		while(1){
			read(fd1,a,sizeof a);
			printf("%s\n",a);
		}	

	}
	else
	{
		char b[20];
		while(1)
		{
			scanf("%s",b);
			write(fd2,b,strlen(b)+1);
		}

	}
}
