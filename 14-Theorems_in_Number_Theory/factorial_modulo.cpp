#include<bits/stdc++.h>
#define int long long int
using namespace std;

const int p = 7, N = 10e5;
int fact[N];

int mulm(int x,int y){

  return (x*y)%p;
}

void calculate_factorials(){
	fact[0]=1;
  for(int i=1;i<N;i++){
  	fact[i] = mulm(fact[i-1],i); 
  }
}

int32_t main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

calculate_factorials();
cout<<fact[5];

return 0;
} 

//Output--
//1
