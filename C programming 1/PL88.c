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
	newn->next = NULL;
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
	printf("\n Link list is : \n");
	
	while(Head != NULL)
	{
		printf("|<->| %d ",Head->data);
		Head = Head->next;
	}
	
	printf("|<->| NULL");
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
	
	InsertLast(&first, 111);
	Display(first);
	iRet = Count(first);
	
	
	
	
	return 0;
}