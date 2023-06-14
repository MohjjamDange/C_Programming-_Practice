#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int Count(char Fname[])
{
	int fd = 0;
	
	int iRet = 0;
	int iCnt = 0;
	char data[1024];
	
	fd = open(Fname, O_RDWR);
	if(fd == -1)
	{
		printf("File is Unable to open \n");
		return;
	}
	printf("File is Succesfully Open with fd : %d\n",fd);
	
	while((iRet = read(fd, data, sizeof(data))) != 0)
	{
		for(int i = 0; i < iRet; i++)
		{
			if((data[i] == ' ')
			{
				iCnt++;
			}
			
		}
		
		
	}
	
	return iCnt;
	close(fd);
} 

int main()
{
	char fname[20];
	int iRet = 0;
	
	printf("Enter the File Name \n");
	scanf("%s",fname);
	
	iRet = Count(fname);
	printf("Total Count of White Spaces is : %d \n",iRet);
	
	
	return 0;
}