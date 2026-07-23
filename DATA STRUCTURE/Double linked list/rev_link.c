#include"dllheader.h"
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

