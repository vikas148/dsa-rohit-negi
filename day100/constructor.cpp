#include<iostream>
using namespace std;
class customer{
string name;
int account_number;
int balance;

public:
customer()
{
    // cout<<"Hello constructor";
    name="vikas";
    account_number=100;
    balance=1000;
}
//parametrized customer; 
customer(string a, int b, int c)
{
    name=a;
    account_number=b;
    balance=c;
}


//inline constructor
// inline customer(string a, int b, int c): name(a),account_number(b),balance(c){}


//copy constructor
customer(customer &b){
    name=b.name;
    account_number=b.account_number;
    balance=b.balance;
}

// customer(string name, int account_number, int balance)
// {
//     this->name=name;
//     this->account_number=account_number;
//     this->balance=balance;
// }
//constructor overloading 
customer(string a, int b)
{
    name=a;
    account_number=b;
}
void display()
{
    cout<<name<<" "<<account_number<<" "<<balance<<endl;
}

};
int main()
{
    customer a1;
    customer a2("Rohit",23,1000);
    customer a3("mohit",45);
    a1.display();
    a2.display();
    a3.display();

    customer a4(a3);
    a4.display();
}