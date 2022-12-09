#include<bits/stdc++.h>

using namespace std;

//Base case
int sum(){
	return 0;
}

template<typename... T>
int sum(int a,T... args){
	return a+ sum(args...);
}



int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

//function with variable number of arguments

cout<<sum(1,2,3,4,5)<<endl;
cout<<sum(1,2)<<endl;

return 0;
} 

