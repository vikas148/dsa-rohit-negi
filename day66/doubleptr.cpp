#include<iostream>

using namespace std;

int main()
{
    int n =10;
    int *p = &n;
    int **p2 =&p;
    int ***p3= &p2;

    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;
    cout<<&p2<<endl;
    cout<<p3<<endl;
    
    *p= *p+5;
    cout<<n<<endl;
}
