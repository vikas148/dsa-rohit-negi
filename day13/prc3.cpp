#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"What is your age"<<endl;
    cin>>age;
    if(age>=13 && age <=19){
        cout<<"You are a teenager"<<endl;

    }
    else{
        cout<<"NO";
    }
}