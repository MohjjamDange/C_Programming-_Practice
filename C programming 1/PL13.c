#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iValue)
{
	if(iValue % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
} 


int main()
{
	int iNo = 0;
	bool bRet;
	
	printf("Enetr the Value \n");
	scanf("%d",&iNo);
	
	bRet = ChkEven(iNo);
	if(bRet == true)
	{
		printf("Your Number is Even");
	}
	else
	{
		printf("Your Number is Odd");
	}
	
	return 0;
}