#include<stdio.h>
#include<stdbool.h>

int CheckOccurance(char *str, char ch)
{
    int iCnt = 1;
    bool bflag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bflag = true;
            break;
        }
        iCnt++;
        str++;
    }
    if(bflag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char Arr[100];
    char cValue;
    int iRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character that you want to search : \n");
    scanf(" %c",&cValue);

    iRet = CheckOccurance(Arr, cValue);
    if(iRet != -1)
    {
        printf("Letter occurs at the position %d\n", iRet);
    }
    else
    {
        printf("There is no such letter\n");
    }
    return 0;
}