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
		int i;
		while(1)
		{
			read(fd[0],a,sizeof(a));
			printf("child read=%s\n",a);
			for(i=0;a[i]!='\0';i++)
			{
				if(a[i]>='a'&&a[i]<='z')
				a[i]=a[i]^32;
			}a[i]='\0';

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
