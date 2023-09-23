//Write a program in C++ to find the first n natural numbers.

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter your number"<<endl;
    cin>>a;
    int sum=0;
    for(int i=1;i<=a;i++){
        sum=sum+i;
    }
    cout<<"The sum of frist "<<a<<" numbers are="<<sum;
    return 0;
}