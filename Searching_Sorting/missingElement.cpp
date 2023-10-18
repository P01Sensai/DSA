// finding missing element using binary search.
#include <bits/stdc++.h>
using namespace std;

int missElement(int arr[],  int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while(s<=e){
        int diff = arr[mid] - mid;
        if(diff == 1){
            //right me jao kuki abhi pattern break nhi hua.
            s = mid +1;
        }
        else {
            ans = mid;
            //left me jao to fidn the starting point of pattern break.
            e = mid -1;
        }
        if(ans + 1 == 0) return n;
        mid = s + (e-s)/2;
    }
    return ans+1;// +1 cause we are returning the index.

}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,9};
    //int target = 10;
    int n =10;
    int Ans = missElement(arr,n);
    if(Ans == 1){
        cout<<"Element is not present :( "<<endl;
    }
    else {
        cout<< Ans<< endl;
    }

    return 0;
}