#include<stdio.h>


void Display(int iRow, int iColm)
{
	int i = 0; int j = 0;
	
	for( i = 1; i <= iRow; i++)
	{
		for(j = iColm; j >= 1; j--)
		{
			if(i >= j)
			{
				printf("*\t");
			}
			else
			{
				printf(" \t");
			}
		}
		
		printf("\n");
	}
	
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter the Number of Row : ");
	scanf("%d",&iValue1);
	
	printf("Enter the Number of Column : ");
	scanf("%d",&iValue2);
	
	Display(iValue1, iValue2);
	
	
	return 0;
}