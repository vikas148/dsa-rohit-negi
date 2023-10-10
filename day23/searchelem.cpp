#include<iostream>
using namespace std;
int main(){
    int arr[6]={10,45,4,5,1,6};
    int index=-1;
    int x=1;
    for(int i=0;i<=5;i++){
        if(arr[i]==x){
            index=i;
           break;
        }
        // else{
        //     cout<<"index not found ";
        // }
        
    }
    cout<<index;
    return 0;
}