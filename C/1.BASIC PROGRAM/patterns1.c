/*
#include<stdio.h>
int main()
{
        int i,j,s,num,n;
        printf("enter n value: \n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
		num=1;
                for(s=0;s<n-i+1;s++)
                        printf("  ");
                for(j=0;j<i+1;j++)
		{
                        printf("   %d",num);
			num=num*(i-j)/(j+1);
		}
                printf("\n");
        }
}
*/
/*
#include<stdio.h>
int main()
{
        int i,j,s,n;
        printf("enter n value: \n");
        scanf("%d",&n);
        for(i=0;i<=n;i++)
        {
                for(j=-n;j<=n;j++)
                {
			if((j>-i)&&(j<i))
                        printf("  ");
			else
			printf("* ");
                }
                printf("\n");
        }
}
*/
/*
#include<stdio.h>
int main()
{
        int i,j,s,n;
	char ch='A';
        printf("enter n value: \n");
        scanf("%d",&n);
	ch=ch+n;
        for(i=0;i<=n;i++)
        {
                for(j=-n;j<=n;j++)
                {
                        if((j>-i)&&(j<i))
                        printf("  ");
			else
			{
                        if(j<0)
			printf("%c ",ch+j);
			else		
                        printf("%c ",ch-j);
               		}
		}
                printf("\n");
        }
}
*/
/*
#include<stdio.h>
int main()
{
        int i,j,s,n;
        char ch='A';
        printf("enter n value: \n");
        scanf("%d",&n);
        ch=ch+n;
        for(i=0;i<=n;i++)
        {
                for(j=-n;j<=n;j++)
                {
                        if((-(n-i)<j)&&(n-i)>j)
                        printf("  ");
                        else
                        {
                        if(j<0)
                        printf("%c ",ch+j);
                        else
                        printf("%c ",ch-j);
                        }
                }
                printf("\n");
        }
}
*/
//
#include<stdio.h>
int main()
{
        int i,j,s,n;
        printf("enter n value: \n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=-n;j<=n;j++)
               {
			if((-(n-i)<=j)&&(n-i)>=j)
                        printf("  ");
			else
			{
                        if(j<=0)
                        printf("%d ",j+n+1);
                        else 
			printf("%d ",n-j+1);
			}
                }
                printf("\n");
        }
}



