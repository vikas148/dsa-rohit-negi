#include<iostream>
using namespace std;
int pow(int num, int n){
    if(n==1)
    return num;
    if(n==0)
    return 1;
    return num* pow(num,n-1);
}
int main()
{
    int num;
    int n;
    cin>>num;
    cin>>n;
    cout<<pow(num,n);
}