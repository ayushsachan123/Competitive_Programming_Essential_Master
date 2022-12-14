#include<bits/stdc++.h>
using namespace std;

int count_bits(int n){
	int count=0;
	while(n>0){
		int a = n & 1;
         if(a==1){
         	count++;
         }
         n = n>>1;
	}
	return count;
}

//Counting Sets Bits : Hack (Faster method)
int count_bits_hack(int n){
	int ans = 0;
	while(n>0){
		n = n &(n-1);
		ans++;
	}
	return ans;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

 int n=3;
int a = count_bits(n);
cout<<"by count_bits "<<a<<endl;
int b = count_bits_hack(n);
cout<<"by count bits hack "<<b<<endl;
return 0;
} 

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// by count_bits 2
// by count bits hack 2
