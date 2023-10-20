//finding the pivot
//rotated and sorted array is required
//rotated array = rotating element from front element  to  end or vice vrsa

//IT IS A BASE FOR THIS TYPE OF QUES:

#include <bits/stdc++.h>
using namespace std;
// here we are taking pivot = that is the biggest element in the arr.
int findPivot(vector<int> &arr){
    int n = arr.size();
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    
    while(s<=e){
        if(s==e) return ans = mid;
        if(arr[mid]>arr[mid+1]) {
            return ans = mid;
        }
        else if(arr[mid]<arr[mid-1]){
            return ans = mid-1;
        }
        else if (arr[s]>arr[mid]){
            e = mid -1;
        }
        else {
            s = mid+1;
        }
        mid = s+(e-s)/2;

    }
    return ans;

}

int main(){
    vector<int> arr{0,10,2,5};
    //int arr[]={0,10,5,2};
    //int target = 5;
    int n =4;
    int Ans = findPivot(arr);
    if(Ans==-1){
        cout<<"Element is not present :( "<<endl;
    }
    else {
        cout<<"Pivot is :" <<arr[Ans]<< endl;
    }


    return 0;

}