//class 1 binary code.
//assuming the arr is asscending in nature
#include <bits/stdc++.h>
using namespace std;



int binarysearch(int arr[], int n,int target){
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;
    while(start <= end){
        if(arr[mid] == target){ // if element is found will return the index of target element
            return mid;
        }
        if(target > arr[mid] ){// if mid is greater than the target element  Right SHIFT 
            start = mid + 1;
        }
        if( target < arr[mid]){//if mid is LESS than the target element  LEFT SHIFT
            end = mid - 1;
        }

        mid = (start + end)/2;
    }
    return -1;// if no target is present in arr
}
int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int target = 6;

    int ans = binarysearch(arr, 10 , target);

    if(ans == -1) cout<<"Element not found"<<endl;
    else cout<<"Index of element is :"<<ans<<endl;
    

    return 0;
}