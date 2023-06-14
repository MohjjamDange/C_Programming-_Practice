#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

#define FILESIZE 1024

void dataCopy(char src[], char dest[])
{
    int iRet = 0, fdsrc = 0, fddest = 0,iCnt = 0;
    char buffer[1024];

    fdsrc = open(src,O_RDONLY);
    if(fdsrc == -1)
    {
        printf("Source File Not Found \n");
        return;
    }
    printf("Source File Succesfully Open \n");

    fddest = open(dest,O_WRONLY | O_APPEND);
    if(fddest == -1)
    {
        printf("Dest File is Unable to Open \n");
        return;

    }

    while((iRet = read(fdsrc,buffer,FILESIZE))!= 0)
    {
        write(fddest,buffer,iRet);

    }

    if(iRet == 0)
    {
        printf("File Sucseefully Copy \n");
    }
    else
    {
        printf("Opretion File");
    }


    close(fdsrc);
    close(fddest);

}


int main()
{
    char fname1[100];
    char fname2[100];

    printf("Enter the First File name which you want to Open \n");
    scanf("%s",fname1);

    printf("Enter the Second File Name which you want Open \n");
    scanf("%s",fname2);

    dataCopy(fname1, fname2);

    
    return 0;
}