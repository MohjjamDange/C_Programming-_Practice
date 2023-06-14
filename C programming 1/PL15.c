#include<stdio.h>

void fClass(float iNo)
{
	if((iNo >= 0.00) && (iNo < 35.00))
	{
		printf("Your result is Fail");
	}
	else if((iNo >= 36.00) && (iNo < 50.00))
	{
		printf("Your result is Second Class");
	}
	else if((iNo >= 51.00) && (iNo < 75.00))
	{
		printf("Your result is First Class");
	}
	else if((iNo >= 76.00) && (iNo < 100.00))
	{
		printf("Your result is First Class with Distinction");
	}
	else
	{
		printf("Please Enter the Valied in input");
	}
	
}
int main()
{
	float i = 0.0;
	
	
	printf("Enter the Percentage \n");
	scanf("%f",&i);
	
	fClass(i);
	
}