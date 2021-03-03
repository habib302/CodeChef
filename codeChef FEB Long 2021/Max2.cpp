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

int d1=0,d2=0,d3=0,max1=0,max2=0;

  for(int i=0;i<(n-2);i++){
    for(int j=i+1;j<(n-1);j++){
      for(int k=j+1;k<n;k++){
        max1= abs(nums[i]-nums[j]) + abs(nums[i]-nums[k]) + abs(nums[j]-nums[k]);
        max2=max(max1,max2);
      }
    }
  }

  cout<<max2<<endl;
  return ;
}