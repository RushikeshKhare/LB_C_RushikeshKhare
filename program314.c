
#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0x00001000;
    unsigned int iResult = 0;

    printf("Enter number : \n");
    scanf("%u", &iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("13th bit is ON\n");
    }
    else
    {
        printf("13th bit is OFF\n");
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
/*

0000    0000    0000    0000    0001    0000    0000    0000
0x00001000

*/