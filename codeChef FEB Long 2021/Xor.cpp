#include <bits/stdc++.h>
using namespace std;
vector<vector<long int>> sub;
void Solve(vector<long int> nums,int n);
void printArray(vector<long int> arr, int n) ;

void printArray(vector<long int> arr, int n) 
{   vector<long int> temp; 
	for (long int i = 0; i < n; i++){ 
		//cout << arr[i] << " ";
        temp.push_back(arr[i]); 
    }
    sub.push_back(temp);
	//cout << endl; 
} 

void printSubsequences(vector<long int> arr, int index,vector<long int> subarr) 
{
	
	if (index == arr.size()) 
	{ 
		long int l = subarr.size();
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

int main(){
    
 // added the two lines below for faster input
 ios_base::sync_with_stdio(false); 
 cin.tie(NULL);
    
 //taking total testcases
 int n;
 cin>>n;
 vector<long int> arr(n);
 vector<long int> b;
 for(long int i=0;i<n;i++){
    cin>>arr[i];
}
//Solve(arr,n);

int t;
cin>>t;
printSubsequences(arr, 0, b);
while(t--){
  
  int r=sub.size();
  int c,len,x=0,sum=0;
  cin>>len;
  for(long int i=0;i<r;i++){
      c=sub[i].size();
      if(c<=len){
          x=sub[i][0];
          for(int j=1;j<c;j++){
            x = x ^ sub[i][j];
          }
        sum = sum + x;
      }
  }
  cout<<sum<<'\n';
}  

return 0;
}
