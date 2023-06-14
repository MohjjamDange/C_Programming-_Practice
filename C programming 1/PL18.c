#include<stdio.h>

void NonFactor(int iValue)
{
	printf("NON Factors is : \n");
	for(int iCnt = 1; iCnt <= iValue; iCnt++)
	{
		
		if((iValue % iCnt) != 0)
		{
			printf("%d \n",iCnt);
		}
		
	}
	
	
	
}

int main()
{
	int iNo = 0;
	
	printf("Enetr the Number \n");
	scanf("%d",&iNo);
	
	NonFactor(iNo);
	
	return 0;
}