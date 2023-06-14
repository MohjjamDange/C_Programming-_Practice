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

void Display(PNODE Head)
{
	printf("\n LinkList is :\n");
	while(Head != NULL)
	{
		printf("->| %d ",Head->data);
	
		Head = Head->next;
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

int main()
{
	int iret = 0;
	PNODE First = NULL;
	
	InsertFirst(&First, 101);
	InsertFirst(&First, 51);
	InsertFirst(&First, 21);
	InsertFirst(&First, 11);
	
	Display(First);
	iret = Count(First);
	printf("Total Number of Node is : %d \n",iret);
	
	printf("After InsertLast :");
	
	InsertLast(&First, 111);
	Display(First);
	iret = Count(First);
	printf("\n After InsertLast Total Number of Node is : %d ",iret);
	
	
	return 0;
}