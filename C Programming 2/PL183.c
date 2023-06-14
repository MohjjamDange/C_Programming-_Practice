#include<stdio.h>

int CountSmall(char *str)
{
	static int iCnt = 0;
	if(*str != 0)
	{
		if( (*str >= 'a') && (*str <= 'z'))
		{
			iCnt++;
		}
		str++;
	CountSmall(str);
	
	}
	return iCnt;
	
}

int main()
{
	char Arr [20];
	int iret = 0;
	
	printf("Enter the String \n");
	scanf("%[^'\n']s",Arr);
	
	iret = CountSmall(Arr);
	printf("Total of Latter is %d",iret);
	
	
	return 0;
}
