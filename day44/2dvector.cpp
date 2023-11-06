#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
//create 2d vector
// vector<int>matrix;
vector<vector<int> >matrix(3,vector<int>(4,1));
//for(int i=0; i<3;i++)
//for(int j=0;j<4;j++)
//cout<<matrix[i][j]<<" ";
cout<<" rows "<<matrix.size();
cout<<" col "<<matrix[0].size();

//takinf input from user
for(int i=0;i<3;i++)
for(int j=0;j<4;j++)
cin>>matrix[i][j];

for(int i=0;i<3;i++)
for(int j=0;j<4;j++)
cout<<" "<<matrix[i][j];

}