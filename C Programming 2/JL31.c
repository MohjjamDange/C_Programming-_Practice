#include<stdio.h>

void DisplayArr(int *ptr, int iLength)
{
    int iCnt = 0;
    printf("Array Elements is : \n");

   while(iCnt < iLength)
   {
        printf("%d \n",*ptr);
        ptr++;
        iCnt++;
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