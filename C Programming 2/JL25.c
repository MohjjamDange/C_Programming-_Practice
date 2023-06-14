#include<stdio.h>
#include<stdbool.h>

int iPower(int iBase, int iPow)
{
    int iMult = 1;

    for(int iCnt = 0;iCnt < iPow; iCnt++)
    {
        iMult = iMult * iBase; 
    }

    return iMult;

}


bool ChkArmstrong(int iNo)
{
    int iDigitCnt = 0, iDigit = 0;
    int iSum = 0,iTemp = 0;

    iTemp = iNo;
    while(iNo != 0)
    {
        iDigitCnt++;
        iNo = iNo / 10;
    }

     iNo = iTemp;   

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iPower(iDigit,iDigitCnt);
        iNo = iNo / 10;
    }

    if(iSum == iTemp)
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

    bRet = ChkArmstrong(iValue);
    if(bRet == true)
    {
        printf("Given Number is Armstroung Number \n");
    }
    else
    {
        printf("Given Number is Not ArmStroung \n");
    }

    return 0;
}