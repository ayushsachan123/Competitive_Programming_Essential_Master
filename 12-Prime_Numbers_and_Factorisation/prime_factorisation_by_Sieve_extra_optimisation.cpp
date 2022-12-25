#include<bits/stdc++.h>
#define N 1000000
#define ll long long
using namespace std;

void primeSieve(vector<int> &sieve){

 //Mark 1 and 0 as not prime
   sieve[1]=sieve[0] = 0;


//Initially you can say I will just mark all odd numbers as prime
   for(int i=3;i<=N;i+=2){
    sieve[i]=1;
   }

    //start from 2 and mark all multiples of ith number (prime) as not prime
	for(ll i=3;i<=N;i++){
      if(sieve[i]){ //if ith number is not mark then it is the prime no
         for(ll j = i*i;j<=N;j=j+i){
         	//marking j as not prime
            sieve[j]=0;
         }
      }
	}
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

vector<int> sieve(N,0); //Fill Constructor
 primeSieve(sieve);

 for(int i=0;i<=100;i++){
 	if(sieve[i]==1){
 		cout<<i<<" ";
 	}
 }
return 0;

} 

//Output--
// 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
