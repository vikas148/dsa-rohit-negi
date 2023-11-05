#include<iostream>
#include<climits>
using namespace std;
void printrow(int arr[][4],int row,int col){
    int index=-1,sum=INT_MIN;
    for(int i=0;i<row;i++)
    {
        int total=0;
        for(int j;j<col;j++)
        total+=arr[i][j];

        if(total>sum)
        {
            sum=total;
            index=i;
        }
        
    }
cout<<index<<" ";
   
}
int main()
{
 
int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
 printrow(arr,3,4);
}