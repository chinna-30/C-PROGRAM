#include<stdio.h>
#include"sllheader.h"
int main()
{
        struct st *hptr=0;
        char op;
        do
        {
                //printf("Enter the student details:\n");
                add_mid(&hptr);
                printf("Do you want add another student:?\n");
                scanf(" %c",&op);
        }while(op=='y');
        printf("After adding student\n");
        print(hptr);
/*      delete_all(&hptr);
        printf("After adding student\n");
        print(hptr);
        
        //delete_all(&hptr);
        //roll_based_delete(&hptr);
        
        //printf("After deletion\n");
        //print(hptr);
        //
        */
}

