#include<stdio.h>

int main()
{
	int iSize = 0;
	int Fcnt = 0;
	
	printf("Enter the size Arrary \n");
	scanf("%d",&iSize);
	
	int Arr[iSize];
	
	printf("Eneter the Element od Array :\n");
	
	for(int iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
		
	}
	
	printf("Element is : \n");
	
	
	for(int iCnt2 = 0; iCnt2 < iSize; iCnt2++)
	{
		printf("%d \n",Arr[iCnt2]);
		
	}
	
	return 0;
}