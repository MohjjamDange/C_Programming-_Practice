#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[], int iLength)
{
	int iMin = Arr[0];
	
	
	for(int iCnt = 0; iCnt < iLength; iCnt++)
	{
		
		
		if(iMin > Arr[iCnt])
		{
			iMin = Arr[iCnt];
		}
		
		
	}
	
	return iMin;
	
}

int main()
{
	int *ptr = NULL;
	int iSize = 0;
	int iRet = 0;
	
	printf("Enter the size of Array \n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * (sizeof(int)));
	
	printf("Enter the element of Array :\n");
	
	for(int iCnt = 0; iCnt <iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
		
	}
	
	iRet = Display(ptr, iSize);
	printf("Minimum Number is : %d \n",iRet);
	
	return 0;
}