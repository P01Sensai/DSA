//Search in Rotated Sorted Array

#include<bits/stdc++.h>
using namespace std;

int findPivot(vector<int> &arr){
      int n = arr.size();
      int s = 0;
      int e = n-1;
      int mid = s+(e-s)/2;
      int ans = -1;
    
      while(s<=e){
        if(s==e) return ans = mid;
        if(mid + 1<n && arr[mid]>arr[mid+1]) { // here we lso define the range of comaprisoin
            return ans = mid;
        }
        else if(mid-1 >=0 && arr[mid]<arr[mid-1]){
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

int binarysearch(vector<int>arr, int start,int end,int target){
      
      int mid = (start+(end - start)/2);

      while(start <= end){

        if(arr[mid] == target){
            return mid;
        }
        if(target > arr[mid] ){
            start = mid + 1;
        }
        if( target < arr[mid]){
            end = mid - 1;
        }

        mid = (start + end)/2;
      }
      return -1;
}

int search(vector<int>& nums, int target) {
        int pivotIndex = findPivot(nums);
        int ans = -1;
        int n = nums.size();

        if(target>= nums[0] && target <=nums[pivotIndex] ){
            ans = binarysearch(nums, 0, pivotIndex, target);
        }
        else{
            ans = binarysearch(nums, pivotIndex + 1, n-1 , target);

        }
        return ans;
        
}

int main(){
    vector<int> arr{4,5,6,7,0,1,2};
    //vector<int> arr{1,3};
    //int arr[]={0,10,5,2};
    int target = 0;
    //int n =4;
    int Ans = search(arr,target);
    if(Ans==-1){
        cout<<"Element is not present :( "<<endl;
    }
    else {
        cout<<Ans<< endl;
    }



    return 0;
}