//linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data; //4
    struct node *next; //8
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE head, int no)
{
    //Allocate memory for node structure(dynamically)
    //Initialize that node structure
    
    //Check whether LL empty or not
    //If LL is empty then new node is the first node so update its address in the first pointer through head 
    
    //If LL is not empty then store the address of first node in the next pointer of our new node structure
    //Update the first pointer through head

    PNODE newn=NULL;
    newn =(PNODE)malloc(sizeof(NODE));//newn= new node

    newn ->data =no;
    newn ->next=NULL;

    if(*head ==NULL) //LL is empty
    {
        *head = newn;
    }
    else //LL contains atleast one node
    {
        newn-> *head;
        *head = newn;
    }

}
int main()
{
    PNODE first =NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);


    return 0;
}