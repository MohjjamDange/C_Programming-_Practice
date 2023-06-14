#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdbool.h>

#define FILESIZE 1024

bool FileCompair(char Source[], char Destination[])
{
	int iRet1 = 0, iRet2 = 0, iCom = 0;
	char Buffer1[FILESIZE];
	char Buffer2[FILESIZE];
	int Fdsrc = 0, Fddest = 0;
	
	Fdsrc = open(Source, O_RDONLY);
	if(Fdsrc == -1)
	{
		printf("file unable to Open \n");
		return;
	}
	//printf("First File Succesfully Opne \n");
	
	Fddest = open(Destination , O_RDONLY);
	if(Fddest == -1)
	{
		printf("file unable to Open \n");
		return;
	}
	//printf("Second File Succesfully Opne \n");
	
	while(1)
	{
		iRet1 = read(Fdsrc, Buffer1, FILESIZE);
		iRet2 = read(Fddest, Buffer2, FILESIZE);
		
		if((iRet1 == 0) || (iRet2 == 0) || (iRet1 != iRet2))
		{
			
			break;
		}
		
		iCom = memcmp(Buffer1, Buffer2, iRet1);
		
		
		
		if(iCom != 0)
		{
			break;
		}
		
	}
	
	close(Fdsrc);
	close(Fddest);
	
	if((iRet1 == 0) && (iRet2 == 0))
	{
		return true;
		
	}
	else
	{
		return false;
	}
	
}


int main()
{
	char fname1[20];
	char fname2[20];
	bool bRet;
	
	printf("Enter the First file name\n");
	scanf("%s",fname1);
	
	printf("Enter the Second file name\n");
	scanf("%s",fname2);
	
	bRet = FileCompair(fname1, fname2);
	if(bRet == true)
	{
		printf("File is same \n");
	}
	else
	{
		printf("File is Not same \n");
		
	}
	
	
	return 0;
}