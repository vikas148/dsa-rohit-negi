#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node * createLinkedlist(int arr[], int index,int size)
{
   if(index==size)
   {
    return NULL;
   } 
   Node *temp;
   temp=new Node(arr[index]);
   temp->next=createLinkedlist(arr,index+1,size);
   return temp;
}
int main()
{
 Node * head;
 head=NULL;
 int arr[]={2,4,6,8,10};
head= createLinkedlist(arr,0,5);

//delete a node at end

if( head !=NULL){
   if(head->next==NULL)
   {
    delete head;
    head= NULL;
   } 

   else
   {
    Node *curr=head;
    Node *prev = NULL;

    while(curr->next!=NULL)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    delete curr;
   }
}

while(head)
{
    cout<<head->data<<" ";
    head=head->next;
}

}