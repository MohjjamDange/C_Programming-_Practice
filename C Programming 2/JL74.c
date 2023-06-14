#include<stdio.h>
#include<stdlib.h>

int Summetion(int Arr[],int iLength)
{
    int iSum = 0;
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}


int main()
{
    int iSize = 0;

    printf("Enter the size of Array \n");
    scanf("%d",&iSize);

    int *ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elemets of Array \n");
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf(" %d",&ptr[iCnt]);
    }    

    int iRet = Summetion(ptr, iSize);
    printf("Summetion of All Elemets of Array is : %d",iRet);

    return 0;
}