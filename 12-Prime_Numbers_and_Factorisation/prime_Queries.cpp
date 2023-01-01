#include<bits/stdc++.h>
#define ll long long int
#define N 1000000
using namespace std;

void primeSieve(vector<int> &sieve,int a,int b){

 //Mark 1 and 0 as not prime
   sieve[1]=sieve[0] = 0;

    //start from 2 and mark all multiples of ith number (prime) as not prime
	for(ll i=2;i<=N;i++){
      if(sieve[i]){ //if ith number is not mark then it is the prime no
         for(ll j = i*i;j<=N;j=j+i){
         	//marking j as not prime
            sieve[j]=0;
         }
      }
	}
	
	vector<int> csum(N,0);
 int sum=0;
	for(int i=2;i<=N;i++){
         if(sieve[i]==1){
         	sum++;
             csum[i]=sum;
         }
         else{
         	csum[i]=csum[i-1];
         }
	}

	cout<<csum[b]-csum[a-1]<<endl;
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

int a,b;
cin>>a>>b;

vector<int> sieve(N,1); //Fill Constructor
 primeSieve(sieve,a,b);

 // for(int i=0;i<=100;i++){
 // 	if(v[i]==1){
 // 		cout<<v[i]<<" ";
 // 	}
 // }

return 0;
} 

//Input--
// 5 7
// Output--
// 2
