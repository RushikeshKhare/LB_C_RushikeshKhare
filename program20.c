#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Hanuman...\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of times you want to Display Jay Hanuman on screen : \n");
    scanf("%d", &iValue);
    
    Display(iValue);

    return 0;
}