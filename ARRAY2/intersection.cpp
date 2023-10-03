#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {1,3,3,4,5,6};
    int n1 = 6;
    int brr[]= {3,1,4};
    int n2 = 3;

    vector <int> ans;

    for(int i=0; i<n1;i++){
        for(int j = 0; j< n2;j++){
            if(arr[i]==brr[j]){
                ans.push_back(arr[i]);
                brr[j] = INT_MIN;
            }
        }
    }
    int size = ans.size();

    for(int i=0; i<size ;i++){
        cout<< ans[i] <<" ";
    }

    


    return 0;
}

