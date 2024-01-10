#include<iostream>
using namespace std;
class person{
protected:
string name;

public:
void introduce()
{
    cout<<"Hello my name is: "<<name<<endl;

}
};

class employee: public person{
protected:
int salary;
public:
void monthly_salary(){
    cout<<"My monthly salary is: "<<salary<<endl;

}
};

class manager : public employee{
public:
string department;
manager(string name,int salary, string department)
{
    this->name=name;
    this->salary=salary;
    this->department=department;
}

void work()
{
  cout<<"I am leading the department"<<department<<endl;

}
};

int main()
{

manager a1("rohit",200,"finance");
a1.work();
a1.monthly_salary();
a1.introduce();
}