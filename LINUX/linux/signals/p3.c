#include <stdio.h>
#include <unistd.h>

int main()
{
    alarm(5);      // Alarm after 5 seconds

    sleep(2);

    alarm(0);      // Cancel the alarm

    printf("Alarm cancelled\n");

    sleep(5);

    printf("Program finished\n");
}
