#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[], int iSize)
{
    int iCnt = 0;
    printf("Even elements are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
}

int main()
{
    int  iCount = 0, i = 0;
    int *Brr = NULL;

    printf("Enter number of element that you want : \n");
    scanf("%d", &iCount);

    Brr = (int *) malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i< iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    DisplayEven(Brr, iCount);

    free(Brr);
    
    return 0;
}
