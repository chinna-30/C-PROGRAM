#include"dllheader.h"
void print(struct st *ptr)
{
        while(ptr!=0)
        {
                printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
                ptr=ptr->next;
        }
}
