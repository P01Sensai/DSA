//find first occurence
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

int main(){
    int arr[] = {1,2,3,4,4,5,6,7,8};
    int target = 9;
    int n = 10;
    int Ans = first_occ(arr, target, n);
    if(Ans==-1){
        cout<<"Element is not present :( "<<endl;
    }
    else {
        cout<< Ans<< endl;
    }


    return 0;
}