#include<stdio.h>

int Summetion(int Brr[], int iSize)
{
	static int iSum = 0;
	static int iCnt = 0;
	
	if(iCnt < iSize)
	{
		iSum = iSum + Brr[iCnt];
		iCnt++;
		Summetion(Brr, iSize);
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