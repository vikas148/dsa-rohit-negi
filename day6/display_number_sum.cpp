//Write a program in C++ to display n terms of natural numbers and their sum. Sample Output

#include<iostream>
using namespace std;

int main(){
    int  n,sum=0;
    cout<<"Enter your number"<<endl;
    cin>>n;
    cout<<"your numbers are :";
    for(int i=1;i<=n;i++){
        cout<<" "<<i;
        sum=sum+i;
      
    }
     cout<<endl;
    cout<<"Sum of your numbers are "<<" "<<sum;
}