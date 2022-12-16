#include<bits/stdc++.h>
using namespace std;

void powerOfTwo(int n){
	int a = n-1;
	if((a&n)==0){
		cout<<"power of two"<<endl;

	}
	else{
		cout<<"Not power of two"<<endl;
	}
}

int main(){

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// #endif

int a;
cin>>a;
powerOfTwo(a);

return 0;

} 

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 3
// Not power of two
