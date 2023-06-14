#include<stdio.h>

int Factorial(int iNo)
{
	int iAns = 1;
	int iCnt = 1;
	
	for(iCnt = 1; iCnt<= iNo; iCnt++)
	{
		iAns *= iCnt;
		
	}
	
	return iAns;
}

int main()
{
	int iValue1 = 0, iRet = 0;

	printf("Enter the Number\n");
	scanf("%d",&iValue1);
	
	iRet =  Factorial(iValue1);
	printf("Factorial is : %d", iRet);
	
	return 0;
}