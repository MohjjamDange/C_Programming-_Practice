#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = iNo;
	newn->next= NULL;
	newn->prev = NULL;
	
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		(*Head)->prev = newn; 
		*Head = newn;
	}
	
}

void Display(PNODE Head)
{
	printf("\nLink List is : \n");
	while(Head != NULL)
	{
		printf("<->| %d ",Head->data);
		Head = Head->next;
	}
	printf("<->| NULL ");
	
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

void InsertLast(PPNODE Head, int iNo)
{
	PNODE newn = NULL;
	PNODE temp = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = iNo;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(*Head == NULL)
	{
		return;
		
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

void DeleteAtFirst(PPNODE Head)
{
	if(*Head == NULL)
	{
		return;
	}
	else
	{
		*Head = (*Head)->next;
		free((*Head)->prev);
		(*Head)->prev = NULL;
		
	}

}

void DeleteAtLast(PPNODE Head)
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
	PNODE newn = NULL;
	PNODE temp = NULL;
	int iSize = 0;
	int iCnt = 0;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = iNo;
	newn->next = NULL;
	newn->prev= NULL;
	
	iSize = Count(*Head);
	
	if((iPos < 1) || (iPos > (iSize+1)))
	{
		printf("Invalied Input \n");
		return;
	}
	else if(iPos == 1)
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
		
		for(iCnt = 1; iCnt < iPos-1; iCnt++)
		{
			temp = temp->next;
			
		}
		newn->next = temp->next;
		temp->next->prev = newn;
		temp->next = newn;
		newn->prev = temp;
		
	}

	

}

void DeleteAtPos(PPNODE Head, int iPos)
{
	PNODE temp = NULL;
	int iSize = 0;
	int iCnt = 0;
	
	
	if(*Head == NULL)
	{
		printf("Invalied Input");
		return;
	}
	else if(iPos == 1)
	{
		DeleteAtFirst(Head);
	}
	else if(iPos == (iSize+1))
	{
		DeleteAtPos(Head, iPos);
	}
	else
	{
		temp = *Head;
		
		for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
		{
			temp = temp->next;
		}
		
		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev = temp;
		
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
	InsertFirst(&first, 1);
	
	Display(first);
	iRet = Count(first);
	printf("\n Total NUmber of NODE is : %d",iRet);
	
	InsertAtPos(&first, 25, 4);
	
	InsertLast(&first, 111);
	Display(first);
	iRet = Count(first);
	printf("\n Total NUmber of NODE is : %d",iRet);
	
	DeleteAtPos(&first, 4);
	Display(first);
	iRet = Count(first);
	printf("\n Total NUmber of NODE is : %d",iRet); 
	
	DeleteAtFirst(&first);
	Display(first);
	iRet = Count(first);
	printf("\n Total NUmber of NODE is : %d",iRet);
	
	DeleteAtLast(&first);
	Display(first);
	iRet = Count(first);
	printf("\n Total NUmber of NODE is : %d",iRet);
	
	
	
	
	return 0;
}