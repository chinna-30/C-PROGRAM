#include"sllheader.h"
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

