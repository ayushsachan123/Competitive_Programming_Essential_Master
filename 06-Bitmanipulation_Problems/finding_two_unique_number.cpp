//Given (2N+2) no. where every no. is coming twice except 
//two no. find those two unique numbers.

#include<bits/stdc++.h>
using namespace std;

void uniqueNo2(vector<int> arr){
	int n = arr.size();
	// XOR
	int result=0;
	for(int i=0;i<n;i++){
		result = result^arr[i];
	}

	//position of set bit from right
	int pos=0;
	int temp = result;
	while((temp&1)==0){
		pos++;
		temp = temp>>1;
	}

	// Filter ot the number from the array which have set bit at 'pos'
	 int setA = 0;
	 int setB = 0;
	 int mask = (1<<pos);
	 for(int i=0;i<arr.size();i++){
         if((arr[i] & mask) >0){ 
             setA=setA^arr[i];
           }
   else{
   	setB = setB^arr[i];
	 }
   }

   cout<<setA<<endl;
   cout<<setB<<endl;
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

vector<int> arr = {1,3,5,4,3,1,5,7};

uniqueNo2(arr);

return 0;

} 

// Output--
// 7
// 4
