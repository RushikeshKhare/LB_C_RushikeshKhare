#include<stdio.h>

void Display(int *ptr, int iSize)
{
    
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }   
}

int main()
{
    int Arr[5] = {10,20,30,40,50};

    Display(Arr,5);       // Display(100,5); passing Address of Array

    return 0;
}