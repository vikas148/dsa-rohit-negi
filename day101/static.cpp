#include<iostream>
using namespace std;
class customer{
    string name;
    int account_number, balance;
    static int total_customer;
    static int total_balance;
    public:

     customer(string name,int account_number, int balance)
     {
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        total_customer++;
        total_balance+=balance;
     }
    static void accessstatic()
    {
        cout<<total_customer<<endl;
        cout<<total_balance<<endl;
    }

    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
             total_balance+=amount;

        }
    }

    void withdraw(int amount)
    {
        if(amount<=balance&&amount>0)
        {
          balance-=amount;
          total_balance-=amount; 
        }
    }

    //  void display(){
    //     cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<< " "<<endl;
    
    //  }

     void display_total()
     {
        cout<<total_customer<<endl;
     }

};

int customer::total_customer=0;
int customer::total_balance=0;
int main()
{
 customer a1("rohit",1,1000);
 customer a2("rahul",3,2000);
// a1.display();
// a2.display();

customer a3("ajay",3,3000);
// a3.display();
 a1.display_total();

a1.deposit(800);
a2.withdraw(500);
customer::accessstatic();

}