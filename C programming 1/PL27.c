#include<stdio.h>

void Display(int iNo)
{
	int iDigit = 0;
	
	while(iNo != 0)
	{
		
		iDigit = iNo % 10;
		printf("%d",iDigit);
		iNo = iNo / 10;
		
	}
	
}

int main()
{
	int i = 0;
	
	printf("Enter the Number \n");
	scanf("%d",&i);
	
	Display(i);
	
	
	
	return 0;
}