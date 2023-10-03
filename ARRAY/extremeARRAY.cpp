#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    int start = 0;
    int end = n-1;

    while(true){
        if(start > end) break;
        if(start == end){
            cout<<arr[start]<<" ";
        }
        else {
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;

    }
}