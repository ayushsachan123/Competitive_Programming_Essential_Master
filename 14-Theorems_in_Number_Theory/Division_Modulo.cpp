#include<bits/stdc++.h>
#define int long long int

using namespace std;

const int p=5;

int mulm(int x,int y){

  return (x*y)%p;
}

int powrm(int x,int y){
int res = 1;
while(y){
	if(y & 1) res = mulm(res,x);
	y/=2;
	 x= mulm(x,x);
 }
 return res;
}

int divm(int x,int y){

  return mulm(x ,powrm(y,p-2));

}

int32_t main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


cout<<divm(56,2);

return 0;
} 

//Output--
// 3
