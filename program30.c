#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Description :    
// Input :          Integer
// Output :         Void
// Author :         Rushikesh Lahanu Khare
// Date :           29/04/2024
//
//////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}