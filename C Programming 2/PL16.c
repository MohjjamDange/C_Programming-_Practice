#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>

int main()
{
int n,f;
int iret = 0;
char buff[10];
f=open("Demo.c",O_RDWR);
read(f,buff,10);
write(1,buff,10);
printf("\n");
iret = lseek(f,5,SEEK_CUR);//skips 5 characters from the current position
printf("%d iseek \n",iret);
read(f,buff,10);
write(1,buff,10);
}