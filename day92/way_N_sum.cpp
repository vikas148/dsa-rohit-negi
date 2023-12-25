// //{ Driver Code Starts
// #include <bits/stdc++.h> 
// using namespace std; 
  

// // } Driver Code Ends
// class Solution
// {
//   public:
//     // function to count the total  
//     // number of ways to sum up to 'N'
//     int way(int arr[],int m,int sum)
//     {
//         if(sum==0)
//         return 1;
//         if(sum<0)
//         return 0;
        
        
//         // int ans =0;
//         // long long ans =0;
//         for(int i=0;i<m;i++)
//         ans+=way(arr,m,sum-arr[i]);
//         // return ans;
//         return ans%1000000007;
//     }
    
    
//     int countWays(int arr[], int m, int N) 
//     { 
//       //code here.
//       return way(arr,m,N);
//     } 
    
// };


// //{ Driver Code Starts.

// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	    {
// 	        int m,n ;
// 	        cin>>m>>n;
// 	        int arr[m];
// 	        for(int i = 0;i<m;i++)
// 	            cin>>arr[i];
// 	        Solution ob;     
// 	        cout<<ob.countWays(arr,m,n)<<endl;
// 	    }
// }
// // } Driver Code Ends