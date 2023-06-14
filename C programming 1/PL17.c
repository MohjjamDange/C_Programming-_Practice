#include<stdio.h>

void Factors(int iValue)
{
	int iCnt = 0;
	
	printf("Factor is :\n");
	
	for(iCnt = 1; iCnt < iValue; iCnt++)
	{
		
		if((iValue % iCnt) == 0)
		{
			
			printf(" %d \n",iCnt);
		}
	}
	
}


int main()
{
	int i = 0;
	
	printf("Enetr the Value \n");
	scanf("%d",&i);
	
	Factors(i);
	
	
	return 0; 
}