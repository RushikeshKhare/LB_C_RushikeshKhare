#include<stdio.h>
#include<stdbool.h>

int strrevx(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')  //to find the range of Array
    {
        end++;
    }
    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
}

int main()
{
    char Arr[100];

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    strrevx(Arr);

    printf("Reverse string is : %s\n", Arr);

    return 0;
}