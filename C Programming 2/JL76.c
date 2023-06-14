#include<stdio.h>
#include<stdbool.h>

bool ChkPrime(int iNo)
{
    for(int iCnt = 2; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Value \n");
    scanf("%d",&iValue);

    bRet = ChkPrime(iValue);
    if(bRet == true)
    {
        printf("Given Number is Prime");
    }
    else
    {
        printf("Given number is Not Prime");
    }

    return 0;
}