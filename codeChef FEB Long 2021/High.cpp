#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>

using namespace std;

int main(){
    
 // added the two lines below for faster input
 ios_base::sync_with_stdio(false); 
 cin.tie(NULL);
  
  int n;
  cin>>n;

  int x=10;
  for(int i=10;i>=1;i--){
    if(n%i==0){
      cout<<i<<endl;
      break;
    }
  }
   
	return 0;
}
