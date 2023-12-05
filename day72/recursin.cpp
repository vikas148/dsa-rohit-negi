#include<iostream>
using namespace std;
void birthday(int n)
{
    if(n==0)
    {
    cout<<"happy bairthday bhai>>>!";
    return ;
    }
    else
    cout<< n <<"days left for bairthday "<<endl;
    birthday(n-1);

}
int main()
{
    int n =5;
    birthday(n);
}