#include<stdio.h>

void Display(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(int iCnt = 0; iCnt < iNo; iCnt++)
	{
		printf("Hello \n");
	}	
	
}

int main()
{
	int i = 0;
	
	printf("Enetr the Number \n");
	scanf("%d",&i);
	
	Display(i);
	
	
	
	return 0;
}