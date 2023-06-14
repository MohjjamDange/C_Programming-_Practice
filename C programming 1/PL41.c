#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[],int iLength)
{
	
	printf("Even Number Between Array is :\n");
	
	
	for(int iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] % 2 == 0)
		{
			printf("%d \n",Arr[iCnt]);
		}
		
	}

}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	
	printf("Enter the size of Array \n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * (sizeof(int)));
	
	
	printf("Enter the element of array\n");
	
	for(int iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	DisplayEven(ptr, iSize);
	
	free(ptr);
	
	
	return 0;
}