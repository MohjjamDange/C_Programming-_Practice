#include<stdio.h>

int DisplayCountDigit(int iNo)
{
	int fCount = 0;
	int iDigit = 0;
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		fCount++;
		iNo = iNo / 10;
		
	}
	return fCount;
	
}

int main()
{
	int i = 0;
	int iRet = 0;
	
	printf("Enter the Number \n");
	scanf("%d",&i);
	
	iRet = DisplayCountDigit(i);
	printf("Total Count is : %d",iRet);
	
	return 0;
}