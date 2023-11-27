#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,8,5};
    int * ptr =arr;

    //print the add of first element
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

//print the address of second element or 1 index

cout<<arr+1<<endl;
cout<<&arr[1]<<endl;

//print the value of  0 index
cout<<arr[0]<<endl;
cout<<*arr<<endl;
cout<<*ptr<<endl;

//sare address print 
for(int i=0;i<5;i++)
{
cout<<arr+i<<endl;
// cout<<ptr+i<<endl;
}
//values

for(int i=0;i<5;i++)
{
// cout<<*(arr+i)<<endl;
cout<<ptr[i]<<endl;
}

//arithematic oper





}