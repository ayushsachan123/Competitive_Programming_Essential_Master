#include<bits/stdc++.h>
#define int long long int

using namespace std;

const int p=5;
int mulm(int x,int y){

  return (x*y)%p;

}

int32_t main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


cout<<mulm(324,234);

return 0;
  
} 

//Output--
// 1
