#include<stdio.h>
#include<stdbool.h>

int UpdateString(char *str)
{
    int iCnt = 1, iPos = -1;
    bool bflag = false;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            *str = '*';
        }
        str++;
    }
}

int main()
{
    char Arr[100];
    char cValue;
    int iRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    UpdateString(Arr);
    
    printf("Updated string is %s\n", Arr);

    return 0;
}