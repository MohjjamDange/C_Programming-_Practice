#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
    
}

void Display(PNODE Head)
{
    printf("Data is : \n");

    while(Head != NULL)
    {
        printf("%d->",Head->data);
        Head = Head->next;
    }


}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,91);
    InsertFirst(&first,81);
    InsertFirst(&first,71);
    InsertFirst(&first,51);

    Display(first);
    



    return 0;
}