#include<iostream>
using namespace std;
class Student
{
public:
string name;
int age, roll_number;
string grades;
};
int main()
{
Student s1,s2;
s1.name ="Rohit";
s1.age=10;
s1.roll_number=21;
s1.grades="A+";
cout<<s1.age;

s2.name ="vikas";
s2.age=14;
s2.roll_number=420;
s2.grades="b+";
cout<<endl;
cout<<s2.name;
}