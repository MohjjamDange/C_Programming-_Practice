#include<stdio.h>

int Summetion(int Arr[], int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		iSum = iSum + Arr[iCnt];
	}
	return iSum;
	
	
}

int main()
{
	int iLength = 0;
	int iCnt = 0;
	int iRet = 0;
	printf("Enter The Length of Array : ");
	scanf("%d",&iLength);
	
	printf("Enter the Element of Array :\n");
	
	int *ptr = (int *)malloc(iLength * (sizeof(int)));
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
		
	}
	iRet = Summetion(ptr, iLength);
	printf("Summetion is : %d ",iRet);
	
	
	return 0;
}