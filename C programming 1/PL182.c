#include<stdio.h>

int Summetion(int Arr[], int iSize)
{
	static int iSum = 0;
	
	if(iSize > 0)
	{
		iSum = iSum + Arr[iSize - 1];
		iSize--;
		Summetion(Arr, iSize);
		
	}
	
	return iSum;
	
}

int main()
{
	int Brr[] = {10,20,30,40,51};
	int iret = 0;
	
	iret = Summetion(Brr, 5);
	printf("Summetion is %d\n",iret);
	
	
	return 0;
}