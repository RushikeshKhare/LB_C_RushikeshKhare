// Accept number & return the count of digits which are greater than 5

#include<stdio.h>

int Count(int iNo)
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
        if(iDigit > 5)
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

    iRet = Count(iValue);
    
    printf("Number of digts greater than 5 are: %d\n", iRet);

    return 0;
}