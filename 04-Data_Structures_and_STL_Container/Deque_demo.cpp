#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

deque<int>dq (10);
for(int i=0;i<10;i++){
	dq[i]=i*i;
}
dq.push_back(12);
dq.push_front(123);

cout<<"Size "<<dq.size()<<endl;

cout<<"Using normal loop"<<endl;
for(int i=0;i<10;i++){
	cout<<dq.at(i)<<" ";
}
cout<<endl;

cout<<"using for each loop"<<endl;
for(auto x : dq){
	cout<<x<<",";
}

return 0;
} 

//Output--
// Size 12
// Using normal loop
// 123 0 1 4 9 16 25 36 49 64 
// using for each loop
// 123,0,1,4,9,16,25,36,49,64,81,12,
