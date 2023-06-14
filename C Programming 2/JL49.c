#include<stdio.h>

void Display(int irow,int icol)
{
    if(irow != icol)
    {
        printf("Invalied input \n");
        return;
    }

    for(int i = 1; i <= irow; i++)
    {
        for(int j = 1; j <= icol; j++)
        {
            if((i == 1)||(j==1)||(i==irow)||(j==icol) ||(i == j))
            {
                printf("* \t");
            }
            else
            {
                printf(" \t");
            }

        }
        printf("\n");
    }

}

int main()
{
    int iRow = 0,iCol = 0;

    printf("Enter the Number of Row \n");
    scanf("%d",&iRow);
    printf("Enter the Number of Colum \n");
    scanf("%d",&iCol);
    Display(iRow, iCol);


    return 0;
}