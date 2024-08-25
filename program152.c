#include<stdio.h>

void CheckCapital(char ch)
{
    if((ch >= 'A' && ch <= 'Z'))
    {
        printf("It is capital letter\n");
    }
    else
    {
        printf("It is not a capital letter");
    }
}

int main()
{
    char cValue;

    printf("Enter one Character : \n");
    scanf("%c", &cValue);

    CheckCapital(cValue);

    return 0;
}