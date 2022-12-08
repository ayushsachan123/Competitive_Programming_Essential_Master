#include<iostream>
#include<queue>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

queue<int>q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);
q.push(6);

//FIFO type
while(!q.empty()){
	cout<<q.front()<<endl;
    q.pop();
}

return 0;
} 

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 1
// 2
// 3
// 4
// 5
// 6
