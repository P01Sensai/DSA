#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int b;
    vector <int> arr;
    for (int i =0 ;i<n;i++){
        cin>>b;
        arr.push_back(b);

    }
    cout<< "output" <<endl; 
    for(auto print : arr){
        cout<<print<<" ";
    }
    cout<<endl;
    cout<<" whats your target element = ";
    int target;
    cin>>target;
    for(int i = 0;i<n;i++){
        if(arr[i] == target) cout<<i<<endl;
        

    }


    return 0;

}