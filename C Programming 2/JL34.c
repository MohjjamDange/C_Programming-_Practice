#include<stdio.h>
#include<stdlib.h>


int ArrMax(int *ptr, int iLength)
{
    int iMax = 0;
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMax < ptr[iCnt])
        {
            iMax = ptr[iCnt];
        }       

    }

    return iMax;
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

    int iRet = ArrMax(ptr, iSize);
    printf("Largest Element of  Array is : %d \n",iRet);

     free(ptr);
    return 0;
}