#include<bits/stdc++.h>
using namespace std;

int getIthBit(int n,int i){
 int mask = (1<<i);
 return (n & mask) >0 ? 1 : 0;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

int n=5;
int i;
cin>>i;
cout<<getIthBit(n,i)<<endl;

return 0;
} 
