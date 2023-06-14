#include<stdio.h>
#include<stdlib.h>

int CountEven(int *Arr,int iLength)
{
    int iCount = 0;

    printf("Array is : \n");

    for(int iCnt2 = 0; iCnt2 < iLength; iCnt2++)
    {
        printf("%d \n",Arr[iCnt2]);

    }
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(((Arr[iCnt]) % 2) == 0)
        {
            iCount++;
        }
    }

    return iCount;
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

    int iRet = CountEven(ptr, iSize);
    printf("Total Count from Array is : %d \n",iRet);
    free(ptr);

    return 0;
}