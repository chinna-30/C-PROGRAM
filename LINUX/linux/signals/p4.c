#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void handler(int sig)
{
    printf("Alarm received!\n");
 sleep(2); signal(SIGALRM, SIG_DFL);
 alarm(2);
}

int main()
{
    signal(SIGALRM, handler);

    alarm(3);

   
while(1);


}
