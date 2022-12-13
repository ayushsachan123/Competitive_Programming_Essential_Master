#include<bits/stdc++.h>
using namespace std;

void clearBitsInRange(int &n,int i,int j){
	int a = (-1<<j+1);
	int b = (1<<i)-1;
    int mask = a |b;
    n=n & mask;
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

int n=31;
int i=1;
int j=3;

clearBitsInRange(n,i,j);
cout<<n;
return 0;
} 

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 17
