#include<stdio.h>

int Summetion(int Brr[], int iSize)
{
	int iSum = 0;
	
	for(int iCnt = 0; iCnt < iSize; iCnt++)
	{
		iSum = iSum + Brr[iCnt];
		
	}
	return iSum;
	
}

int main()
{
	int Arr[] = {10,20,30,40,50};
	int iret = 0;
	
	iret = Summetion(Arr, 5);
	printf("Suumetion is  %d",iret);
	
	
	return 0;
}