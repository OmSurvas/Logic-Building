////////////////////////////////////////////////////////////////
//final code of singly linearlinked list using Generic code
///////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

#pragma pack(1)
template<class T>
class SinglyLLLnode
{
    public:
        T data;
        SinglyLLLnode<T> *next;

        SinglyLLLnode(T no)
        {
            this->data = no;
            this->next = NULL;
        }
};
template<class T>
class SinglyLLL
{
    public:
        SinglyLLLnode<T> * first;
        int iCount;

        SinglyLLL();

        void InsertFirst(T);
        void InsertLast(T);
        void DeleteFirst();
        void DeleteLast();

        void InsertAtPos(T,int);
        void DeleteAtPos(int);
        void Display();
        int Count();
};
template<class T>
SinglyLLL<T> :: SinglyLLL()
{
    cout<<"Object of SinglyLL get created.\n";
    first = NULL;
    iCount = 0;
}

template<class T>
void SinglyLLL<T> :: InsertFirst(T no)
{
    SinglyLLLnode<T>* newn = NULL;

    newn = new SinglyLLLnode<T>(no);

    if (iCount == 0) // Updated new code
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    iCount++;
    
}
template<class T>
void SinglyLLL<T> :: InsertLast(T no)
{
    SinglyLLLnode<T>* newn = NULL;

    SinglyLLLnode<T>* temp = NULL;

    newn = new SinglyLLLnode<T>(no);

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;
        
        while (temp->next != NULL)
        {
            temp = temp->next;

        }
        temp->next = newn;
    }
    iCount++;
}
template<class T>
void SinglyLLL<T> :: DeleteFirst()
{
    SinglyLLLnode<T>* temp = NULL;

    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL) 
    {
        delete first;
        first = NULL;
    }
    else
    {
        temp = first;

        first = first->next;
        delete temp;
    }
    iCount--;
    
    
}
template<class T>
void SinglyLLL<T> :: DeleteLast()
{
    SinglyLLLnode<T>* temp = NULL;

    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL) 
    {
        delete first;
        first = NULL;
    }
    else
    {
        temp = first;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
    
}
template<class T>
void SinglyLLL<T> :: InsertAtPos(T no, int pos)
{
    int iCnt = 0;
    SinglyLLLnode<T>* newn = NULL;
    SinglyLLLnode<T>* temp = NULL;

    
    if (pos < 1 || pos > iCount +1)
    {
        cout<<"Invalid position\n";
        return;
    }

    if (pos == 1)
    {
        InsertFirst(no);
    }
    else if (pos == iCount +1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new SinglyLLLnode<T>(no);

        temp = first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
    
    
    
}
template<class T>
void SinglyLLL<T> :: DeleteAtPos(int pos)
{
    int iCnt = 0;
    SinglyLLLnode<T>* temp = NULL;
    SinglyLLLnode<T>* target = NULL;

    
    if (pos < 1 || pos > iCount)
    {
        cout<<"Invalid position\n";
        return;
    }

    if (pos == 1)
    {
        DeleteFirst();
    }
    else if (pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = target->next;

        iCount--;   
    }
}
template<class T>
void SinglyLLL<T> :: Display()
{
    SinglyLLLnode<T>* temp = NULL;
    T iCnt = 0;
    temp = first;

    for(iCnt = 1; iCnt <= iCount; iCnt++) 
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next;
    }
    cout<<"NULL\n";
    
}
template<class T>
int SinglyLLL<T> :: Count()
        {
            return iCount;
        }
template<class T>
int main()
{
    SinglyLLL<int> *obj = new SinglyLLL<int>();
    int iRet = 0;

    obj->InsertFirst(51);
    obj->InsertFirst(21);
    obj->InsertFirst(11);

    obj->Display();
    iRet = obj->Count();
    cout<<"Number of Nodes are : "<<iRet<<"\n";

    obj->InsertLast(101);
    obj->InsertLast(111);
    obj->InsertLast(121);
    
    obj->Display();
    iRet = obj->Count();
    cout<<"Number of Nodes are : "<<iRet<<"\n";

    obj->DeleteFirst();

    obj->Display();
    iRet = obj->Count();
    cout<<"Number of Nodes are : "<<iRet<<"\n";

    obj->DeleteLast();
    obj->Display();
    iRet = obj->Count();
    cout<<"Number of Nodes are : "<<iRet<<"\n";

    obj->InsertAtPos(105,4);
    obj->Display();
    iRet = obj->Count();
    cout<<"Number of Nodes are : "<<iRet<<"\n";

    obj->DeleteAtPos(4);
    obj->Display();
    iRet = obj->Count();
    cout<<"Number of Nodes are : "<<iRet<<"\n";
    return 0;
}
