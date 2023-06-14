#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[], int iNo, int iLength)
{
	int FCount = 0;
	
	for(int iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(iNo == Arr[iCnt])
		{
			FCount++;
		}	
		
	}
	
	return FCount;
}
int main()
{
	int iValue = 0;
	int iSize = 0;
	int *ptr = NULL;
	int iRet = 0;
	
	printf("Enter the Size of Element \n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * (sizeof(int)));
	
	printf("Enter the Element of Array \n");
	
	for(int iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);	
		
	}
	
	printf("Enter the value which you Check frequency \n");
	scanf("%d",&iValue);
	iRet = Display(ptr, iValue,iSize);
	
	
	printf("Frequency is %d \n",iRet);
	
	free(ptr);
	
	return 0;
}