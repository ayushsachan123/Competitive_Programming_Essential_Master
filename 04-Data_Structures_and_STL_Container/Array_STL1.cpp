#include<bits/stdc++.h>

using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

//Initialise an Array
array<int,6> arr = {1,2,3,4,5,6};

//Get ith element
cout<<"element at second position "<<arr.at(2)<<endl;

//or use the operator
cout<<"using [] operator "<<arr[2]<<endl;
//get the size of array
cout<<"Size of the array "<<arr.size()<<endl;

//get the element at front and back
cout<<"element at front "<<arr.front()<<endl;
cout<<"element at back "<<arr.back()<<endl;


return 0;
} 
