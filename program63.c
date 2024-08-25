// Accept number & return the reverse of that number

#include<stdio.h>

int Reverse(int iNo)
{
    int iRev = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = iRev*10+iDigit;
        iNo = iNo/10;
    }
    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);
    
    printf("reverse of numbers is: %d\n", iRet);

    return 0;
}