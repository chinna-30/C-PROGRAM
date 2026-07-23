#include"dllheader.h"
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

