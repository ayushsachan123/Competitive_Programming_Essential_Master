#include<bits/stdc++.h>

using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

auto cmp = [](auto a,auto b)->bool{
	return a>b;
};

auto fruitLenCompare = [](auto s1,auto s2)->bool{
	return s1.length() < s2.length();
};

vector<int> v = {100,2,3,10,12,13,15};
vector<string> vs = {"appleeee","mangooo","bana","guava"};

sort(v.begin(),v.end(),cmp);

sort(vs.begin(),vs.end(),fruitLenCompare);

for(auto itr : v){
	cout<<itr<<" ";
}
cout<<endl;
for(auto itr : vs){
	cout<<itr<<endl;
}
return 0;
} 

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 100 15 13 12 10 3 2 
// bana
// guava
// mangooo
// appleeee
