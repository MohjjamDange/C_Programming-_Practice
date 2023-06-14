#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

void CopyFile(char Source[], char Destination[])
{
	int fdsrc = 0;
	int fddest = 0;
	int iRet = 0;
	char data[FILESIZE];
	
	fddest = creat(Destination, 0777);
	if(fddest == -1)
	{
		printf("Unble to Creat File \n");
		return;
	}
	printf("File Succesfully Created with fd : %d \n",fddest);
	
	fdsrc = open(Source, O_RDWR);
	if(fdsrc == -1)
	{
		printf("Unble to Open File \n");
		return;
	}
	printf("File Succesfuly Open with Fd : %d\n",fdsrc);
	
	while((iRet = read(fdsrc, data,FILESIZE) ) != 0)
	{
		write(fddest, data, iRet);
		
	}
	
	close(fdsrc);
	close(fddest);
	
}

int main()
{
	char fname1 [20];
	char fname2 [20];
	
	printf("Enter the name of file which want copy the data\n");
	scanf("%s",fname1);
	
	printf("Enter the name of file which you want to creat \n");
	scanf("%s",fname2);

	CopyFile(fname1, fname2);
	
	return 0;
}