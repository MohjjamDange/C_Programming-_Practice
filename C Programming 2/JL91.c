#include<stdio.h>

int Factorial(int iNo)
{
    int iSum = 1;
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum * iCnt;

    }

    return iSum;


}


int main()
{
    int iValue = 0;

    printf("Enter the Value \n");
    scanf("%d",&iValue);

    int iRet = Factorial(iValue);
    printf("Factorial is :%d",iRet);
}