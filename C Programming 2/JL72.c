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
    PNODE newn =(PNODE)malloc(sizeof(NODE));

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

void DeleteAtFirst(PPNODE Head)
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

void DeleteAtLast(PPNODE Head)
{
    PNODE temp = NULL;

    if(*Head ==  NULL)
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

void InsertAtPos(PPNODE Head, int iNo,int iPos)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp= NULL;
    newn->data = iNo;
    newn->next = NULL;

    int iSize = Count(*Head);

    if((iPos< 1)||(iPos > iSize+1))
    {
        printf("Enter Valied Position");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(Head,iNo);
    }
    else if(iPos == iSize+1)
    {
        InsertLast(Head, iNo);
    }
    else
    {
        temp = *Head;
        for(int iCnt = 1; iCnt < (iPos-1);iCnt++)
        {
            temp = temp->next;

        }
       newn->next = temp->next;
       temp->next = newn;
       
    }
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    PNODE temp = NULL;
    PNODE tempDelete = NULL;

    int iSize = Count(*Head);
    if((iPos < 1)||(iPos > iSize))
    {
        printf("Enter Valied Position");
        return;
    }

    if(iPos == 1)
    {
        DeleteAtFirst(Head);
    }
    else if(iPos == iSize)
    {
        DeleteAtLast(Head);
    }
    else
    {
        temp = *Head;

        for(int iCnt = 1;iCnt < (iPos -1); iCnt++)
        {
            temp = temp->next;
        }
        tempDelete = temp->next;
        temp->next = temp->next->next;
        free(tempDelete);
    }

}
void Display(PNODE Head)
{
    printf(" \n ");
    while(Head != NULL)
    {
        printf("%d ->",Head->data);
        Head = Head->next;
    }
     printf(" \n ");
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
    int iRet = 0;
    PNODE first = NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,81);
    InsertFirst(&first,61);
    InsertFirst(&first,31);

    InsertLast(&first,151);

    Display(first);
    iRet = Count(first);
    printf("total Count of Node is : %d",iRet);

    

    InsertAtPos(&first, 55,4);
    Display(first);
    iRet = Count(first);
    printf("total Count of Node is : %d",iRet);
    
    DeleteAtPos(&first,4);

    Display(first);
    iRet = Count(first);
    printf("total Count of Node is : %d",iRet);

    DeleteAtFirst(&first);
    DeleteAtLast(&first);

    Display(first);
    iRet = Count(first);
    printf("total Count of Node is : %d",iRet);

    
    return 0;
}