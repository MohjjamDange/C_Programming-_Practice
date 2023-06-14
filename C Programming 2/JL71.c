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

void InsertLast(PPNODE Head, int iNo)
{
    
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = NULL;

    newn->data = iNo;
    newn->next = NULL;
    temp = *Head;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
       
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;

    }
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = NULL;

    if(*Head == NULL)
    {
        return;
    }
    else
    {
        temp = *Head;
        *Head = temp->next;
        free(temp);
    }

}

void DeleteLast(PPNODE Head)
{
    PNODE temp = NULL;

    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        temp = *Head;
        while(temp->next->next != NULL)
        {
            temp = temp->next;

        }
        free(temp->next);
        temp->next = NULL;

    }

}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d ->",Head->data);
        Head = Head->next;
    }
    printf("\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;

    }
    return iCnt;
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,81);
    InsertFirst(&first,51);
    InsertFirst(&first,41);
    InsertFirst(&first,11);

    InsertLast(&first,151);

    Display(first);
    DeleteLast(&first);
    Display(first);
    DeleteFirst(&first);
    Display(first);

  

    Display(first);
    int iret = Count(first);
    printf("Total count of Node is :%d \n",iret);

    

    
    return 0;
}