#include"sllheader.h"
void add_mid(struct st **ptr)
{
        struct st *prev,*data,*temp;
        data=(struct st *)malloc(sizeof(struct st));
        printf("Enter student to add\n");
        scanf("%d%s%f",&data->roll,data->name,&data->marks);

        data->next=0;
        if(*ptr==0)
        {
                *ptr=data;
                return;
        }
        prev=*ptr;

        if(data->roll<prev->roll)
        {
                data->next=prev;
                *ptr=data;
                return;
        }
        prev=*ptr;
        temp=prev->next;
        while(temp!=0)
        {

                if((data->roll>=prev->roll)&&(data->roll<=temp->roll))
                {

                        prev->next=data;
                        data->next=temp;
                        return;
                }
                if(data->roll>temp->roll)
                {
                        prev=temp;
                        temp=temp->next;
                }

        }
        prev->next=data;
}

