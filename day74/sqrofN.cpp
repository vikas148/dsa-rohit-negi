#include<iostream>
using namespace std;
int sqrOfN(int n)
{
    if(n==1)
    return 1;
    return n*n + sqrOfN(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<sqrOfN(n);
    
}