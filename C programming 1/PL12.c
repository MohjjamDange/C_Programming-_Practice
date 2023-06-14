#include<stdio.h>

int Sum(int iNo)
{
	int iSum = 0;
	
	for(int iCnt = 0; iCnt <= iNo; iCnt++)
	{
		iSum = iSum + iCnt;
	}
	
	return iSum;

}

int main()
{
	int i = 0;
	int iRet = 0;
	
	printf("Enter the Number");
	scanf("%d",&i);
	
	iRet = Sum(i);
	printf("Addition is the  : %d",iRet);
	
	return 0;
}