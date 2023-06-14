#include<stdio.h>

// 6
// a    b   c   d   e   f

void Display(int iNo)
{
    static int i = 0;
    static char ch = 'a';

    if(i < iNo)
    {
        i++;
		printf("befor \n");
        Display(iNo);
		printf("After \n");
        printf("%c\t",ch);
		printf("After2 \n");
        ch++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}