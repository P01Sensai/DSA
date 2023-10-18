//find last occrence
#include <bits/stdc++.h>
using namespace std;
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

int main(){
    int arr[]={1,2,3,4,5,5,5,5,8,9};
    int target = 5;
    int n =10;
    int Ans = lastOcc(arr, target, n);
    if(Ans==-1){
        cout<<"Element is not present :( "<<endl;
    }
    else {
        cout<< Ans<< endl;
    }


    return 0;
}
