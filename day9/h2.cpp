#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
  
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++)
        {
            char name='A'+(j-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }
    
}