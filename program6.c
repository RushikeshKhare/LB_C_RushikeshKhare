/*
step1 : Understand the problem statement
step2 : Wirte the algorithm
step3 : Decide the programming language
step4 : write the program
step5 : Test the program
*/

//
//  problem statement : Accept 2 numbers and perform addition
//

// step1 : understand the problem statment
// we conclude the 2 numbers are of floating point format

// Step 2 : write the algorithm
/*
    START   
        Accept first number from user and consider it as No1
        Accept second number from user and consider it as No2
        creat one variable to store the answe as Ans
        Perform the additionof No1 and No2
        store the result into Ans
        Display the value of Ans as a result
    STOP 
*/

// step 3 : Decide the programming language
// we are going to write the code in c programming

// step 4 : write the program

#include<stdio.h>

////////////////////////////////////////////////////////////////
//
// Function Name :  Addition
// Description :    It is used to perform Addition of 2 floats
// Input :          Float, Float
// output :         Float
// Author :         Rushikesh Lahanu Khare
// Date :           15/04/2024
//
//////////////////////////////////////////////////////////////// 
float Addition(float fNo1, float fNo2)
{
    float fAns = 0.0;
    fAns = fNo1 + fNo2;
    return fAns;
}

//////////////////////////////////////////////////////////
// function name : main
// Description : its an entry point function
/////////////////////////////////////////////////////////

int main()
{
    float fValue1 =0.0, fValue2 = 0.0;
    float fResult = 0.0;

    printf("Enter first number : \n");
    scanf("%f", &fValue1);

    printf("Enter second number : \n");
    scanf("%f", &fValue2);

    fResult = Addition(fValue1, fValue2);

    printf("Addition is : %f\n", fResult);

    return 0;
}

// Step 5: Test the program
// test case

// Input1 = 10.0 Input 2 = 20.0 Result = 30.0
// Input1 = 10.0 Input 2 = 0.0 Result = 10.0
// Input1 = 0.0 Input 2 = 10.0 Result = 10.0
// Input1 = 0.0 Input 2 = 0.0 Result = 0.0
// Input1 = -10.0 Input 2 = -7.0 Result = 3.0
// input 1 = -10.0 Input 2 = -7.0 Result = -17.0