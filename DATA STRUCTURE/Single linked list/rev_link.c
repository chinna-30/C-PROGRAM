#include"sllheader.h"
void reverse_link(struct st **ptr)
{
	struct st **p;
	struct st *temp;
	temp=*ptr;
	int c,i;
	c=count_fun(*ptr);
	p=(struct st **)malloc(sizeof(struct st*));

	for(i=0;i<c;i++)
	{
		p[i]=temp;
		temp=temp->next;
	}
	p[0]->next=0;
	for(i=1;i<c;i++)
	{
		p[i]->next=p[i-1];
	}
	*ptr=p[c-1];

}
