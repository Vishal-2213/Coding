//Sample program 
//Doubly Linear LinkedList in cpp
//All 8 functions 
//works

#include <iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node 
{
    int Data;
    node *Next;
    node *Prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class Doubly_linkedlist 
{
private:
    PNODE Head;
public:
    Doubly_linkedlist();
    ~Doubly_linkedlist();
    BOOL InsertFirst(int);
    BOOL InsertLast(int);
    BOOL InsertAtPosition(int, int);
    inline void Display();
    inline int Count();
    BOOL DeleteFirst();
    BOOL DeleteLast();
    BOOL DeleteAtPosition(int);

};

Doubly_linkedlist::Doubly_linkedlist()
{
    Head = NULL;
}

Doubly_linkedlist::~Doubly_linkedlist()
{
    PNODE Temp = Head;

    if(Head!=NULL)
    {
            while(Head!=NULL)
            {
                Head = Head ->Next;
                delete Head;
                Temp = Head;
            }
    }
}
BOOL Doubly_linkedlist::InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE;
    if(newn == NULL)
    {
        return FALSE;
    }

    newn -> Next = NULL;
    newn -> Prev = NULL;
    newn -> Data = no;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        Head -> Prev = newn;
        newn -> Next = Head;
        Head = newn;
    }
    return TRUE;
}

BOOL Doubly_linkedlist::InsertLast(int no)
{
    PNODE newn = NULL, temp = Head;

    newn =  new NODE;

    if(newn == NULL)
    {
        return FALSE;
    }

    newn -> Next = NULL;
    newn -> Prev = NULL;
    newn -> Data = no;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        while(temp -> Next != NULL)
        {
            temp = temp-> Next;
        }
        temp -> Next = newn;
        newn -> Prev = temp;
    }
    return TRUE;
}

BOOL Doubly_linkedlist::InsertAtPosition(int no, int pos)
{
    if((Head == NULL) || (pos > Count()+1) || (pos <= 0))
    {
        return FALSE;
    }

    if( pos == 1)
    {
        return (InsertFirst(no));
    }
    else if( pos == (Count()+1))
    {
        return (InsertLast(no));
    }
    else
    {
        PNODE newn = NULL, temp = Head;

        newn = new NODE;

        if(newn == NULL)
        {
            return FALSE;
        }

        newn -> Data = no;
        newn -> Prev = NULL;
        newn -> Next = NULL;

        for(int i=1 ; i<=(pos-2); i++)
        {
            temp = temp -> Next;
        }

        newn -> Next = temp -> Next;
        temp -> Next -> Prev = newn;
        temp -> Next = newn;
        newn -> Prev = temp;
    }
    return TRUE;
}

BOOL Doubly_linkedlist::DeleteFirst()
{
    PNODE temp = Head;

    if(Head == NULL)
    {
        return FALSE;
    }
    else
    {
        Head = Head -> Next;
        Head -> Prev = NULL;
        delete temp;
    }
    return TRUE;
}

BOOL Doubly_linkedlist::DeleteLast()
{
    if(Head == NULL)
    {
        return FALSE;
    }
    else if (Head -> Next == NULL)
    {
        delete Head;
        Head = NULL;
    }
    else
    {
        PNODE temp = Head;

        while((temp -> Next)!= NULL)
        {
            temp = temp -> Next;
        }
        temp -> Prev -> Next = NULL;
        delete temp;
    }
    return TRUE;
}

BOOL Doubly_linkedlist::DeleteAtPosition(int pos)
{
    if((Head == NULL) || (pos > Count()+1) || (pos <= 0))
    {
        return FALSE;
    }

    if( pos == 1)
    {
        return (DeleteFirst());
    }
    else if( pos == (Count()+1))
    {
        return (DeleteLast());
    }
    else
    {
        PNODE temp = Head ;

        for(int i=1 ; i<=(pos-2) ; i++)
        {
            temp = temp -> Next;
        }

        temp -> Next = temp -> Next -> Next;
        delete temp -> Next -> Prev;
        temp -> Next -> Prev = temp;
    }
    return TRUE;
}

void Doubly_linkedlist::Display()
{
    PNODE Temp = Head;

    while(Temp != NULL)
    {
        cout<< Temp -> Data << " -> ";
        Temp = Temp -> Next;
    }
    cout<<"NULL\n";
}

int Doubly_linkedlist::Count()
{
    PNODE Temp = Head;
    int iCnt =0;

    while(Temp != NULL)
    {
        iCnt++;
        Temp = Temp -> Next;
    }
    return iCnt++;
}

int main() 
{
    Doubly_linkedlist obj1;
    Doubly_linkedlist *obj2 = new Doubly_linkedlist();

    obj1.InsertFirst(21);
    obj1.InsertFirst(11); 

    obj1.Display();
    cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";

    obj1.InsertFirst(101);
    obj1.InsertFirst(111); 

    obj1.Display();
    cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";

    obj1.InsertAtPosition(75,4); 
   // obj1.InsertAtPosition(85,4); 

    obj1.Display();
    cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";

    obj1.DeleteFirst();
    obj1.Display();

    obj1.DeleteLast();
    obj1.Display();

    obj2-> InsertFirst(501);
    obj2-> InsertFirst(511);
    obj2-> InsertFirst(521);

    obj2-> Display();

    obj2-> InsertLast(551);
    obj2-> InsertAtPosition(601,3);

    obj2-> Display();
    cout<<"\nNumber of nodes : "<<obj2->Count()<<"\n";

    delete obj2;

    return 0;
}