#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,8,5};
    int * ptr =&arr[4];
    cout<<*ptr<<endl;
//printing values of array from last index

  while(ptr>=arr)
    {
    cout<<*ptr<<endl;
    ptr--;
    }

}