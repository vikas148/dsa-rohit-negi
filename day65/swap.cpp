#include<iostream>
using namespace std;
int swap(int *ptr, int *ptr1)
{
    int temp = *ptr;
    *ptr=*ptr1;
    *ptr1=temp;
}
int main()
{
 int first =34;
 int second = 36;
 cout<<first<<endl;
 cout<<second<<endl;
 swap(&first,&second);
 cout<<first<<endl;
 cout<<second<<endl;

}