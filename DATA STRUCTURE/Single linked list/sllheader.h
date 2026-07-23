#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st
{
        int roll;
        char name[20];
        float marks;
        struct st *next;
};
void roll_based_delete(struct st **ptr);
void delete_all(struct st **ptr);
void reverse_data(struct st *ptr);
int count_fun(struct st *ptr);
void print(struct st *ptr);
void add_end(struct st **ptr);
void add_mid(struct st **ptr);
void add_begin(struct st **ptr);
void rev_print(struct st *ptr);
void add_mid(struct st **ptr);
void rev_link(struct st *ptr);

