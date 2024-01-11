#include<iostream>
using namespace std;
int main()
{
    try{
    int *p=new int[1000000000];
    cout<<"memory allocation is sucessfull"<<endl;
    delete[]p;
    }
    catch(const exception &e)
    {
        cout<<"Exception occured :"<<e.what()<<endl;
    }
}