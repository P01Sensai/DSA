/* finding odd occuring element in the array 
there is certain condition :
   1. there is pairs of same number.
   2. the pair cannot be more than 2.
   */

  /* Certain observation are :
  ans is the element which is odd one.
     there is two part left and right
     left side of ans  :
                    in pairs of left side 
                    the 1st element is in even position index
                    the 2nd element is in odd position index
     right side of ans :
                    in pairs of rigth side 
                    the 1st element is in odd position index
                    the 2nd element is in even position index
so we will be checking the position of element to find in which side are we.
      */

     #include <bits/stdc++.h>
     using namespace std;
     int oddSearch(vector <int>&arr){
        int s = 0;
        int e = arr.size() - 1;
        int mid = s+(e-s)/2;

        while(s<=e){
            if(s==e) return s;
            if(mid & 1){
                //odd 
                if(arr[mid]==arr[mid-1]){
                    s = mid+1;
                }else {
                    e = mid-1;
                }
            }else{
                if(arr[mid] == arr[mid+1]){
                    s = mid+2;// because we have already checked mid+1,

                }else {
                    //ans = mid;
                    e = mid;
                }
            }
            mid = s+(e-s)/2;
        }
        return -1; 
     }

     int main(){
        ios_base::sync_with_stdio(false);
        vector <int> arr {10,5,5,2,2,5,5,5,5,20,20,11,11,10,10,10,10};
        int ans = oddSearch(arr);
        cout<< ans;


        return 0;
     }