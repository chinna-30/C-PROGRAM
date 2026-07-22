#include<stdio.h>
int main()
{
	int a[]={1,6,2,8,4,0,3,5,7};
	int i,j,key,n=sizeof a/sizeof a[0];
	for(i=0;i<n;i++)
	{
		key=a[i];
		for(j=i-1;j>=0&&key<a[j];j--)
		a[j+1]=a[j];
		a[j+1]=key;
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
