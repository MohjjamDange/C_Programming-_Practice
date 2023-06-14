#include<stdio.h>

void displayFwd(int iNo)
{
	printf("Forwred Number is : \n");
	
	for(int iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d \n",iCnt);
		
	}
	
	
}

void displayBkwd(int iNo)
{
	printf("Backwared Number is : \n");
	
	for(int iCnt = iNo; iCnt > 0; iCnt--)
	{
		printf("%d \n",iCnt);
		
	}
	
	
	
}


int main()
{
	int iValue = 0;
	
	printf("Enetr the Number \n");
	scanf("%d",&iValue);
	
	displayFwd(iValue);
	displayBkwd(iValue);
	
	
	
	
	return 0;
}