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

void InsertFirst(PPNODE First, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
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
    // timecomplexity is O(1)
}

void InsertLast(PPNODE First, int iNo)  
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    // time complexity O(N)
}

void Display(PNODE First)   //call by value
{
    while(First != NULL)
    {
        printf("| %d |->", First->data);
        First = First->next;
    }
    printf("NULL\n");
}   // O(N)

int Count(PNODE First)
{
    int iCount = 0;

    while(First != NULL)
    {
        iCount++;
        First = First->next;
    }
    return iCount;
}   // O(N)

void DeleteFirst(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)    // Case 1 : if linked list is empty
    {
        printf("Unable to delete as Linked list is empty\n");
        return;
    }
    else if((*First) -> next == NULL)   // Case 2 : if linked list contains one node
    {
        free(*First);
        *First = NULL;
    }
    else    // Case 3 : if linked list contains one or more node
    {
        temp = *First;
        *First = (*First)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)    // Case 1 : if linked list is empty
    {
        printf("Unable to delete as Linked list is empty\n");
        return;
    }
    else if((*First) -> next == NULL)   // Case 2 : if linked list contains one node
    {
        free(*First);
        *First = NULL;
    }
    else    // Case 3 : if linked list contains one or more node
    {
        temp = *First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    InsertLast(&Head, 101);
    InsertLast(&Head, 111);
    InsertLast(&Head, 121);

    Display(Head);
    iRet = Count(Head);

    printf("Number of elements are : %d\n", iRet);

    DeleteFirst(&Head);

    Display(Head);
    iRet = Count(Head);

    printf("Number of elements are : %d\n", iRet);

    DeleteLast(&Head);

    Display(Head);
    iRet = Count(Head);

    printf("Number of elements are : %d\n", iRet);

    return 0;
}
