#include<stdio.h>

int DisplayEvenDigit(int iNo)
{
	
	int iDigit = 0;
	
	printf("Even Digit is : \n");
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		
		if(iDigit % 2 == 0)
		{
			printf("%d \n",iDigit);
			
		}
		iNo = iNo / 10;
		
	}
	
	
}

int main()
{
	int i = 0;
	int iRet = 0;
	
	printf("Enter the Number \n");
	scanf("%d",&i);
	
	iRet = DisplayEvenDigit(i);
	printf("Total Addtion of Digit is : %d",iRet);
	
	return 0;
}