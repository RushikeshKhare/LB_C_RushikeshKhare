#include<stdio.h>
#include<stdlib.h>

void Swap(int *p, int *q)
{
    int temp = 0;

    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int A = 0, B = 0;

    printf("Enter first number : \n");
    scanf("%d", &A);

    printf("Enter second number : \n");
    scanf("%d", &B);

    printf("Value of A Before swapping : %d\n", A);
    printf("Value of B Before swapping : %d\n", B);

    Swap(&A, &B);

    printf("Value of A after swapping : %d\n", A);
    printf("Value of B after swapping : %d\n", B);

    return 0;
}