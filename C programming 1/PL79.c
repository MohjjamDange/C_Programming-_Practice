#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	
};

typedef struct node NODE;

int main()
{
	NODE nobj;
	
	NODE *ptr = (NODE *)malloc(sizeof(NODE));
	
	ptr->data = 11;
	ptr->next = NULL;
	
	
	
	return 0;
}