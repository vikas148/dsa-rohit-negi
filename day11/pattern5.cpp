#include<iostream>
using namespace std;
int j;
int main(){
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
    for( j=1;j<=i;j++){
        cout<<"* ";
    }
    
    for(j=1;j<=2*n-2*i;j++){
        cout<<"  ";
    }

    for( j=1;j<=i;j++){
        cout<<"* ";
    }
       cout<<endl;
   } 
    

        for(int i=n-1;i>=1;i--){
    for( j=1;j<=i;j++){
        cout<<"* ";
    }
    
    for(j=1;j<=2*n-2*i;j++){
        cout<<"  ";
    }

    for( j=1;j<=i;j++){
        cout<<"* ";
    }
       cout<<endl;
   }  


}   