#include<bits/stdc++.h>

using namespace std;

int main(){

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
//  #endif

vector<int> v;
v.reserve(100);
int n;
cin>>n;
for(int i=0;i<n;i++){
	int no;
	cin>>no;
	v.push_back(no); 
	cout<<"Capacity "<< v.capacity()<< " size "<<v.size()<<endl;
	}

	//sorting
	sort(v.begin(),v.end());
for(auto x: v){
	cout<<x<<" ";
}

return 0;
} 

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 5
// 3 4 2 1 6
// Capacity 100 size 1
// Capacity 100 size 2
// Capacity 100 size 3
// Capacity 100 size 4
// Capacity 100 size 5
// 1 2 3 4 6
