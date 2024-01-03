#include<iostream>
using namespace std;
class customer {
    string name;
    int *balance;
public:
    customer(string name,int bal)
    {
        this->name=name;
        balance = new int;
        *balance =bal;
    }


~customer(){
    cout<<"all dynamic resources memory has been deleted...";
}

};
int main()
{
  customer a1("rohit",1000);  
}