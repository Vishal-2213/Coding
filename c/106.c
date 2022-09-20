//Singly Linear Linked List
/*
   1. InsertFirst
   2. InsertLast
   3. InsertAtPosition
   
   4. DeleteLast
   5. DeleteFirst
   6. DeleteAtPosition
   
   7. Display
   8. Count
*/

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

//JUNA NAAV         NAVIN NAAV
//struct node       NODE
//struct node *      PNODE
//struct node **     PPNODE


/*
    1. Allocate memory for node
    2. Initialize the node 
    3. Check whether LL is empty or not
    4. If LL is empty the new node is the first node 
    5. If LL contains atleast one node in it then store the address of previous first node in the next pointer of new node

*/
void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn=NULL; // newn = new node
    
    newn=(PNODE)malloc(sizeof(NODE)); //dynamic memory allocation for node
    
    newn -> data = iNo; 
    newn -> next = NULL;

    if(*Head == NULL) // If LL is empty
    {
        *Head = newn;
    }
    else // If LL contains atleast one node in it
    {
        newn -> next= *Head;
        *Head = newn;
    }
}
void Display(PNODE Head)
{
    while(Head!=NULL)
    {
        printf("%d\t",Head->data);
        Head=Head->next;
    }
    printf("\n");
}
int main()
{
    PNODE First=NULL; //struct node * First=NULL; 

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);

    return 0;
}

/*
Rules For DS

    1. Use only dynamic memory allocation(malloc)
    2. Dont write any technical syntax in main() function
    3. Dont use any global variables
    4. Be careful while manipulating the First pointer
    5. Pass the First pointer directly if the fuction is not going to modify the linked list.(Display,Count)
    6. Pass the address of First pointer if the function is going to modify the LinkedList.(InsertFirst....)

*/