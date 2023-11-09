// Given an unsorted array Arr of size N of positive integers.One number 'A' from set{1, 2, ...., N} is missing and one number 'B' occurs twice in array.Find these two numbers.

// //{ Driver Code Starts
// #include <bits/stdc++.h>

// using namespace std;

// // } Driver Code Ends
// class Solution{
// public:
//     vector<int> findTwoElement(vector<int> arr, int n) {
//         // code here
        
//         //decrease the values of arr by 1
//         for(int i=0;i<n;i++)
//         arr[i]--;
        
//         //occurance 
//         for(int i=0; i<n;i++)
//         {
//             arr[arr[i]%n]+=n;
//         }
        
//         vector<int>ans(2);
//         for(int i=0;i<n;i++)
//         {
//             //repeating
//             if(arr[i]/n==2)
//             ans[0]=i+1;
//             else if(arr[i]/n==0) //missing   number
//             ans[1]=i+1;
//         }
        
//         return ans;
//     }
// };

// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         Solution ob;
//         auto ans = ob.findTwoElement(a, n);
//         cout << ans[0] << " " << ans[1] << "\n";
//     }
//     return 0;
// }
// // } Driver Code Ends
