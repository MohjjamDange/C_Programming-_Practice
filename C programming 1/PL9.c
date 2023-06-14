#include<stdio.h>

void Display(int iNo)
{
	if(iNo < 0)
	{
		printf("Please Enter the positive Number");
		return;
	}
	

	for(int iCnt = 0; iCnt < iNo; iCnt++)
	{
		printf("Hello \n");
	}
	
}

int main()
{
	int i = 0;
	printf("Eneter the number \n");
	scanf("%d",&i);
	
	
	Display(i);
	
 return 0;
}