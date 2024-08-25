#include<stdio.h>

/*
    START   
        
    STOP
*/
int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))        // Filter
    {
        return 1;
    }

    if((fMarks>= 0.0f) &&(fMarks < 35.0f))
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

int main()
{
    float fValue = 0.0f;
    int iRet = 0;

    printf("Please enter your percentage :");
    scanf("%f", &fValue);

    iRet = DisplayResult(fValue);
    if(iRet == 1)
    {
        printf("Your Input is Invalid\n");
    }
    else if(iRet == 2)
    {
        printf("Student is FAIL\n");
    }
    else
    {
        printf("Student is PASS\n");
    }

    return 0;
}