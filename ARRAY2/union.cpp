#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {1,2,7,4,5,6};
    int n1 = 6;
    int brr[]= {7,8,9};
    int n2 = 3;

    vector <int> ans; 

    for(int i=0; i<n1;i++){
        for(int j = 0; j< n2;j++){
            if(arr[i]==brr[j]){

                // ans.push_back(arr[i]);
                brr[j] = INT_MIN;
            }
        }
    }

    for(int i=0; i<n1;i++){
        //checking the doubles
        if(arr[i]!= INT_MIN) ans.push_back(arr[i]);
    }
    for(int i=0; i<n2;i++){
        if(brr[i]!= INT_MIN) ans.push_back(brr[i]);
    }
    int size = ans.size();

    for(int i=0; i<size ;i++){
        cout<< ans[i] <<" ";
    }


    return 0;
}
