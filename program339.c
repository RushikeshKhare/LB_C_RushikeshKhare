#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data; 
    struct node *next;
    struct node *prev;  //$ 
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE First)
{

}

int Count(PNODE First)
{
    return 0;
}

void InsertFirst(PPNODE First, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;  //$

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;  //$

        *First = newn;
    }
}

void InsertLast(PPNODE First, int iNo)
{

}

void InsertAtPos(PPNODE First, int iNo, int iPos)
{

}

void DeleteFirst(PPNODE First)
{

}

void DeleteLast(PPNODE First)
{

}

void DeleteAtPos(PPNODE First, int iPos)
{
    
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,8);
    InsertFirst(&Head,4);
    InsertFirst(&Head,12);

    return 0;
}