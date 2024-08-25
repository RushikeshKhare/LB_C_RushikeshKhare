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
/*
void Display(PNODE First)   //call by value
{
    while(First != NULL)
    {
        printf("| %d |->", First->data);
        First = First->next;
    }
    printf("NULL\n");
} 
*/

void Display(PNODE First)
{
    if(First != NULL)
    {
        printf("%d\t", First->data);
        Display(First->next);   //Tail recurssion
    }
}

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

void InsertAtPose(PPNODE First, int iNo, int iPos)
{
    int iLength = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;
    int i = 0;

    iLength = Count(*First);

    if((iPos < 1) || (iPos > iLength+1))
    {
        printf("Invalid position\n");
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(First,iNo);
    }
    else if(iPos == iLength+1)
    {
        InsertLast(First,iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;

        temp = *First;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeletAtPose(PPNODE First, int iPos)
{
    int iLength = 0;
    int i = 0;
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    
    iLength = Count(*First);

    if((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid position\n");
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst(First);
    }
    else if(iPos == iLength)
    {
        DeleteLast(First);
    }
    else
    {
        temp1 = *First;

        for(i = 1; i< iPos-1; i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        
        temp1->next = temp2->next;
        free(temp2);
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
    InsertLast(&Head, 151);

    Display(Head);

    return 0;
}