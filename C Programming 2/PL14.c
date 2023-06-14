#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char fname[20];
	char buffer[10];
	char buffer2[100];
	int fd = 0;
	
	printf("Enter the name of file \n");
	scanf("%s",fname);
	
	fd = open(fname, O_RDWR | O_APPEND);
	if(fd == -1)
	{
		printf("Unble to open file\n");
		return -1;
	}
	
	
	read(fd, buffer, 10);
	write(1 ,buffer, 10);
	lseek(fd,3 ,1);
	
	
	read(fd, buffer, 2);
	write(1 ,buffer, 2);
	

	
	
	
	return 0;
}