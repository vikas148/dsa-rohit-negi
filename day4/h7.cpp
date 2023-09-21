#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number";
    int result;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
       if (i%4==0)
       {
         result=i;
         cout<<i<<endl;
       }
       
    }
    
}