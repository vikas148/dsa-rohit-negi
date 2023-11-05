#include<iostream>
#include<climits>
using namespace std;
void printsumdiag(int arr[][3],int row,int col){
   int first=0;
   int second=0;

  //first diagonal
  int i=0;
  while(i<row){
    first+=arr[i][i];
    i++;
  }

  i=0; int j=col-1;
  while(j>=0){
    second+=arr[i][j];
    i++,j--;
  }
cout<<first<<" "<<endl;
cout<<second<<" "<<endl;
}
int main()
{
 int arr[3][3]={1,2,3,4,5,6,7,8,9};
 //diagonal sum
printsumdiag(arr,3,3);


}