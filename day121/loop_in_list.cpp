// order of n square

// //{ Driver Code Starts
// //Initial template code for C++

// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     Node* next;
    
//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void loopHere(Node* head, Node* tail, int position)
// {
//     if(position==0) return;
    
//     Node* walk = head;
//     for(int i=1; i<position; i++)
//         walk = walk->next;
//     tail->next = walk;
// }


// // } Driver Code Ends
// //User function template for C++

// /*

// struct Node
// {
//     int data;
//     struct Node *next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }

// */
// class Solution
// {
//     public:
    
//     bool checked(vector<Node*>visited, Node * curr)
//     {
//         for(int i=0; i<visited.size();i++)
//         {
//             if(visited[i]==curr)
//             return 1;
            
//         }
//         return 0;
//     }
//     //Function to check if the linked list has a loop.
//     bool detectLoop(Node* head)
//     {
//         // your code here
//         Node *curr= head;
//         vector<Node*>visited;
        
//         //traverse the node
//         while(curr!=NULL)
//         {
//             if(checked(visited,curr))
//             return 1;
//             visited.push_back(curr);
//             curr=curr->next;
            
//         }
//         return 0;
//     }
// };


// //{ Driver Code Starts.

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n, num;
//         cin>>n;
        
//         Node *head, *tail;
//         cin>> num;
//         head = tail = new Node(num);
        
//         for(int i=0 ; i<n-1 ; i++)
//         {
//             cin>> num;
//             tail->next = new Node(num);
//             tail = tail->next;
//         }
        
//         int pos;
//         cin>> pos;
//         loopHere(head,tail,pos);
        
//         Solution ob;
//         if(ob.detectLoop(head) )
//             cout<< "True\n";
//         else
//             cout<< "False\n";
//     }
// 	return 0;
// }

// // } Driver Code Ends

//order of n 

//{ Driver Code Starts
//Initial template code for C++

// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     Node* next;
    
//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void loopHere(Node* head, Node* tail, int position)
// {
//     if(position==0) return;
    
//     Node* walk = head;
//     for(int i=1; i<position; i++)
//         walk = walk->next;
//     tail->next = walk;
// }


// // } Driver Code Ends
// //User function template for C++

// /*

// struct Node
// {
//     int data;
//     struct Node *next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }

// */
// class Solution
// {
//     public:
    
//     bool checked(vector<Node*>visited, Node * curr)
//     {
//         for(int i=0; i<visited.size();i++)
//         {
//             if(visited[i]==curr)
//             return 1;
            
//         }
//         return 0;
//     }
//     //Function to check if the linked list has a loop.
//     bool detectLoop(Node* head)
//     {
//         // your code here
//         Node *curr= head;
//         unordered_map<Node *, bool>visited;
        
        
//         //traverse the node
//         while(curr!=NULL)
//         {
//             if(visited[curr]==1)
//             return 1;
//             visited[curr]=1;
//             curr=curr->next;
            
//         }
//         return 0;
//     }
// };


// //{ Driver Code Starts.

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n, num;
//         cin>>n;
        
//         Node *head, *tail;
//         cin>> num;
//         head = tail = new Node(num);
        
//         for(int i=0 ; i<n-1 ; i++)
//         {
//             cin>> num;
//             tail->next = new Node(num);
//             tail = tail->next;
//         }
        
//         int pos;
//         cin>> pos;
//         loopHere(head,tail,pos);
        
//         Solution ob;
//         if(ob.detectLoop(head) )
//             cout<< "True\n";
//         else
//             cout<< "False\n";
//     }
// 	return 0;
// }

// // } Driver Code Ends



// more optimized code

//{ Driver Code Starts
//Initial template code for C++

// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     Node* next;
    
//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void loopHere(Node* head, Node* tail, int position)
// {
//     if(position==0) return;
    
//     Node* walk = head;
//     for(int i=1; i<position; i++)
//         walk = walk->next;
//     tail->next = walk;
// }


// } Driver Code Ends
//User function template for C++

/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
// class Solution
// {
//     public:
    
 
//     //Function to check if the linked list has a loop.
//     bool detectLoop(Node* head)
//     {
//         // your code here
//         Node * slow = head, *fast=head;
//         while(fast&&fast->next)
//         {
//             slow=slow->next;
//             fast= fast->next->next;
            
//             if(slow==fast)
//             return 1;
            
//         }
        
//         return 0;
//     }
// };


// //{ Driver Code Starts.

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n, num;
//         cin>>n;
        
//         Node *head, *tail;
//         cin>> num;
//         head = tail = new Node(num);
        
//         for(int i=0 ; i<n-1 ; i++)
//         {
//             cin>> num;
//             tail->next = new Node(num);
//             tail = tail->next;
//         }
        
//         int pos;
//         cin>> pos;
//         loopHere(head,tail,pos);
        
//         Solution ob;
//         if(ob.detectLoop(head) )
//             cout<< "True\n";
//         else
//             cout<< "False\n";
//     }
// 	return 0;
// }

// // } Driver Code Ends