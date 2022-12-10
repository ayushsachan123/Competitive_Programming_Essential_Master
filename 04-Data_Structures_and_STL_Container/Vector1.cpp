#include<bits/stdc++.h>

using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

vector<int> arr={1,2,3,4,10};

//Other Methods
//Get ith element
cout<<"element at second position "<<arr.at(2)<<endl;

//or use the operator
cout<<"using [] operator "<<arr[2]<<endl;
//get the size of array
cout<<"Size of the array "<<arr.size()<<endl;

//get the uderlying Capacity
arr.capacity();

//get the max size (available due to system or library implementation)
arr.max_size();


return 0;
} 
