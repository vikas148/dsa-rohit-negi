#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of N"<<endl;
    cin>>n;
    int num=1;
     do {
        if (num % 2 == 0) {
            cout << num <<endl;
        }
        num++;
    } while (num <= n);
}