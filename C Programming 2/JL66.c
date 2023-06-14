#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;

int main()
{
    NODE obj;
    NODE *ptr = (NODE *)malloc(sizeof(NODE));

    ptr->data = 15;
    ptr->next = NULL;

    printf("%d \n",ptr->data);


    obj.data = 16;
    obj.next = NULL;
    printf("%d \n",obj.data);
    return 0;
}