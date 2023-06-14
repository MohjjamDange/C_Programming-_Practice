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
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
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
	printf("\n Linklist \n");
	
	while(Head != NULL)
	{
		printf("->| %d",Head->data);
		Head = Head->next;
		
	}
	
	printf("-> NULL");
	
}

void InsertLast(PPNODE Head, int iNo)
{
	PNODE newn = NULL;
	PNODE temp = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
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

int Count(PNODE Head)
{
	int iCnt = 0;
	
	while(Head != NULL)
	{
		Head = Head->next;
		iCnt++;
	}
	
	return iCnt;
}

void DeleteAtFirst(PPNODE Head)
{
	PNODE temp = NULL;
	
	
	if(*Head == NULL)
	{
		printf("Invailed \n");
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
	
	if(*Head == NULL)
	{
		return;
		
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
	int iCnt = 0;
	int iSize = 0;
	PNODE newn = NULL;
	PNODE temp = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = iNo;
	newn->next = NULL;
	
	iSize = Count(*Head);
	
	if((iPos < 1)||(iPos > iSize+1))
	{
		printf("Invaied Input \n");
		return;
	}
	else if(iPos == 1)
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
		
		for(iCnt = 1; iCnt < (iPos-1); iCnt++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next = newn;
		
	}
	
}

void DeleteAtPos(PPNODE Head, int iPos)
{
	int iCnt = 0;
	PNODE temp = NULL;
	PNODE tempDelete = NULL;
	
	int iSize = 0;
	
	iSize = Count(*Head);
	
	if(*Head == NULL)
	{
		return;
	}
	else if(iPos == 1)
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
		for(iCnt = 1;iCnt < (iPos-1); iCnt++)
		{
			temp = temp->next;
		}
		
		tempDelete = temp->next;
		temp->next = temp->next->next;
		
		free(tempDelete);
			
	}

}

int main()
{
	
	int iRet = 0;
	PNODE first = NULL;
	
	InsertFirst(&first, 101);
	InsertFirst(&first, 51);
	InsertFirst(&first, 21);
	InsertFirst(&first, 11);
	
	Display(first);
	
	InsertLast(&first, 111);
	Display(first);
	iRet = Count(first);
	printf("\n Total Count %d \n",iRet);
	
	InsertAtPos(&first, 55, 4);
	Display(first);
	iRet = Count(first);
	printf("\n Total Count %d \n",iRet);
	
	DeleteAtPos(&first,4);
	Display(first);
	iRet = Count(first);
	printf("\n Total Count %d \n",iRet);
	
	DeleteAtFirst(&first);
	Display(first);
	iRet = Count(first);
	printf("\n Total Count %d \n",iRet);
	
	DeleteAtLast(&first);
	Display(first);
	iRet = Count(first);
	printf("\n Total Count %d \n",iRet);
	
	return 0;
}