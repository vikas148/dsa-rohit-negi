#include<iostream>
using namespace std;

int main(){
 string s="Rohit";
 int size=0;
while(s[size] !='\0')
{
size++;
}
cout<<size;

// pallindrome or not
string s2= "naman";
int start =0,end=s2.size()-1;
while(start<end){
    if(s2[start]!=s2[end]){
        cout<<"Not a pallindrome";
        return 0;
    }

    start++, end--;
}

cout<<"Pallindrome ";

}