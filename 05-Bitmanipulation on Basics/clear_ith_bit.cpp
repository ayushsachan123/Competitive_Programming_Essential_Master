#include<bits/stdc++.h>
using namespace std;

int clearIthBit(int n,int i){
	int mask = ~(1<<i);
     return n & mask; 
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

int n=13;
int i;
cin>>i;

clearIthBit(n,i);

return 0;
}  

