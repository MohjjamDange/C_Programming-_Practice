#include<stdio.h>

void Display(int iNo)
{
	for(int iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("Number is : %d \n",iCnt);
	}
	
}


int main()
{
	int i = 0;

	printf("Enetr the Number");
	scanf("%d",&i);
	
	Display(i);	
	
	
	return 0;
}