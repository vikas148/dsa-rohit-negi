#include<iostream>
using namespace std;
void printEven(int num,int N)
{   if(num==N)
    {
        cout<<num;
        return ;

    }
     cout<<num;
     printEven(num+2,N);
}
int main()
{
    int N;
    cin>>N;
    if(N%2==1)
    N--;
    printEven(2,N);
}