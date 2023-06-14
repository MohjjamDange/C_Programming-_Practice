#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

#define FILESIZE 1024

void dataCopy(char src[], char dest[])
{
    int iRet = 0, fdsrc = 0, fddest = 0;
    int iSum = 0;
    char buffer[1024];

    fdsrc = open(src,O_RDONLY);
    if(fdsrc == -1)
    {
        printf("File Not Found \n");
        return;
    }
    printf("Source File Succesfully Open \n");

    fddest = creat(dest,0777);
    if(fddest == -1)
    {
        printf("File is Unable to Creat \n");
        return;

    }

    while((iRet = read(fdsrc,buffer,5))!= 0)
    {
      
        write(fddest,buffer,iRet);
        iSum = iSum + iRet;

    }
  
    printf("Total Number of Data Can be Write in side File: %d",iSum);


    close(fdsrc);
    close(fddest);

}


int main()
{
    char fname1[100];
    char fname2[100];

    printf("Enter the File name which you want to Open \n");
    scanf("%s",fname1);

    printf("Enter the File which you want to Creat \n");
    scanf("%s",fname2);

    dataCopy(fname1, fname2);

    
    return 0;
}