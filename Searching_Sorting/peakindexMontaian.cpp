// peakIndexInMountainArray
#include <bits/stdc++.h>
using namespace std;
int peakMount(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    /*  here is two constarint or condition 
    1. arr[mid]< arr[mid-1]
    2. arr[mid]>arr[mid+1] 
    and peak's condition will be arr[mid-1]< arr[mid]> arr[mid+1] */
    while(s<e){
        if(arr[mid] > arr[mid+1]){
            /*if it is not smaller than above element 
            then it can be either b constrain or peak itself*/
            e = mid;
            // we are takin mid instead of mid-1 because of not jumping of the peak.
            ans = mid;// sttoring the current considring it has a peak.

        }
        else if (arr[mid]<arr[mid+1]){
            s= mid+1;
        }
        mid = s+(e-s)/2;
    }
    return mid;
}

int main(){
    int arr[]={0,10,5,2};
    //int target = 5;
    int n =4;
    int Ans = peakMount(arr, n);
    if(Ans==-1){
        cout<<"Element is not present :( "<<endl;
    }
    else {
        cout<< Ans<< endl;
    }


    return 0;
}