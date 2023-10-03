#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int b;
    vector <int> arr;
    for (int i =0 ;i<=n;i++){
        cin>>b;
        arr.push_back(b);

    }
    cout<< "output" ;
    for(auto print : arr){
        cout<<print<<" ";
    }


    return 0;

}