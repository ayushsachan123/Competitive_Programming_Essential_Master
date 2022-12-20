#include<bits/stdc++.h>
using namespace std;

//setOfCities 0000, n = no. of cities, city A,B,C,D 
int tsp(vector<vector<int>>dist,int setOfCities,int city,int n){

   // Base case
	if(setOfCities == (1<<n)-1){ //== N=4 2^4-1 it means we have covered all th cities
	//return the cost from the city to the original

		return dist[city][0];
	}

	// Otherwise try all possible options
	int ans = INT_MAX;

	for(int choice=0;choice<n;choice++){
		//need to check if city is visited or not
		if((setOfCities & (1<<choice))==0){

			int subProb = dist[city][choice] + tsp(dist,setOfCities | (1<<choice),choice,n);
             ans = min(ans,subProb);
		}
	}
	return ans;
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

vector< vector<int>>dist{
	{0,20,42,25},
	{20,0,30,34}, 
	{42,30,0,10},
	{25,34,10,0}
};

cout<<tsp(dist,1,0,4)<<endl;

return 0;
} 

// Output--
// 85
