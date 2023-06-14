#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int CountSmall(char Fname[])
{
	char data[10];
	int i = 0;
	int iRet = 0;
	int iCnt = 0;
	int fd = 0;
	
	fd = open(Fname, O_RDWR);
	if(fd == -1)
	{
		printf("Unable to file open \n");
		return;
	}
	
	printf("File Successfully Open with fd : %d\n",fd);
	
	while((iRet = read(fd, data, sizeof(data)))!= 0)
	{
		for(i = 0; i < iRet; i++)
		{
			if((data[i] >= 'a') && (data[i]<= 'z'))
			{
				iCnt++;
			}
		}
	}
	return iCnt;
}

int main()
{
	char fname[20];
	int iRet = 0;
	
	printf("Enter the name of File \n");
	scanf("%s",fname);
	
	iRet = CountSmall(fname);
	printf("total Count of Small Numbe Latter is : %d\n",iRet);
	
	
	return 0;
}