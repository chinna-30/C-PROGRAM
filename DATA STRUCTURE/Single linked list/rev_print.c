#include"sllheader.h"
void rev_print(struct st *ptr)
{
	if(ptr!=0)
	{
		rev_print(ptr->next);
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
	}
}
