#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int FileLength(char Fname[])
{
	char data[10];
	int iRet = 0;
	int fd = 0;
	int iSum = 0;
	
	fd = open(Fname, O_RDWR);
	if(fd == -1)
	{
		printf("File Unable Open with fd : %d \n");
		return;
	}
	printf("File is Succefully Open with Fd : %d \n",fd);
	
	while((iRet = (read(fd, data, sizeof(data)))) != 0)
	{
		iSum = iSum + iRet;
	}
	
	close(fd);
	
	return iSum;
	
}



int main()
{
	char fname[20];
	int iRet = 0;
	
	printf("Enter the File Name \n");
	scanf("%s",fname);
	
	iRet = FileLength(fname);
	printf("Flie Length is %d \n",iRet);
	
	
	return 0;
}