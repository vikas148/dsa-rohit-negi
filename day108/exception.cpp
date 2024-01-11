#include<iostream>
using namespace std;
class customer{
string name;
int balance , account_number;
public:
customer(string name, int balance, int account_number)
{
    this->name=name;
    this->balance=balance;
    this->account_number=account_number;
}

void deposit(int amount){
    if(amount>0)
    {
        balance+=amount;
        cout<<amount <<" is credited successfully"<<endl;
    }
    else{
        cout<<"amount should be greater than 0\n";
    }
}

void withdraw(int amount)
{
    if(amount>0&&amount<=balance)
    {
     balance-=amount;
     cout<<amount<<"is debited sucessfully"<<endl;

    }
    else if(amount<0)
    {
        cout<<"amount should be greater than 0\n";
    }

    else{
        cout<<"your balance is low\n";
    }
}
};
int main()
{

    customer c1("rohit",5000,10);
    c1.deposit(100);
    c1.withdraw(6000); 
}