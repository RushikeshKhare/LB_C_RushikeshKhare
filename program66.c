// *    *   *   *   *

#include<stdio.h>

void Display()
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt<= 5; iCnt++)
    {
        printf("%d", iCnt);
    }
    printf("\n");
}

int main()
{
    Display();

    return 0;
}