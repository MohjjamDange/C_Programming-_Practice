#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}
	if(iCnt == iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
	
	
}

int main()
{
	int iSize = 0;
	int iValue = 0;
	int *ptr = NULL;
	int iRet = 0;
	
	printf("Enetr the Size of Array \n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * (sizeof(int)));
	
	printf("Enter the Elements of Array \n");
	
	for(int iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter the Element Search For First Occourance \n");
	scanf("%d",&iValue);
	
	iRet = Display(ptr, iSize, iValue);
	if(iRet == -1)
	{
		printf("There Are NO Accourance \n");
	}
	else
	{
		printf("There Are the Occarnce is :%d \n",iRet);
	}
	
	return 0;
}