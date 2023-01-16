#include<bits/stdc++.h>
using namespace std;

const int p=5;
int addm(int x,int y){
  return(x+y)%p;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


cout<<addm(3,5);

return 0;
} 

//Output--
// 3
