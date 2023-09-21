#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number"<<endl;
    int odd;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
       if (i%2!=0)
       {
          odd=i;
         cout<<odd<<endl;
         
       }
       
       
    }
    
}