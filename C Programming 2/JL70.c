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
    PNODE temp = NULL;
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

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
    }
}

void DeleteFirst(PPNODE Head)
{
    if(*Head == NULL)
    {
        return;
    }
    else
    {
        PNODE temp = NULL;
        temp = *Head;
        *Head = temp->next;
        free(temp);
    }


}

void DeleteLast(PPNODE Head)
{
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
        PNODE temp = NULL;
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

    iSize = Count(*Head);

    if((iPos < 1) || (iPos > (iSize+1)))
    {
        printf("Enter Valied Position \n");
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(Head,iNo);
    }
    else if(iPos == iSize+1 )
    {
        InsertLast(Head, iNo);
    }
    else
    {
        PNODE newn = (PNODE)malloc(sizeof(NODE));
        newn->data = iNo;
        newn->next = NULL;

        temp = *Head;
        for(int iCnt = 1; iCnt < (iPos-1); iCnt++)
        {
            temp = temp->next;
        }

        newn->next  =temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int iSize = Count(*Head);
    if((iPos < 1)||(iPos >= iSize ))
    {
        printf("Enter the Valied Position \n");
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if(iPos == iSize)
    {
        DeleteLast(Head);
    }
    else
    {
        PNODE temp = NULL;
        PNODE tempDelete = NULL;

        temp = *Head;
        for(int iCnt = 1; iCnt < (iPos -1); iCnt++)
        {
            temp = temp->next;
        }
        tempDelete = temp->next;
        temp->next = temp->next->next;
        free(tempDelete);
    }

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

void Display(PNODE Head)
{
   while(Head != NULL)
   {
      printf("%d ->",Head->data);
      Head = Head->next;
   }
   printf("\n");
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,81);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    Display(first);

    InsertLast(&first, 151);
   Display(first);

   //DeleteFirst(&first);
   //DeleteLast(&first);
   

    InsertAtPos(&first,45,4);
     Display(first);
    DeleteAtPos(&first,4);

    

    
    Display(first);
    int iRet = Count(first);
    printf("Total count of Node is : %d \n",iRet);


    return 0;
}