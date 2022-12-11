#include<iostream>
#include<map>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

map<string,int>
menu;

//Insert key:value pairs inside the hashtable o(logn) operation
menu["maggi"]=15;
menu["coldrink"]=20;
menu["dosa"]=99;
menu["pizza"]=499;
menu["Burger"]=150;

//update price
menu["dosa"]=(1+0.1)*menu["dosa"];

//Deletion
menu.erase("dosa");

//search inside a collection of key value pairs (stored inside a hash table)
//o(logn)
string item;
cin>>item;

if(menu.count(item)==0){
	cout<<item<<" is not available"<<endl;
}
else{
	cout<<item<<" is available, and its cost is "<<menu[item]<<endl;
}


//We can iterate over all the key-values pair that are present

for(pair<string,int> item :menu){
	cout<<item.first<<" - "<<item.second<<endl;
}

cout<<endl;

for(auto itr : menu){
	cout<<itr.first<<" - "<<itr.second<<endl;
}

return 0;
} 


//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Input--
// maggi
// Output--
// maggi is available, and its cost is 15
// Burger - 150
// coldrink - 20
// maggi - 15
// pizza - 499

// Burger - 150
// coldrink - 20
// maggi - 15
// pizza - 499
