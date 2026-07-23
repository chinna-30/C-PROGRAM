
#include"sllheader.h"
void add_begin(struct st **ptr)
{
        struct st *temp;
        temp=(struct st*)malloc(sizeof(struct st));
        printf("Enter the student details\n");
        scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);
        temp->next=*ptr;
        *ptr=temp;
}

