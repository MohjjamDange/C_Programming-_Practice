#include<stdio.h>
#include<stdbool.h>

bool ChkPerfect(int iNo)
{
	int iSum = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(int iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
		
		
	}
	
	if(iSum == iNo)
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
	int i = 0;
	bool bRet;
	
	printf("Enter the Number \n");
	scanf("%d",&i);
	
	bRet = ChkPerfect(i);
	if(bRet == true)
	{
		printf(" : %d Number is Perfect\n",i);
	}
	else
	{
		printf(" : %d  Number is Not Perfect \n",i);
	}
	
	
	return 0;
}