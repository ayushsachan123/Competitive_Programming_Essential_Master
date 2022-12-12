//given an array 
//you have to print pair whose sum is equals to k

#include<bits/stdc++.h>
using namespace std;

void pairSum(vector<int> arr,int sum){
unordered_set<int>s;

for(int i=0;i<arr.size();i++){
	int x=sum-arr[i];

	if(s.find(x)!=s.end()){
		cout<<x<<","<<arr[i]<<endl;
	}
	s.insert(arr[i]);
}
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

vector<int> arr={10,5,2,3,-6,9,11,2};
int s=4;
pairSum(arr,s);

return 0;
} 

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 10,-6
// 2,2
