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
	if(Head != NULL)
	{
		printf("| %d |->",Head->data);
		Head = Head->next;
		Display(Head);
	}
	
	printf("NULL\n");
	
}

int Count(PNODE Head)
{
	int iCnt =0;
	
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
	int iRet = 0;
	
	InsertFirst(&first, 101);
	InsertFirst(&first, 51);
	InsertFirst(&first, 21);
	InsertFirst(&first, 11);
	
	Display(first);
	
	iRet = Count(first);
	printf("Total Cout of Node is : %d",iRet);
	
	return 0;
}