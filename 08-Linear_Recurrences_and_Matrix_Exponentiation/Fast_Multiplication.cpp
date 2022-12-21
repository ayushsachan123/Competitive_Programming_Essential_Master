// a,b,c       a,b,c<=10^15
//res = (a*b)%c
 
#include<bits/stdc++.h>
using namespace std;

// c is mod

int multiply(int a,int b,int c){
  int res = 0;
  while(b){
  	if(b&1)
  		res += a;
        res%=c;
  		//Set or not set do a^2
  	    a+=a;
  	    a%=c;
  	    b = b>>1;
  }
  return res;
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

cout<<multiply(2,10,1e9+7);

return 0;

} 

//Output--
// 20
