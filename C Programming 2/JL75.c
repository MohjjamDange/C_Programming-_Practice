#include<stdio.h>
#include<stdbool.h>

int factor(int iNo)
{
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum  = iSum + iCnt;
        }
    }
    return iSum;
}

bool ChkPerfect(int iNo)
{
    int iAns = factor(iNo);
    if(iAns == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number \n");
    scanf("%d",&iValue);

    bRet = ChkPerfect(iValue);
    if(bRet == true)
    {
        printf("Number is Perfect");
    }
    else
    {
        printf("Number is Not Perfect");
    }


    return 0;
}