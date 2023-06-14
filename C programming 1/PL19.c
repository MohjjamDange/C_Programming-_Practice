#include<stdio.h>

int FactAddition(int iNo)
{
	int iSum = 0;
	for(int iCnt = 1; iCnt < iNo; iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iSum = iSum + iCnt;
		}
		
	}
	
	return iSum;
	
}


int main()
{
	int i = 0;
	int iRet = 0;
	
	printf("Enetr the Number \n");
	scanf("%d",&i);
	
	iRet = FactAddition(i);
	printf("Addition of Factors is : %d",iRet);
	
	
	return 0;
}
	