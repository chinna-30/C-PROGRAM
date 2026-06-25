/*
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char a[20];
	scanf("%s",a);
	int i,j,n=strlen(a),sum=0,p=0;
	for(i=n-1;i>=0;i--)
	{		
		
		if((a[i]>=48)&&(a[i]<=57))
			j=a[i]-48;
		else if ((a[i]>=97)&&(a[i]<=103))
                        j=a[i]-87;
		sum=sum+((pow(17,p++))*j);
	}
	printf("sum=%d\n",sum);
}
*/
#include<stdio.h>
int main()
{
        char a[20];
        scanf("%s",a);
        int i,j,n,sum=0;
	for(n=0;a[n];n++);
	for(i=0;i<n;i++)
        {
               j = ((a[i]>='0')&&(a[i]<='9')) ? a[i]-'0' : a[i]-'W';
               sum=sum*17+j;
        }
        printf("sum=%d\n",sum);
}

