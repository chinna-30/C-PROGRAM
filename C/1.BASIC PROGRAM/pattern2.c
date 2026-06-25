/*
#include<stdio.h>
int main()
{
        int i,j,s,l,n;
        printf("enter n value: \n");
        scanf("%d",&n);
        for(i=-n;i<=n;i++)
        {
                if(i<0)
                l=-i;
                else
                l=i;
		for(s=0;s<n-l;s++)
			printf(" ");
                for(j=0;j<l+1;j++)
                        printf("%d ",j+1);
                printf("\n");
        }
}
*/
/*
#include<stdio.h>
int main()
{
        int i,j,s,l,n;
        printf("enter n value: \n");
        scanf("%d",&n);
        for(i=-n;i<=n;i++)
        {
                if(i<0)
                l=-i;
                else
                l=i;
                for(s=0;s<n-l;s++)
                        printf(" ");
                for(j=0;j<2*l+1;j++)
                        printf("*");
                printf("\n");
        }
}

*/
//
#include<stdio.h>
int main()
{
        int i,j,s,l,n;
        printf("enter n value: \n");
        scanf("%d",&n);
        for(i=-n;i<=n;i++)
        {
                if(i<0)
                l=-i;
                else
                l=i;
                for(s=0;s<n-l;s++)
                        printf(" ");
                for(j=0;j<2*l+1;j++)
		{
			if(l==n-1)
			printf("%c",j+65);
			else if(l==n-2)
			printf("%d",j+1);
			else if(l==n-3)
			printf("*");
			else if(l==n-4)
			printf("%d",j*2+2);
			else if(l==0)
			printf("%d",i+1);
		}
		printf("\n");
        }
}
//


