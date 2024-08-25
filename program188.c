#include<stdio.h>
#include<stdbool.h>

int Display(char *str)
{

    while(*str != '\0')
    {
        printf("%c\n", *str);
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

    Display(Arr);

    return 0;
}