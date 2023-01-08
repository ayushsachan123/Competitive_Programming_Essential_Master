#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
if(b==0){
	return a;
}
return gcd(b, a%b);
}

//Extended Euclid's Algoritm ax + by = gcd(a,b)

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
//By extended euclid's Algoritm
cout<<result[0]<<" and "<<result[1]<<" gcd is "<<result[2]<<endl;

//By euclid's Algoritm
cout<<"Euclid's Algoritm "<<gcd(a,b);

return 0;
} 

// Input--
// 5 6
// Output--
// -1 and 1 gcd is 1
