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
	printf("\n LinkList is : \n");
	
	while(Head != NULL)
	{
		printf("->| %d",Head->data);
		Head = Head->next;
	}
	
	printf("->| NULL \n");
	
}

void InsertLast(PPNODE Head, int iNo)
{
	PNODE temp = NULL;
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

void DeleteFirst(PPNODE Head)
{
	PNODE temp = NULL;
	
	temp = *Head;
	*Head = temp->next;
	free(temp);
	
	temp = NULL;

}



void DeleteLast(PPNODE Head)
{
	PNODE temp = NULL;
	if(*Head == NULL)
	{
		printf("Invalied Input \n");
		return;
		
	}
	else if( (*Head)->next == NULL)
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
	int iCnt = 0;
	int iSize = 0;
	PNODE temp = NULL;
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = iNo;
	newn->next = NULL;
	
	iSize = Count(*Head);
	
	
	if((iPos < 1)||(iPos > (iSize+1)))
	{
		printf("Invaied Input \n");
		return;
	}
	else if(iPos == 1)
	{
		InsertFirst(Head, iNo);
	}
	else if(iPos == (iSize+1))
	{
		InsertLast(Head, iNo);
	}
	else
	{
		temp = *Head;
		for(iCnt = 1; iCnt < iSize-1; iCnt++)
		{
			temp = temp->next;
			
		}
		
		newn->next = temp->next;
		temp->next = newn;
		
	}
	
}




int main()
{
	PNODE first = NULL;
	int iRet = 0;
	
	InsertFirst(&first, 101);
	InsertFirst(&first, 51);
	InsertFirst(&first, 21);
	InsertFirst(&first, 11);
	
	Display(first);
	
	InsertAtPos(&first, 75,3);
	Display(first);
	
	InsertLast(&first, 111);
	Display(first);
	iRet = Count(first);
	printf("Total Count of NODE : %d\n",iRet);
	
	DeleteFirst(&first);
	Display(first);
	iRet = Count(first);
	printf("Total Count of NODE : %d\n",iRet);
	
	DeleteLast(&first);
	Display(first);
	iRet = Count(first);
	printf("Total Count of NODE : %d\n",iRet);
	
	return 0;
}