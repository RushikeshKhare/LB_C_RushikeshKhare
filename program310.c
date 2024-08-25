#include<stdio.h>

/*
    iNo     11          1   0   0   1   1   1   0   0       
    Mask                1   0   0   1   0   0   0   0
                        ------------------------------------&
                        1   0   0   1   0   0   0   0           Result
 
*/

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 288;   
    unsigned int iResult = 0;

    printf("Enter number : \n");
    scanf("%u", &iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("5th and 8th bits is ON\n");
    }
    else
    {
        printf("bits are OFF\n");
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