#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int index,int n,int sum,vector<int>&ans)
{
if(index==n)
{
    // cout<<sum<<endl;
    ans.push_back(sum);
    return ;
}
    //not include
    print(arr,index+1,n,sum,ans);
    //include
    print(arr,index+1,n,sum+arr[index],ans);

}
int main()
{
    vector<int> ans;
    int arr[]={1,2,3,4};
  print(arr,0,4,0,ans);
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<endl;
}