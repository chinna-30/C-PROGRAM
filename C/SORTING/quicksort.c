#include<stdio.h>
int partion(int *,int ,int);
void quicksort(int *,int ,int);
int main()
{
	int a[]={70,45,60,50,40,20,10,30};
	int i,n=sizeof a/sizeof a[0];
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");

}
void quicksort(int *a,int i,int j)
{
	if(i<j)
	{
	int p=partion(a,i,j);
	quicksort(a,i,p-1);
        quicksort(a,p+1,j);

	}
}
int partion(int *a,int i,int j)
{
	int low=i,high=j,pivot=a[low],temp;
	i=low+1;
while(i<=j)
{
	while(i<=j&&pivot>a[i])
		i++;
	while(pivot<a[j])
		j--;
	if(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	else
	{
		a[low]=a[j];
		a[j]=pivot;
		return j;
	}
}
}

