// simplex communication
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	int fd[2];
	
	pipe(fd);
	printf("fd[0]=%d fd[1]=%d\n",fd[0],fd[1]);
	if(fork()==0)
	{

		char b[20];
		while(1){
		read(fd[0],b,sizeof b);
		printf("child read=%s\n",b);
		}
	}
	else
	{
		char a[20];
		while(1){
		printf("Enter a string \n");
		scanf(" %[^\n]",a);
		write(fd[1],a,strlen(a)+1);
		usleep(1000);
		}
	}
}
