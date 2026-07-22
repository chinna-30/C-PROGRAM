#include<stdio.h>
int main()
{
	int i,j,k;
	char a[20],b[20];
	printf("enter string 1:\n");
	scanf("%s",a);
	printf("enter string 2:\n");
	scanf("%s",b);
	for(i=0;b[i];i++)
	{
		if(b[i]!=a[i])
		break;			
	}
	if(b[i]==a[i])
	puts("string equal ");
	else
		puts("string not equal");
				
				

}
