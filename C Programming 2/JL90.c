#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char fname[20];
    char data[100];

    printf("Enter the File Name which you Can open \n");
    scanf("%s",fname);

    fd = open(fname,O_RDWR);
    if(fd==-1)
    {
        printf("Enter the valied name \n");
        return -1;
    }
    printf("file Succesfully open \n");

    
    int iRet = lseek(fd,-10,2);
    printf("remaing bytes %d \n",iRet);
    read(fd,data,5);
    write(1,data,5);



}