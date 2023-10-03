//find unique element, where every element is repeating twice. 
#include <bits/stdc++.h>
using namespace std;
int uniele(vector <int> arr, int size){
    int ans = 0;
    for(int i = 0;i<size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int n; cout<<"enter the no of element - ";cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
    }
    // vector <int> arr = {1,2,3,4,5,6,1,2,4,5,6};
    // int size = 11;

    cout<< uniele(arr,n)<<endl;

    return 0;
}