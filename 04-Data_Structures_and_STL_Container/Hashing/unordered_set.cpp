#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

//set is just a collection of keys
//each insertion is o(1)
	unordered_set<int> s{1,2,3,8,11,15,0};
    //insert o(1)
    s.insert(111);
    
   //erese o(1)
	s.erase(11);

	int key;
	cin>>key;
	if(s.find(key)!=s.end()){
       cout<<key <<" is present"<<endl;
	}
	else{
		cout<<"Not found"<<endl;
	}


//print all the element of unordered set

for(auto x: s){
	cout<<x<<" ";
} 

return 0;
} 

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Input--
// 3
// Output--
// 3 is present
// 111 1 8 15 2 3 0 
