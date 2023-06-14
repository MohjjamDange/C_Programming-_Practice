#include<stdio.h>
#include<stdbool.h>

bool ChkPrime(int iNo)
{
	int iCnt = 0;
	for(iCnt = 2; iCnt <= iNo/2; iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			break;
		}
		
	}
	
	if(iCnt == ((iNo/2) + 1))
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
	
	printf("Enetr the Number \n");
	scanf("%d",&i);
	
	bRet = ChkPrime(i);
	if(bRet == true)
	{
		printf(" %d : Number is Prime \n",i);
	}
	else
	{
		printf("%d : Number is NOT prime \n",i);
	}
	
	return 0;
}