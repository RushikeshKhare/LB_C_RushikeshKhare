#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;      

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}
/*
void Display(PNODE First)
{

}
*/

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 51); // InsertFirst(60,51);      //call by address
    InsertFirst(&Head, 21); // InsertFirst(60,21);
    InsertFirst(&Head, 11); // InsertFirst(60,11);

    //Display(Head);

    return 0;
}