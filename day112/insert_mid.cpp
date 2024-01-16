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

Node * createLinkedlist(int arr[], int index,int size,Node* prev)
{
   if(index==size)
   {
    return prev;
   } 
   Node *temp;
   temp=new Node(arr[index]);
   temp->next=prev;
   return createLinkedlist(arr,index+1,size,temp);
}
int main()
{
 Node * head;
 head=NULL;
 int arr[]={2,4,6,8,10};
head= createLinkedlist(arr,0,5,head);

//insert node at particular position
int x=3;
int value=30;
Node * temp=head;
x--;
while(x--)
{
    temp=temp->next;
}
Node *temp2= new Node(value);
temp2->next=temp->next;
temp->next=temp2;
while(head)
{
    cout<<head->data<<" ";
    head=head->next;
}

}