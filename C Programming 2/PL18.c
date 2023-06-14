#include<stdio.h>

int Factorial(int iNo)
{
	int iFact = 1;
	for(int iCnt = 1; iCnt < iNo; iCnt++)
	{
		iFact = iFact * iCnt;
	}
	return iFact;
} 

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the Number \n");
	scanf("%d",&iValue);
	
	iRet = Factorial(iValue);
	printf("Factrial is %d", iRet);
	
	return 0;
}