#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsevrtFirst(PPNODE Head, PPNODE Tail, int No)
{}
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*Head == NULL) &&( *Tail == NULL) )
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;

    }
    else
    {
        newn->next = *Head;
        *Head = newn;

    } (*Tail)->next = *Head;
}
void InsevrtLast(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*Head == NULL) &&( *Tail == NULL) )
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
        
    }
    else
    {   
        (*Tail)->next = newn;
        (*Tail) = (*Tail) -> next;

    }
    (*Tail)->next = *Head;
}
void InsertPos(PPNODE Head, PPNODE Tail, int NO, int iPos)
{}
void Display(PNODE Head, PNODE Tail)
{
    if(Head != NULL && Tail != NULL)
    {
        do
        {
            printf(" | %d | -> ", Head->data);
            Head = Head -> next;
        }while(Head != Tail->next);
        return iCount;
    }
    else
    {
        return 0;
    }
}

void DeleteFirst(PPNODE Head, PPNODE Tail, int no, int iPos)
{
    if(*Head == NULL) && (*Tail == NULL)
    {

    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Head = (*Head)-> next;
        free(*Tail)->next;
        
    }
}
void DeleteLast(PPNODE Head, PPNODE Tail)
{
if(*Head == NULL) && (*Tail == NULL)
    {

    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        while(temp->next != *Tail)
        {
            temp = temp->next;
        }
        free(*Tail);
        *Tail = temp;
    }}
    void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int iPos)
    {
        int iLength = 0;
        PNODE temp = *Head;
        iLength = Count(*Head, *Tail);      

        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;
        INsertAtPos (&First,&last,55,4)

        Display(First,Last)         

        newn->next = temp->next;
        temp_>next

    }
int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;

    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);

    InsertFirst(&First,&Last,101);
    InsertFirst(&First,&Last,111);
    InsertFirst(&First,&Last,121);
    
    Display(First, Last);
    iRet = Count(First, Last);

    printf("Number pf nodes are : %d\n",iRet);
    
    DeleteFirst(&First,Last);
    iRet = Count(First,Last);

    printf("Number of nodes are %d\n", iRet);
    return 0;
}
