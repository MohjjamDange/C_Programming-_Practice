#include<stdio.h>

int DisplayRevDigit(int iNo)
{
	int iDigit = 0;
	int iRev = 0;
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iRev = iRev * 10 + iDigit;
		iNo = iNo / 10;
		
	}
	
	return iRev;
}

int main()
{
	int i = 0;
	int iRet = 0;
	
	printf("Enter the Number \n");
	scanf("%d",&i);
	
	iRet = DisplayRevDigit(i);
	printf("Revers Digit is : %d",iRet);
	
	return 0;
}