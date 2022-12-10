 #include<bits/stdc++.h>
 
 using namespace std;
 
 int main(){
 
 #ifndef ONLINE_JUDGE
 	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
 #endif
 
 //Empty Container Constructor
 vector<int>first;
 
 //Fill Constructor (4 integer with value 20)
 vector<int>second(4,20);  //{20,20,20,20}

 //Range Constructor
 int numbers[] = {10,20,30,40};
 vector<int> third(numbers,numbers+4);

//Copy Constructor
 vector<int> fourth(third);

 //Initialize vector at starting
 vector<int> fifth = {1,2,3,4,10};

 return 0;
 } 

