#include<stdio.h>
#include<stdlib.h>

int DisplaySum(int Arr[], int iLength)
{
	int iSum = 0;
	
	for(int iCnt = 0; iCnt < iLength; iCnt++)
	{
		iSum = iSum + Arr[iCnt];
	}
	
	return iSum;
}
	

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iRet = 0;
	
	printf("Enetr the Size of Array \n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * (sizeof(int)));
	
	printf("Enetr the elements : \n");
	for(int iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
		
	}
	
	iRet = DisplaySum(ptr, iSize);
	printf("Total Sum of Array is Elements is : %d\n",iRet);
	
	free(ptr);
	
	
	return 0;
}