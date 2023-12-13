#include<iostream>
using namespace std;
bool linearSearch(int arr[],int X,int index, int N ){

if(index==N)
return 0;   

if(arr[index]==X)
return 1;

return linearSearch(arr,X,index+1,N);
}
int main()
{
    int arr[]= {2,3,6,7,1,5};
    int X=7;
   cout<< linearSearch(arr,X,0,6);
}