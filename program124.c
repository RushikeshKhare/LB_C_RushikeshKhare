#include<stdio.h>
#include<stdlib.h>

_______  ________(int Arr[], int iSize)
{
    // logic
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

    iRet = _________(Brr, iCount);

    free(Brr);
    
    return 0;
}
