//Given (2N+1) no. where every no. comes twice except one number.
//Find out that unique no.


#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

vector<int>v = {3,2,5,5,1,2,6,3,1};
int a = v.size();
int x=0;
for(int i=0;i<a;i++){
	x=x^v[i];
}
cout<<x<<endl;
return 0;
} 

//Output--
// 6
