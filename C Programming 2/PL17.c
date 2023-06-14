#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char fname[20];
	char Buffer[100];
	int fd = 0;
	
	printf("Enter the Name of File \n");
	scanf("%s",fname);
	
	fd = open(fname, O_RDONLY);
	if(fd == -1)
	{
		printf("File is Unable to Open");
		return -1;
	}
	
	lseek(fd , -5, 2);
	
	read(fd, Buffer, 5);
	write(1, Buffer, 5);
	
	return 0;
}