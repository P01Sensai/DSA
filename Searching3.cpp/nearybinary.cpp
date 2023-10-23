/* NEARLY sorted array - is the array which element is always in the position 
  sorted array has element in ith postion then 
  the nearly sorted array will have that elemetn in 3 postion that are
    : i-1
      i+1
      i 

*/

#include <bits/stdc++.h>
using namespace std;

int nerarlySearch(vector <int> &arr, int target){

    int n = arr.size();
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){

        if(arr[mid] == target) return mid;
        if(arr[mid+1] == target) return mid+1;
        if(arr[mid-1]== target) return mid-1;

        if(arr[mid] < target){
            s = mid+2;// we are taking mid +2 because mid + 1 is already is comapred in == conditon.
            // even though mid+1 can work still to minimize the number of comaprision we do mid+2
        }
        else if(arr[mid]> target){
            e = mid-2;
        }
        mid = s+(e-s)/2;
    }
    return -1;

}


int main (){
    vector <int> arr {20,10,30,50,70,60};
    int target = 70;

    int ans = nerarlySearch(arr,target);
    cout<< ans;



    return 0;
}
