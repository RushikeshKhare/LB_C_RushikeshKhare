#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////
//
// Function Name :  CountFactors
// Description :    used to Display NUmber of fators
// Input :          
// Output :         
// Author :         Rushikesh Lahanu Khare
// Date :           29/04/2024
//
//////////////////////////////////////////////////////////////////

int CountFactors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    printf("Factors of %d are :\n", iNo);

    for(iCnt = 1; iCnt< iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = CountFactors(iValue);
    
    printf("Number of factors : %d\n", iRet);

    return 0;
}