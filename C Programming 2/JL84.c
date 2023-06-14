#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


void DisplayData(char Fname[])
{
    char data[100];
    int fd = 0;
    int iRet = 0;

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("File Unable to Opne \n");
        return;
    }

    printf("File Succesfully Open \n");

    printf("Data is : \n");

    while((iRet = read(fd,data,sizeof(data)))!= 0)
    {
        write(1,data,iRet);
    }
    close(fd);
}

int main()
{
    char fname[20];

    printf("Enter The File name \n");
    scanf("%s",fname);

    DisplayData(fname);


    return 0;
}                          