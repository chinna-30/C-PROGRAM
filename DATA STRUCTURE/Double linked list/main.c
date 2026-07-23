#include"dllheader.h"
int main()
{
        struct st *hptr=0;
        char op;
        do
        {
                add_mid(&hptr);
                printf("Do you want add another student:?\n");
                scanf(" %c",&op);
        }while(op=='y');
        printf("After adding\n");
        print(hptr);
}

