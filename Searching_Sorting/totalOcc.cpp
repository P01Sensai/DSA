//find total occurence.
#include <bits/stdc++.h>
using namespace std;
int first_occ( int arr[], int target, int n){
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    int ans = -1; 
    // to avoid getting garn=baeg value when no element is found.

    while(s<=e){
        if(arr[mid]==target) {
            ans = mid;
            e = mid-1;// ans store krke left me jaan hai .
        }
        else if(target > arr[mid]){
            s=mid+1;
        }
        else if(target < arr[mid]){
            e =mid-1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

int lastOcc(int arr[], int target, int n){
    int s = 0;
    int e = n-1;
    int mid = (s+ (e-s)/2); // best practice.
    int ans = -1; //avoid garbage value while no element found

    while(s<=e){
        if(arr[mid]==target) {
            ans = mid;// ans store krke right me jana hai for last occurennce.
            s = mid +1;
        }
        else if(target > arr[mid]){
            s = mid+1;
        }
        else if(target < arr[mid]){
            e = mid -1;
        }
        mid = (s+ (e-s)/2);
    }
    return ans; 
}
int totalOcc(int arr[],int target,int n){
    int ans = lastOcc(arr, target, n) - first_occ(arr, target , n) + 1;
    return ans;
}
int main(){
    int arr[]={1,2,3,4,5,5,5,5,8,9};
    int target = 10;
    int n =10;
    int Ans = totalOcc(arr, target, n);
    if(Ans == 1){
        cout<<"Element is not present :( "<<endl;
    }
    else {
        cout<< Ans<< endl;
    }
    return 0;
}