#include"dllheader.h"
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

