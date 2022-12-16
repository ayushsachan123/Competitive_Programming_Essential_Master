#include<bits/stdc++.h>
using namespace std;

void clearIthBit(int &n,int i){
	int mask = ~(1<<i);
     n= n & mask; 
}

//v is the value which we want to update in that position 

void updateIthBit(int &n,int i,int v){
  clearIthBit(n,i);
  int mask = (v<<i);
  n= n|mask;
} 


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

int n =13;
int i;
cin>>i;

updateIthBit(n,i,0);

cout<<n;

return 0;
} 

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Input--
// 2
// Output--
// 9
