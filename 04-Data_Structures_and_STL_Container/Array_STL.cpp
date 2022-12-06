#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

//update an array array is not update because stl container are pass by value

void updateArray(array<int,6> &xarr,int i,int val){
	xarr[i]=val;
}

//print
void printArray(const array<int,6> &arr ){
  for(int i=0;i<arr.size();i++){
   	cout<<arr[i]<<"  ";
   }
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


   array<int,6>arr={1,2,3,16,78,8};
   // arr[0]=10;

    updateArray(arr,0,100);
      sort(arr.begin(),arr.end());


 //fill
      array<int,10>five;
      five.fill(5);
      //Using Normal for loop
      for(int i=0;i<five.size();i++){
      	cout<<five[i]<<" ";
      }
      cout<<endl; 
      //Using for each loop
      for(auto x:five){
      	cout<<x<<" ";
      }
      cout<<endl;
      
   printArray(arr);

	return 0;
} 

