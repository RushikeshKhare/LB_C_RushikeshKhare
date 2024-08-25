#include<stdio.h>

int Addition(int ptr[], int iSize)
{
    
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + ptr[iCnt];
    }
    return iSum;   
}

int main()
{
    int Arr[5] = {10,20,30,40,50};
    int iRet = 0;

    iRet = Addition(Arr,5);

    printf("Addition is : %d\n", iRet);

    return 0;
}