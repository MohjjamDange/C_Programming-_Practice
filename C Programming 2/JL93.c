#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int iNo1 = 0, iNo2 = 0;
    float fNo1 = 0,fNo2 = 0;
    
    scanf("%d %d",&iNo1,&iNo2);
    scanf("%f %f",&fNo1,&fNo2);
    
    printf("%d   %d\n",iNo1 + iNo2,iNo1-iNo2);
    printf("%.1f  %.1f",fNo1+fNo2, fNo1 - fNo2);
    
	
    
    return 0;
}