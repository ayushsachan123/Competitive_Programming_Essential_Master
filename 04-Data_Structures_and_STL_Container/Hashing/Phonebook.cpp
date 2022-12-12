#include<bits/stdc++.h>

using namespace std;

int main(){

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// #endif

map<string,list<string>> phonebook;

phonebook["prateek"].push_back("1111111");
phonebook["prateek"].push_back("1111112");
phonebook["prateek"].push_back("1111113");

phonebook["krishna"].push_back("1211111");
phonebook["krishna"].push_back("1311111");
phonebook["krishna"].push_back("1411111");

for(auto x: phonebook){
	cout<<x.first<<x.second.second<<" "<<endl;
}


return 0;
} 
