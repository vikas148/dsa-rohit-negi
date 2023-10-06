#include<iostream>
#include<math.h>
using namespace std;
int counter(int n){
    int count=0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}

bool Armstrong(int num, int digit){
    int n=num,ans=0,rem;
    while (n)
    {
        rem=n%10;
        n/=10;
        ans=ans+pow(rem,digit);

    }

    if (ans==num)
    {
    return 1;
    }
    else
    return 0;
    
}

int main(){
int n;
cin>>n;
int digit=counter(n);
cout<<Armstrong(n,digit);
}