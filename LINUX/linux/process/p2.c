// single parent 3 child
#include<stdio.h>
#include<unistd.h>
int main()
{
	if(fork()==0)
	{
		puts("in child 1");
		printf("ppid=%d pid=%d\n",getppid(),getpid());
	}
	else if(fork()==0)
	{
		puts("in child 2");
		printf("ppid=%d pid=%d\n",getppid(),getpid());
	}
	else if(fork()==0)
	{
		puts("in child 3");
		printf("ppid=%d pid=%d\n",getppid(),getpid());
	}
	else 
	{
		puts("in parent");
		printf("ppid=%d pid=%d\n",getppid(),getpid());
	}
}


