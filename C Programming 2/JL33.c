#include<stdio.h>
#include<stdlib.h>


int ArraySummetion(int *ptr, int iLength)
{
    int iSum = 0;
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + ptr[iCnt];

    }

    return iSum;
}


int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the Size of Array \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the Array Elements \n");

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    int iRet = ArraySummetion(ptr, iSize);
    printf("Summetion of All Element of Array is : %d \n",iRet);
     free(ptr);

    return 0;
}