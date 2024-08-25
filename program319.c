#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0xfffffdff;
    unsigned int iResult = 0;

    printf("Enter number : \n");
    scanf("%u", &iNo);

    iResult = iNo & iMask;

    printf("Updated number is : %u\n", iResult);

    return 0;
}

/*
    input : 12      0   0   0   0   1   1   0   0
    output : 4      0   0   0   0   0   1   0   0


                    0   0   0   0   1   1   0   0
                    1   1   1   1   0   1   1   1
                    -----------------------------   &
                    0   0   0   0   0   1   0   0

    1111    1111    1111    1111    1111    1101    1111    1111

    0xfffffdff
*/