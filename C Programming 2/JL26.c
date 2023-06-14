#include<stdio.h>

int main()
{
    int iStd = 0;

    printf("Enter the Standered \n");
    scanf("%d",&iStd);

    switch(iStd)
    {
        case 1:
        printf("Your Exam Time is : 11Am");
        break;
        case 5:
        printf("Your Exam time is : 11.30Am");
        break;
        case 7:
        printf("Your Exam Time is: 2 Pm");
        break;
        default :
        printf("Not Your Exam Today \n");
    }



    return 0;
}