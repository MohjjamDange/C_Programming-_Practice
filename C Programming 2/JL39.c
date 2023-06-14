#include<stdio.h>

void Display(int iNo)
{
    for(int iCnt = 0; iCnt < iNo; iCnt++)
    {
      if(iCnt % 2 == 0)
      {
        printf("* \t");
      }
      else
      {
        printf("%d \t",iCnt);
      }
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