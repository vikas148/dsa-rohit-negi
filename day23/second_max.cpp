#include<iostream>
using namespace std;




int main(){

}



int print2largest(int arr[],int n){
 int ans=-1;
 //largest element
 for(int i=0; i<n;i++){
  if(arr[i]>ans)
  ans=arr[i];  
 } 


 //second largest
 int second= -1;
 for(int i=0;i<n;i++){
    if (arr[i]!=ans)
    {
        second=max(second,arr[i]);
    }
    
 }
 return second;
}