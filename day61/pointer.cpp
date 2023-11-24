#include<iostream>
using namespace std;

int main()
{
    int a=4;
    cout<<&a<<endl;
    int *ptr =&a;
    cout<<ptr<<endl;;
     char ch='c';
     char *chr=&ch;
    float m=2.6;
    float *ptr1= &m;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(ptr1)<<endl;
    cout<<sizeof(chr)<<endl;
    cout<<ptr1<<endl;

    cout<<*ptr<<endl; 
    cout<<*ptr1<<endl; 
    cout<<*chr<<endl; 
}