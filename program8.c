#include<stdio.h>
#include<stdbool.h>
// user is going to enter only positive inputs

// Algorithm
/*
    START
        Accept one number as No
        Divide that number NO by 2
        If remainder is 0
        then display the result as even number
        otherwise display the result as odd number
    STOP
*/

/////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   Used to check whether number is even or odd
//  Input :         Integer
//  Output :        Boolean
//  Author :        Rushikesh Lahanu khare
//  Date :          16/04/2024
//
/////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(unsigned int iNo)
{
    if((iNo % 2) == 0)
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
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even number\n", iValue);
    }
    else
    {
        printf("%d is Odd number\n", iValue);
    }

    return 0;
}