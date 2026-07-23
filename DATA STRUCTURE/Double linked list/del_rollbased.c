#include"dllheader.h"
void del_rollbased(struct st **ptr)
{
        struct st *temp=*ptr;
        int n;
        printf("Enter roll number to delete\n");
        scanf("%d",&n);
        while(temp!=0)
        {
                if(temp->roll==n)
                {
                        if(temp==*ptr)
                        {
                                *ptr=temp->next;
                                (*ptr)->prev=0;
                        }
                        else
                        {
                                temp->prev->next=temp->next;// delete end & mid
                                if(temp->next!=0)
                                temp->next->prev=temp->prev;
                        }
                        free(temp);
                        return;


                }
                else
                {
                        temp=temp->next;
                }
        }

}

