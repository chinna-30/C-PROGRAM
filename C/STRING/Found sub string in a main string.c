
/*#include<stdio.h>
int main()
{
        int i,j;
        char a[20],b[20];
        printf("enter string 1:\n");
        scanf("%s",a);
        printf("enter string 2:\n");
        scanf("%s",b);
	for(i=0;a[i];i++)
	{
		if(a[i]==b[0])
		{
			for(j=0;b[j];j++)
			{
				if(a[i+j]!=b[j])
				break;
			}	
		}
	}	
        if(b[j]=='\0')
        puts("string present ");
	else 
        puts("string not present");
}
*/
#include<stdio.h>
int main()
{
        int i,j,k;
        char a[20],b[20];
        printf("enter string 1:\n");
        scanf("%s",a);
        printf("enter string 2:\n");
        scanf("%s",b);
        for(i=0;a[i];i++)
        {
                if(a[i]==b[0])
                {
                        for(j=i,k=0;b[k];j++,k++)
                        {
                                if(a[j]!=b[k])
                                break;
                        }
                }
        }
        if(b[j]=='\0')
        puts("string present ");
        else
        puts("string not present");
}

