#include<bits/stdc++.h>
using namespace std;

//{x,y}
vector<int> extendedGCD(int a,int b){
if(b==0){
	//return the values of x and y
	return {1,0};
}
vector<int> result = extendedGCD(b,a%b);

//After recursive call is over
int smallx = result[0];
int smally = result[1];

int x = smally;
int y = smallx - (a/b)*smally;

return {x,y};
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

int a,b;
cin>>a>>b;

//ax + by = gcd(a,b);
int x,y;
vector<int> result = extendedGCD(a,b);
cout<<result[0]<<" and "<<result[1]<<endl;

return 0;
} 

//Input--
// 6 12
// Output--
// 1 and 0
