#include"dllheader.h"
void rev_data(struct st *ptr)
{
        struct st *p1=ptr,*p2=ptr;
        int c=1,i;
        while(p2->next!=0){
                c++;
                p2=p2->next;
        }printf("count=%d\n",c);
        int size=sizeof(struct st)-16;
        struct st temp;
        for(i=0;i<c/2;i++)
        {
                memcpy(&temp.roll,&p1->roll,size);
                memcpy(&p1->roll,&p2->roll,size);
                memcpy(&p2->roll,&temp.roll,size);
        }
}

