//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node * Reverse(Node * curr , Node *prev)
    {
        if(curr==NULL)
        return prev;
        
        Node *front = curr->next;
        curr->next= prev;
        return Reverse(front,curr);
        
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first =Reverse(first,NULL);
        second= Reverse(second,NULL);
        
        Node *curr1=first, *curr2=second;
        Node *head = new Node(0);
        Node *tail =head;
        int sum,carry=0;
        //addition
     while (curr1 && curr2)
        {
         sum = curr1->data + curr2->data + carry;
         tail->next = new Node(sum % 10);
         curr1 = curr1->next;
         curr2 = curr2->next; // Fix: Added assignment here
         tail = tail->next;
         carry = sum / 10;
         }
        while(curr1)
        {
            sum=curr1->data+carry;
            tail->next=new Node(sum%10);
            curr1=curr1->next;
            tail= tail->next; 
            carry=sum/10;
        };
        
          while(curr2)
        {
            sum=curr2->data+carry;
            tail->next=new Node(sum%10);
            curr2=curr2->next;
            tail= tail->next; 
            carry=sum/10;
        };
        
        while(carry)
        {
            tail->next = new Node(carry%10);
            tail = tail->next;
            carry/=10;
            
        };
        
        //dummy node bhi present hai
        
        head= Reverse(head->next,NULL);
        return head;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends