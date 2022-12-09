#include<bits/stdc++.h>

using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

vector<int> v;

int n;
cin>>n;
for(int i=0;i<n;i++){
	int no;
	cin>>no;
	v.push_back(no); 
	cout<<"Capacity "<< v.capacity()<< " size "<<v.size()<<endl;
	}

//As we see the doubling of vector happen so to avoid this we reserve 
	//some space of memory

	vector<int>v1;
	v1.reserve(100);
	int m;
	cin>>m;

    for(int i=0;i<m;i++){
	int no;
	cin>>no;
	v1.push_back(no); 
	cout<<"Capacity "<< v1.capacity()<< " size "<<v1.size()<<endl;
	}

return 0;
} 

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 5
// 3 4 2 1 6
// Capacity 1 size 1
// Capacity 2 size 2
// Capacity 4 size 3
// Capacity 4 size 4
// Capacity 8 size 5
// 3
// 3
// Capacity 100 size 1
// 2
// Capacity 100 size 2
// 1
// Capacity 100 size 3
