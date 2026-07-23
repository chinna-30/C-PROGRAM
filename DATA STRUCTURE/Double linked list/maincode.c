#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st
{
	struct st *prev;
	int roll;
	char name[20];
	float marks;
	struct st *next;
};

void add_begin(struct st **ptr);
void add_end(struct st **ptr);
void add_mid(struct st **ptr);
void print(struct st *ptr);
void reverse_print(struct st *);
void rev_link(struct st **ptr);
void rev_data(struct st *ptr);
void delete_all(struct st **ptr);
void del_rollbased(struct st **ptr);


int main()
{
	struct st *hptr=0;
	char op;
	do
	{
		add_mid(&hptr);
		printf("Do you want add another student:?\n");
		scanf(" %c",&op);
	}while(op=='y');
	printf("After adding\n");
	print(hptr);
//	printf("reverse print\n");
//	rev_data(hptr);
//	print(hptr);
//	del_rollbased(&hptr);
//	printf("after deletion\n");
//	print(hptr);
}
void add_mid(struct st **ptr)
{
	struct st *data=(struct st *)malloc(sizeof(struct st));
	printf("Enter the data\n");
	scanf("%d%s%f",&data->roll,data->name,&data->marks);
	
	data->prev=0;
	data->next=0;

	if(*ptr==0)// inser first node
	{
		*ptr=data;
		return;
	}
	if(data->roll < (*ptr)->roll)
        {
                data->next = *ptr;
                (*ptr)->prev = data;
                *ptr = data;
                return;
        }

	struct st *temp=*ptr;
	while(temp->next!=0)
	{
		if((data->roll>=temp->roll)&&(data->roll<=temp->next->roll))
		{
			data->next=temp->next;
			data->prev=temp;
			temp->next->prev=data;
			temp->next=data;
			return;
		}
		temp=temp->next;
	}
	temp->next=data;
	data->prev=temp;
}


void delete_all(struct st **ptr)
{
	struct st *temp;
	while(*ptr!=0)
	{
		temp=*ptr;
		*ptr=(*ptr)->next;
		free(temp);
	}
}
void del_rollbased(struct st **ptr)
{
	struct st *temp=*ptr;
	int n;
	printf("Enter roll number to delete\n");
	scanf("%d",&n);
	while(temp!=0)
	{
		if(temp->roll==n)
		{
			if(temp==*ptr)
			{
				*ptr=temp->next;
				(*ptr)->prev=0;
			}
			else
			{
				temp->prev->next=temp->next;// delete end & mid
				if(temp->next!=0)
				temp->next->prev=temp->prev;
			}
			free(temp);
			return;
				

		}
		else
		{
			temp=temp->next;
		}
	}

}
void rev_data(struct st *ptr)
{
	struct st *p1=ptr,*p2=ptr;
	int c=1,i;
	while(p2->next!=0){
		c++;
		p2=p2->next;
	}printf("count=%d\n",c);
	int size=sizeof(struct st)-16;
	struct st temp;
	for(i=0;i<c/2;i++)
	{
		memcpy(&temp.roll,&p1->roll,size);
		memcpy(&p1->roll,&p2->roll,size);
		memcpy(&p2->roll,&temp.roll,size);
	}
}
void rev_link(struct st ** ptr)
{
	struct st *temp,*ptr1;
	while(*ptr!=0)
	{
		temp=(*ptr)->prev;
		(*ptr)->prev=(*ptr)->next;
		(*ptr)->next=temp;
		*ptr=(*ptr)->prev;
	}
	*ptr=temp->prev;
}
void add_end(struct st **ptr)
{
	struct st *temp;
	static struct st *last;
	temp=(struct st *)malloc(sizeof(struct st));
	printf("Enter the student detail\n");
	scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);
	temp->next =0;
	if(*ptr==0)
	{
		*ptr=temp;
		temp->prev=0;
		last=temp;
		return;
	}
	last->next=temp;
	temp->prev=last;
	last=temp;
}
void reverse_print(struct st *ptr)
{
	while(ptr->next!=0)
	{
		ptr=ptr->next;
	}
	while(ptr!=0)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->prev;
	}
}
void add_begin(struct st **ptr)
{
	struct st *temp=(struct st *)malloc(sizeof(struct st));
	printf("Enter student details:\n");
	scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);
	temp->prev=0;
	temp->next=*ptr;
	if(*ptr!=0)
		(*ptr)->prev=temp;
	*ptr=temp;
}
void print(struct st *ptr)
{
	while(ptr!=0)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
}

