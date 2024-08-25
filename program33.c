#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Description :    used to Display fators
// Input :          
// Output :         
// Author :         Rushikesh Lahanu Khare
// Date :           29/04/2024
//
//////////////////////////////////////////////////////////////////

// Time complexity : O(N)

void Display(int iNo)
{
    int iCnt = 0;

    printf("Factors of %d are :\n", iNo);

    for(iCnt = 1; iCnt< iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
        printf("%d\n",iCnt);
        }
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