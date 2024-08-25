#include<stdio.h>

int CountDigit(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iNo = iNo / 10;
        iCount++;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = CountDigit(iValue);
    
    printf("Number of digits are : %d\n", iRet);

    return 0;
}