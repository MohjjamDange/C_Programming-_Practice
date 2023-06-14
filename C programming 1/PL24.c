#include<stdio.h>

int ChkFcatCount(int iNo)
{
	int iCnt2 = 0;
	
	printf("Factors Are : \n");
	for(int iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt)== 0)
		{
			printf("%d \n",iCnt);
			iCnt2++;
			
		}
	}

	return iCnt2;
	
}

int main()
{
	int i = 0;
	int bRet = 0;
	
	printf("Enter the Number \n");
	scanf("%d",&i);
	
	bRet = ChkFcatCount(i);
	printf("Total Count of %d :",bRet);
	
	return 0;
}