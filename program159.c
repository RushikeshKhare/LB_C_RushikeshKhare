// will take input until we press Enter "%[^'\n']s"

#include<stdio.h>

int main()
{
    char Arr[50];

    printf("Enter your full name : \n");
    scanf("%[^'\n]s", Arr);     // used regular Expression

    printf("Hello : %s\n", Arr);

    return 0;
}