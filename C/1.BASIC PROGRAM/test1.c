#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",a+i);
	for(i=0;i<n;i++)
	{
	if(a[i]==0)
	for(j=i;j<n-1;j++)
	a[j]=a[j+1];
	a[n-1]=0;
	}
	if(a[0]==0){
	for(j=0;j<n-1;j++)
        a[j]=a[j+1];
        a[n-1]=0;
	}
	
	for(i=0;i<n;i++)
        printf("%d",a[i]);
}

