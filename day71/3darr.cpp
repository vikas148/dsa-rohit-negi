#include<iostream>
using namespace std;
int main()
{
  int L, B,H;
  cin>>L>>B>>H;

   int ***ptr = new int **[L];

   //create 3d array and store it's address in ptr
   for(int i=0; i<L;i++)
   {
    ptr[i]= new int *[B];

    for( int j=0; i<B;j++)
    {
        ptr[i][j]= new int[H];
    }
   } 
}