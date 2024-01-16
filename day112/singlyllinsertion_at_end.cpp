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
int main()
{
      Node *head;
      head=NULL;
      Node * tail=NULL;
    // Node a1(4);
    int arr[] = {2, 4, 6, 8, 10};
    for (int i = 0; i < 5; i++)
    {
      
        // head = new Node(4);
        // cout<<head->data<<endl;
        // cout<<head->next<<endl;

        // if linked list doesn't exist
        if (head == NULL)
        {
            head = new Node(arr[i]);
            tail=head;
        }
        // insert the node at beginning
        else
        {
            // Node *tail;
            // tail=head;
            // while(tail->next !=NULL)
            // {
            //   tail=tail->next;
            // }
            // Node * temp;
            // temp= new Node(arr[i]);
            // tail->next=temp;

            tail->next=new Node(arr[i]);
            tail=tail->next; 
        }
    }
    Node *temp=head;

    // print the value
    while (temp != NULL)
    {
        cout <<temp->data<<" ";
        temp=temp->next;
    }
}