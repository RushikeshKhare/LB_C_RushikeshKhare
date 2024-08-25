#include<stdio.h>

int Power(int iNo1, int iNo2)
{
    int iMulti = 1;

    while(iNo2 > 0)
    {
        iMulti = iMulti * iNo1;
        iNo2--;
    }
    return iMulti;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number :\n");
    scanf("%d", &iValue2);  

    iRet = Power(iValue1, iValue2);

    printf("Answer is : %d\n",iRet);

    return 0;
}