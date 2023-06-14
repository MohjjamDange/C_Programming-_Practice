#include<stdio.h>
#include<stdbool.h>

bool Divisible(int iValue)
{
	if((iValue % 3 == 0) && (iValue % 5 == 0))
	{
		return true;
		
	}
	else
	{
		return false;
	}
	 
}


int main()
{
	int i = 0;
	int bRet = 0;
	
	printf("Enter the Value \n");
	scanf("%d",&i);
	
	bRet = Divisible(i);
	if(bRet == true)
	{
		printf("Your Number is Divisible of 3 & 5 \n");
	}
	else
	{
		printf("Your Entered Number NOT Divisibl by 3 & 5 \n");
	}
	
	
	return 0; 
}
