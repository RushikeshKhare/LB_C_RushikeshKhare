// check whether l or L is present in string or not
#include<stdio.h>
#include<stdbool.h>

bool CheckOccurance(char *str)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if((*str == 'l')||(*str == 'L'))
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[100];
    bool bRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    bRet = CheckOccurance(Arr);
    if(bRet == true)
    {
        printf("l is present is String \n");
    }
    else
    {
        printf("l is not present in String\n");
    }
    return 0;
}