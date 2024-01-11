#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    try{
    if(b==0)
    throw "divisible by zero is not possible";  
    int c=a/b;
    cout<<c<<endl;
    }
    catch(const char *e){
        cout<<"Exception occured: "<<e<<endl;
    }
    
}