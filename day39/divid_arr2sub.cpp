#include<iostream>
#include<vector>
#include<vector>
#include<climits>
using namespace std;
bool divide(vector<int>arr){
int max =INT_MIN, prefix=0, total_sum=0 ,n=arr.size();
for(int i=0;i<n;i++)
total_sum+=arr[i];

for(int i=0;i<n;i++){
    prefix+=arr[i];
    int ans =total_sum-prefix;
    if(ans==prefix)
    return 1;

}
return 0;  
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++)
    cin>>v[i];

    cout<<divide(v);
}