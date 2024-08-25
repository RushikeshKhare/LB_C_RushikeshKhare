#include<stdio.h>

int CountOddDigits(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = CountOddDigits(iValue);
    
    printf("Number of Odd digts are %d\n", iRet);

    return 0;
}