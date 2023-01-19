#include <bits/stdc++.h>

using namespace std;

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl

inline int power(int a, int b)
{
	int x = 1;
	while (b)
	{
		if (b & 1) x *= a;
		a *= a;
		b >>= 1;
	}
	return x;
}

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;

void solve() {
	int a;
	cin>>a;
vi v(a);
vi v1;
for(int i=0;i<a;i++){
cin>>v[i];
}

int sum=0;
for(int i=0;i<a;i++){
 sum+=v[i];
 sum=sum%a;
 v1.push_back(sum);
}

int solved =0;
int answer = 0;
for(int i=0;i<a;i++){
	if(v1[i]==0){
		solved = 1;
		cout<<i+1;
	for(int j=0;j<=i;j++){
		cout<<j+1<<" ";
	 }
	 	break;
   }
	
  }


  if(solved ==0){
  	vector<int>v_ans(a,0);
 for(int i=0;i<a;i++){
  v_ans[v1[i]]++;
  if(v_ans[v1[i]]>=2){
  	answer=v1[i];
  	break;
  }
 }
  }
  int first =0;
  int second = 0;
for(int i=0;i<a;i++){
	if(v1[i]==answer){
		first=i+1;
		break; 
	}
}
for(int i=first;i<a;i++){
	if(v1[i]==answer){
		second=i+1;
		break;
	}
}
cout<<second-first<<endl;
for(int i=first+1;i<=second;i++){
	cout<<i<<" ";
}
cout<<endl;
}


int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt",  "r",  stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	cin >> t;
	while (t--) solve();

	return 0;
}

// Input:
// 1
// 3
// 4 6 10
// Output:
// 1
// 2
