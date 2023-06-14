#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0;
    char fname[20];
    char data[100];

    printf("Enter the File Name \n");
    scanf("%s",fname);
    
    fd = creat(fname,0777);
    if(fd == -1)
    {
        printf("File is Unble to creat");
        return -1;

    }
    printf("File is Succesfully Created \n");

    printf("Enter the data which want you write in file \n");
    scanf(" %[^'\n']s",data);

    int iRet = write(fd,data,strlen(data));
    printf("%d Number of Bytes Succesfully write \n",iRet);



    return 0;
}