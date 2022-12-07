#include<bits/stdc++.h>

using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

//create a 'Deck'
deque<int>dq;

//push_back
dq.push_back(5);

// remove last element from the book
dq.pop_back();

//push an element to the front
dq.push_back(10);

//pop an element from front
dq.pop_front();

//get refernce to front or back elements
dq.front();
dq.back();

 
return 0;
} 
