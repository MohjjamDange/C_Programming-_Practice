#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
	printf("Elements is :\n");
	for(int iCnt = 0; iCnt < iLength; iCnt++)
	{
		printf("%d \n",Arr[iCnt]);
	}
}
	

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	
	printf("Enetr the Size of Array \n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * (sizeof(int)));
	
	printf("Enetr the elements : \n");
	for(int iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
		
	}
	
	Display(ptr, iSize);
	
	free(ptr);
	
	
	return 0;
}