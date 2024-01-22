#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node *prev;
Node *next;

Node(int value)
{
    data=value;
    next=prev=NULL;
}
};
Node * CreateDLL(int arr[],int index,int size,Node * back)
{
    if(index==size)
    return NULL;

    Node *temp = new Node(arr[index]);
    temp->prev=back;
    temp->next=CreateDLL(arr, index+1,size,temp);
    return temp;
}
int main()
{
Node* head=NULL;
int arr[]={1,2,3,4,5};

head= CreateDLL(arr,0,5,NULL);

//delete at start

// if(head!=NULL)
// {

//     if(head->next==NULL)
//     {
//         delete head;
//         head=NULL;
//     }
//     else{
//     Node *temp =head;
//     head=head->next;
//     delete temp;

//     head->prev=NULL;
//     }
// }

// delete at end
// if(head!=NULL)
// {
//     if(head->next==NULL)
//     {
//         delete head;
//         head =NULL;
//     }

//     else{
//         Node * curr = head;
//         while(curr->next)
//         curr= curr->next;
//         curr->prev->next=NULL;
//         delete curr;

//     }
// }


//Delete at position
int pos=3;

if(pos==1)
{
    if(head->next==NULL)
    {
        delete head;
        head= NULL;

    }
    else
    {
        Node* temp=head;
        head=head->next;
        delete temp;
        head->prev=NULL;
    }
}

else{
    Node *curr = head;
    while(--pos)
    curr=curr->next;

    if(curr->next==NULL)
    {
       curr->prev->next=curr->next;
       delete curr; 

    }

    else{
        curr->prev->next=curr->next;
        curr->next->prev=curr->prev;
        delete curr;
    }
}

Node *trav=head;
while(trav)
{
    cout<<trav->data<<" ";
    trav=trav->next;

}

}