#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////
//
// Function Name :  CheckDivisible
// Description :    
// Input :          Integer
// Output :         Boolean
// Author :         Rushikesh Lahanu Khare
// Date :           29/04/2024
//
//////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
    if(iNo % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is divisble by 4\n", iValue);
    }
    else
    {
        printf("%d is not divisilbe by 4\n", iValue);
    }

    return 0;
}