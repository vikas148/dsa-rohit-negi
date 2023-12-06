#include<iostream>
using namespace std;
//Method 1 by using 2 arguments
void print(int num, int N)
{
// base case
if(num==N)
{
    cout<<num<<endl;
    return ;
}
cout<<num<<endl;
print(num+1,N);
}

//method 2 using single argument
void print2(int N)
{
// base case
if(N==1)
{
    cout<<N<<endl;
    return ;
}
print2(N-1);
cout<<N<<endl;

}
int main()
{
    //print number from 1 to N
    int N;
    cin>>N;
    // print(1,N);
    print2(N);
}