/*
    Accept number as NO
    search all its factors
    perform addition of all the factors
    If addition is same as No
    then display as No is perfect number
    otherwise Display as No is not perfect number
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    if(iNo < 0)          // Filter
    {
        printf("please enter positive numbers only \n");
        return false;
    }

    for(iCnt = 1; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }

    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter any number :\n");
    scanf("%d", &iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is the perfect number \n", iValue);
    }
    else
    {
        printf("%d is not the perfect number \n", iValue);
    }

    return 0;
}