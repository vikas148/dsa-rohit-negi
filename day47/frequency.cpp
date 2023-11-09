// Given an array arr[] of N positive integers which can contain integers from 1 to P where elements can be repeated or can be absent from the array. Your task is to count the frequency of all numbers from 1 to N. Make in-place changes in arr[], such that arr[i] = frequency(i). Assume 1-based indexing.
// Note: The elements greater than N in the array can be ignored for counting and do modify the array in-place

// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std; 

// // } Driver Code Ends
// class Solution{
//     public:
//     //Function to count the frequency of all elements from 1 to N in the array.
//     void frequencyCount(vector<int>& arr,int n, int P)
//     { 
//         // code here
        
//       for(int i=0;i<n;i++)
//         arr[i]--;
        
//         for(int i=0;i<n;i++)
//         arr[arr[i]%n]+=n;
        
//         vector<int>ans(2);
        
//         for(int i=0;i<n;i++)
//         {
//             //repeating element
//             if(arr[i]/n==2)
//             ans[0]=i+1;
//             //missing element
//             else if(arr[i]/n==0)
//             ans[1]=i+1;
//         }
        
//         return ans;
//     }
// };


// //{ Driver Code Starts.

// int main() 
// { 
// 	long long t;
	
// 	//testcases
// 	cin >> t;
	
// 	while(t--){
	    
// 	    int N, P;
// 	    //size of array
// 	    cin >> N; 
	    
// 	    vector<int> arr(N);
	    
// 	    //adding elements to the vector
// 	    for(int i = 0; i < N ; i++){
// 	        cin >> arr[i]; 
// 	    }
//         cin >> P;
//         Solution ob;
//         //calling frequncycount() function
// 		ob.frequencyCount(arr, N, P); 
		
// 		//printing array elements
// 	    for (int i = 0; i < N ; i++) 
// 			cout << arr[i] << " ";
// 	    cout << endl;
// 	}	
// 	return 0; 
// }





// // } Driver Code Ends
