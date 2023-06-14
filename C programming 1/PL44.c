#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[], int iLength)
{
	int iMax = 0;
	printf("Array Elemnt is : \n");
	
	for(int iCnt = 0; iCnt < iLength; iCnt++)
	{
		printf("%d \n",Arr[iCnt]);
		
		if(Arr[iCnt] > iMax)
		{
			iMax = Arr[iCnt];
		}
	}
	
	return iMax;
	
}

int main()
{
	int *ptr = NULL;
	int iSize = 0;
	int iRet = 0;
	
	printf("Enetr the Size of Array :\n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * (sizeof(int)));
	
	printf("Enter the Elements of Array \n");
	
	for(int iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Display(ptr, iSize);
	printf("Maximum Number is : %d \n",iRet);
	
	free(ptr);
	
	return 0;
}