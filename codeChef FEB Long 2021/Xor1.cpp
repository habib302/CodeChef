#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
using namespace std;
void Solve(vector<int> nums,int n);
void printArray(vector<int> arr, int n);
void printSubsequences(vector<int> arr, int index, vector<int> subarr);

int main(){
    
 // added the two lines below for faster input
 ios_base::sync_with_stdio(false); 
 cin.tie(NULL);
    
 //taking total testcases
 int t;
 cin>>t;
  while(t--){
    int len=0,res=0;
    int n;
    cin>>n;
    
    vector<int> arr(n);
    vector<vector<int>> res;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    vector<int> b; 
	  printSubsequences(arr, 0, b); 

  }  
	return 0;
}

void printArray(vector<int> arr, int n) 
{
  vector<int> temp;
	for (int i = 0; i < n; i++){
    temp.push_back(arr[i]);
  } 
	
  res.push_back(temp);
	//cout << endl; 
} 

void printSubsequences(vector<int> arr, int index, vector<int> subarr){
	
	if (index == arr.size()){
		int l = subarr.size(); 
    if (l != 0) 
			printArray(subarr, l);
	}
	else
	{
		printSubsequences(arr, index + 1, subarr); 
		subarr.push_back(arr[index]); 
    printSubsequences(arr, index + 1, subarr);
		
	}
	return; 
}