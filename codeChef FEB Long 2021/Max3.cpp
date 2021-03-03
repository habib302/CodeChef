#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>

using namespace std;
void Solve(vector<int> nums,int n);

int main(){
    
 // added the two lines below for faster input
 ios_base::sync_with_stdio(false); 
 cin.tie(NULL);
    
 //taking total testcases
 int t;
 cin>>t;
  while(t--){
  
    int n, k;
    cin>>n;
    //cin>>n>>k;

    vector<int> nums(n);
    //vector<string> nums(n);

    for(int i=0;i<n;i++){
      cin>>nums[i];
    }

    Solve(nums,n);

  }  
	return 0;
}

void Solve(vector<int> nums,int n){

  int x=0,y=0,z=0,max1=0,max2=0;
  sort(nums.begin(),nums.end());

  x=nums[0];
  y=nums[1];
  z=nums[n-1];
  
  max2= abs(x-y) + abs(x-z) + abs(y-z);

  cout<<max2<<endl;
  return ;
}