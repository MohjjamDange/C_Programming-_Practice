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



int main()
{
	NODE nobj;
	
	PNODE ptr = (PNODE)malloc(sizeof(NODE));
	
	ptr->data = 10;
	ptr->next = NULL;
	
	
	
	return 0;
}