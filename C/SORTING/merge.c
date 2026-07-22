#include<stdio.h>
#include<stdlib.h>
void split(int *a,int i,int j);
void merge(int *a,int l,int mid,int h);
int main()
{
	int n,i;
	scanf("%d",&n);
	int *a=(int *)malloc(n*sizeof(int));
	printf("Enter array \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	split(a,0,n-1);
	printf("After sorting\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
void split(int *a,int i,int j)
{
        if(i<j){
        int m=((i+j)/2);
        split(a,i,m);
        split(a,m+1,j);
        merge(a,i,m,j);
        }
}
void merge(int *a,int l,int mid,int h)
{
        int n1=mid-l+1;int n2=h-mid;
        int L[n1],R[n2];int i=0,j=0,k;
        for(i = 0; i < n1; i++)
        L[i] = a[l + i];

        for(j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];

        i=0;j=0;k=l;
        while(i<n1&&j<n2)
        if(L[i]<=R[j])
        a[k++]=L[i++];
        else
        a[k++]=R[j++];

        while(i<n1)
        a[k++]=L[i++];
        while(j<n2)
        a[k++]=R[j++];

}
