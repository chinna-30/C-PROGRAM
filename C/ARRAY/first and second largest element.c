/*1st biggest number

#include<stdio.h>
int main()
{
        int a[] = {45,34,78,38,89,12,56,67,24,2};
        int i,big,n=sizeof a/sizeof a[0];
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
        printf("\n");
	for(i=1;i<n;i++)
	{
        big=a[0];
        if(a[i]>a[0]) 
	a[0]=a[i];
	}
	printf("big no in array list %d\n",big);
}
*/


//second biggest number\

#include<stdio.h>
int main()
{
        int a[] = {45,34,78,38,89,12,56,67,24,2};
        int i,big1,big2,n=sizeof a/sizeof a[0];
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
        printf("\n");
	for(i=0;i<n;i++)
	{
	if(a[i]>a[0])
	{
		a[1]=a[0];
		a[0]=a[i];
	}
	else if((a[i]>a[1])&&(a[i]!=a[0]))
		a[1]=a[i];
	}
        if(a[1]>a[0])
        big1=a[1],big2=a[0];
	else
	big1=a[0],big2=a[1];		
        printf("big no in array list 1st %d and 2nd %d\n",big1,big2);
	
}

