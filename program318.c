#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0xffff7fff;
    unsigned int iResult = 0;

    printf("Enter number : \n");
    scanf("%u", &iNo);

    iResult = iNo & iMask;

    printf("Updated number is : %u\n", iResult);

    return 0;
}

/*

0000    0000    0000    0000    0000    1100    0000    0000
0x00000c00

*/

/*
    input : 12      0   0   0   0   1   1   0   0
    output : 4      0   0   0   0   0   1   0   0


                    0   0   0   0   1   1   0   0
                    1   1   1   1   0   1   1   1
                    -----------------------------   &
                    0   0   0   0   0   1   0   0

    1111    1111    1111    1111    0111    1111    1111    1111

    0xffff7fff
*/