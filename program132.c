#include<stdio.h>
#include<stdlib.h>

int Divisble(int Arr[], int iSize)
{
    int i = 0;
    int iFrequency = 0;
    for(i = 0; i < iSize; i++)
    {
        if(((Arr[i] % 5) == 0) && ((Arr[i] % 3) == 0))
        {
            iFrequency++;
        }
    }
    return iFrequency;
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

    iRet = Divisble(Brr, iCount);
    printf("numbers of elements which are divisible by 5 and 3 are : %d\n", iRet);

    free(Brr);
    
    return 0;
}
