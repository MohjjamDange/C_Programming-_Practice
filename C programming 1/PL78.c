#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	
};

int main()
{
	struct node nobj;
	
	nobj.data = 11;
	nobj.next = NULL;
	
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	
	ptr->data = 11;
	ptr->next = NULL;
	
	
	
	return 0;
}