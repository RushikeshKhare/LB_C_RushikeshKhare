// count small Letter in String
#include<stdio.h>

int strlenSmallX(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    iRet = strlenSmallX(Arr);

    printf("Number of capital letters are : %d\n", iRet);

    return 0;
}