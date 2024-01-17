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

//delete a node 
if(head !=NULL)
{
    Node *temp =head;
    head=head->next;
    delete temp;
}


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