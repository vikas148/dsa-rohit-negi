#include<iostream>

using namespace std;
bool chkPalindrome(string str, int start ,int end){
    if(start>=end)
    return 1;
    
    if(str[start]!=str[end])

    return 0;
    return chkPalindrome(str,start+1,end-1);
}
int main()
{
string str ="naman";
cout<<chkPalindrome(str,0,4);
}