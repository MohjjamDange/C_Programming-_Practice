#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		printf("Hello \n");
		
	}
	
}


int main()
{
	int i = 0;
	printf("Enter the Number \n");
	scanf("%d",&i);
	
	Display(i);
	
	return 0;
}