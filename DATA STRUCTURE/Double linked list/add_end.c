#include"dllheader.h"
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
        }
        last->next=temp;
        temp->prev=last;
        last=temp;
}
