#include<iostream>

using namespace std;
//function to search x in arr
//arr: input array
//x: element to be seqarchd for

int search(int arr[],int N,int X)
{
for(int i=0;i<N;i++)
{
if (arr[i]==X)
return i;
}
return -1;

}
int main(){
    int arr[5]={6,7,9,3,4};
    int N=6;
    int X=4;
    cout<<search(arr,N,X);
}