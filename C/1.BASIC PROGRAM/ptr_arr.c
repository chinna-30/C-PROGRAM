/*
#include<stdio.h>
int main()
{
	int i,j,a[][3] = { {10,20,30}, {40,50,60}, {70,80,90} };	
	int (*q)[3] = a;    

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",q[i][j]);
		printf("\n");
	}			  
}
*/
/*
#include<stdio.h>
int main()
{
	int i,a[] = {10,20,30};
	int *p = a;
	
	int (*q)[3] = &a;    

	for(i=0;i<3;i++)
	printf("%d  %d\n",(*q)[i],q[0][i]);
				  
}

*/
/*
#include<stdio.h>
int main()
{
char a[] = {1,2,3,4};
int *p = (int*)a;
printf("%d %d %d %d ", p[0],p[1],p[2],p[3]);
}
*/
//
#include<stdio.h>
int main()
{
 int a[] = {0x11223344};
char *p = (char*)a;

printf("%x %x %x %x\n", p[0], p[1], p[2], p[3]);
}
//
