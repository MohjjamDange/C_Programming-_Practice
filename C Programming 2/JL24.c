#include<stdio.h>

int power(int iBase, int iPower)
{
    int iMult = 1;
    for(int iCnt = 0; iCnt < iPower; iCnt++)
    {
        iMult = iMult * iBase;
    }
    
    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Base \n");
    scanf("%d",&iValue1);

    printf("Enetr the Power \n");
    scanf("%d",&iValue2);

    int iRet = power(iValue1, iValue2);
    printf("Answer is : %d",iRet);

}