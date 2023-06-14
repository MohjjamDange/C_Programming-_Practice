#include<stdio.h>

void Display(int iNo)
{
    for(int iCnt = iNo; iCnt > 0; iCnt--)
    {
        printf("%d \t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number Which you Want \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}