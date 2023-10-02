#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of N"<<endl;
    cin>>n;
    int num=1;
    while(num<=n){
       if(num%2==0){
          cout<<num<<endl;
       }
       num++; 
        
    }
}