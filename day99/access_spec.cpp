#include<iostream>
using namespace std;
class Student
{
private:
string name;
int age, roll_number;
string grades;

public:
//Function getter and Setter
void setname(string  n)
{
    name=n;
}
void setage(int  n)
{
    age=n;
}
void setrol(int   n)
{
    roll_number=n;
}
void setgrade(string  n)
{
    grades=n;
}

void getname()
{
    cout<<name;
}
void getage()
{
    cout<<age;
}

void getrollnumber(){
cout<<roll_number;
}
void getgrades(){
    cout<<grades;
}


};
int main()
{
Student s1,s2;
s1.setname("vikas");
s1.setage(12);
s1.setgrade("A++");
s1.setrol(420);
// cout<<s1.name;
s1.getname();


s2.setname("ram");
s2.getname();
}