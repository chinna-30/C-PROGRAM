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

                if((a[i]>='0')&&(a[i]<='9'))
                        j=a[i]-'0';
                else if ((a[i]>='a')&&(a[i]<='g'))
                        j=a[i]-'a'+10;
                sum=sum+((pow(17,p++))*j);
        }
        printf("sum=%d\n",sum);
}
