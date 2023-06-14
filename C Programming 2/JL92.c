#include<stdio.h>

void Display(int iRow,int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++ )
        {
            printf("* \t");
        }
        printf("\n");
    }

}



int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Number of Row: ");
    scanf("%d",&iValue1);

    printf("Enter the Number of Col: ");
    scanf("%d",&iValue2);


    Display(iValue1,iValue2);


    return 0;
}