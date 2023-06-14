#include<stdio.h>

void Display(int irow,int icol)
{
    int j = 0;
    if(irow != icol)
    {
        printf("Invalied input \n");
        return;
    }

    for(int i = 1; i <= irow; i++)
    {
        for(char ch = 'a',j = 1; j <= icol;ch++,j++)
        {
            printf("%c \t",ch);
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