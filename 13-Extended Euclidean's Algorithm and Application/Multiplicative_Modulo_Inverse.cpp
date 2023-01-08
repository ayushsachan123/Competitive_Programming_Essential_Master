//Given two integers 'a' and 'm', find modular multiplicative inverse
//of 'a' under modulo 'm'. The modular multiplicative inverse is
//an integer 'x' such that.

//a*x congruent to 1 (mod m)

#include<bits/stdc++.h>
using namespace std;


vector<int> extendedGCD(int a,int b){
if(b==0){
	//return the values of x and y
	return {1,0,a};
}
vector<int> result = extendedGCD(b,a%b);

//After recursive call is over
int smallx = result[0];
int smally = result[1];

int gcd = result[2];

int x = smally;
int y = smallx - (a/b)*smally;

return {x,y,gcd};
}

//Code fo MMI
int modInverse(int a,int m){

	vector<int> result = extendedGCD(a,m);
	int x = result[0];
	int gcd = result[2];

	if(gcd!=1){
		cout<<"Multiplicative Modulo Inverse does not exist"<<endl;
	}

	int ans = (x%m + m)%m; //x can be negative also, {1,2,3..m-1} to make it positive
     return ans;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

int a,m;
cin>>a>>m; //relatively prime

cout<<modInverse(a,m)<<endl;
return 0;
} 

//Input--
// 6 7
//Output--
//6
