
#include<stdio.h>
#include<stdbool.h>

bool checkBit(int iNo)
{
    iNo = 0;
    unsigned int iMask = 8;
    unsigned int iResult = iNo & iMask;

    if(iResult == iMask)
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
    unsigned int iNo = 0;
    unsigned int iMask = 8;
    bool bRet = 0;

    printf("Enter number : \n");
    scanf("%u", &iNo);

    bRet = checkBit(iNo);

    if(bRet == true)
    {
        printf("4th bit is ON\n");
    }
    else
    {
        printf("4th bit is OFF\n");
    }

    return 0;
}

/*
--------------------------------------------
    OP1     OP2     &       |       ^
--------------------------------------------
    1       1       1       1       0

    1       0       0       1       1

    0       1       0       1       1

    0       0       0       0       0
--------------------------------------------
*/