/*2D ARRAY  is basically one d array in contigious memeory
 but we represent it in 2d form to better visualize
 

 this is a formula that we need
 there is conversion formula for 2d - 1d and 1d- 2d
 2d - 1d =>   c*i+j   
 1d - 2d =>  i = mid/col, j = mid%col */

 //we will also using last and first occurence concept as well

 #include <bits/stdc++.h>
 using namespace std;


 bool search2d(vector<vector<int>>&matrix, int target){
    int row = matrix.size();
    int col = matrix[0].size();
    int n = row*col;

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        int r = mid/col;
        int c = mid%col;
        int current = matrix[r][c];
        if(target == current){
            return true;
        }
        else if(target > current){
            s = mid+1;
        }
        else {
            e = mid -1;
        }
        mid = s+(e-s)/2;
    }
    return false;



 }

 int main(){
    vector <vector<int>> matrix {{2,4,6,8},{10,12,14,16},{18,20,22,24},{28,34,40,50}};
    int target=30;// cin>>target;

    bool ans = search2d(matrix,target);
    cout<<ans;

    return 0;
 }