#include<iostream>
using namespace std;
int partition(int arr[],int start,int end)
{
    int pos=start;
     int pivot = arr[end];
    
    for(int i =start;i<end;i++)
    {
        if (arr[i]<=arr[end])
        {
           swap(arr[i],arr[pos]);
        pos++;
        }
        
    }
    swap(arr[pos], arr[end]);
    return pos;
}
void quickSort(int arr[],int start, int end)
{

   if(start>=end)
   return  ;
  int pivot = partition(arr,start,end);

//   left side
  quickSort(arr,start,pivot-1);
  //right
  quickSort(arr, pivot,end);
}
int main()
{
   int arr[]={10,3,4,1,5,6,3,2,11,9};
   quickSort(arr,0,9);
    for(int i=0;i<10;i++)
    cout<<arr[i]<<" ";
}