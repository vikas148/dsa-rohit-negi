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

while(head)
{
    cout<<head->data<<" ";
    head=head->next;
}

}