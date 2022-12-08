#include<bits/stdc++.h>

using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

auto sum = [](auto a,auto b){
  return a+b;
};

cout<<sum(1,2)<<endl;
cout<<sum(1.2,3.5)<<endl;
cout<<sum(string("coading "),string("minutes"))<<endl;

return 0;
} 

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 3
// 4.7
// coading minutes
