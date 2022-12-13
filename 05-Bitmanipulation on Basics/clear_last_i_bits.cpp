#include<bits/stdc++.h>
using namespace std;

void clearLastIBits(int &n,int i){
	int mask= (~0<<i); //(-1<<i)
	n = n & mask;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

int n =15;
int i;
cin>>i;
clearLastIBits(n,i);
cout<<n;

return 0;
} 

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 2
// 12
