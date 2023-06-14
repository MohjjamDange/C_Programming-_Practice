#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	
int n,f;
char buff[10];
f=open("Demo.c",O_RDWR);
read(f,buff,10);
write(1,buff,10);
read(f,buff,10);
write(1,buff,10);

}