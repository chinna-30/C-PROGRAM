#include<stdio.h>
int main()
{
	int i,j,n,count=1,temp;
	int a[10] = {10,80,40,30,10,20,40,10,10,30};
	n=( sizeof a/sizeof a[0]);
	for(i=0;i<n;i++)
	{
		count=1;
		temp=a[i];
		for(j=0;j<i;j++)
		{
		if(a[i]==a[j])
		break;
		}
		if(i==j)
		{
		for(j=i+1;j<n;j++)
		if(a[i]==a[j])
		count++;
		printf("%d ----> %d\n",temp,count);
	}
	}
		printf("\n");
}
