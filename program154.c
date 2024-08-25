

#include<stdio.h>

void CheckSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        printf("It is a small letter\n");
    }
    else
    {
        printf("It is not a small letter");
    }
}

int main()
{
    char cValue;

    printf("Enter one Character : \n");
    scanf("%c", &cValue);

    CheckSmall(cValue);

    return 0;
}