#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b, a%b);
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int a,b;
	cin>>a>>b;

	cout << gcd(a,b) <<endl;

return 0;
} 

// Input--
// 6 12
// Output--
// 6
