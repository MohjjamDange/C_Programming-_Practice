#include<stdio.h>

void GoldCoin(int iWeight)
{
	switch(iWeight)
	{
		case 1 :
		{
			printf("Your Bile Amount is 4000 \n");
			break;
		}
		case 2 :
		{
			printf("Your Bile Amount is 8000 \n");
			break;
		}
		case 4 :
		{
			printf("Your Bile Amount is 16000 \n");
			break;
		}
		case 6:
		{
			printf("Your Bile Amount is 32000 \n");
			break;
		}
		default :
		 {
			 printf("Enter the Vailed Weight \n");
		 }
		
	}
	
	
	
}
int main()
{
	int i = 0;
	
	printf("Enetr the Value \n");
	scanf("%d",&i);
	
	GoldCoin(i);
	
	
	
}