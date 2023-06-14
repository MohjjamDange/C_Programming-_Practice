#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
	char fname[20];
	char data[100];
	int fd = 0;
	
	printf("Enter the name of File \n");
	scanf("%s",fname);
	
	
	
	fd = open(fname, O_RDWR);
	if(fd == -1)
	{
		printf("File is Unable to open\n");
		return -1;
		
	}
	
	printf("File is Succefully Open with fd : %d \n",fd);
	
	int iRet = read(fd, data, 5);
	if(iRet == -1)
	{
		printf("Unable to read Data\n");
		return -1;
	}
	printf("%d bytes Successfully Read Data Inside of File\n",iRet);
	
	printf("Data is : %s \n",data);
	
	return 0;
}