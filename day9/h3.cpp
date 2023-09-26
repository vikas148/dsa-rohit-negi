#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
  
    for(int i=1;i<=n;i++){
        
        for(int j=10;j<=10+i-1;j++)
        {
            
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}