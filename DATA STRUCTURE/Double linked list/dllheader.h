#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st
{
        struct st *prev;
        int roll;
        char name[20];
        float marks;
        struct st *next;
};

void add_begin(struct st **ptr);
void add_end(struct st **ptr);
void add_mid(struct st **ptr);
void print(struct st *ptr);
void reverse_print(struct st *);
void rev_link(struct st **ptr);
void rev_data(struct st *ptr);
void delete_all(struct st **ptr);
void del_rollbased(struct st **ptr);

