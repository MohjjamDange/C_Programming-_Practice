#include<stdio.h>

int main()
{
    char Arr[] = "HelloWorld";
    char *str = &Arr;

    while(*str != '\0')
    {
        printf("%c",*str);
        str++;
    }


    return 0;
}