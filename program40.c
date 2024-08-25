/*
    write the program to check weather number is prime number or not
*/
#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    
    if(iNo < 0)          // Updator
    {
        iNo = -iNo;     
    }

    for(iCnt = 2; iCnt <= (iNo /2); iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iCount++;
        }
    }
    if(iCount == 0)
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

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is the prime number \n", iValue);
    }
    else
    {
        printf("%d is not the prime number \n", iValue);
    }

    return 0;
}