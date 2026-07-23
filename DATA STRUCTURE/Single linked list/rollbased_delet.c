#include"sllheader.h"
void roll_based_delete(struct st **ptr)
{
        int n;
        struct st *prev,*temp=*ptr;
        printf("Enter the roll number to delete:\n");
        scanf("%d",&n);
        while(temp!=0)
        {
                if(temp->roll==n)
                {
                        if(temp==*ptr)
                        *ptr=temp->next;
                        else
                        prev->next=temp->next;
                        free(temp);
                        return;

                }
                else
                {
                        prev=temp;
                        temp=temp->next;

                }

        }
}

