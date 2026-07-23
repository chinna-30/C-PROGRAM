#include<stdio.h>
#define max 3
int a[max];
int top=0;
void push()
{
	if(top==max)
	{
		puts("stack is overflow\n");
		return;
	}
	printf("Enter thye data to insert:\n");
	scanf("%d",&a[top]);
	top++;
}
void pop()
{
	if(top==0)
	{
		puts("stack is underflow");
		return;
	}
	top--;
	a[top]=0;
}
void display()
{
	for(int i=0;i<top;i++)
		printf("%d ",a[i]);
	printf("\n");
}
int main()
{
	int op;
	while(1)
	{
		printf("Enter an option 1)push 2)pop 3)display 4)exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:display();break;
			case 4:return 0;break;
			default:printf("Invalid Data\n");return 0;
		}
	}
}
