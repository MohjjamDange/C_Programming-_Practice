#include<stdio.h>
#include<stdlib.h>

void Display(int iRow, int iCol)
{
	int i = 0; int j = 0;
	
	for(i = iRow; i >= 1; i--)
	{
		for(j = 1; j <= i;  j++)
		{
			printf("*\t");
		}
		printf("\n");
		
	}

}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter the Number of Rows \n");
	scanf("%d",&iValue1);
	
	printf("Enter the Number of Column \n");
	scanf("%d",&iValue2);
	
	Display(iValue1, iValue2);
	
	return 0;
}