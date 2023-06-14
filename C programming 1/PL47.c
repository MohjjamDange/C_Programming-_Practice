#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Display(int Arr[], int iNo, int iLength)
{
	
	bool bFag = false;
	
	for(int iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(iNo == Arr[iCnt])
		{
			bFag = true;
			break;
		}	
		
	}
	
	return bFag;
}
int main()
{
	int iValue = 0;
	int iSize = 0;
	int *ptr = NULL;
	bool bRet;
	
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
	bRet = Display(ptr, iValue,iSize);
	if(bRet == true)
	{
		printf("Number Are Present in Array \n");
	}
	else
	{
		printf("Number Are Not Present in Array \n");
	}
	
	free(ptr);
	
	return 0;
}