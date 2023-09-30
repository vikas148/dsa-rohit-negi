#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a , b and c"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"NO";
    }
}