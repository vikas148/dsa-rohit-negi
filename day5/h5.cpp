#include<iostream>
using namespace std;
int main(){
    
        int n ;
        cout<<"Enter your number"<<endl;
        cin>>n;
        int sum=0;
        for(int i=1;i<=n;i++){
            sum=sum+i*i;
        } 
        cout<<sum;
}