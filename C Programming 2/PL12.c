#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

void FileCopy(char Source[], char Destination[])
{
	int fdsrc = 0;
	int iRet = 0;
	int fddest = 0;
	char Buffer[FILESIZE];
	
	
	
	fdsrc = open(Source, O_RDWR);
	if(fdsrc == -1)
	{
		printf("Unble to open file\n");
		return;
	}
	printf("File Succesfully open with fd : %d \n",fdsrc);
	
	fddest = open(Destination, O_RDWR | O_APPEND);
	if(fddest == -1)
	{
		printf("Unble to file Create\n");
		return;
	}
	printf("File Succesfully Create with fd : %d \n",fddest);
	
	while((iRet = read(fdsrc, Buffer,FILESIZE)) != 0)
	{
		write(fddest,Buffer,iRet);
	}
	
	close(fdsrc);
	close(fddest);
	
}

int main()
{
	char fname1[20];
	char fname2[20];
	
	printf("Enter the File Name which contain Data\n");
	scanf("%s",fname1);
	
	printf("Enter the File Name which you Want Creat \n");
	scanf("%s",fname2);
	
	FileCopy(fname1, fname2);
	
	
	
	return 0;
}