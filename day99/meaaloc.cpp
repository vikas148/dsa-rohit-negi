#include<iostream>
using namespace std;
class Student
{
public:
string name;
int age, roll_number;
string grades;


//Function getter and Setter


};
int main()
{
Student *s= new Student;
(*s).name="Rohit";
s->grades="A++";
cout<<s->name;
}