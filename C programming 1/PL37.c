#include<stdio.h>

void Display(int *ptr)
{
	printf("Element is given below : \n");
	for(int iCnt = 0; iCnt < 5; iCnt++)
	{
		printf("%d \n",*ptr);
		ptr++;
		
	}
}

int main()
{
	int Arr[5];
	
	printf("Enter the Elements of Array \n");
	
	for(int iCnt = 0; iCnt < 5; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
		
	}
	
	Display(Arr);
	
	return 0;
}