#include<iostream>
using namespace std;
void waveform(int arr[][4],int row,int col){
    for(int j=0;j<col;j++){
        //up to down 
        if (j%2==0)
        {
          for(int i=0;i<row;i++)
          cout<<arr[i][j]<<" ";   
        }
        else
        {
          for(int i=row-1;i>=0;i--)
          cout<<arr[i][j]<<" ";   
        }
         
    }
}
int main(){
     int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4]={0,1,3,4,6,7,10,11,41,18,9,11};

    waveform(arr1,3,4);
}