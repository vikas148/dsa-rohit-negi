#include<iostream>
using namespace std;
class area{
 public:
 int calculatearea(int r)
 {
    return 3.14*r*r;
 }

 int calculatearea(int x, int y)
 {
    return x*y;
 }
};
int main(){
area a1;
cout<<a1.calculatearea(3)<<endl;
cout<<a1.calculatearea(3,4)<<endl;
}
//function overloading