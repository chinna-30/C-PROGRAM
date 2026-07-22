#include<stdio.h>
int main()
{
	int a,b,c;
	char op;
	printf("enter a,b values:\n");
	scanf("%d %d",&a,&b);
	printf("enter an operator:+,-,*,/,%%\n");
	scanf(" %c",&op);
	switch(op)
	{
	case '+':c=a+b;
			 break;
	case '-':c=a-b;
			 break;
	case '*':c=a*b;
			 break;
	case '/':c=a/b;
			 break;
	case '%':c=a%b;
			 break;
		default:printf("invalid operator\n");
			return 0;
	}
		printf("%d%c%d=%d\n",a,op,b,c);


}
