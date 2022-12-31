#include<bits/stdc++.h>

using namespace std;

//o(sqrt(N))
void factorise(int n){

   	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			int count=0;
			while(n%i==0){
			  count++;
              n/=i;
			}
			cout<<i<<"^"<<count<<",";
		}
	}
	//Out of the loop
	if(n!=1){
		cout<<n<<"^"<<1<<endl;
	}
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

int n = 99;
factorise(n);

return 0;
} 

//Output--
// 3^2,11^1
