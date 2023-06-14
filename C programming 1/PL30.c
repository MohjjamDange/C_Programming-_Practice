#include<stdio.h>

int DisplayCountDigit(int iNo)
{
	int iSum = 0;
	int iDigit = 0;
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo / 10;
		
	}
	return iSum;
	
}

int main()
{
	int i = 0;
	int iRet = 0;
	
	printf("Enter the Number \n");
	scanf("%d",&i);
	
	iRet = DisplayCountDigit(i);
	printf("Total Addtion of Digit is : %d",iRet);
	
	return 0;
}