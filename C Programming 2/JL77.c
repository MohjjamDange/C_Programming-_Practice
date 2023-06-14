#include<stdio.h>
#include<fcntl.h>

int main()
{
    char fname[20];


    printf("Enter the File name\n");
    scanf("%s",fname);

    int fd = creat(fname,0777);
    if(fd == -1)
    {
        printf("File is Unble to Create \n");

    }

    printf("file is Succesfully Crated with fd %d \n",fd);

}