#include<stdio.h>

void DisplayArr(int *ptr, int iLength)
{
    printf("Array Elements is : \n");

    for(int iCnt2 = 0; iCnt2 < iLength; iCnt2++)
    {
        printf("%d \n",ptr[iCnt2]);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Length of Array \n");
    scanf("%d",&iValue);

    int Arr[iValue];

    printf("Enter Elements of array \n");
    for(int iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    DisplayArr(Arr,iValue);

  
    return 0;
}