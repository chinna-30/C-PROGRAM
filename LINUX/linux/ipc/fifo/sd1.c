#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>
int main()
{
	int fd;
	char str[20];
	mkfifo("fifo",0664);
	perror("fifo");
	fd=open("fifo",O_WRONLY);
	if(fd<0)
	{
		perror("open");
		return 0;
	}
	while(1)
	{
		printf("Enter string");
		scanf("%s",str);
		write(fd,str,strlen(str)+1);
	}



}

