#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {1,3,4,2,2};
    int n1 = 5;
    // int brr[]= {7,8,9};
    // int n2 = 3;

    vector <int> ans; 

    for(int i=0; i<n1;i++){
        for(int j = i+1; j< n1;j++){
            if(arr[i]==arr[j]){

                ans.push_back(arr[i]);
                arr[j] = INT_MIN;
            }
        }
    }
    for(int i=0; i<n1;i++){
        //for(int j = i+1; j< n1;j++){
            if(arr[i]==arr[i+1]){

                ans.push_back(arr[i]);
                arr[i] = INT_MIN;
            }
        //}
    }

    // for(int i=0; i<n1;i++){
    //     //checking the doubles
    //     if(arr[i]!= INT_MIN) ans.push_back(arr[i]);
    // }
    // for(int i=0; i<n2;i++){
    //     if(brr[i]!= INT_MIN) ans.push_back(brr[i]);
    // }
    int size = ans.size();

    for(int i=0; i<size ;i++){
        cout<< ans[i] <<" ";
    }


    return 0;
}
