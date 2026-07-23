#include"dllheader.h"
void add_mid(struct st **ptr)
{
        struct st *data=(struct st *)malloc(sizeof(struct st));
        printf("Enter the data\n");
        scanf("%d%s%f",&data->roll,data->name,&data->marks);

        data->prev=0;
        data->next=0;

        if(*ptr==0)// inser first node
        {
                *ptr=data;
                return;
        }
        if(data->roll < (*ptr)->roll)
        {
                data->next = *ptr;
                (*ptr)->prev = data;
                *ptr = data;
                return;
        }

        struct st *temp=*ptr;
        while(temp->next!=0)
        {
                if((data->roll>=temp->roll)&&(data->roll<=temp->next->roll))
                {
                        data->next=temp->next;
                        data->prev=temp;
                        temp->next->prev=data;
                        temp->next=data;
                        return;
                }
                temp=temp->next;
        }
        temp->next=data;
        data->prev=temp;
}

