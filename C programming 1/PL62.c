#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0,j = 0;
	
	if(iRow != iCol)
	{
		printf("Invailed Input \n");
		return;
	}
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iCol; j++)
		{
			if((i == 1) ||(j == 1)||(i == iRow)||(j == iCol))
			{
				printf("*\t");
			}
			else
			{
				printf("#\t");
			}
			
		}
		
		printf("\n");
	}
	
	
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter the Number of Row \n");
	scanf("%d",&iValue1);
	
	printf("Enter the Number of Column \n");
	scanf("%d",&iValue2);
	
	Display(iValue1, iValue2);
	
	
	
	return 0;
}