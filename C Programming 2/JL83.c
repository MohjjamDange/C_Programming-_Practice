#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    int iSum = 0;
    int iRet = 0;
    char data[10];
    char fname[20];

    printf("Enter the File Name \n");
    scanf("%s",fname);
    fd = open(fname, O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("File unable to Open \n");
        return -1;
    }

    printf("file Succesfully Open \n");

    printf("Data is : \n");

    while((iRet = read(fd,data,sizeof(data)))!= 0)
    {
        iSum = iSum + iRet;
        write(1,data,iRet);
    }

    printf("\n %d Number of Bytes read Succsefully ",iSum);

   

    return 0;
}