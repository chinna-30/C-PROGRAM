#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st
{
	int roll;
	char name[20];
	float marks;
	struct st *next;
};
void roll_based_delete(struct st **ptr);
void delete_all(struct st **ptr);
void reverse_data(struct st *ptr);
int count_fun(struct st *ptr);
void print(struct st *ptr);
void add_end(struct st **ptr);
void add_mid(struct st **ptr);

int main()
{
	struct st *hptr=0;
	char op;
	do
	{
		//printf("Enter the student details:\n");
		add_mid(&hptr);
		printf("Do you want add another student:?\n");
		scanf(" %c",&op);
	}while(op=='y');
	printf("After adding student\n");
	print(hptr);
/*	delete_all(&hptr);
	printf("After adding student\n");
	print(hptr);
	
	//delete_all(&hptr);
	//roll_based_delete(&hptr);
	
	//printf("After deletion\n");
	//print(hptr);
	//
	*/
}
void add_mid(struct st **ptr)
{
	struct st *prev,*data,*temp;
	data=(struct st *)malloc(sizeof(struct st));
	printf("Enter student to add\n");
	scanf("%d%s%f",&data->roll,data->name,&data->marks);

	data->next=0;
	if(*ptr==0)
	{
		*ptr=data;
		return;
	}
	prev=*ptr;

	if(data->roll<prev->roll)
	{
		data->next=prev;
		*ptr=data;
		return;
	}
	prev=*ptr;
	temp=prev->next;
	while(temp!=0)
	{

		if((data->roll>=prev->roll)&&(data->roll<=temp->roll))
		{
		
			prev->next=data;
			data->next=temp;
			return;
		}
		if(data->roll>temp->roll)
		{
			prev=temp;
			temp=temp->next;
		}
		
	}
	prev->next=data;
}
void add_end(struct st **ptr)
{
	static struct st *last;
	struct st *temp;
	temp=(struct st *)malloc(sizeof(struct st));
	scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);
	temp->next=0;
	if(*ptr==0){
	*ptr=temp;
	last=temp;
	}
	else
	{
		last->next=temp;
		last=temp;
	}
}
void print(struct st *ptr)
{
	while(ptr!=0)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
}
int count_fun(struct st *ptr)
{
	int c;
	while(ptr!=0)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}
void reverse_data(struct st *ptr)
{
	struct st *temp=ptr;
	int c,i,j;
	c=count_fun(ptr);
	struct st **p;
	p=(struct st **)malloc(c*sizeof(struct st *));
	for(i=0;i<c;i++)
	{
		p[i]=temp;
		temp=temp->next;
	}
	struct st temp1;
	int size=sizeof(struct st)-8;
	for(i=0,j=c-1;i<j;i++,j--)
	{
		memcpy(&temp1,p[i],size);
		memcpy(p[i],p[j],size);
		memcpy(p[j],&temp1,size);
	}
}
void delete_all(struct st **ptr)
{
	struct st *temp;
	while(*ptr!=0)
	{
		temp=*ptr;
		*ptr=temp->next;
		free(temp);
	}
}
void roll_based_delete(struct st **ptr)
{
	int n;
	struct st *prev,*temp=*ptr;
	printf("Enter the roll number to delete:\n");
	scanf("%d",&n);
	while(temp!=0)
	{
		if(temp->roll==n)
		{
			if(temp==*ptr)
			*ptr=temp->next;
			else
			prev->next=temp->next;
			free(temp);
			return;

		}
		else
		{
			prev=temp;
			temp=temp->next;

		}

	}
}	
