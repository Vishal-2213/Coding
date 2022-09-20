//Data Structure Starts
//115+116+117 -drive
#include<stdio.h>
#include<stdlib.h>

//Structure declaration
struct node //structs stores hetrogenous data
{
    int data; //4
    struct node*next;  //8(one hand as singly linear linked list)
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


//JUNA NAAV         NAVIN NAAV
//struct node       NODE
//struct node *      PNODE
//struct node **     PPNODE


int main()
{

    NODE obj; //static memory allocation (memory allocated is 12)

    PNODE ptr=(PNODE)malloc(sizeof(NODE)); //dynamic memory allocation
    
    obj.data=11; //direct accessing operator (.)
    obj.next=NULL;

    ptr-> data=11; //indirect accessing operator (->)
    ptr-> next=NULL;

    return 0;
}