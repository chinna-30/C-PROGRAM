#include<stdio.h>
int main()
{
        int n,i,j=0,c=0;
        scanf("%d",&n);
        int a[n],r[n];
        for(i=0;i<n;i++)
        scanf("%d",a+i);
        for(i=0;i<n;i++)
        if(a[i]!=0)
        r[j++]=a[i];
        else
        c++;
        while(c)
        {
        r[j++]=0;
        c--;
        }
        for(i=0;i<n;i++)
        printf("%d ",r[i]);
}
