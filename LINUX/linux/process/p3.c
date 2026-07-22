#include<stdio.h>
#include<unistd.h>
int main()
{
	if(fork()==0)
	{
		printf("child 1ppid=%d pid=%d\n",getppid(),getpid());
		if(fork()==0)
		{
			printf("child 2ppid=%d pid=%d\n",getppid(),getpid());
			if(fork()==0)
			{
			printf("child-3, ppid : %d pid : %d\n",getpid(),getppid());
      			}	
		}
	}
	else
	{
	printf("parent pid : %d ppid : %d\n",getpid(),getppid());
}


}

