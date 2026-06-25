/*diamond(1,2,3,4,3,2,1)
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
		for(s=0;s<l;s++)
			printf(" ");
		for(j=0;j<n-l+1;j++)
			printf("* ");
		printf("\n");
	}
}
*/
/*diamond without space(1,3,5,3,1)
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
                for(s=0;s<l;s++)
                        printf(" ");
                for(j=0;j<2*(n-l)+1;j++)
                        printf("*");
                printf("\n");
        }
}
*/
/*(number print)
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
                for(j=0;j<2*(n-l)+1;j++)
		{
			if(j%2!=0)
                        printf("*");
			else
			printf("%d",n-l+1);
		}
		printf("\n");

        }
}
*/
/*
#include<stdio.h>
int main()
{
        int i,j,n;
        printf("enter n value: \n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                for(j=0;j<i+1;j++)
                {
                        if(j%2!=0)
                        printf("0");
                        else
                        printf("1");
                }
                printf("\n");

        }
}
*/
/*
#include<stdio.h>
int main()
{
        int i,j,n;
        printf("enter n value: \n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                for(j=0;j<i+1;j++)
                {
                        if(i%2==0)
                        printf("%d ",j*2+1);
                        else
                        printf("%d ",j*2+2);
                }
                printf("\n");

        }
}
*/
/*
#include<stdio.h>
int main()
{
        int i,j,n,m,d;
        printf("enter n value: \n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
		m=i+1;
		d=4;
                for(j=0;j<i+1;j++)
                {
                        printf("%d ",m);
                        m=m+d;
			d--;
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
        for(i=0;i<n;i++)
        {
    		for(s=0;s<n-i-1;s++)
                        printf("  ");
                for(j=0;j<(2*i)+1;j++)
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
                for(s=0;s<l;s++)
                        printf("  ");
                for(j=0;j<2*(n-l)+1;j++)
                        printf("%d ",j+1);
                printf("\n");
        }
}
*/
/*
#include<stdio.h>
int main()
{
        int i,j,n,m,d,a;
        printf("enter n value: \n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
	{
        for(j=1;j<=i;j++)
        printf("%d ",i*j);
	printf("\n");
	}
}
*/
//

#include<stdio.h>
int main()
{
        int i,j,n;
        printf("enter n value: \n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
	{
        for(j=0;j<i+1;j++)
	printf("%d ",(i+1)*(j+1));
	printf("\n");
        }
}
//


