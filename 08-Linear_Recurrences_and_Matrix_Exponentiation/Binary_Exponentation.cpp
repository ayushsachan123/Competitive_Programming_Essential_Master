#include<bits/stdc++.h>
using namespace std;

//o(log(b))

int powr(int a,int b){
  int res = 1;
  while(b){
  	if(b&1)
  		res *= a;

  		//Set or not set do a^2
  	    a*=a;
  	    b = b>>1;
  }
  return res;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

cout<<powr(2,10);

return 0;
} 

// Output--
// 1024
