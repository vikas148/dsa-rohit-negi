#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
  
    for(int i=1;i<=n;i++){
        char name='a'+(i-1);
        for(int j=1;j<=i;j++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
    
}