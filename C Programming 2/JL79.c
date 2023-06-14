#include<stdio.h>
#include<fcntl.h>
#include<string.h>


int main()
{
    int fd = 0;
    char fname[20];
    char data[100];

    printf("Enter the file Name \n");
    scanf("%s",fname);

    fd = open(fname, O_RDWR);
    if(fd == -1)
    {
        printf("File unble to opne \n");
    }
    printf("File Sucefully Open \n");

    printf("Enter the data Which you Want to Write \n");
    scanf(" %[^'\n']s",data);

    int iRet = write(fd,data,strlen(data));
    printf("%d number of Bytes Succesfully Write \n",iRet);

    return 0;
}