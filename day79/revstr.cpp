#include<iostream>
using namespace std;
void revStr(string &str, int start, int end)
{
if(start>=end)
return;

  char c= str[start];
  str[start]=str[end];
  str[end]=c;
  revStr(str,start+1,end-1);
  

}

int main()
{
string str ="raman";
revStr(str,0,4);
cout<<str;
}