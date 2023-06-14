#include<stdio.h>
#include<stdbool.h>

bool ChkPerfect(int iValue)
{
	int iSum = 0;
	for(int iCnt = 1; iCnt < iValue; iCnt++)
	{
		if((iValue % iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	
	if(iSum == iValue)
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
	int i =0;
	bool bRet = 0;

	printf("Enetr the Number \n");
	scanf("%d",&i);
	
	bRet = ChkPerfect(i);
	if(bRet == true)
	{
		printf("Your Number is Perfect");
	}
	else
	{
		printf("Your Number is Not Perfect");
	}	
	
	return 0;
}