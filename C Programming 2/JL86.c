#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int CountSmall(char Fname[])
{
    int fd = 0;
    int iRet = 0;
    int iCnt = 0;
    char data[10];

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("File Unble to Open \n");
        return -1;
    }    
    printf("File Succsefully Opne \n");

    while((iRet = read(fd,data,sizeof(data)))!= 0)
    {
        for(int i = 0; i<iRet; i++)
        {
            if((data[i]> 'A')&&(data[i] <'Z'))
            {
                iCnt++;
            }

        }
    }

    return iCnt;   

}


int main()
{
    char fname[20];
    int iRet = 0;

    printf("Enter the File name \n");
    scanf("%s",fname);

    iRet = CountSmall(fname);
    printf("Total Large Latters is %d",iRet);

    return 0;
}