#include<stdio.h>
#include<stdbool.h>

int fCount(iValue)
{
	int fCount = 0;
	
	for(int iCnt = 2; iCnt <= iValue/2; iCnt++)
	{
		if(iValue % iCnt == 0)
		{
			fCount++;
			
		}
		
	}
	
	return fCount;
}

bool ChkPrime(int iNo)
{
	int bRet =fCount(iNo);
	if( bRet == 0)
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
	bool bRet = 0;
	
	printf("Enter the number \n");
	scanf("%d",&i);
	
	bRet = ChkPrime(i);
	if(bRet == true)
	{
		printf("%d is the prime Number \n",i);
	}
	else
	{
		printf("%d is not prime Number",i);
	}
	
	
	return 0;
}