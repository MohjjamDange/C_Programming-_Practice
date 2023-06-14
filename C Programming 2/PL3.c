#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char fname[20];
	char data[10];
	int iRet = 0;
	int fd = 0;
	
	printf("Enter the File Name \n");
	scanf("%s",fname);
	
	fd = open(fname, O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open file \n");
		return 0;
	}
	printf("File Succefully open with fd : %d\n",fd);
	
	while((iRet = read(fd, data, sizeof(data))) != 0)
	{
		
		write(1, data, iRet);
		printf("\n");
		
	}
	close(fd);
	
	return 0;
}