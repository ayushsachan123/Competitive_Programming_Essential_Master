#include<bits/stdc++.h>
#define ll long long int
using namespace std;

//Give us the size of the tree from the node where it is called
//N is the number of node in the tree 
int dfs(int u,int parent,vector<pair<int,int>>adj[],ll &ans, int N){
  int currentTreeSize = 1;
  for(auto p : adj[u]){
  	 int v = p.first;
  	 int wt = p.second;
  	 //Skip the parent node (which is acting as neighbour)
     if(v==parent){
     	continue;
     }
  	 int childTreeSize = dfs(v,u,adj,ans,N);
  	 int edgeContribution = 2*min(childTreeSize,N-childTreeSize)*wt;
  	 ans+=edgeContribution;
  	 //Udate the tree size by adsding childTreeSize
  	 currentTreeSize+=childTreeSize;

  }
  return currentTreeSize;
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

int t;
cin>>t;
int n,u,v,w;

//Graph

vector<pair<int,int>>adj[100005];

int tc =1;
while(tc<=t){
	cin>>n;
	//Reset the adjacent list before every test case
	for(int i=1;i<=n;i++){ //Numbering is 1 based not zero based so use  1
		adj[i].clear();
	}

// Scan the graph
	for(int i=1;i<=n-1;i++){
      cin>>u>>v>>w;
      adj[u].push_back({v,w});
      adj[v].push_back({u,w});
	}
 
	//dfs
	ll ans=0;
    dfs(1,-1,adj,ans,n);
    cout<<"Case #"<<tc<<": "<<ans<<endl;

	tc++;
}
return 0;
} 
