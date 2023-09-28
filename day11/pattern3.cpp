#include<iostream>
using namespace std;
int j;
int main(){
   int n;
   cin>>n;
   for(int i=n;i>=1;i--){
    for( j=1;j<=n-i;j++){
        cout<<"  ";
    }
    
    for(j=1;j<=2*i-1;j++){
        cout<<"* ";
    }
       cout<<endl;
   } 
}  