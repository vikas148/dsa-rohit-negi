#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int start=0,end=n-1;

    int mid=(start+end)/2;

    if(arr[mid]==key)
     return mid;

     else if(arr[mid]>key)
     end=mid-1;

   else
   start = mid+1;  

}



int main(){
int arr[1000];
int n;
cout<<"What is your array size"<<endl;
cin>>n;
cout<<"Enter elements into your array";
for(int i=0;i<=n-1;i++)
cin>>arr[i];
int key;
cout<<"Enter the key you want to search"<<endl;
cin>>key;

cout<<"element "<<key<<" founded at index "<<binarySearch(arr,n,key);

}