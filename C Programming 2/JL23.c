#include<stdio.h>
#include<stdbool.h>

bool ChkPallendrom(int iNo)
{
    int iDigit = 0,iRev = 0,iTemp = 0;

    iTemp = iNo;
   while(iNo != 0)
   {
    iDigit = iNo % 10;
    iRev = iRev * 10 + iDigit;
    iNo = iNo / 10;
   }
   if(iTemp == iRev)
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
    bool bRet;

    printf("Enter the Number \n");
    scanf("%d",&iValue);

    bRet = ChkPallendrom(iValue);
    if(bRet == true)
    {
        printf("Given Number is Pallendrom \n");
    }
    else
    {
        printf("Given Number is not Pallendrom \n");
    }

    return 0;
}