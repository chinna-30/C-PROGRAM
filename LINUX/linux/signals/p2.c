#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void isr(int n)
{
	puts("in isr");
	alarm(1);
}
int main()
{
	signal(14,isr);
	alarm(1);
	while(1);
}
