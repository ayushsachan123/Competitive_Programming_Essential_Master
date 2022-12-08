#include<bits/stdc++.h>

using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

int arr[]={10,15,20,13,6,90};
int n=sizeof(arr)/sizeof(int);

//by default it makes the max heap i.e print
//element in decending order
priority_queue<int> heap;
for(int x : arr){
	heap.push(x);
}

while(!heap.empty()){
	cout<<heap.top()<<endl;
	heap.pop();
}


//for Min heap
//greater<int> it is the compretor
priority_queue<int ,vector<int>,greater<int>> heap1;
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
// 6
// 10
// 13
// 15
// 20
// 90
