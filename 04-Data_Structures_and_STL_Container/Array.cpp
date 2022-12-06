#include<bits/stdc++.h>

using namespace std;

//Array is passed by reference

void updateArray(int arr[],int i,int val){
  arr[i]=val;
}

void print(int arr[],int n){
	for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
cout<<endl;
}

void address(int arr[],int n){
for(int i=0;i<n;i++){
	cout<<&arr[i]<<endl;
}
cout<<endl;
}


//size of array is different in function outside main and main because only address is
//passed in the main and it store in pointer variable of size 8 bytes
//so it print only 8 so you have to pass explicitelly

void size(int *arr){ //or int arr[]
	cout<<"Array size in function "<<sizeof(arr);
	cout<<endl;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


int arr[5];
int n=sizeof(arr)/sizeof(int);

for(int i=0;i<n;i++){
	cin>>arr[i];
}

cout<<"Array size in main "<<sizeof(arr)<<endl;

//actual array is updated
updateArray(arr,1,100); 
//sort
sort(arr,arr+n);
//print
print(arr,n);
//print address
address(arr,n);
//size of array
size(arr);


return 0;
} 

//Output--
// Array size in main 20
// -1534058080 0 100 21860 164312128 
// 0x7ffe09cb3330
// 0x7ffe09cb3334
// 0x7ffe09cb3338
// 0x7ffe09cb333c
// 0x7ffe09cb3340

// Array size in function 8
