#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void Display(char Fname[])
{
	char data[10];
	int iRet = 0;
	int fd = 0;
	
	fd = open(Fname, O_RDWR);
	if(fd == -1)
	{
		printf("File Unable Open with fd : %d \n");
		return;
	}
	printf("File is Succefully Open with Fd : %d \n",fd);
	
	while((iRet = (read(fd, data, sizeof(data)))) != 0)
	{
		write(1 , data, iRet);
		printf("\n");
	}
	
	close(fd);
	
}



int main()
{
	char fname[20];
	
	printf("Enter the File Name \n");
	scanf("%s",fname);
	
	Display(fname);
	
	
	return 0;
}