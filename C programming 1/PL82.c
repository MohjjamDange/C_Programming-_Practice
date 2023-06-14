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
	printf("LinkList is : \n");
	
	while(Head != NULL)
	{
		printf("->| %d",Head->data);
		Head = Head->next;
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

int main()
{
	int iRet = 0;
	PNODE First = NULL;
	
	InsertFirst(&First, 101);
	InsertFirst(&First, 51);
	InsertFirst(&First, 21);
	InsertFirst(&First, 11);
	
	Display(First);
	
	iRet = Count(First);
	printf(" \n Total Number Of NODE is : %d",iRet);
	
	return 0;
}