#include<bits/stdc++.h>
using namespace std;

void setIthBit(int &n,int i){
	int mask = 1<<i;
	n=n|mask;
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

int n=5;
int i;
cin>>i;

setIthBit(n,i);
cout<<n;

return 0;
} 

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Input--
// 3
// Output--
// 13
