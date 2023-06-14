#include<stdio.h>
#include<stdlib.h>

struct  node
{
    int data;
    struct node *prev;
    struct node *next;
};


typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = iNo;
    newn->prev = NULL;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head) -> prev = newn;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int iNo)
{
    PNODE temp = NULL;
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        temp = *Head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteFirst(PPNODE Head)
{ 
    PNODE temp = NULL;

    if(*Head == NULL)
    {
        return;
    }
    else if((*Head) ->next == NULL)
    {
        free(*Head);
        *Head = NULL;

    }
    else 
    {
       temp = *Head;
       *Head = (*Head)->next;
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

void InsertAtPos(PPNODE Head, int iNo, int iPos)
{
    int iSize = 0;
    PNODE temp = NULL;
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;
    iSize =Count(*Head);
    if((iPos < 1)||(iPos > (iSize+1)))
    {
        printf("Enter the Valied Position \n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(Head, iNo);
    }
    else if(iPos == iSize+1)
    {
        InsertLast(Head, iNo);
    }
    else
    {
        temp = *Head;

        for(int iCnt = 1; iCnt < iPos; iCnt++)
        {
            temp = temp->next;
        }

        temp->next->prev = newn;
        newn->next = temp->next;
        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteAtPos(PPNODE Head,int iPos)
{
    int iSize = 0;
    PNODE temp = NULL;
    PNODE tempdelete = NULL;

    iSize = Count(*Head);

    if((iPos < 1)||(iPos > iSize+1))
    {
        printf("Enter Valied Position");
    }

    if(*Head == NULL)
    {
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if(iPos == (iSize+1))
    {
        DeleteLast(Head);
    }
    else
    {
        temp = *Head;

        for(int iCnt = 1; iCnt < (iPos-1); iCnt++)
        {
            temp = temp->next;
        }
        tempdelete = temp->next;
        temp->next = temp->next->next;
        free(tempdelete);
    }

}


void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf(" %d <->",Head->data);
        Head = Head->next;
    }
    printf(" NULL \n");

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
    InsertFirst(&first,91);
    InsertFirst(&first,81);
    InsertFirst(&first,51);
    InsertFirst(&first,11);



    InsertLast(&first,151);
    InsertAtPos(&first,45,4);

    int iRet = Count(first);
    printf("Number of Node is : %d \n",iRet);


    Display(first);

    //DeleteFirst(&first);
  // DeleteLast(&first);
   

    iRet = Count(first);
    printf("Number of Node is : %d \n",iRet);

    DeleteAtPos(&first,4);
    Display(first);
    iRet = Count(first);
    printf("Number of Node is : %d \n",iRet);
  
   
    return 0;
}