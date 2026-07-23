#include<stdio.h>
#include<stdlib.h>
#define max 3
struct st
{
	int roll;
	char name[20];
	float marks;
	struct st *next;
};
int count=0;
void push(struct st **ptr);
void pop(struct st **ptr);
void display(struct st *ptr);

int main()
{
	struct st *hptr=0;
	int op;
	while(1)
	{
		printf("Enter an option 1)push 2)pop 3)display 4)exit: ");
		scanf("%d",&op);
		switch(op)
		{
			case 1:push(&hptr);break;
			case 2:pop(&hptr);break;
			case 3:display(hptr);break;
			case 4:return 0;break;
			default:puts("Invalid data\n");return 0;
		}
	}
}

void push(struct st **ptr)
{
	if(count==max)
	{
		puts("stack is overflow\n");
		return;
	}	
	
	struct st *temp=(struct st *)malloc(sizeof(struct st));
	printf("Enter the data\n");
	scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);
	temp->next=*ptr;
	*ptr=temp;
	count++;
}
void pop(struct st **ptr)
{
	struct st *prev,*last;
	last=*ptr;
	while(last->next!=0){
		prev=last;
		last=last->next;}
	prev->next=0;
	free(last);
	count--;
}
void display(struct st *ptr)
{
	while(ptr!=0)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
}
