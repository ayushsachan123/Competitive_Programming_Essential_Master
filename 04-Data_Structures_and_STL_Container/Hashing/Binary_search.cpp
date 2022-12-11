 #include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int arr[] = {20, 30, 40, 40, 40, 50, 100, 1100};
    int n = sizeof(arr) / sizeof(int);
    //Search in a sorted array
    int key ;
    cin >> key;
     
     bool present = binary_search(arr,arr+n,key);
     if(present){
        cout<<key<<"  is present "<<endl;
     }
     else{
        cout<<"Not present"<<endl;
     }
     
    auto ub = upper_bound(arr, arr + n, key);
    int a = ub-arr;
    auto lb = lower_bound(arr, arr + n,key);
    int b=lb-arr;

    cout<<"frequency "<<a-b<<endl;

    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Input--
// 50
// Output--
// 50  is present 
// frequency 1
