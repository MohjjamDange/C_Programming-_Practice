#include<stdio.h>

void Display(int irow,int icol)
{
   int i = 0, j = 0;
  
   
    if(irow != icol)
    {
        printf("Invalied input \n");
        return;
    }
    for(i = irow ; i >= 1 ; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* \t");
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