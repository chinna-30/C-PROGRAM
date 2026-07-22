#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd[2];
	pipe(fd);
	if(fork()==0)
	{
		char a[20];
		while(1)
		{
			read(fd[0],a,sizeof(a));
			printf("child read=%s\n",a);
			printf("child Enter string\n");
			scanf(" %[^\n]",a);
			write(fd[1],a,strlen(a));
			usleep(1000);
		}

	}
	else
	{
		char b[20];
		while(1){
		printf("parent Enter a string:\n");
		scanf(" %[^\n]",b);
		write(fd[1],b,strlen(b)+1);
		usleep(1000);
		read(fd[0],b,sizeof b);
		printf("parent read:%s\n",b);
		}

	}
}
