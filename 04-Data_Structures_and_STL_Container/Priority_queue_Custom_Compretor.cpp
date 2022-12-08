#include<bits/stdc++.h>

using namespace std;

class compare{
public:
	//operator() means we are overloading operator
	bool operator()(int a,int b){
		return a<b;
	}
};

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

int arr[]={10,15,20,13,6,90};
int n=sizeof(arr)/sizeof(int);

priority_queue<int ,vector<int>,compare> heap1;
for(int x : arr){
	heap1.push(x);
}

while(!heap1.empty()){
	cout<<heap1.top()<<endl;
	heap1.pop();
}
return 0;
} 	

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 90
// 20
// 15
// 13
// 10
// 6
