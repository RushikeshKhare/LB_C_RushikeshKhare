#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////
//
// Function Name :  SumFactors
// Description :    used to Display Sum of fators
// Input :          
// Output :         
// Author :         Rushikesh Lahanu Khare
// Date :           29/04/2024
//
//////////////////////////////////////////////////////////////////

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    printf("Factors of %d are :\n", iNo);

    for(iCnt = 1; iCnt< iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = SumFactors(iValue);
    
    printf("Summation of factors : %d\n", iRet);

    return 0;
}