//Write a function to check if a number is odd or even!

#include<bits/stdc++.h>

using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

 int a;
  cin>>a;
  
  if(a&1){
  	cout<<"Odd"<<endl;
  }
  else{
  	cout<<"Even"<<endl;
  }

return 0;
} 

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 2
// Even
