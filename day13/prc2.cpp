#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter your number"<<endl;
    cin>>number;
    if(number % 2 ==0 && number > 0){
     cout<<"YES"<<endl;

    }

    else{
        cout<<"NO"<<endl;
    }
}