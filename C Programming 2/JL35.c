#include<stdio.h>
#include<stdlib.h>


int ArrFrequency(int *ptr, int iLength, int Frq)
{
    int fCnt = 0;
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(ptr[iCnt] == Frq)
        {
            fCnt++;
        }
    } 
    
    return fCnt;
  
}


int main()
{
    int iSize = 0,iFrq = 0;
    int *ptr = NULL;

    printf("Enter the Size of Array \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the Number Which you want Check \n");
    scanf("%d",&iFrq);

    printf("Enter the Array Elements \n");

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    int iRet = ArrFrequency(ptr, iSize,iFrq);
    printf("Frquency of %d in Array is : %d \n",iFrq,iRet);

     free(ptr);
    return 0;
}