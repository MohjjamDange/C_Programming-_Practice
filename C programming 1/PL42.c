#include<stdio.h>
#include<stdlib.h>

int DisplayEvenCount(int Arr[],int iLength)
{
	int iCount = 0;

	
	for(int iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] % 2 == 0)
		{
			iCount++;
			
		}
		
	}
	return iCount;

}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iRet = 0;
	
	printf("Enter the size of Array \n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * (sizeof(int)));
	
	
	printf("Enter the element of array\n");
	
	for(int iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = DisplayEvenCount(ptr, iSize);
	printf("total Even Number Between Array is : %d\n",iRet);
	
	
	free(ptr);
	
	
	return 0;
}