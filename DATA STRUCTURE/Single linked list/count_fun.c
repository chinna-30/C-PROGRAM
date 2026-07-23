#include"sllheader.h"
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

