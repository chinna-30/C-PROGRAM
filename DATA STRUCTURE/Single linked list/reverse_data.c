#include"sllheader.h"
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

