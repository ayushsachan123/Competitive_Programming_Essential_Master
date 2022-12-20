//Print all Subsequences of a string using bit-masking 

#include<bits/stdc++.h>
using namespace std;

void overlaynumber(char arr[], int number){

	int j=0;
  while(number>0){
  	int last_bit = number & 1;
  	if(last_bit){
          cout<<arr[j];
  	}
  	
  	j++;
  	number = number>>1;
  }
  cout<<endl;
}

void generateAllSubsequences(char arr[]){

	int n = strlen(arr);
	for(int i=0;i<(1<<n);i++){ // 2^N -1 == (1<<N)-1
         overlaynumber(arr,i);
	}
	return;
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

//Subsets / Subsequences
	char arr[10000];
	cin>>arr;

generateAllSubsequences(arr);

return 0;
} 

//Input--
// abcd
// Output--
// a
// b
// ab
// c
// ac
// bc
// abc
// d
// ad
// bd
// abd
// cd
// acd
// bcd
// abcd
