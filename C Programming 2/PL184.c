#include<stdio.h>

int SummetionDigit(int iNo)
{
	static int iDigit = 0;
	static int iSum = 0;
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo / 10;
		SummetionDigit(iNo);
		
		
	}
	return iSum;
	
} 

int main()
{
	int iValue = 0;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	int iRet = SummetionDigit(iValue);
	printf("Summetion of All Digits is %d \n",iRet);
	
	
	
	return 0;
}