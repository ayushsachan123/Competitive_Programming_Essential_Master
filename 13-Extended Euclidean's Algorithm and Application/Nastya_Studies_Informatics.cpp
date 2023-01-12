#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

int l,r,x,y;
cin>>l>>r>>x>>y;

int a;
    if (y % x != 0){
        cout << 0 << '\n';
        return 0;
    }
int sum=0;
int n=y/x;
 for(int i=1;i*i<=n;i++){
     a = (x*y)/i;
 	if(a>=l && a<=r && y==(a*i)/__gcd(a,i)&& x == __gcd(a,i)){
 		cout<<a<<" "<<i<<endl;
         if(i*i==n) sum++;
         else sum+=2;
 	}
}
 cout<<sum<<endl;

return 0;
} 

//Input--
// 2 3 4 5
// Output--
// 0
