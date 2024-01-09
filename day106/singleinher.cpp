#include<iostream>
using namespace std;
class human{
protected:
string name;
int age;

public:
void work()
{
    cout<<"I am working\n";
}
};

class Student : public human{
int roll_number,fees;
public:
Student(string name, int age, int roll_number, int fees)
{
    this->name=name;
    this->age=age;
    this->roll_number=roll_number;
    this->fees=fees;
}
};
int main()
{
Student a1("rohit",26,32,99);
a1.work();

}