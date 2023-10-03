#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size){

    for(int i = 0 ;i < size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    int start = 0;
    int end = n-1;

    while(true){
        if(start >= end) break;
        // if(start == end){
        //     cout<<arr[start]<<" ";
        // }
        else {
            swap(arr[start],arr[end]);
            // cout<<arr[start]<<" ";
            // cout<<arr[end]<<" ";
        }
        start++;
        end--;

    }
    printArr(arr,n);
    return 0;
}