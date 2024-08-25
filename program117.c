#include<stdio.h>

//void Display(int *ptr, int iSize)
void Display(int ptr[], int iSize)
{
    
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
        //printf("%d\n", *(ptr + 1));
    }   
}

int main()
{
    int Arr[5] = {10,20,30,40,50};

    Display(Arr,5);       // Display(100,5); passing Address of Array and size of Array

    return 0;
}