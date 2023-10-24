#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
//create vector,declare
// vector<int>v;
// vector<int>v1(5,1);
// //size and capacity
// cout<<"Size of v: "<<v.size()<<endl;
// cout<<"Capacity of v: "<<v.capacity()<<endl;
// v.push_back(2);
// v.push_back(3);
// v.push_back(10);
// //update value
// v[1]=5;

// cout<<"Size of v: "<<v.size()<<endl;
// cout<<"Capacity of v: "<<v.capacity()<<endl;

// // v1.push_back(8) //size 6 capacity 10
// cout<<"Size of v: "<<v1.size()<<endl;
// cout<<"Capacity of v: "<<v1.capacity()<<endl;

// vector<int>v3={1,2,3,4,5};

//delete value from vector
// vector<int>vnew;
// vnew.push_back(3);
// vnew.push_back(34);
// vnew.push_back(56);
// vnew.push_back(34);
// vnew.push_back(45);

// vnew.pop_back();

// cout<<"Size of vnew "<<vnew.size()<<endl;
// cout<<"Capacity of vnew "<<vnew.capacity()<<endl;

// vnew.erase(vnew.begin()+1);

// cout<<"Size of vnew "<<vnew.size()<<endl;
// cout<<"Capacity of vnew "<<vnew.capacity()<<endl;
//  vnew.insert(vnew.begin()+1,50);
//  vnew[0]=59;
// //  vnew.clear();
//    for(int i=0;i<vnew.size();i++)
//     cout<<vnew[i]<<" ";


// vector<int>arr;
// arr.push_back(2);
// arr.push_back(12);
// arr.push_back(21);
// arr.push_back(122);
// cout<<arr.front()<<endl;
// cout<<arr[arr.size()-1]<<endl;
// cout<<arr.back()<<endl;

//copy 1 vector values to another vector

// vector<int>a;
// a=arr;
// cout<<a.size();

// for(auto it=arr.begin();it!=arr.end();it++)
// {
//     cout<<*it<<" ";
// }
// cout<<endl;
// for(auto i: arr)
// cout<<i<<endl;


vector<int>ans;
ans.push_back(5);
ans.push_back(235);
ans.push_back(15);
ans.push_back(54);
ans.push_back(125);

//sort in increaing order
sort(ans.begin(),ans.end());
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";
cout<<endl;
//sort in decreasing orde
sort(ans.begin(),ans.end(),greater<int>());

for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";
}