#include<iostream>
using namespace std;
class human
{
private:
int a;
protected:
int b;
public:
int c;

void fun()
{
   a=10;
   b=20;
   c=30; 
}

};
int main(){
human rohit;
// rohit.a=10;
// rohit.b=3;
rohit.c=3;
rohit.fun();
}