#include<stdio.h>
int main()
{
    int i,j,s,l,n;
    printf("enter n value:\n");
    scanf("%d",&n);
    for(i=-n;i<=n;i++)
    {
        l = (i<0) ? -i : i;
        // spaces
        for(s=0;s<n-l;s++)
            printf("  ");
        for(j=0;j<2*l+1;j++)
        {
            switch(n-l)
            {
                case 1: printf("%c ", j+65); break;     // A B C
                case 2: printf("%d ", j+1); break;      // 1 2 3
                case 3: printf("* "); break;            // stars
                case 4: printf("%d ", j*2+2); break;    // 2 4 6
                default: printf("1 ");                  // center
            }
        }
        printf("\n");
    }
}
