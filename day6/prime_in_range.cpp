//Write a program in C++ to find a prime number within a range

#include<iostream>
using namespace std;
  int main(){
    int a,b;
    cout<<"Enter the starting number and ending number of your in which you want to find prime numbers"<<endl;
    cin>>a;
    cin>>b;
    int fnd=0,ctr=0;
    for(int i=a;i<=b;i++){
        for(int j=2;j<=i*i;j++){
             if (i%j==0)
             {
                ctr++;
             }
             
        }
        if (ctr==0 && i!=1)
        {
            fnd++;
            cout<<i<<" ";
        }
        ctr=0;
    }
    cout<<"prime number in between "<<a <<" and " <<b <<" are: "<<fnd<<endl;
  }