//pattern 5 using another logic

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            cout<<count<<" ";
            count--;
        }
        cout<<endl;
    }
}