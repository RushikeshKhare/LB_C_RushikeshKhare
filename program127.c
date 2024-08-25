#include<stdio.h>
#include<stdlib.h>

int SumEven(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSum = iSum + (Arr[iCnt]);
        }
    }
    return iSum;
}

int main()
{
    int  iCount = 0, i = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter number of element that you want : \n");
    scanf("%d", &iCount);

    Brr = (int *) malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i< iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    iRet = SumEven(Brr, iCount);
    printf("Sum of even elements are : %d\n", iRet);

    free(Brr);
    
    return 0;
}
