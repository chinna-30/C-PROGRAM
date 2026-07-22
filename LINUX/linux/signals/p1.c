#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<signal.h>
void isr(int n)
{
	puts("in isr");
	printf("%d\n",n);


}
int main()
{
	int fd[2];
	if(pipe(fd)<0)
	{
		perror("pipe");
		return 0;
	
	}

	if(fork()==0)
	{
		close(fd[0]);
		char a[20];
		while(1){
		read(fd[0],a,sizeof(a));
		//printf("child read:%s\n",a);
		}

						
	}
	else
	{

		close(fd[0]);
		char b[20];
		signal(13,isr);
		while(1){
		
			scanf("%s",b);
			write(fd[1],b,strlen(b)+1);
		}

	}

	
}
