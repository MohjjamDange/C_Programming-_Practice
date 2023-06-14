#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char fname[20];
	char Data[100];
	int iret = 0;
	int fd = 0;
	
	printf("Enter the Name Of file which you can open\n");
	scanf("%s",fname);
	
	fd = open(fname, O_RDWR | O_APPEND);
	if(fd == -1)
	{
		printf("File Unable to Open \n");
		return -1;
	}
	
	iret = read(fd, Data, 10);
	printf("%d byte of Data Sussefully read\n",iret);
	
	printf("Data Is : ");
	write(1, Data, iret);	
	
	
	
	return 0;
}