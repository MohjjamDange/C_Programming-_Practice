#include<stdio.h>

int Addition(int a, int b)
{
	int iAns = 0;
	
	iAns  = a + b;
	
	return iAns;
	
}



int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	int iRet = 0;
	
	printf("Eneter the first Number");
	scanf("%d",&iNo1);
	
	printf("Eneter the Second Number");
	scanf("%d",&iNo2);
	
	iRet = Addition(iNo1, iNo2);
	printf("Addition is : %d",iRet);
	
}