#include<stdio.h>

void Display(int iNo)
{
	for(int iCnt = iNo; iCnt> 0; iCnt--)
	{
		printf("%d\t*\t",iCnt);
	}
	
}

int main()
{
	int iValue = 0;
	
	printf("Enter the Value \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}