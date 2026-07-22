#include<stdio.h>
#include<string.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	char str[20];
	int fd;
	mkfifo("fifo",0664);
	perror("fifo");
	fd=open("fifo",O_RDONLY);
	if(fd<0)
	{
		perror("open");
		return 0;
	}
	while(1)
	{
		read(fd,str,sizeof(str));
		printf("read:%s\n",str);

	}

}
