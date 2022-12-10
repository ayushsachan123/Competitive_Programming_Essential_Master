#include<bits/stdc++.h>

using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

vector<int> arr = {1,2,3,4,10};

//push_back method o(1), linear if re-allocation happens
arr.push_back(20);

//pop_back method 0(1)
arr.pop_back();

//clear all elements in the current vector, reduces size to 0
arr.clear();

//erase the 4th element 
arr.erase(arr.begin()+3);

//erase the range -first 3 element
arr.erase(arr.begin(),arr.begin() + 3);

return 0;

} 
