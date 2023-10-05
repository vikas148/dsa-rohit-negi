#include<iostream>
using namespace std;

int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}

bool prime(int n){
    if(n<2)
    return 0;
    for(int i=2;i<n;i++){
        if (n%i==0)
        {
        return 0;
        }
        return 1;
    }
}

int main(){
int n;
cin>>n;
cout<<prime(n)<<endl;
cout<<fact(n)<<endl;
cout<<prime(8-n);

}