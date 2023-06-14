#include<stdio.h>
#include<stdbool.h>

bool ChkPrime(int iNo)
{
	bool bFag = true;
	
	for(int iCnt = 2; iCnt < iNo; iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			bFag = false;
			break;
		}
	}
	
	return bFag;
	
}


int main()
{
	int i = 0;
	bool bRet = 0;
	
	printf("Enter the Number \n");
	scanf("%d",&i);
		
	bRet = ChkPrime(i);
	
	if(bRet == true)
	{
		printf("Given Number is Prime");
	}
	else
	{
		printf("Given Number is not Prime");
	}

	return 0;
}